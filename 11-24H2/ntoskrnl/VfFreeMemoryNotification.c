/*
 * XREFs of VfFreeMemoryNotification @ 0x140BA7A7C
 * Callers:
 *     VfDriverUnloadImage @ 0x140B8A5C0 (VfDriverUnloadImage.c)
 *     VfPtFreePoolNotification @ 0x140BA96EC (VfPtFreePoolNotification.c)
 * Callees:
 *     ViDeadlockRemoveMemoryRangeResources @ 0x140613FD8 (ViDeadlockRemoveMemoryRangeResources.c)
 *     ViDeadlockRemoveMemoryRangeThreads @ 0x140614138 (ViDeadlockRemoveMemoryRangeThreads.c)
 *     VfRemLockDeleteMemoryRange @ 0x140BA7AFC (VfRemLockDeleteMemoryRange.c)
 *     ViDeadlockCanProceed @ 0x140BA7B94 (ViDeadlockCanProceed.c)
 */

__int64 __fastcall VfFreeMemoryNotification(unsigned __int64 a1, __int64 a2)
{
  __int64 v5; // r14
  unsigned __int64 v6; // rcx
  __int64 v7; // r15
  __int64 v8; // rbx

  if ( (unsigned int)ViDeadlockCanProceed(0LL) )
  {
    v5 = a1;
    v6 = (a2 + (a1 & 0xFFF) + 4095) >> 12;
    if ( (_DWORD)v6 )
    {
      v7 = (unsigned int)v6;
      do
      {
        v8 = a1 + a2;
        if ( v5 + 4096 <= a1 + a2 )
          v8 = v5 + 4096;
        ViDeadlockRemoveMemoryRangeResources(v5, v8, a1, a1 + a2);
        ViDeadlockRemoveMemoryRangeThreads(v5, v8, a1, a1 + a2);
        v5 = v8;
        --v7;
      }
      while ( v7 );
    }
  }
  return VfRemLockDeleteMemoryRange(a1, a2);
}
