/*
 * XREFs of sub_18008CAC0 @ 0x18008CAC0
 * Callers:
 *     sub_1800695BC @ 0x1800695BC (sub_1800695BC.c)
 *     sub_180069A0C @ 0x180069A0C (sub_180069A0C.c)
 *     sub_180069C8C @ 0x180069C8C (sub_180069C8C.c)
 *     sub_1800D9EE4 @ 0x1800D9EE4 (sub_1800D9EE4.c)
 *     sub_1800D9F1A @ 0x1800D9F1A (sub_1800D9F1A.c)
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 */

__int64 __fastcall sub_18008CAC0(__int64 a1)
{
  __int64 v2; // rcx

  _Mtx_destroy_in_situ((_Mtx_t)(a1 + 48));
  v2 = *(_QWORD *)(a1 + 40);
  if ( v2 )
    sub_18001060C(v2);
  return sub_1800131E0(a1);
}
