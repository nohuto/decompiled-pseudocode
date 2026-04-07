/*
 * XREFs of ?ReplaceAll@?$vector_base@U?$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V?$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@UUserResizeVisual@Transitions@Udwm@3@@winrt@@QEAAXU?$array_view@$$CBUUserResizeVisual@Transitions@Udwm@winrt@@@2@@Z @ 0x180102518
 * Callers:
 *     ?ReplaceAll@?$produce@U?$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V?$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@U?$IVector@UUserResizeVisual@Transitions@Udwm@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHIPEAPEAX@Z @ 0x1801024A0 (-ReplaceAll@-$produce@U-$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V-$vector@UUserRe.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001F154 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Assign_range@PEBUUserResizeVisual@Transitions@Udwm@winrt@@@?$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@AEAAXPEBUUserResizeVisual@Transitions@Udwm@winrt@@0Uforward_iterator_tag@1@@Z @ 0x1800FFEAC (--$_Assign_range@PEBUUserResizeVisual@Transitions@Udwm@winrt@@@-$vector@UUserResizeVisual@Transi.c)
 *     ??$_Destroy_range@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@YAXPEAUUserResizeVisual@Transitions@Udwm@winrt@@QEAU1234@AEAV?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@0@@Z @ 0x180100014 (--$_Destroy_range@V-$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@YAXPEAUUser.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall winrt::vector_base<winrt::impl::vector_impl<winrt::Udwm::Transitions::UserResizeVisual,std::vector<winrt::Udwm::Transitions::UserResizeVisual>,winrt::impl::single_threaded_collection_base>,winrt::Udwm::Transitions::UserResizeVisual>::ReplaceAll(
        volatile signed __int32 *a1,
        __int64 a2)
{
  __int64 v4; // rax
  winrt::Udwm::Transitions::UserResizeVisual *v5; // rdi
  winrt::Udwm::Transitions::UserResizeVisual *v6; // rsi
  __int64 v7; // rbx
  __int64 v8; // rdx
  _QWORD *v9; // r8
  __int64 v10; // rcx
  __int64 result; // rax
  __int128 v12; // [rsp+20h] [rbp-28h] BYREF
  __int64 v13; // [rsp+30h] [rbp-18h]

  v12 = 0LL;
  v13 = 0LL;
  _InterlockedIncrement(a1);
  v4 = (__int64)(a1 + 2);
  if ( !a1 )
    v4 = 48LL;
  v5 = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  if ( &v12 != (__int128 *)v4 )
  {
    v5 = *(winrt::Udwm::Transitions::UserResizeVisual **)v4;
    *(_QWORD *)&v12 = *(_QWORD *)v4;
    *(_QWORD *)v4 = 0LL;
    v6 = *(winrt::Udwm::Transitions::UserResizeVisual **)(v4 + 8);
    *((_QWORD *)&v12 + 1) = v6;
    *(_QWORD *)(v4 + 8) = 0LL;
    v7 = *(_QWORD *)(v4 + 16);
    v13 = v7;
    *(_QWORD *)(v4 + 16) = 0LL;
  }
  v8 = *(_QWORD *)a2;
  v9 = (_QWORD *)(v8 + 8LL * *(unsigned int *)(a2 + 8));
  v10 = (__int64)(a1 + 2);
  if ( !a1 )
    v10 = 48LL;
  result = std::vector<winrt::Udwm::Transitions::UserResizeVisual>::_Assign_range<winrt::Udwm::Transitions::UserResizeVisual const *>(
             (__int64 *)v10,
             v8,
             v9);
  if ( v5 )
  {
    std::_Destroy_range<std::allocator<winrt::Udwm::Transitions::UserResizeVisual>>(v5, v6);
    return std::_Deallocate<16,0>(v5, (v7 - (_QWORD)v5) & 0xFFFFFFFFFFFFFFF8uLL);
  }
  return result;
}
