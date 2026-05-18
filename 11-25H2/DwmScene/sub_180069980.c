/*
 * XREFs of sub_180069980 @ 0x180069980
 * Callers:
 *     sub_180069B2C @ 0x180069B2C (sub_180069B2C.c)
 * Callees:
 *     sub_180011AC0 @ 0x180011AC0 (sub_180011AC0.c)
 *     sub_180011B30 @ 0x180011B30 (sub_180011B30.c)
 */

__int64 __fastcall sub_180069980(__int64 a1, __int64 a2)
{
  __int64 v3; // rsi
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  v6 = a2;
  v3 = a2;
  sub_180011B30(a1 + 56);
  sub_180011AC0((__int64 *)(a1 + 104), (__int64)&v5, &v6);
  if ( v5 != *(_QWORD *)(a1 + 104) )
    v3 = *(_QWORD *)(v5 + 40);
  Mtx_unlock((_Mtx_t)(a1 + 56));
  return v3;
}
