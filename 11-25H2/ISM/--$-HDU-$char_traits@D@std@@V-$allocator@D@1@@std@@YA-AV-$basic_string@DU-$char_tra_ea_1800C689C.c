/*
 * XREFs of ??$?HDU?$char_traits@D@std@@V?$allocator@D@1@@std@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@0@$$QEAV10@QEBD@Z @ 0x1800C689C
 * Callers:
 *     ?GetVector3AsString@ISMTracing@@SA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAUVector3@Numerics@Foundation@Windows@@@Z @ 0x1800C6EFC (-GetVector3AsString@ISMTracing@@SA-AV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std.c)
 *     ?ValidateReportParsers@HidLampArrayDevice@@AEAAJXZ @ 0x1800EA34C (-ValidateReportParsers@HidLampArrayDevice@@AEAAJXZ.c)
 *     ?IsParserValid@HidLampRangeUpdateReportParser@@CA_NPEBGAEBUHardwareAttributes@@PEBV1@@Z @ 0x1800ED308 (-IsParserValid@HidLampRangeUpdateReportParser@@CA_NPEBGAEBUHardwareAttributes@@PEBV1@@Z.c)
 * Callees:
 *     ??$_Reallocate_grow_by@V_lambda_65e615be2a453ca0576c979606f46740_@@PEBD_K@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAAEAV01@_KV_lambda_65e615be2a453ca0576c979606f46740_@@PEBD_K@Z @ 0x1800C6A70 (--$_Reallocate_grow_by@V_lambda_65e615be2a453ca0576c979606f46740_@@PEBD_K@-$basic_string@DU-$cha.c)
 *     memmove_0 @ 0x1801C7D08 (memmove_0.c)
 */

__int64 __fastcall std::operator+<char>(__int64 a1, _QWORD *a2, _BYTE *a3)
{
  __int64 v3; // rdi
  size_t Size; // rsi
  __int64 v6; // rcx
  bool v7; // cc
  _QWORD *v8; // rax
  char *v9; // rbx
  __int64 result; // rax

  v3 = (__int64)a2;
  Size = -1LL;
  do
    ++Size;
  while ( a3[Size] );
  v6 = a2[2];
  if ( Size > a2[3] - v6 )
  {
    v3 = std::string::_Reallocate_grow_by<_lambda_65e615be2a453ca0576c979606f46740_,char const *,unsigned __int64>(
           a2,
           Size);
  }
  else
  {
    v7 = a2[3] <= 0xFuLL;
    a2[2] = v6 + Size;
    v8 = a2;
    if ( !v7 )
      v8 = (_QWORD *)*a2;
    v9 = (char *)v8 + v6;
    memmove_0((char *)v8 + v6, a3, Size);
    v9[Size] = 0;
  }
  result = a1;
  *(_OWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_OWORD *)a1 = *(_OWORD *)v3;
  *(_OWORD *)(a1 + 16) = *(_OWORD *)(v3 + 16);
  *(_QWORD *)(v3 + 16) = 0LL;
  *(_QWORD *)(v3 + 24) = 15LL;
  *(_BYTE *)v3 = 0;
  return result;
}
