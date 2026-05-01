/*
 * XREFs of ?ShellModeWNFCallback@CCortanaWNFService@Cortana@TwinUI@@CAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x1803DE8E0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?GetNotification@CCortanaWNFService@Cortana@TwinUI@@AEAAJPEAPEAVICortanaWNFNotification@23@@Z @ 0x1803DE64C (-GetNotification@CCortanaWNFService@Cortana@TwinUI@@AEAAJPEAPEAVICortanaWNFNotification@23@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TwinUI::Cortana::CCortanaWNFService::ShellModeWNFCallback(
        struct _WNF_STATE_NAME a1,
        __int64 a2,
        struct _WNF_TYPE_ID *a3,
        TwinUI::Cortana::CCortanaWNFService *a4,
        struct TwinUI::Cortana::ICortanaWNFNotification *a5,
        unsigned int a6)
{
  bool v7; // di
  __int64 v8; // rdx

  if ( a5 && a6 == 4 )
  {
    v7 = *(_DWORD *)a5 != 0;
    a5 = 0LL;
    if ( a4 )
    {
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&a5);
      if ( (int)TwinUI::Cortana::CCortanaWNFService::GetNotification(a4, (struct IInspectable **)&a5) >= 0 )
      {
        LOBYTE(v8) = v7;
        (*(void (__fastcall **)(struct TwinUI::Cortana::ICortanaWNFNotification *, __int64))(*(_QWORD *)a5 + 48LL))(
          a5,
          v8);
      }
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&a5);
  }
  return 0LL;
}
