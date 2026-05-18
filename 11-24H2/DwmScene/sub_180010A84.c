/*
 * XREFs of sub_180010A84 @ 0x180010A84
 * Callers:
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010ED0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     sub_18001D6EC @ 0x18001D6EC (sub_18001D6EC.c)
 *     sub_1800261E8 @ 0x1800261E8 (sub_1800261E8.c)
 *     sub_180034A20 @ 0x180034A20 (sub_180034A20.c)
 * Callees:
 *     memcpy @ 0x18000CE31 (memcpy.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800109C8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     sub_1800118EC @ 0x1800118EC (sub_1800118EC.c)
 *     sub_180011BA0 @ 0x180011BA0 (sub_180011BA0.c)
 */

void *__fastcall sub_180010A84(_QWORD *a1, const void *a2, size_t a3)
{
  void *result; // rax
  __int64 v7; // rbx
  _BYTE *v8; // rax
  _BYTE *v9; // rdi

  if ( a3 > 0x7FFFFFFFFFFFFFFFLL )
    sub_180011BA0();
  a1[3] = 15LL;
  if ( a3 > 0xF )
  {
    v7 = sub_1800118EC(a3);
    v8 = (_BYTE *)std::_Allocate<16,std::_Default_allocate_traits,0>(v7 + 1);
    *a1 = v8;
    a1[2] = a3;
    a1[3] = v7;
    v9 = v8;
    result = memcpy(v8, a2, a3);
    v9[a3] = 0;
  }
  else
  {
    a1[2] = a3;
    result = memcpy(a1, a2, a3);
    *((_BYTE *)a1 + a3) = 0;
  }
  return result;
}
