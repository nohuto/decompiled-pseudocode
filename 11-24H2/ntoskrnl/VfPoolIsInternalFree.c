/*
 * XREFs of VfPoolIsInternalFree @ 0x14048CB30
 * Callers:
 *     VfCheckForResource @ 0x140BA71D8 (VfCheckForResource.c)
 *     VfRemLockDeleteMemoryRange @ 0x140BA7AFC (VfRemLockDeleteMemoryRange.c)
 *     VfCheckForLookaside @ 0x140BA7C90 (VfCheckForLookaside.c)
 * Callees:
 *     <none>
 */

__int64 VfPoolIsInternalFree()
{
  struct _KTHREAD *CurrentThread; // rcx
  struct _KTHREAD **i; // rax

  CurrentThread = KeGetCurrentThread();
  for ( i = (struct _KTHREAD **)&unk_140E28878; ; i += 8 )
  {
    if ( (__int64)i >= (__int64)&qword_140E288F8 )
      return 0LL;
    if ( CurrentThread == *i )
      break;
  }
  return 1LL;
}
