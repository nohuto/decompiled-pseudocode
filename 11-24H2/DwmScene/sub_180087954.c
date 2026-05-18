/*
 * XREFs of sub_180087954 @ 0x180087954
 * Callers:
 *     sub_180087A3C @ 0x180087A3C (sub_180087A3C.c)
 * Callees:
 *     sub_180012508 @ 0x180012508 (sub_180012508.c)
 *     sub_1800371F0 @ 0x1800371F0 (sub_1800371F0.c)
 *     j__guard_dispatch_icall @ 0x1800EB010 (j__guard_dispatch_icall.c)
 */

__int64 __fastcall sub_180087954(__int64 *a1, __int64 a2)
{
  __int64 v3; // rdx
  __int64 *v4; // rcx

  sub_180012508((__int64)(a1 + 13), a2);
  v4 = (__int64 *)a1[12];
  if ( v4 )
  {
    LOBYTE(v3) = v4 != a1 + 5;
    (*(void (__fastcall **)(__int64 *, __int64))(*v4 + 32))(v4, v3);
    a1[12] = 0LL;
  }
  sub_1800371F0(a1 + 4);
  return sub_180087928(a1);
}
