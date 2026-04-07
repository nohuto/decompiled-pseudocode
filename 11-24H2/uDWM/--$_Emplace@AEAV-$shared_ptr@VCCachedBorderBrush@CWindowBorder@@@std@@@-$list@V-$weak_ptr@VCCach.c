/*
 * XREFs of ??$_Emplace@AEAV?$shared_ptr@VCCachedBorderBrush@CWindowBorder@@@std@@@?$list@V?$weak_ptr@VCCachedBorderBrush@CWindowBorder@@@std@@V?$allocator@V?$weak_ptr@VCCachedBorderBrush@CWindowBorder@@@std@@@2@@std@@QEAAPEAU?$_List_node@V?$weak_ptr@VCCachedBorderBrush@CWindowBorder@@@std@@PEAX@1@QEAU21@AEAV?$shared_ptr@VCCachedBorderBrush@CWindowBorder@@@1@@Z @ 0x180039954
 * Callers:
 *     ?GetBorderBrush@CCachedBorderBrush@CWindowBorder@@SAJMHAEBU_D3DCOLORVALUE@@W4BorderStyle@2@W4ShadowStyle@2@PEAV?$shared_ptr@VCCachedBorderBrush@CWindowBorder@@@std@@@Z @ 0x1800395D0 (-GetBorderBrush@CCachedBorderBrush@CWindowBorder@@SAJMHAEBU_D3DCOLORVALUE@@W4BorderStyle@2@W4Sha.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180039930 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Dwm_Xlength_error@std@@YAXPEBD@Z @ 0x180096728 (-_Dwm_Xlength_error@std@@YAXPEBD@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall std::list<std::weak_ptr<CWindowBorder::CCachedBorderBrush>>::_Emplace<std::shared_ptr<CWindowBorder::CCachedBorderBrush> &>(
        const char *a1,
        const struct std::nothrow_t *a2,
        _QWORD *a3)
{
  _QWORD *v5; // rax
  _QWORD *v6; // rcx
  const struct std::nothrow_t **v7; // rdx
  volatile signed __int32 *v8; // rax
  _QWORD *v9; // rax
  const struct std::nothrow_t **v11; // [rsp+28h] [rbp-10h]

  if ( qword_180126AF0 == 0x7FFFFFFFFFFFFFFLL )
    std::_Dwm_Xlength_error(a1);
  v5 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x20uLL, a2);
  v6 = v5;
  v7 = (const struct std::nothrow_t **)v5;
  v11 = (const struct std::nothrow_t **)v5;
  v5[2] = 0LL;
  v5[3] = 0LL;
  if ( a3[1] )
  {
    v5[2] = *a3;
    v8 = (volatile signed __int32 *)a3[1];
    v7[3] = (const struct std::nothrow_t *)v8;
    _InterlockedIncrement(v8 + 3);
    v7 = v11;
  }
  ++qword_180126AF0;
  v9 = (_QWORD *)*((_QWORD *)a2 + 1);
  *v7 = a2;
  v6[1] = v9;
  *((_QWORD *)a2 + 1) = v6;
  *v9 = v6;
  return v6;
}
