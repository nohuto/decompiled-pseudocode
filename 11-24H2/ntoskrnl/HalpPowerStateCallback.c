/*
 * XREFs of HalpPowerStateCallback @ 0x1404AE270
 * Callers:
 *     <none>
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x1402105E0 (KeQueryActiveProcessorCountEx.c)
 *     MmUnlockPagableImageSection @ 0x1402C7030 (MmUnlockPagableImageSection.c)
 *     HalpMcUpdateUnlock @ 0x1404AE2F8 (HalpMcUpdateUnlock.c)
 *     HalpMcUpdateLock @ 0x1404BAD8C (HalpMcUpdateLock.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     MmLockPagableSectionByHandle @ 0x140A3FE90 (MmLockPagableSectionByHandle.c)
 *     HalpFreeNvsBuffers @ 0x140B6C400 (HalpFreeNvsBuffers.c)
 *     HalpMapNvsArea @ 0x140B6D6A0 (HalpMapNvsArea.c)
 */

void __fastcall HalpPowerStateCallback(PVOID CallbackContext, PVOID Argument1, PVOID Argument2, __int64 a4)
{
  ULONG_PTR v4; // rbx
  unsigned int v5; // ecx

  if ( (_DWORD)Argument1 == 3 )
  {
    if ( (_DWORD)Argument2 )
    {
      if ( (_DWORD)Argument2 == 1 )
      {
        MmUnlockPagableImageSection(HalpSleepPageLock);
        HalpFreeNvsBuffers();
        HalpMcUpdateUnlock();
        v4 = HalpPerformanceCounter;
        SystemPowerPhase = 0;
        if ( *(_DWORD *)(HalpPerformanceCounter + 228) == 5
          && (*(_DWORD *)(HalpPerformanceCounter + 184) & 0x20) == 0
          && KeQueryActiveProcessorCountEx(0xFFFFu) > 1 )
        {
          v5 = -1;
          if ( HalpTscMaximumComputedSpread < 0xFFFFFFFF )
            v5 = HalpTscMaximumComputedSpread;
          KeBugCheckEx(0x5Cu, 0x110uLL, v4, 0x2AuLL, v5);
        }
      }
    }
    else
    {
      SystemPowerPhase = 1;
      guard_dispatch_icall_no_overrides(0LL, 0LL, Argument2, a4);
      MmLockPagableSectionByHandle(HalpSleepPageLock);
      HalpMapNvsArea();
      HalpMcUpdateLock();
    }
  }
}
