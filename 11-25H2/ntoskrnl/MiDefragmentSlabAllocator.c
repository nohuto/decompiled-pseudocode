/*
 * XREFs of MiDefragmentSlabAllocator @ 0x14067B540
 * Callers:
 *     MiDefragmentAllSlabsHelper @ 0x14067B3F0 (MiDefragmentAllSlabsHelper.c)
 * Callees:
 *     MiDefragmentSlabWorker @ 0x14067B5D0 (MiDefragmentSlabWorker.c)
 *     MiInitializeSlabDefragmentContext @ 0x14067C9BC (MiInitializeSlabDefragmentContext.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

__int64 __fastcall MiDefragmentSlabAllocator(__int64 a1, __int64 a2)
{
  _BYTE v5[624]; // [rsp+20h] [rbp-288h] BYREF

  memset_0(v5, 0, 0x268uLL);
  if ( !*(_QWORD *)a2 )
    return 1075380276LL;
  MiInitializeSlabDefragmentContext(v5, a1, a2, *(unsigned int *)(a2 + 128));
  return MiDefragmentSlabWorker(v5);
}
