/*
 * XREFs of KiGetRecoveryInformation @ 0x1405C61F4
 * Callers:
 *     KiAttemptBugcheckRecovery @ 0x1405C5784 (KiAttemptBugcheckRecovery.c)
 * Callees:
 *     KeGetEffectiveIrql @ 0x140257DC0 (KeGetEffectiveIrql.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

__int64 __fastcall KiGetRecoveryInformation(_DWORD *a1)
{
  struct _KPRCB *CurrentPrcb; // rbx
  __int64 result; // rax

  CurrentPrcb = KeGetCurrentPrcb();
  memset_0(a1, 0, 0x4CuLL);
  *a1 = 3;
  *((_BYTE *)a1 + 5) = CurrentPrcb->DebuggerSavedIRQL;
  *((_BYTE *)a1 + 6) = KeGetEffectiveIrql();
  *((_QWORD *)a1 + 1) = *(_QWORD *)&KiBugCheckDriver;
  a1[4] = KiClockTimerOwner;
  *((_BYTE *)a1 + 20) = CurrentPrcb->NmiActive != 0;
  *((_BYTE *)a1 + 22) = CurrentPrcb->NestingLevel;
  *((_BYTE *)a1 + 23) = (CurrentPrcb->DpcRoutineActive != 0) | *((_BYTE *)a1 + 23) & 0xFE;
  a1[8] = CurrentPrcb->Number;
  a1[9] = KiBugCheckData;
  *((_QWORD *)a1 + 5) = qword_140F22748;
  *((_OWORD *)a1 + 3) = xmmword_140F22750;
  *((_QWORD *)a1 + 8) = qword_140F22760;
  result = (unsigned int)KiBugcheckRecoveryDumpPolicy;
  a1[18] = KiBugcheckRecoveryDumpPolicy;
  return result;
}
