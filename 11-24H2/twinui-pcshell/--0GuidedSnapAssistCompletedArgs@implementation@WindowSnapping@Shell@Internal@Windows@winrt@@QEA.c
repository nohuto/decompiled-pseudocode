/*
 * XREFs of ??0GuidedSnapAssistCompletedArgs@implementation@WindowSnapping@Shell@Internal@Windows@winrt@@QEAA@AEBW4SnapAssistUsage@23456@U?$array_view@$$CBUWindowId@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@6@@Z @ 0x1805BC8F8
 * Callers:
 *     ??$make@UGuidedSnapAssistCompletedArgs@implementation@WindowSnapping@Shell@Internal@Windows@winrt@@AEAW4SnapAssistUsage@34567@U?$array_view@$$CBUWindowId@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@7@@winrt@@YA?A_PAEAW4SnapAssistUsage@WindowSnapping@Shell@Internal@Windows@0@$$QEAU?$array_view@$$CBUWindowId@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@0@@Z @ 0x1805A50D0 (--$make@UGuidedSnapAssistCompletedArgs@implementation@WindowSnapping@Shell@Internal@Windows@winr.c)
 * Callees:
 *     ??1?$_Tidy_guard@V?$vector@UWindowId@WindowManagement@ApplicationModel@Internal@Windows@winrt@@V?$allocator@UWindowId@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@std@@@std@@@std@@QEAA@XZ @ 0x1802CE0D4 (--1-$_Tidy_guard@V-$vector@UWindowId@WindowManagement@ApplicationModel@Internal@Windows@winrt@@V.c)
 *     ??0?$producers_base@UGuidedSnapAssistCompletedArgs@implementation@WindowSnapping@Shell@Internal@Windows@winrt@@V?$tuple@UGuidedSnapAssistCompletedArgs@WindowSnapping@Shell@Internal@Windows@winrt@@@std@@@impl@winrt@@QEAA@XZ @ 0x1805BC8E0 (--0-$producers_base@UGuidedSnapAssistCompletedArgs@implementation@WindowSnapping@Shell@Internal@.c)
 *     ?_Buy_nonzero@?$vector@UWindowId@WindowManagement@ApplicationModel@Internal@Windows@winrt@@V?$allocator@UWindowId@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@std@@@std@@AEAAX_K@Z @ 0x1805BC9B4 (-_Buy_nonzero@-$vector@UWindowId@WindowManagement@ApplicationModel@Internal@Windows@winrt@@V-$al.c)
 *     memmove_0 @ 0x1806CA2E8 (memmove_0.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall winrt::Windows::Internal::Shell::WindowSnapping::implementation::GuidedSnapAssistCompletedArgs::GuidedSnapAssistCompletedArgs(
        __int64 a1)
{
  _DWORD *v2; // r9
  void **v3; // rsi
  __int64 v4; // r8
  __int64 v5; // rdx
  size_t v6; // r14
  const void *v7; // rbp
  char *v8; // rbx
  __int64 v10; // [rsp+40h] [rbp+8h] BYREF

  v10 = a1;
  winrt::impl::producers_base<winrt::Windows::Internal::Shell::WindowSnapping::implementation::GuidedSnapAssistCompletedArgs,std::tuple<winrt::Windows::Internal::Shell::WindowSnapping::GuidedSnapAssistCompletedArgs>>::producers_base<winrt::Windows::Internal::Shell::WindowSnapping::implementation::GuidedSnapAssistCompletedArgs,std::tuple<winrt::Windows::Internal::Shell::WindowSnapping::GuidedSnapAssistCompletedArgs>>((_QWORD *)(a1 + 16));
  _InterlockedIncrement(&`winrt::get_module_lock'::`2'::s_lock);
  *(_QWORD *)(a1 + 8) = 1LL;
  *(_QWORD *)a1 = &winrt::impl::heap_implements<winrt::Windows::Internal::Shell::WindowSnapping::implementation::GuidedSnapAssistCompletedArgs>::`vftable';
  *(_DWORD *)(a1 + 24) = *v2;
  v3 = (void **)(a1 + 32);
  v5 = *(unsigned int *)(v4 + 8);
  v6 = 4 * v5;
  v7 = *(const void **)v4;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  if ( v5 )
  {
    std::vector<winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowId>::_Buy_nonzero(a1 + 32);
    v8 = (char *)*v3;
    memmove_0(*v3, v7, v6);
    *(_QWORD *)(a1 + 40) = &v8[v6];
    v10 = 0LL;
    std::_Tidy_guard<std::vector<winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowId>>::~_Tidy_guard<std::vector<winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowId>>(&v10);
  }
  return a1;
}
