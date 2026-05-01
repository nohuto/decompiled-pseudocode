/*
 * XREFs of ?ShutdownSnapFlyout@CShellSnapComponent@@AEAAJXZ @ 0x1805A0B94
 * Callers:
 *     ?OnSettingChanged@CShellSnapComponent@@UEAAJW4SETTING_IDENTIFIER@@@Z @ 0x18059F650 (-OnSettingChanged@CShellSnapComponent@@UEAAJW4SETTING_IDENTIFIER@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetEvent@details@wil@@YAXPEAX@Z @ 0x18004D078 (-SetEvent@details@wil@@YAXPEAX@Z.c)
 *     ??1?$com_ptr@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@@winrt@@QEAA@XZ @ 0x1801BC9A8 (--1-$com_ptr@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@@win.c)
 *     ??4?$com_ptr@VSnapFlyoutHost@@@winrt@@QEAAAEAU01@$$QEAU01@@Z @ 0x1801C50EC (--4-$com_ptr@VSnapFlyoutHost@@@winrt@@QEAAAEAU01@$$QEAU01@@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18029730C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CShellSnapComponent::ShutdownSnapFlyout(
        CShellSnapComponent *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  int v5; // eax
  void *v6; // rdx
  unsigned int v7; // edi
  __int64 v9; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v11; // [rsp+30h] [rbp+8h] BYREF

  if ( *((_BYTE *)this + 920) || *((_BYTE *)this + 921) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x76B,
      (int)"pcshell\\twinui\\snapcomponent\\lib\\snapshellcomponent.cpp",
      a4);
  v5 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(**((_QWORD **)this + 51) + 24LL))(
         *((_QWORD *)this + 51),
         256LL,
         0LL);
  v7 = v5;
  if ( v5 >= 0 )
  {
    v9 = *((_QWORD *)this + 114);
    if ( v9 )
    {
      wil::details::SetEvent(*(wil::details **)(v9 + 80), v6);
      v11 = 0LL;
      winrt::com_ptr<SnapFlyoutHost>::operator=((__int64 *)this + 114, &v11);
      winrt::com_ptr<winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance>::~com_ptr<winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance>(&v11);
    }
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x76C,
      (int)"pcshell\\twinui\\snapcomponent\\lib\\snapshellcomponent.cpp",
      (const char *)(unsigned int)v5);
    return v7;
  }
}
