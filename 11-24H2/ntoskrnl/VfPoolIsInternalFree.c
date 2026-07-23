/*
 * XREFs of VfPoolIsInternalFree @ 0x140487850
 * Callers:
 *     VfCheckForResource @ 0x140BA91D8 (VfCheckForResource.c)
 *     VfRemLockDeleteMemoryRange @ 0x140BA9AFC (VfRemLockDeleteMemoryRange.c)
 *     VfCheckForLookaside @ 0x140BA9C90 (VfCheckForLookaside.c)
 * Callees:
 *     <none>
 */

__int64 VfPoolIsInternalFree()
{
  struct _KTHREAD *CurrentThread; // rcx
  struct _KTHREAD **i; // rax

  CurrentThread = KeGetCurrentThread();
  for ( i = (struct _KTHREAD **)&unk_140E28A68; ; i += 8 )
  {
    if ( (__int64)i >= (__int64)&ViHalWaitBlockLookaside.L.Tag )
      return 0LL;
    if ( CurrentThread == *i )
      break;
  }
  return 1LL;
}
