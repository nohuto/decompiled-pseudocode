/*
 * XREFs of sub_1800877F4 @ 0x1800877F4
 * Callers:
 *     sub_1800878DC @ 0x1800878DC (sub_1800878DC.c)
 * Callees:
 *     sub_180012408 @ 0x180012408 (sub_180012408.c)
 *     sub_180037090 @ 0x180037090 (sub_180037090.c)
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

__int64 __fastcall sub_1800877F4(__int64 *a1, __int64 a2)
{
  __int64 v3; // rdx
  __int64 *v4; // rcx

  sub_180012408((__int64)(a1 + 13), a2);
  v4 = (__int64 *)a1[12];
  if ( v4 )
  {
    LOBYTE(v3) = v4 != a1 + 5;
    (*(void (__fastcall **)(__int64 *, __int64))(*v4 + 32))(v4, v3);
    a1[12] = 0LL;
  }
  sub_180037090(a1 + 4);
  return sub_1800877C8(a1);
}
