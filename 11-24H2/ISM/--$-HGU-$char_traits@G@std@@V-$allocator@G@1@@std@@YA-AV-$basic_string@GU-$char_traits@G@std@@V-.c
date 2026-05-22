/*
 * XREFs of ??$?HGU?$char_traits@G@std@@V?$allocator@G@1@@std@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@QEBGAEBV10@@Z @ 0x1800B2AEC
 * Callers:
 *     ?GetConstantNamesString@MPCConstantManager@@AEAA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@W4InputType@@@Z @ 0x1800B3E20 (-GetConstantNamesString@MPCConstantManager@@AEAA-AV-$basic_string@GU-$char_traits@G@std@@V-$allo.c)
 * Callees:
 *     ?_Xlen_string@std@@YAXXZ @ 0x18009C2CC (-_Xlen_string@std@@YAXXZ.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@U_String_constructor_concat_tag@1@AEBV01@QEBG_K23@Z @ 0x1800B3220 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@U_String_constructor_concat.c)
 */

void *__fastcall std::operator+<unsigned short>(void *a1, __int64 a2, _QWORD *Src)
{
  __int64 v4; // rcx

  v4 = Src[2];
  if ( v4 == 0x7FFFFFFFFFFFFFFELL )
    std::_Xlen_string();
  if ( Src[3] > 7uLL )
    Src = (_QWORD *)*Src;
  std::wstring::wstring(a1, 1LL, Src, v4);
  return a1;
}
