/*
 * XREFs of MmQueryWorkingSetInformation @ 0x1404103B0
 * Callers:
 *     SmKmVirtualLockContextIncreaseWsMin @ 0x14060C444 (SmKmVirtualLockContextIncreaseWsMin.c)
 *     SmKmVirtualLockCtxMemoryUnlocked @ 0x14060C70C (SmKmVirtualLockCtxMemoryUnlocked.c)
 *     CmSiProcessTupleStartFromHandle @ 0x140669BA4 (CmSiProcessTupleStartFromHandle.c)
 *     NtQueryInformationProcess @ 0x140995530 (NtQueryInformationProcess.c)
 *     PspQueryQuotaLimits @ 0x1409AF220 (PspQueryQuotaLimits.c)
 * Callees:
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x140219B50 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x140241380 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     MiUnlockWorkingSetShared @ 0x140241CF0 (MiUnlockWorkingSetShared.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall MmQueryWorkingSetInformation(_QWORD *a1, _QWORD *a2, _QWORD *a3, _QWORD *a4, _QWORD *a5, _DWORD *a6)
{
  _KPROCESS *Process; // rsi
  int ContextSwitches; // eax
  __int64 p_Blink; // rsi
  _QWORD *v12; // rax
  unsigned int v13; // ebx
  _DWORD *v14; // r14
  unsigned __int8 CurrentIrql; // bp
  _DWORD *MmInternal; // rcx
  int v17; // ebx
  signed __int32 v19; // eax
  signed __int32 v20; // ett

  *a6 = 0;
  Process = KeGetCurrentThread()->ApcState.Process;
  ContextSwitches = Process[2].ContextSwitches;
  p_Blink = (__int64)&Process[2].ReadyListHead.Blink;
  if ( (ContextSwitches & 0xFu) >= 6 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL);
  }
  else
  {
    if ( (*(_DWORD *)(p_Blink + 184) & 0xF) == 1 )
      v12 = &unk_140E38880;
    else
      v12 = (_QWORD *)(p_Blink + 192);
    v13 = (KeGetPcr()->Prcb.Number >> 1) & 3;
    v14 = (_DWORD *)(*v12 + ((unsigned __int64)v13 << 6));
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
    {
      _m_prefetchw(v14);
      v19 = *v14 & 0x7FFFFFFF;
      while ( 1 )
      {
        v20 = v19;
        v19 = _InterlockedCompareExchange(v14, v19 + 1, v19);
        if ( v20 == v19 )
          break;
        if ( v19 < 0 )
        {
          ExpWaitForSpinLockSharedAndAcquire(v14, CurrentIrql, (__int64)a3, (__int64)a4);
          break;
        }
      }
    }
    else
    {
      ExpAcquireSpinLockSharedAtDpcLevelInstrumented(v14, CurrentIrql);
    }
    MmInternal = KeGetCurrentPrcb()->MmInternal;
    if ( MmInternal )
      MmInternal[81] = v13;
  }
  v17 = *(_DWORD *)(p_Blink + 184);
  *a1 = *(_QWORD *)(p_Blink + 160) << 12;
  *a2 = *(_QWORD *)(p_Blink + 128) << 12;
  *a3 = *(_QWORD *)(p_Blink + 136) << 12;
  *a4 = *(_QWORD *)(p_Blink + 112) << 12;
  *a5 = *(_QWORD *)(p_Blink + 120) << 12;
  MiUnlockWorkingSetShared(p_Blink, CurrentIrql);
  if ( (v17 & 0x80u) != 0 )
    *a6 |= 4u;
  if ( (v17 & 0x40) != 0 )
    *a6 |= 1u;
  return 0LL;
}
