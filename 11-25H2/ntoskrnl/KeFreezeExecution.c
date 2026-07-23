/*
 * XREFs of KeFreezeExecution @ 0x1404D6470
 * Callers:
 *     ExpWaitForBootDevices @ 0x140649EF0 (ExpWaitForBootDevices.c)
 *     KdEnterDebugger @ 0x140B6A96C (KdEnterDebugger.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x140253560 (KxAcquireSpinLock.c)
 *     KeRemoveProcessorAffinityEx @ 0x14026A790 (KeRemoveProcessorAffinityEx.c)
 *     ?KiCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z @ 0x140271570 (-KiCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z.c)
 *     RtlWriteTryAcquireTickLock @ 0x140274844 (RtlWriteTryAcquireTickLock.c)
 *     KeStallExecutionProcessor @ 0x140278EE0 (KeStallExecutionProcessor.c)
 *     KeDisableInterrupts @ 0x14028A900 (KeDisableInterrupts.c)
 *     KeQueryPerformanceCounter @ 0x14031B970 (KeQueryPerformanceCounter.c)
 *     KeEnumerateNextProcessor @ 0x140405FA0 (KeEnumerateNextProcessor.c)
 *     KxTryToAcquireSpinLock @ 0x140464068 (KxTryToAcquireSpinLock.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiSetDebuggerOwner @ 0x1404F8C24 (KiSetDebuggerOwner.c)
 *     VslRequestSecureKernelDebuggerBreakIn @ 0x14058A9F0 (VslRequestSecureKernelDebuggerBreakIn.c)
 *     KiSendFreeze @ 0x1405BDEE4 (KiSendFreeze.c)
 *     KiStartDebugAccumulation @ 0x1405BDFE0 (KiStartDebugAccumulation.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

bool KeFreezeExecution()
{
  __int64 v0; // rcx
  bool v1; // r12
  unsigned __int8 CurrentIrql; // r15
  int v3; // edi
  char v4; // r14
  struct _KPRCB *CurrentPrcb; // rbx
  __int64 v6; // rcx
  int v7; // esi
  signed __int64 v8; // rbx
  __int64 v9; // rbx
  LARGE_INTEGER v10; // rax
  unsigned __int64 v11; // r9
  unsigned __int64 v12; // r8
  int v14; // [rsp+20h] [rbp-E0h] BYREF
  LARGE_INTEGER PerformanceFrequency; // [rsp+28h] [rbp-D8h] BYREF
  __int128 v16; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v17; // [rsp+40h] [rbp-C0h]
  struct _KAFFINITY_EX v18; // [rsp+50h] [rbp-B0h] BYREF

  memset_0(&v18, 0, sizeof(v18));
  v17 = 0LL;
  v16 = 0LL;
  v14 = 0;
  PerformanceFrequency.QuadPart = 0LL;
  v1 = KeDisableInterrupts();
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(v0) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(v0);
  }
  KiFreezeFlag = 4;
  if ( (KeGetCurrentPrcb()->IpiFrozen & 0xF) != 4 )
  {
LABEL_4:
    v3 = 750000;
    do
    {
      v4 = KxTryToAcquireSpinLock((volatile signed __int32 *)&KdDebuggerLock);
      if ( v4 )
        break;
      if ( KiFreezeExecutionLock )
        goto LABEL_4;
      KeStallExecutionProcessor(4u);
      --v3;
    }
    while ( v3 );
    KxAcquireSpinLock(&KiFreezeExecutionLock);
    if ( v4 || (KiFreezeFlag & 1) == 0 )
      KdPortLocked = v4;
    else
      KiFreezeFlag |= 8u;
    if ( ((4 * (750000 - v3)) & (unsigned int)-(v4 != 0)) > KdDebuggerLockMaxWaitTime )
      KdDebuggerLockMaxWaitTime = v4 != 0 ? 4 * (750000 - v3) : 0;
    CurrentPrcb = KeGetCurrentPrcb();
    KiStartDebugAccumulation(CurrentPrcb);
    LOBYTE(v6) = 1;
    guard_dispatch_icall_no_overrides(v6, 0LL);
    KiClockLatencyMeasurementEnabled = 0;
    if ( ((unsigned int)KeNumberProcessors_0 > 1 || CurrentPrcb->Number) && !PoAllProcIntrDisabled )
    {
      KiFreezeOwner = (__int64)CurrentPrcb;
      CurrentPrcb->IpiFrozen = 4;
      KiSetDebuggerOwner(CurrentPrcb);
      if ( !KiFreezeTimeout || PpmNonInterruptibleCount )
        v7 = 20000;
      else
        v7 = 20000 * KiFreezeTimeout;
      CurrentPrcb->ClockKeepAlive = 1;
      *(_QWORD *)&v18.Count = 2097153LL;
      memset_0(&v18.8, 0, sizeof(v18.8));
      KiCopyAffinityEx(&v18, v18.Size, &KeActiveProcessors);
      KeRemoveProcessorAffinityEx(&v18.Count, CurrentPrcb->Number);
      KiSendFreeze(&v18);
      *((_QWORD *)&v16 + 1) = v18.Bitmap[0];
      *(_QWORD *)&v16 = &v18;
LABEL_30:
      while ( !(unsigned int)KeEnumerateNextProcessor(&v14, (unsigned __int16 **)&v16) )
      {
        v8 = KiProcessorBlock[v14];
        while ( *(_DWORD *)(v8 + 11656) != 2 )
        {
          if ( !v7 )
          {
            KiFreezeFlag |= 2u;
            _InterlockedCompareExchange64(&KiFreezeSkippedProcessor, v8, 0LL);
            if ( VslVsmEnabled && (_BYTE)KdDebuggerEnabled && (KiBugCheckActive & 3) == 0 )
              VslRequestSecureKernelDebuggerBreakIn();
            goto LABEL_30;
          }
          KeStallExecutionProcessor(0x32u);
          --v7;
        }
      }
    }
    KiOldIrql = CurrentIrql;
    if ( !PoAllProcIntrDisabled )
    {
      v9 = MmWriteableSharedUserData;
      if ( RtlWriteTryAcquireTickLock((signed __int64 *)(MmWriteableSharedUserData + 832)) )
      {
        v10 = KeQueryPerformanceCounter(&PerformanceFrequency);
        v11 = KeMaximumIncrement;
        v12 = MEMORY[0xFFFFF78000000008]
            + 10000000 * (v10.QuadPart - MEMORY[0xFFFFF78000000350]) / (unsigned __int64)PerformanceFrequency.LowPart;
        *(_DWORD *)(MmWriteableSharedUserData + 16) = HIDWORD(v12);
        *(_QWORD *)(MmWriteableSharedUserData + 8) = v12;
        if ( (_DWORD)v11 )
        {
          KiTickOffset = v11 * (v12 / v11 + 1) - v12;
          *(_DWORD *)(MmWriteableSharedUserData + 808) = (v12 / v11) >> 32;
          *(_QWORD *)(MmWriteableSharedUserData + 800) = v12 / v11;
        }
        ++*(_QWORD *)(v9 + 832);
      }
    }
  }
  return v1;
}
