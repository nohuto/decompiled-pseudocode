/*
 * XREFs of ??0?$list@U?$pair@QEAUHWND__@@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@V?$allocator@U?$pair@QEAUHWND__@@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@2@@std@@QEAA@AEBV?$allocator@U?$pair@QEAUHWND__@@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@1@@Z @ 0x180099E34
 * Callers:
 *     ??0?$_Hash@V?$_Umap_traits@PEAUHWND__@@UUserResizeVisual@Transitions@Udwm@winrt@@V?$_Uhash_compare@PEAUHWND__@@U?$hash@PEAUHWND__@@@std@@U?$equal_to@PEAUHWND__@@@3@@std@@V?$allocator@U?$pair@QEAUHWND__@@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@7@$0A@@std@@@std@@IEAA@AEBV?$_Uhash_compare@PEAUHWND__@@U?$hash@PEAUHWND__@@@std@@U?$equal_to@PEAUHWND__@@@3@@1@AEBV?$allocator@U?$pair@QEAUHWND__@@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@1@@Z @ 0x18004CE34 (--0-$_Hash@V-$_Umap_traits@PEAUHWND__@@UUserResizeVisual@Transitions@Udwm@winrt@@V-$_Uhash_compa.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180039930 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall std::list<std::pair<HWND__ * const,winrt::Udwm::Transitions::UserResizeVisual>>::list<std::pair<HWND__ * const,winrt::Udwm::Transitions::UserResizeVisual>>(
        _QWORD *a1,
        const struct std::nothrow_t *a2)
{
  _QWORD *v3; // rax

  *a1 = 0LL;
  a1[1] = 0LL;
  v3 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x20uLL, a2);
  *v3 = v3;
  v3[1] = v3;
  *a1 = v3;
  return a1;
}
