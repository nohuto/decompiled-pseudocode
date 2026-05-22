/*
 * XREFs of ??0CUIHierarchy@@AEAA@XZ @ 0x1800AA054
 * Callers:
 *     ?GetInstance@CUIHierarchy@@SAAEAV1@XZ @ 0x18009AE04 (-GetInstance@CUIHierarchy@@SAAEAV1@XZ.c)
 * Callees:
 *     ??1IWindow@WindowManagement@ApplicationModel@Internal@Windows@winrt@@QEAA@XZ @ 0x180026AAC (--1IWindow@WindowManagement@ApplicationModel@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winrt@@@winrt@@AEAAXXZ @ 0x180026C8C (-unconditional_release_ref@-$com_ptr@Utype@-$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winr.c)
 *     ?CreateWatcher@WindowInProc@WindowManagement@ApplicationModel@Internal@Windows@winrt@@SA@XZ @ 0x18004E580 (-CreateWatcher@WindowInProc@WindowManagement@ApplicationModel@Internal@Windows@winrt@@SA@XZ.c)
 *     ?StartWindowWatcher@CUIHierarchy@@AEAAXXZ @ 0x1800AB524 (-StartWindowWatcher@CUIHierarchy@@AEAAXXZ.c)
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
    v5 = &qword_180247D00;
    qword_180247D00 = 0LL;
    qword_180247D08 = 0LL;
    xmmword_180247D10 = 0LL;
    qword_180247D20 = 0LL;
    qword_180247D28 = 0LL;
    xmmword_180247D30 = 0LL;
    xmmword_180247D40 = 0LL;
    v1 = (__int128 *)winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowInProc::CreateWatcher(&v4);
    if ( (__int128 *)((char *)&xmmword_180247D40 + 8) != v1 )
    {
      if ( *((_QWORD *)&xmmword_180247D40 + 1) )
        winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref((__int64 *)&xmmword_180247D40 + 1);
      v2 = *(_QWORD *)v1;
      *(_QWORD *)v1 = 0LL;
      *((_QWORD *)&xmmword_180247D40 + 1) = v2;
    }
    winrt::Windows::Internal::ApplicationModel::WindowManagement::IWindow::~IWindow((winrt::Windows::Internal::ApplicationModel::WindowManagement::IWindow *)&v4);
  }
  catch ( ... )
  {
  }
  if ( *((_QWORD *)&xmmword_180247D40 + 1) )
    CUIHierarchy::StartWindowWatcher((CUIHierarchy *)&qword_180247D00);
  return (CUIHierarchy *)&qword_180247D00;
}
