/*
 * XREFs of ?IndexOf@?$vector_view_base@U?$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V?$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@UUserResizeVisual@Transitions@Udwm@3@Ucollection_version@23@@winrt@@QEBA_NAEBUUserResizeVisual@Transitions@Udwm@2@AEAI@Z @ 0x1800E9730
 * Callers:
 *     ?IndexOf@?$produce@U?$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V?$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@U?$IVector@UUserResizeVisual@Transitions@Udwm@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHPEAXPEAIPEA_N@Z @ 0x1800E9690 (-IndexOf@-$produce@U-$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V-$vector@UUserResiz.c)
 *     ?IndexOf@?$produce@U?$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V?$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@U?$IVectorView@UUserResizeVisual@Transitions@Udwm@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHPEAXPEAIPEA_N@Z @ 0x1800E96E0 (-IndexOf@-$produce@U-$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V-$vect_ea_1800E96E0.c)
 * Callees:
 *     ??8Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z @ 0x18004BED0 (--8Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z.c)
 */

bool __fastcall winrt::vector_view_base<winrt::impl::vector_impl<winrt::Udwm::Transitions::UserResizeVisual,std::vector<winrt::Udwm::Transitions::UserResizeVisual>,winrt::impl::single_threaded_collection_base>,winrt::Udwm::Transitions::UserResizeVisual,winrt::impl::collection_version>::IndexOf(
        __int64 a1,
        _QWORD *a2,
        _DWORD *a3)
{
  __int64 v3; // rax
  _QWORD *v7; // rbx
  __int64 v8; // rax
  _QWORD *v9; // rsi
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rbx
  __int64 v13; // rax
  __int64 v14; // rbx

  v3 = a1 + 8;
  if ( !a1 )
    v3 = 48LL;
  v7 = *(_QWORD **)v3;
  v8 = a1 + 16;
  if ( !a1 )
    v8 = 56LL;
  v9 = *(_QWORD **)v8;
  while ( v7 != v9 && !winrt::Windows::Foundation::operator==(a2, v7) )
    ++v7;
  v10 = a1 + 8;
  v11 = a1 + 16;
  if ( !a1 )
    v10 = 48LL;
  v12 = (__int64)v7 - *(_QWORD *)v10;
  v13 = a1 + 8;
  v14 = v12 >> 3;
  *a3 = v14;
  if ( !a1 )
  {
    v11 = 56LL;
    v13 = 48LL;
  }
  return (unsigned int)v14 < (unsigned int)((__int64)(*(_QWORD *)v11 - *(_QWORD *)v13) >> 3);
}
