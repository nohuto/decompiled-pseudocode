/*
 * XREFs of sub_18002FC6C @ 0x18002FC6C
 * Callers:
 *     sub_18002DD88 @ 0x18002DD88 (sub_18002DD88.c)
 * Callees:
 *     sub_180013128 @ 0x180013128 (sub_180013128.c)
 */

__int64 __fastcall sub_18002FC6C(__int64 a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
    sub_180013128(v2 + 64);
  return sub_18002FA00(a1);
}
