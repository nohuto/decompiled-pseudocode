/*
 * XREFs of sub_180013818 @ 0x180013818
 * Callers:
 *     sub_1800132F4 @ 0x1800132F4 (sub_1800132F4.c)
 *     ?str@?$basic_stringstream@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEGBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@XZ @ 0x18001FB78 (-str@-$basic_stringstream@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEGBA-AV-$basic_string@D.c)
 *     sub_18002057C @ 0x18002057C (sub_18002057C.c)
 *     sub_180026858 @ 0x180026858 (sub_180026858.c)
 *     sub_18004B2D4 @ 0x18004B2D4 (sub_18004B2D4.c)
 *     sub_18005BCF8 @ 0x18005BCF8 (sub_18005BCF8.c)
 *     sub_180069D48 @ 0x180069D48 (sub_180069D48.c)
 *     sub_180091BF4 @ 0x180091BF4 (sub_180091BF4.c)
 *     sub_1800BF4C4 @ 0x1800BF4C4 (sub_1800BF4C4.c)
 *     sub_1800D758B @ 0x1800D758B (sub_1800D758B.c)
 * Callees:
 *     memcpy @ 0x18000CD49 (memcpy.c)
 *     memmove @ 0x18000CD6D (memmove.c)
 *     sub_180010918 @ 0x180010918 (sub_180010918.c)
 *     sub_1800117EC @ 0x1800117EC (sub_1800117EC.c)
 *     sub_1800118D8 @ 0x1800118D8 (sub_1800118D8.c)
 *     sub_180011AA0 @ 0x180011AA0 (sub_180011AA0.c)
 *     sub_1800137F8 @ 0x1800137F8 (sub_1800137F8.c)
 */

__int64 __fastcall sub_180013818(__int64 a1, const void *a2, size_t a3)
{
  unsigned __int64 v3; // rbx
  _BYTE *v7; // rax
  size_t v8; // r8
  _BYTE *v9; // rbx
  const void *v10; // rdx
  __int64 v11; // rcx
  _BYTE *v12; // rax
  _BYTE *v13; // r14
  __int64 v14; // rcx
  unsigned __int64 v16; // [rsp+40h] [rbp+8h] BYREF

  v3 = *(_QWORD *)(a1 + 24);
  if ( a3 > v3 )
  {
    if ( a3 > 0x7FFFFFFFFFFFFFFFLL )
      sub_180011AA0();
    v16 = sub_1800117EC(a3, *(_QWORD *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v12 = (_BYTE *)sub_180010918(v11, &v16);
    *(_QWORD *)(a1 + 24) = v16;
    *(_QWORD *)(a1 + 16) = a3;
    v13 = v12;
    memcpy(v12, a2, a3);
    v13[a3] = 0;
    if ( v3 > 0xF )
      sub_1800118D8(v14, *(void **)a1, v3);
    *(_QWORD *)a1 = v13;
  }
  else
  {
    v7 = (_BYTE *)sub_1800137F8(a1);
    *(_QWORD *)(a1 + 16) = v8;
    v9 = v7;
    memmove(v7, v10, v8);
    v9[a3] = 0;
  }
  return a1;
}
