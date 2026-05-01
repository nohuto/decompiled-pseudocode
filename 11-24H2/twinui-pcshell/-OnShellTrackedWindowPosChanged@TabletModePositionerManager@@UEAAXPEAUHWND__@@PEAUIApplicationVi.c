/*
 * XREFs of ?OnShellTrackedWindowPosChanged@TabletModePositionerManager@@UEAAXPEAUHWND__@@PEAUIApplicationView@@HKUtagRECT@@@Z @ 0x180517530
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall TabletModePositionerManager::OnShellTrackedWindowPosChanged(
        TabletModePositionerManager *this,
        HWND a2,
        struct IApplicationView *a3,
        unsigned int a4,
        unsigned int a5,
        struct tagRECT *a6)
{
  __int64 (__fastcall *v8)(struct IApplicationView *, IUnknown **); // rbx
  int v9; // eax
  HRESULT v10; // eax
  __int64 v11; // rax
  IUnknown *punk[2]; // [rsp+30h] [rbp-20h] BYREF
  __int128 v13; // [rsp+40h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+8h]
  void *ppvOut; // [rsp+70h] [rbp+20h] BYREF

  if ( a3 )
  {
    punk[0] = 0LL;
    v8 = *(__int64 (__fastcall **)(struct IApplicationView *, IUnknown **))(*(_QWORD *)a3 + 80LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)punk);
    v9 = v8(a3, punk);
    if ( v9 >= 0 )
    {
      ppvOut = 0LL;
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppvOut);
      v10 = IUnknown_QueryService(
              punk[0],
              &GUID_975d55f5_ce62_42c0_868a_eda817f3871e,
              &GUID_bfb5cdb3_5571_4e1f_9541_a1e9fa66b59a,
              &ppvOut);
      if ( v10 >= 0 )
      {
        v11 = *(_QWORD *)ppvOut;
        v13 = (__int128)*a6;
        (*(void (__fastcall **)(void *, struct IApplicationView *, _QWORD, __int128 *, unsigned int))(v11 + 24))(
          ppvOut,
          a3,
          a4,
          &v13,
          a5);
      }
      else
      {
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0xA2,
          (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositionermanager.cpp",
          (const char *)(unsigned int)v10);
      }
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppvOut);
    }
    else
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x9F,
        (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositionermanager.cpp",
        (const char *)(unsigned int)v9);
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)punk);
  }
}
