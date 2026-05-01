/*
 * XREFs of ?OnApplicationViewChanged@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x18002A330
 * Callers:
 *     <none>
 * Callees:
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x180029D9C (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     ?DelayedUpdateActivationTimestamp@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAA?AUfire_and_forget@6@_K@Z @ 0x18002B540 (-DelayedUpdateActivationTimestamp@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEA.c)
 *     ?UpdateActivationTimestamps@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAXPEAUHWND__@@0@Z @ 0x18002B950 (-UpdateActivationTimestamps@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAXPEAU.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_WTMPublic@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18007E1F4 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_WTMPublic@@@details@wil@@QEAAX_NW4Reporti.c)
 *     ?SyncAllAppWindows@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAA_KXZ @ 0x1800C278C (-SyncAllAppWindows@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAA_KXZ.c)
 *     ?RemoveWindowTabDataModel@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAX_K@Z @ 0x1801261FC (-RemoveWindowTabDataModel@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall winrt::Windows::Internal::Shell::implementation::WindowTabHost::OnApplicationViewChanged(
        RTL_SRWLOCK *a1,
        __int64 (__fastcall ***a2)(ApplicationViewHelpers *, GUID *, __int64 *),
        int a3)
{
  int v4; // r8d
  unsigned __int64 v5; // rsi
  __int64 v6; // rcx
  unsigned __int64 i; // rdx
  __int64 v8; // rdx
  _QWORD *Ptr; // rcx
  _QWORD *v10; // rax
  _QWORD *v11; // r8
  _QWORD *v12; // rcx
  __int64 v14; // rdx
  unsigned int WindowForView; // eax
  HWND v16; // rbx
  HWND PropW; // rax
  _QWORD v18[3]; // [rsp+20h] [rbp-18h]
  char v19; // [rsp+50h] [rbp+18h] BYREF

  if ( a3 )
  {
    v4 = a3 - 1;
    if ( v4 )
    {
      if ( v4 == 6 )
      {
        WindowForView = ApplicationViewHelpers::GetWindowForView(a2, (struct IApplicationView *)a2);
        winrt::Windows::Internal::Shell::implementation::WindowTabHost::DelayedUpdateActivationTimestamp(
          a1,
          &v19,
          WindowForView);
      }
    }
    else
    {
      v5 = (unsigned int)ApplicationViewHelpers::GetWindowForView(a2, (struct IApplicationView *)a2);
      v18[0] = v5;
      AcquireSRWLockExclusive(a1 + 77);
      v6 = 0xCBF29CE484222325uLL;
      for ( i = 0LL; i < 8; ++i )
        v6 = 0x100000001B3LL * (*((unsigned __int8 *)v18 + i) ^ (unsigned __int64)v6);
      v8 = 2 * (v6 & (__int64)a1[84].Ptr);
      Ptr = a1[81].Ptr;
      v10 = (_QWORD *)Ptr[v8 + 1];
      v11 = a1[79].Ptr;
      if ( v10 == v11 )
      {
LABEL_10:
        v10 = 0LL;
      }
      else
      {
        v12 = (_QWORD *)Ptr[v8];
        while ( v5 != v10[2] )
        {
          if ( v10 == v12 )
            goto LABEL_10;
          v10 = (_QWORD *)v10[1];
        }
      }
      if ( !v10 )
        v10 = a1[79].Ptr;
      if ( v10 != v11 )
      {
        winrt::Windows::Internal::Shell::implementation::WindowTabHost::RemoveWindowTabDataModel(
          (winrt::Windows::Internal::Shell::implementation::WindowTabHost *)a1,
          v5);
        LOBYTE(v14) = 1;
        wil::details::FeatureImpl<__WilFeatureTraits_Feature_WTMPublic>::ReportUsage(
          &`wil::Feature<__WilFeatureTraits_Feature_WTMPublic>::GetImpl'::`2'::impl,
          v14);
        winrt::Windows::Internal::Shell::implementation::WindowTabHost::SyncAllAppWindows((winrt::Windows::Internal::Shell::implementation::WindowTabHost *)a1);
      }
      if ( a1 != (RTL_SRWLOCK *)-616LL )
        ReleaseSRWLockExclusive(a1 + 77);
    }
  }
  else
  {
    v16 = (HWND)ApplicationViewHelpers::GetWindowForView(a2, (struct IApplicationView *)a2);
    PropW = (HWND)GetPropW(v16, (LPCWSTR)0xA920);
    if ( PropW )
      winrt::Windows::Internal::Shell::implementation::WindowTabHost::UpdateActivationTimestamps(
        (winrt::Windows::Internal::Shell::implementation::WindowTabHost *)a1,
        v16,
        PropW);
  }
  return 0LL;
}
