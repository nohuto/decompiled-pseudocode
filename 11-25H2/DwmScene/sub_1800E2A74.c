/*
 * XREFs of sub_1800E2A74 @ 0x1800E2A74
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_18001C99C @ 0x18001C99C (sub_18001C99C.c)
 *     sub_1800D3364 @ 0x1800D3364 (sub_1800D3364.c)
 */

__int64 __fastcall sub_1800E2A74(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx
  __int64 v4; // rcx

  sub_18001C99C(&stru_1801B8648, 3);
  *(_OWORD *)(a2 + 80) = 0LL;
  *(_OWORD *)(a2 + 120) = 0LL;
  sub_1800D3364(*(_QWORD *)(a2 + 384), a2 + 120, a2 + 80);
  v3 = *(_QWORD *)(a2 + 128);
  if ( v3 )
    sub_18001050C(v3);
  v4 = *(_QWORD *)(a2 + 88);
  if ( v4 )
    sub_18001050C(v4);
  return 0LL;
}
