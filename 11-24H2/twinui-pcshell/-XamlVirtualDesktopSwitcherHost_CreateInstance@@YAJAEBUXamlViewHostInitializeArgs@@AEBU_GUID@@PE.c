/*
 * XREFs of ?XamlVirtualDesktopSwitcherHost_CreateInstance@@YAJAEBUXamlViewHostInitializeArgs@@AEBU_GUID@@PEAPEAX@Z @ 0x18029D884
 * Callers:
 *     ?_CreateXamlMTVHost@CMultitaskingViewManager@@AEAAJW4MULTITASKING_VIEW_TYPES@@PEAUIApplicationViewCollection@@AEBU_GUID@@PEAPEAX@Z @ 0x18025AFC8 (-_CreateXamlMTVHost@CMultitaskingViewManager@@AEAAJW4MULTITASKING_VIEW_TYPES@@PEAUIApplicationVi.c)
 * Callees:
 *     ??$MakeAndInitializeOrThrow@VVirtualDesktopSwitcherHost@@AEBUXamlViewHostInitializeArgs@@@wil@@YA?AV?$ComPtr@VVirtualDesktopSwitcherHost@@@WRL@Microsoft@@AEBUXamlViewHostInitializeArgs@@@Z @ 0x18029D8F0 (--$MakeAndInitializeOrThrow@VVirtualDesktopSwitcherHost@@AEBUXamlViewHostInitializeArgs@@@wil@@Y.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall XamlVirtualDesktopSwitcherHost_CreateInstance(
        const struct XamlViewHostInitializeArgs *a1,
        const struct _GUID *a2,
        void **a3)
{
  _QWORD *v4; // rax
  unsigned int v5; // ebx
  const char *v6; // r9
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *a3 = 0LL;
  try
  {
    v4 = (_QWORD *)wil::MakeAndInitializeOrThrow<VirtualDesktopSwitcherHost,XamlViewHostInitializeArgs const &>();
    v5 = (**(__int64 (__fastcall ***)(_QWORD, GUID *, void **))*v4)(*v4, &GUID_49484dfc_13ca_4d28_aa1b_981c61ed37c9, a3);
    if ( a2 )
      (*(void (__fastcall **)(const struct _GUID *))(*(_QWORD *)&a2->Data1 + 16LL))(a2);
    result = v5;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x191,
                           (int)"pcshell\\twinui\\xamlmultitaskingview\\lib\\virtualdesktopswitcherhost.cpp",
                           v6);
  }
  return result;
}
