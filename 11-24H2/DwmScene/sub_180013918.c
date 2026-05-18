/*
 * XREFs of sub_180013918 @ 0x180013918
 * Callers:
 *     sub_1800133F4 @ 0x1800133F4 (sub_1800133F4.c)
 *     ?str@?$basic_stringstream@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEGBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@XZ @ 0x18001FCD8 (-str@-$basic_stringstream@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEGBA-AV-$basic_string@D.c)
 *     sub_1800206DC @ 0x1800206DC (sub_1800206DC.c)
 *     sub_1800269B8 @ 0x1800269B8 (sub_1800269B8.c)
 *     sub_18004B434 @ 0x18004B434 (sub_18004B434.c)
 *     sub_18005BE58 @ 0x18005BE58 (sub_18005BE58.c)
 *     sub_180069EA8 @ 0x180069EA8 (sub_180069EA8.c)
 *     sub_180091D54 @ 0x180091D54 (sub_180091D54.c)
 *     sub_1800BF624 @ 0x1800BF624 (sub_1800BF624.c)
 *     sub_1800D76EB @ 0x1800D76EB (sub_1800D76EB.c)
 * Callees:
 *     memcpy @ 0x18000CE31 (memcpy.c)
 *     memmove @ 0x18000CE55 (memmove.c)
 *     sub_180010A18 @ 0x180010A18 (sub_180010A18.c)
 *     sub_1800118EC @ 0x1800118EC (sub_1800118EC.c)
 *     sub_1800119D8 @ 0x1800119D8 (sub_1800119D8.c)
 *     sub_180011BA0 @ 0x180011BA0 (sub_180011BA0.c)
 *     sub_1800138F8 @ 0x1800138F8 (sub_1800138F8.c)
 */

__int64 __fastcall sub_180013918(__int64 a1, const void *a2, size_t a3)
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
      sub_180011BA0();
    v16 = sub_1800118EC(a3, *(_QWORD *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v12 = (_BYTE *)sub_180010A18(v11, &v16);
    *(_QWORD *)(a1 + 24) = v16;
    *(_QWORD *)(a1 + 16) = a3;
    v13 = v12;
    memcpy(v12, a2, a3);
    v13[a3] = 0;
    if ( v3 > 0xF )
      sub_1800119D8(v14, *(void **)a1, v3);
    *(_QWORD *)a1 = v13;
  }
  else
  {
    v7 = (_BYTE *)sub_1800138F8(a1);
    *(_QWORD *)(a1 + 16) = v8;
    v9 = v7;
    memmove(v7, v10, v8);
    v9[a3] = 0;
  }
  return a1;
}
