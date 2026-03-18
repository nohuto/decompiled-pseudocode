/*
 * XREFs of KeFreezeExecution @ 0x1404D5B60
 * Callers:
 *     ExpWaitForBootDevices @ 0x140655DF0 (ExpWaitForBootDevices.c)
 *     KdEnterDebugger @ 0x140B7A96C (KdEnterDebugger.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x140254AE0 (KxAcquireSpinLock.c)
 *     RtlWriteTryAcquireTickLock @ 0x14029D508 (RtlWriteTryAcquireTickLock.c)
 *     KeDisableInterrupts @ 0x140321E80 (KeDisableInterrupts.c)
 *     KeStallExecutionProcessor @ 0x14033A030 (KeStallExecutionProcessor.c)
 *     KeQueryPerformanceCounter @ 0x14034FA10 (KeQueryPerformanceCounter.c)
 *     ?KiCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z @ 0x1403B1720 (-KiCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z.c)
 *     KeRemoveProcessorAffinityEx @ 0x1403CA140 (KeRemoveProcessorAffinityEx.c)
 *     KeEnumerateNextProcessor @ 0x14040D4F0 (KeEnumerateNextProcessor.c)
 *     KxTryToAcquireSpinLock @ 0x1404633C8 (KxTryToAcquireSpinLock.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiSetDebuggerOwner @ 0x1404FB2A4 (KiSetDebuggerOwner.c)
 *     VslRequestSecureKernelDebuggerBreakIn @ 0x14058E090 (VslRequestSecureKernelDebuggerBreakIn.c)
 *     KiSendFreeze @ 0x1405C1F30 (KiSendFreeze.c)
 *     KiStartDebugAccumulation @ 0x1405C202C (KiStartDebugAccumulation.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

bool KeFreezeExecution()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  bool v2; // r12
  unsigned __int8 CurrentIrql; // r15
  int v4; // edi
  char v5; // r14
  unsigned int v6; // esi
  char v7; // di
  struct _KPRCB *CurrentPrcb; // rbx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  int v12; // esi
  __int64 v13; // rdx
  signed __int64 v14; // rbx
  __int64 v15; // rbx
  LARGE_INTEGER v16; // rax
  unsigned __int64 v17; // r9
  unsigned __int64 v18; // r8
  int v20; // [rsp+20h] [rbp-E0h] BYREF
  LARGE_INTEGER PerformanceFrequency; // [rsp+28h] [rbp-D8h] BYREF
  __int128 v22; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v23; // [rsp+40h] [rbp-C0h]
  struct _KAFFINITY_EX v24; // [rsp+50h] [rbp-B0h] BYREF

  memset_0(&v24, 0, sizeof(v24));
  v23 = 0LL;
  v22 = 0LL;
  v20 = 0;
  PerformanceFrequency.QuadPart = 0LL;
  v2 = KeDisableInterrupts();
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(v0) = 15;
    LOBYTE(v1) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(v1, v0);
  }
  KiFreezeFlag = 4;
  if ( (KeGetCurrentPrcb()->IpiFrozen & 0xF) != 4 )
  {
LABEL_4:
    v4 = 750000;
    do
    {
      v5 = KxTryToAcquireSpinLock((volatile signed __int32 *)&KdDebuggerLock);
      if ( v5 )
        break;
      if ( KiFreezeExecutionLock )
        goto LABEL_4;
      KeStallExecutionProcessor(4u);
      --v4;
    }
    while ( v4 );
    v6 = v5 != 0 ? 4 * (750000 - v4) : 0;
    KxAcquireSpinLock(&KiFreezeExecutionLock);
    v7 = 1;
    if ( v5 || (KiFreezeFlag & 1) == 0 )
      KdPortLocked = v5;
    else
      KiFreezeFlag |= 8u;
    if ( v6 > KdDebuggerLockMaxWaitTime )
      KdDebuggerLockMaxWaitTime = v6;
    CurrentPrcb = KeGetCurrentPrcb();
    KiStartDebugAccumulation(CurrentPrcb);
    LOBYTE(v9) = 1;
    guard_dispatch_icall_no_overrides(v9, 0LL, v10, v11);
    KiClockLatencyMeasurementEnabled = 0;
    if ( ((unsigned int)KeNumberProcessors_0 > 1 || CurrentPrcb->Number) && !PoAllProcIntrDisabled )
    {
      KiFreezeOwner = (__int64)CurrentPrcb;
      CurrentPrcb->IpiFrozen = 4;
      KiSetDebuggerOwner(CurrentPrcb);
      if ( !KiFreezeTimeout || PpmNonInterruptibleCount )
        v12 = 20000;
      else
        v12 = 20000 * KiFreezeTimeout;
      CurrentPrcb->ClockKeepAlive = 1;
      *(_QWORD *)&v24.Count = 2097153LL;
      memset_0(&v24.8, 0, sizeof(v24.8));
      KiCopyAffinityEx(&v24, v24.Size, &KeActiveProcessors);
      KeRemoveProcessorAffinityEx(&v24.Count, CurrentPrcb->Number);
      if ( !KiRecoveryInProgress && (KiBugCheckActive & 3) == 3 )
        v7 = 0;
      LOBYTE(v13) = v7;
      KiSendFreeze(&v24, v13);
      *((_QWORD *)&v22 + 1) = v24.Bitmap[0];
      *(_QWORD *)&v22 = &v24;
LABEL_33:
      while ( !(unsigned int)KeEnumerateNextProcessor(&v20, (unsigned __int16 **)&v22) )
      {
        v14 = KiProcessorBlock[v20];
        while ( *(_DWORD *)(v14 + 11656) != 2 )
        {
          if ( !v12 )
          {
            KiFreezeFlag |= 2u;
            _InterlockedCompareExchange64(&KiFreezeSkippedProcessor, v14, 0LL);
            if ( VslVsmEnabled && (_BYTE)KdDebuggerEnabled && (KiBugCheckActive & 3) == 0 )
              VslRequestSecureKernelDebuggerBreakIn();
            goto LABEL_33;
          }
          KeStallExecutionProcessor(0x32u);
          --v12;
        }
      }
    }
    KiOldIrql = CurrentIrql;
    if ( !PoAllProcIntrDisabled )
    {
      v15 = MmWriteableSharedUserData;
      if ( RtlWriteTryAcquireTickLock((signed __int64 *)(MmWriteableSharedUserData + 832)) )
      {
        v16 = KeQueryPerformanceCounter(&PerformanceFrequency);
        v17 = (unsigned int)KeMaximumIncrement;
        v18 = MEMORY[0xFFFFF78000000008]
            + 10000000 * (v16.QuadPart - MEMORY[0xFFFFF78000000350]) / (unsigned __int64)PerformanceFrequency.LowPart;
        *(_DWORD *)(MmWriteableSharedUserData + 16) = HIDWORD(v18);
        *(_QWORD *)(MmWriteableSharedUserData + 8) = v18;
        if ( (_DWORD)v17 )
        {
          KiTickOffset = v17 * (v18 / v17 + 1) - v18;
          *(_DWORD *)(MmWriteableSharedUserData + 808) = (v18 / v17) >> 32;
          *(_QWORD *)(MmWriteableSharedUserData + 800) = v18 / v17;
        }
        ++*(_QWORD *)(v15 + 832);
      }
    }
  }
  return v2;
}
