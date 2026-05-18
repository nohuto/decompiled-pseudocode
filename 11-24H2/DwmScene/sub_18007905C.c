/*
 * XREFs of sub_18007905C @ 0x18007905C
 * Callers:
 *     sub_18004D620 @ 0x18004D620 (sub_18004D620.c)
 * Callees:
 *     sub_180010234 @ 0x180010234 (sub_180010234.c)
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_180010644 @ 0x180010644 (sub_180010644.c)
 *     sub_180011B5C @ 0x180011B5C (sub_180011B5C.c)
 *     sub_1800786E0 @ 0x1800786E0 (sub_1800786E0.c)
 *     sub_180078718 @ 0x180078718 (sub_180078718.c)
 */

char __fastcall sub_18007905C(__int64 a1)
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
    sub_180010234(v2, (*(_QWORD *)(a1 + 1232) - (_QWORD)v2) & 0xFFFFFFFFFFFFFFF8uLL);
    *(_QWORD *)(a1 + 1216) = 0LL;
    *(_QWORD *)(a1 + 1224) = 0LL;
    *(_QWORD *)(a1 + 1232) = 0LL;
  }
  v3 = *(void **)(a1 + 1192);
  if ( v3 )
  {
    sub_180010234(v3, (*(_QWORD *)(a1 + 1208) - (_QWORD)v3) & 0xFFFFFFFFFFFFFFF8uLL);
    *(_QWORD *)(a1 + 1192) = 0LL;
    *(_QWORD *)(a1 + 1200) = 0LL;
    *(_QWORD *)(a1 + 1208) = 0LL;
  }
  v4 = *(_QWORD *)(a1 + 1184);
  if ( v4 )
    sub_18001060C(v4);
  v5 = *(_QWORD *)(a1 + 1160);
  if ( v5 )
    sub_18001060C(v5);
  v6 = *(_QWORD *)(a1 + 104);
  if ( v6 )
  {
    sub_180078718(v6, *(_QWORD *)(a1 + 112));
    sub_180010234(*(void **)(a1 + 104), 8 * ((__int64)(*(_QWORD *)(a1 + 120) - *(_QWORD *)(a1 + 104)) >> 3));
    *(_QWORD *)(a1 + 104) = 0LL;
    *(_QWORD *)(a1 + 112) = 0LL;
    *(_QWORD *)(a1 + 120) = 0LL;
  }
  v7 = *(void **)(a1 + 80);
  if ( v7 )
  {
    sub_180010234(v7, (*(_QWORD *)(a1 + 96) - (_QWORD)v7) & 0xFFFFFFFFFFFFFFFCuLL);
    *(_QWORD *)(a1 + 80) = 0LL;
    *(_QWORD *)(a1 + 88) = 0LL;
    *(_QWORD *)(a1 + 96) = 0LL;
  }
  v8 = *(_QWORD *)(a1 + 56);
  if ( v8 )
  {
    sub_1800786E0(v8, *(_QWORD *)(a1 + 64));
    sub_180010234(*(void **)(a1 + 56), 8 * ((__int64)(*(_QWORD *)(a1 + 72) - *(_QWORD *)(a1 + 56)) >> 3));
    *(_QWORD *)(a1 + 56) = 0LL;
    *(_QWORD *)(a1 + 64) = 0LL;
    *(_QWORD *)(a1 + 72) = 0LL;
  }
  result = sub_180011B5C(a1 + 16);
  v10 = *(volatile signed __int32 **)(a1 + 8);
  if ( v10 )
    return sub_180010644(v10);
  return result;
}
