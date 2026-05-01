/*
 * XREFs of ?OnMoveSizeAttempted@TabletModePositionerManager@@UEAAXPEAUHWND__@@PEAUIApplicationView@@KK@Z @ 0x180517430
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall TabletModePositionerManager::OnMoveSizeAttempted(
        TabletModePositionerManager *this,
        HWND a2,
        struct IApplicationView *a3,
        unsigned int a4)
{
  __int64 v4; // rsi
  __int64 (__fastcall *v6)(struct IApplicationView *, IUnknown **); // rbx
  int v7; // eax
  HRESULT v8; // eax
  IUnknown *punk[3]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  void *ppvOut; // [rsp+50h] [rbp+18h] BYREF

  if ( a3 )
  {
    v4 = a4;
    punk[0] = 0LL;
    v6 = *(__int64 (__fastcall **)(struct IApplicationView *, IUnknown **))(*(_QWORD *)a3 + 80LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)punk);
    v7 = v6(a3, punk);
    if ( v7 >= 0 )
    {
      ppvOut = 0LL;
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppvOut);
      v8 = IUnknown_QueryService(
             punk[0],
             &GUID_373e56cf_0a1b_4b4a_a1a4_a46b25ffd7e3,
             &GUID_373e56cf_0a1b_4b4a_a1a4_a46b25ffd7e3,
             &ppvOut);
      if ( v8 >= 0 )
        (*(void (__fastcall **)(void *, struct IApplicationView *, _QWORD))(*(_QWORD *)ppvOut + 24LL))(
          ppvOut,
          a3,
          `TabletModePositionerManager::MoveSizeTypeFromArrangementMessage'::`2'::MoveSizeMessageParamToMoveSizeTypeMap[v4]);
      else
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0xB3,
          (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositionermanager.cpp",
          (const char *)(unsigned int)v8);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppvOut);
    }
    else
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xB0,
        (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositionermanager.cpp",
        (const char *)(unsigned int)v7);
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)punk);
  }
}
