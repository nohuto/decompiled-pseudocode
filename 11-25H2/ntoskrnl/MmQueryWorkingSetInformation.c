/*
 * XREFs of MmQueryWorkingSetInformation @ 0x1402BB410
 * Callers:
 *     SmKmVirtualLockContextIncreaseWsMin @ 0x140601E54 (SmKmVirtualLockContextIncreaseWsMin.c)
 *     SmKmVirtualLockCtxMemoryUnlocked @ 0x14060211C (SmKmVirtualLockCtxMemoryUnlocked.c)
 *     CmSiProcessTupleStartFromHandle @ 0x14065CEFC (CmSiProcessTupleStartFromHandle.c)
 *     PspQueryQuotaLimits @ 0x1409CDB50 (PspQueryQuotaLimits.c)
 *     NtQueryInformationProcess @ 0x1409D2880 (NtQueryInformationProcess.c)
 * Callees:
 *     MiUnlockWorkingSetShared @ 0x1402B9D50 (MiUnlockWorkingSetShared.c)
 *     ExAcquireSpinLockShared @ 0x1402BBA30 (ExAcquireSpinLockShared.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall MmQueryWorkingSetInformation(_QWORD *a1, _QWORD *a2, _QWORD *a3, _QWORD *a4, _QWORD *a5, _DWORD *a6)
{
  _KPROCESS *Process; // rdi
  int ContextSwitches; // eax
  __int64 p_Blink; // rdi
  _QWORD *v13; // rax
  unsigned int v14; // ebx
  KIRQL v15; // al
  _DWORD *MmInternal; // rdx
  unsigned __int8 CurrentIrql; // bp
  int v18; // ebx

  *a6 = 0;
  Process = KeGetCurrentThread()->ApcState.Process;
  ContextSwitches = Process[2].ContextSwitches;
  p_Blink = (__int64)&Process[2].ReadyListHead.Blink;
  if ( (ContextSwitches & 0xFu) >= 6 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql);
  }
  else
  {
    if ( (*(_DWORD *)(p_Blink + 184) & 0xF) == 1 )
      v13 = &unk_140E38500;
    else
      v13 = (_QWORD *)(p_Blink + 192);
    v14 = (KeGetPcr()->Prcb.Number >> 1) & 3;
    v15 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(*v13 + ((unsigned __int64)v14 << 6)));
    MmInternal = KeGetCurrentPrcb()->MmInternal;
    if ( MmInternal )
      MmInternal[81] = v14;
    CurrentIrql = v15;
  }
  v18 = *(_DWORD *)(p_Blink + 184);
  *a1 = *(_QWORD *)(p_Blink + 160) << 12;
  *a2 = *(_QWORD *)(p_Blink + 128) << 12;
  *a3 = *(_QWORD *)(p_Blink + 136) << 12;
  *a4 = *(_QWORD *)(p_Blink + 112) << 12;
  *a5 = *(_QWORD *)(p_Blink + 120) << 12;
  MiUnlockWorkingSetShared(p_Blink, CurrentIrql);
  if ( (v18 & 0x80u) != 0 )
    *a6 |= 4u;
  if ( (v18 & 0x40) != 0 )
    *a6 |= 1u;
  return 0LL;
}
