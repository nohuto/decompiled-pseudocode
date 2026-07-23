/*
 * XREFs of KiGetRecoveryInformation @ 0x1405C3924
 * Callers:
 *     KiAttemptBugcheckRecovery @ 0x1405C2EB4 (KiAttemptBugcheckRecovery.c)
 * Callees:
 *     KeGetEffectiveIrql @ 0x1402883D0 (KeGetEffectiveIrql.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall KiGetRecoveryInformation(_DWORD *a1)
{
  struct _KPRCB *CurrentPrcb; // rbx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 result; // rax

  CurrentPrcb = KeGetCurrentPrcb();
  memset_0(a1, 0, 0x4CuLL);
  *a1 = 3;
  *((_BYTE *)a1 + 5) = CurrentPrcb->DebuggerSavedIRQL;
  *((_BYTE *)a1 + 6) = KeGetEffectiveIrql(v4, v3);
  *((_QWORD *)a1 + 1) = *(_QWORD *)&KiBugCheckDriver;
  a1[4] = KiClockTimerOwner;
  *((_BYTE *)a1 + 20) = CurrentPrcb->NmiActive != 0;
  *((_BYTE *)a1 + 22) = CurrentPrcb->NestingLevel;
  *((_BYTE *)a1 + 23) = (CurrentPrcb->DpcRoutineActive != 0) | *((_BYTE *)a1 + 23) & 0xFE;
  a1[8] = CurrentPrcb->Number;
  a1[9] = KiBugCheckData;
  *((_QWORD *)a1 + 5) = qword_140F22A08;
  *((_OWORD *)a1 + 3) = xmmword_140F22A10;
  *((_QWORD *)a1 + 8) = qword_140F22A20;
  result = (unsigned int)KiBugcheckRecoveryDumpPolicy;
  a1[18] = KiBugcheckRecoveryDumpPolicy;
  return result;
}
