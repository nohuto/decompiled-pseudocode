/*
 * XREFs of ?RegisterTransitionHandler@?$produce@UTransitionManager@implementation@Transitions@Udwm@winrt@@UITransitionManager@345@@impl@winrt@@UEAAHHPEAX@Z @ 0x180020810
 * Callers:
 *     <none>
 * Callees:
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@AEBU0123@@Z @ 0x18002044C (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@AEBU0123@@Z.c)
 *     ??$_Try_emplace@AEBW4ShellTransition@Transitions@Udwm@winrt@@$$V@?$_Hash@V?$_Umap_traits@W4ShellTransition@Transitions@Udwm@winrt@@UITransitionHandler@234@V?$_Uhash_compare@W4ShellTransition@Transitions@Udwm@winrt@@U?$hash@W4ShellTransition@Transitions@Udwm@winrt@@@std@@U?$equal_to@W4ShellTransition@Transitions@Udwm@winrt@@@6@@std@@V?$allocator@U?$pair@$$CBW4ShellTransition@Transitions@Udwm@winrt@@UITransitionHandler@234@@std@@@7@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CBW4ShellTransition@Transitions@Udwm@winrt@@UITransitionHandler@234@@std@@PEAX@std@@_N@1@AEBW4ShellTransition@Transitions@Udwm@winrt@@@Z @ 0x18002FD5C (--$_Try_emplace@AEBW4ShellTransition@Transitions@Udwm@winrt@@$$V@-$_Hash@V-$_Umap_traits@W4Shell.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::Udwm::Transitions::implementation::TransitionManager,winrt::Udwm::Transitions::ITransitionManager>::RegisterTransitionHandler(
        __int64 a1,
        int a2,
        __int64 a3)
{
  __int64 v3; // rax
  __int64 result; // rax
  int v5; // [rsp+48h] [rbp+10h] BYREF
  __int64 v6; // [rsp+50h] [rbp+18h] BYREF

  v6 = a3;
  v5 = a2;
  try
  {
    v3 = std::_Hash<std::_Umap_traits<enum winrt::Udwm::Transitions::ShellTransition,winrt::Udwm::Transitions::ITransitionHandler,std::_Uhash_compare<enum winrt::Udwm::Transitions::ShellTransition,std::hash<enum winrt::Udwm::Transitions::ShellTransition>,std::equal_to<enum winrt::Udwm::Transitions::ShellTransition>>,std::allocator<std::pair<enum winrt::Udwm::Transitions::ShellTransition const,winrt::Udwm::Transitions::ITransitionHandler>>,0>>::_Try_emplace<enum winrt::Udwm::Transitions::ShellTransition const &,>();
    winrt::Windows::Foundation::IUnknown::operator=(
      (winrt::Windows::Foundation::IUnknown *)(*(_QWORD *)v3 + 24LL),
      (winrt::Windows::Foundation::IUnknown *)&v6);
    result = 0LL;
  }
  catch ( ... )
  {
    return *(unsigned int *)winrt::to_hresult(&v5);
  }
  return result;
}
