/*
 * XREFs of KiCountNodeZeroSetBitsGroupAffinity @ 0x140C29F90
 * Callers:
 *     KeStartAllProcessors @ 0x140C28DA8 (KeStartAllProcessors.c)
 * Callees:
 *     KeEnumerateNextSchedulerSubNodeInNode @ 0x14032FEC0 (KeEnumerateNextSchedulerSubNodeInNode.c)
 *     KeInitializeSchedulerSubNodeEnumerationContext @ 0x140412310 (KeInitializeSchedulerSubNodeEnumerationContext.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

__int64 KiCountNodeZeroSetBitsGroupAffinity()
{
  unsigned int v0; // ebx
  __int64 v2; // [rsp+20h] [rbp-38h] BYREF
  __int128 v3; // [rsp+28h] [rbp-30h] BYREF
  __int64 v4; // [rsp+38h] [rbp-20h]

  v2 = 0LL;
  v0 = 0;
  v3 = 0LL;
  v4 = 0LL;
  KeInitializeSchedulerSubNodeEnumerationContext(&v3, KeNodeBlock[0]);
  while ( !(unsigned int)KeEnumerateNextSchedulerSubNodeInNode(&v3, &v2) )
    v0 += __popcnt(*(_QWORD *)(v2 + 128));
  return v0;
}
