/*
 * XREFs of ?_Unchecked_erase@?$_Hash@V?$_Umap_traits@PEAUHWND__@@UITransitionHandler@Transitions@Udwm@winrt@@V?$_Uhash_compare@PEAUHWND__@@U?$hash@PEAUHWND__@@@std@@U?$equal_to@PEAUHWND__@@@3@@std@@V?$allocator@U?$pair@QEAUHWND__@@UITransitionHandler@Transitions@Udwm@winrt@@@std@@@7@$0A@@std@@@std@@AEAAPEAU?$_List_node@U?$pair@QEAUHWND__@@UITransitionHandler@Transitions@Udwm@winrt@@@std@@PEAX@2@PEAU32@@Z @ 0x1800FF664
 * Callers:
 *     ?EnsureWorkAreaChangeTransitionRemoved@TransitionManager@implementation@Transitions@Udwm@winrt@@QEAAX_K@Z @ 0x1800FD0E8 (-EnsureWorkAreaChangeTransitionRemoved@TransitionManager@implementation@Transitions@Udwm@winrt@@.c)
 * Callees:
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x18001EB00 (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001F154 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800470D0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 */

__int64 __fastcall std::_Hash<std::_Umap_traits<HWND__ *,winrt::Udwm::Transitions::ITransitionHandler,std::_Uhash_compare<HWND__ *,std::hash<HWND__ *>,std::equal_to<HWND__ *>>,std::allocator<std::pair<HWND__ * const,winrt::Udwm::Transitions::ITransitionHandler>>,0>>::_Unchecked_erase(
        __int64 a1,
        unsigned __int8 *a2)
{
  __int64 appended; // rax
  _QWORD *v4; // r11
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // rax
  __int64 v8; // rdi

  appended = std::_Fnv1a_append_bytes(a1, a2 + 16, 8uLL);
  v5 = 2 * (v4[6] & appended);
  v6 = v4[3];
  if ( *(unsigned __int8 **)(v6 + 16 * (v4[6] & appended) + 8) == a2 )
  {
    if ( *(unsigned __int8 **)(v6 + 16 * (v4[6] & appended)) == a2 )
    {
      v7 = v4[1];
      *(_QWORD *)(v6 + 8 * v5) = v7;
    }
    else
    {
      v7 = *((_QWORD *)a2 + 1);
    }
    *(_QWORD *)(v6 + 8 * v5 + 8) = v7;
  }
  else if ( *(unsigned __int8 **)(v6 + 16 * (v4[6] & appended)) == a2 )
  {
    *(_QWORD *)(v6 + 16 * (v4[6] & appended)) = *(_QWORD *)a2;
  }
  v8 = *(_QWORD *)a2;
  --v4[2];
  **((_QWORD **)a2 + 1) = v8;
  *(_QWORD *)(v8 + 8) = *((_QWORD *)a2 + 1);
  if ( *((_QWORD *)a2 + 3) )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)(a2 + 24));
  std::_Deallocate<16,0>(a2, 0x20uLL);
  return v8;
}
