/*
 * XREFs of HalpPowerStateCallback @ 0x1404A8B80
 * Callers:
 *     <none>
 * Callees:
 *     MmUnlockPagableImageSection @ 0x1402BBBB0 (MmUnlockPagableImageSection.c)
 *     KeQueryActiveProcessorCountEx @ 0x140339940 (KeQueryActiveProcessorCountEx.c)
 *     HalpMcUpdateUnlock @ 0x1404A8C08 (HalpMcUpdateUnlock.c)
 *     HalpMcUpdateLock @ 0x1404B5C2C (HalpMcUpdateLock.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     MmLockPagableSectionByHandle @ 0x140A35770 (MmLockPagableSectionByHandle.c)
 *     HalpFreeNvsBuffers @ 0x140B6DCA4 (HalpFreeNvsBuffers.c)
 *     HalpMapNvsArea @ 0x140B6EF40 (HalpMapNvsArea.c)
 */

void __fastcall HalpPowerStateCallback(PVOID CallbackContext, PVOID Argument1, PVOID Argument2)
{
  ULONG_PTR v3; // rbx
  unsigned int v4; // ecx

  if ( (_DWORD)Argument1 == 3 )
  {
    if ( (_DWORD)Argument2 )
    {
      if ( (_DWORD)Argument2 == 1 )
      {
        MmUnlockPagableImageSection(HalpSleepPageLock);
        HalpFreeNvsBuffers();
        HalpMcUpdateUnlock();
        v3 = HalpPerformanceCounter;
        SystemPowerPhase = 0;
        if ( *(_DWORD *)(HalpPerformanceCounter + 228) == 5
          && (*(_DWORD *)(HalpPerformanceCounter + 184) & 0x20) == 0
          && KeQueryActiveProcessorCountEx(0xFFFFu) > 1 )
        {
          v4 = -1;
          if ( HalpTscMaximumComputedSpread < 0xFFFFFFFF )
            v4 = HalpTscMaximumComputedSpread;
          KeBugCheckEx(0x5Cu, 0x110uLL, v3, 0x2AuLL, v4);
        }
      }
    }
    else
    {
      SystemPowerPhase = 1;
      guard_dispatch_icall_no_overrides(0LL, 0LL);
      MmLockPagableSectionByHandle(HalpSleepPageLock);
      HalpMapNvsArea();
      HalpMcUpdateLock();
    }
  }
}
