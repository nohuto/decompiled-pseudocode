/*
 * XREFs of ??0CUIHierarchy@@AEAA@XZ @ 0x1800A8B54
 * Callers:
 *     ?GetInstance@CUIHierarchy@@SAAEAV1@XZ @ 0x18009AFA4 (-GetInstance@CUIHierarchy@@SAAEAV1@XZ.c)
 * Callees:
 *     ??1IWindow@WindowManagement@ApplicationModel@Internal@Windows@winrt@@QEAA@XZ @ 0x18002706C (--1IWindow@WindowManagement@ApplicationModel@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winrt@@@winrt@@AEAAXXZ @ 0x18002724C (-unconditional_release_ref@-$com_ptr@Utype@-$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winr.c)
 *     ?CreateWatcher@WindowInProc@WindowManagement@ApplicationModel@Internal@Windows@winrt@@SA@XZ @ 0x18004A9FC (-CreateWatcher@WindowInProc@WindowManagement@ApplicationModel@Internal@Windows@winrt@@SA@XZ.c)
 *     ?StartWindowWatcher@CUIHierarchy@@AEAAXXZ @ 0x1800AA024 (-StartWindowWatcher@CUIHierarchy@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=2
CUIHierarchy *__fastcall CUIHierarchy::CUIHierarchy(CUIHierarchy *this)
{
  __int128 *v1; // rsi
  __int64 v2; // rax
  CUIHierarchy *v4; // [rsp+30h] [rbp+8h] BYREF
  __int64 *v5; // [rsp+38h] [rbp+10h]

  v4 = this;
  try
  {
    v5 = &qword_180251D60;
    qword_180251D60 = 0LL;
    qword_180251D68 = 0LL;
    xmmword_180251D70 = 0LL;
    qword_180251D80 = 0LL;
    qword_180251D88 = 0LL;
    xmmword_180251D90 = 0LL;
    xmmword_180251DA0 = 0LL;
    v1 = (__int128 *)winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowInProc::CreateWatcher(&v4);
    if ( (__int128 *)((char *)&xmmword_180251DA0 + 8) != v1 )
    {
      if ( *((_QWORD *)&xmmword_180251DA0 + 1) )
        winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref((__int64 *)&xmmword_180251DA0 + 1);
      v2 = *(_QWORD *)v1;
      *(_QWORD *)v1 = 0LL;
      *((_QWORD *)&xmmword_180251DA0 + 1) = v2;
    }
    winrt::Windows::Internal::ApplicationModel::WindowManagement::IWindow::~IWindow((winrt::Windows::Internal::ApplicationModel::WindowManagement::IWindow *)&v4);
  }
  catch ( ... )
  {
  }
  if ( *((_QWORD *)&xmmword_180251DA0 + 1) )
    CUIHierarchy::StartWindowWatcher((CUIHierarchy *)&qword_180251D60);
  return (CUIHierarchy *)&qword_180251D60;
}
