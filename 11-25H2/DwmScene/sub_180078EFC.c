/*
 * XREFs of sub_180078EFC @ 0x180078EFC
 * Callers:
 *     sub_18004D4C0 @ 0x18004D4C0 (sub_18004D4C0.c)
 * Callees:
 *     sub_180010134 @ 0x180010134 (sub_180010134.c)
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_180010544 @ 0x180010544 (sub_180010544.c)
 *     sub_180011A5C @ 0x180011A5C (sub_180011A5C.c)
 *     sub_180078580 @ 0x180078580 (sub_180078580.c)
 *     sub_1800785B8 @ 0x1800785B8 (sub_1800785B8.c)
 */

char __fastcall sub_180078EFC(__int64 a1)
{
  void *v2; // rcx
  void *v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  void *v7; // rcx
  __int64 v8; // rcx
  char result; // al
  volatile signed __int32 *v10; // rcx

  v2 = *(void **)(a1 + 1216);
  if ( v2 )
  {
    sub_180010134(v2, (*(_QWORD *)(a1 + 1232) - (_QWORD)v2) & 0xFFFFFFFFFFFFFFF8uLL);
    *(_QWORD *)(a1 + 1216) = 0LL;
    *(_QWORD *)(a1 + 1224) = 0LL;
    *(_QWORD *)(a1 + 1232) = 0LL;
  }
  v3 = *(void **)(a1 + 1192);
  if ( v3 )
  {
    sub_180010134(v3, (*(_QWORD *)(a1 + 1208) - (_QWORD)v3) & 0xFFFFFFFFFFFFFFF8uLL);
    *(_QWORD *)(a1 + 1192) = 0LL;
    *(_QWORD *)(a1 + 1200) = 0LL;
    *(_QWORD *)(a1 + 1208) = 0LL;
  }
  v4 = *(_QWORD *)(a1 + 1184);
  if ( v4 )
    sub_18001050C(v4);
  v5 = *(_QWORD *)(a1 + 1160);
  if ( v5 )
    sub_18001050C(v5);
  v6 = *(_QWORD *)(a1 + 104);
  if ( v6 )
  {
    sub_1800785B8(v6, *(_QWORD *)(a1 + 112));
    sub_180010134(*(void **)(a1 + 104), 8 * ((__int64)(*(_QWORD *)(a1 + 120) - *(_QWORD *)(a1 + 104)) >> 3));
    *(_QWORD *)(a1 + 104) = 0LL;
    *(_QWORD *)(a1 + 112) = 0LL;
    *(_QWORD *)(a1 + 120) = 0LL;
  }
  v7 = *(void **)(a1 + 80);
  if ( v7 )
  {
    sub_180010134(v7, (*(_QWORD *)(a1 + 96) - (_QWORD)v7) & 0xFFFFFFFFFFFFFFFCuLL);
    *(_QWORD *)(a1 + 80) = 0LL;
    *(_QWORD *)(a1 + 88) = 0LL;
    *(_QWORD *)(a1 + 96) = 0LL;
  }
  v8 = *(_QWORD *)(a1 + 56);
  if ( v8 )
  {
    sub_180078580(v8, *(_QWORD *)(a1 + 64));
    sub_180010134(*(void **)(a1 + 56), 8 * ((__int64)(*(_QWORD *)(a1 + 72) - *(_QWORD *)(a1 + 56)) >> 3));
    *(_QWORD *)(a1 + 56) = 0LL;
    *(_QWORD *)(a1 + 64) = 0LL;
    *(_QWORD *)(a1 + 72) = 0LL;
  }
  result = sub_180011A5C(a1 + 16);
  v10 = *(volatile signed __int32 **)(a1 + 8);
  if ( v10 )
    return sub_180010544(v10);
  return result;
}
