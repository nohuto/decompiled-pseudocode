/*
 * XREFs of ?_GetAppIDFromIDList@@YAJPEAUIApplicationResolver@@PEFBU_ITEMIDLIST@@PEAPEAGPEAH@Z @ 0x18069792C
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::PinManager::HandleRequestPinItemAsync$_ResumeCoro$1_PinManagerTelemetry::PinManagerRequestPinItem_ @ 0x1805DF1B0 (winrt--Windows--Internal--Shell--implementation--PinManager--HandleRequestPinItemAsync$_ResumeCo.c)
 *     ?CreateBackupLnk@CBackupLocationManager@@QEBAJPEFBU_ITEMIDLIST@@PEAPEFAU2@@Z @ 0x18068C7E8 (-CreateBackupLnk@CBackupLocationManager@@QEBAJPEFBU_ITEMIDLIST@@PEAPEFAU2@@Z.c)
 *     ?FindPidlOrAppID@CPinList@@QEAAPEAVPINENTRY@@PEFBU_ITEMIDLIST@@_NPEAH@Z @ 0x18068DAA8 (-FindPidlOrAppID@CPinList@@QEAAPEAVPINENTRY@@PEFBU_ITEMIDLIST@@_NPEAH@Z.c)
 *     ?InternalModify@CPinnedList@@IEAAJPEFBU_ITEMIDLIST@@0W4PINNEDLISTMODIFYCALLER@@W4PinnedListModifyFlags@@@Z @ 0x180691760 (-InternalModify@CPinnedList@@IEAAJPEFBU_ITEMIDLIST@@0W4PINNEDLISTMODIFYCALLER@@W4PinnedListModif.c)
 *     ShouldAddEnterprisePinToOutput @ 0x18069535C (ShouldAddEnterprisePinToOutput.c)
 *     _CacheAppIDInIDList @ 0x180696D5C (_CacheAppIDInIDList.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?ILGetHiddenStringAllocW@@YAHPEFBU_ITEMIDLIST@@W4IDLHID@@PEAPEAG@Z @ 0x1802B56A4 (-ILGetHiddenStringAllocW@@YAHPEFBU_ITEMIDLIST@@W4IDLHID@@PEAPEAG@Z.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ?GenerateAppID@CPinnedList@@SAJPEBG00PEAPEAG@Z @ 0x18068DCD8 (-GenerateAppID@CPinnedList@@SAJPEBG00PEAPEAG@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall _GetAppIDFromIDList(
        struct IApplicationResolver *a1,
        const struct _ITEMIDLIST *a2,
        unsigned __int16 **a3,
        int *a4)
{
  int AppID; // edi
  int (__fastcall *v9)(void *, GUID *, LPVOID *); // rbx
  const WCHAR *ExtensionW; // rax
  const WCHAR *v11; // rbx
  const unsigned __int16 *v12; // rdx
  const unsigned __int16 *v13; // r8
  void *ppv; // [rsp+30h] [rbp-38h] BYREF
  LPCWSTR pszPath; // [rsp+38h] [rbp-30h] BYREF
  LPVOID v17; // [rsp+40h] [rbp-28h] BYREF
  int v18; // [rsp+48h] [rbp-20h] BYREF

  *a3 = 0LL;
  if ( a4 )
    *a4 = 0;
  ppv = 0LL;
  AppID = SHCreateItemFromIDList(a2, &GUID_43826d1e_e718_42ee_bc55_a1e261c37bfe, &ppv);
  if ( AppID >= 0 )
  {
    v18 = 0;
    if ( (*(int (__fastcall **)(void *, __int64, int *))(*(_QWORD *)ppv + 48LL))(ppv, 0x10000LL, &v18) < 0
      || (v18 & 0x10000) == 0
      || (AppID = (*(__int64 (__fastcall **)(struct IApplicationResolver *, void *, unsigned __int16 **))(*(_QWORD *)a1 + 24LL))(
                    a1,
                    ppv,
                    a3),
          AppID >= 0) )
    {
      if ( !*a3 )
      {
        v17 = 0LL;
        v9 = **(int (__fastcall ***)(void *, GUID *, LPVOID *))ppv;
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v17);
        if ( v9(ppv, &GUID_7e9fb0d3_919f_4307_ab2e_9b1860310c93, &v17) >= 0 )
          (*(void (__fastcall **)(LPVOID, const PROPERTYKEY *, unsigned __int16 **))(*(_QWORD *)v17 + 136LL))(
            v17,
            &PKEY_AppUserModel_ID,
            a3);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v17);
        if ( !*a3 )
        {
          pszPath = 0LL;
          AppID = (*(__int64 (__fastcall **)(void *, __int64, LPCWSTR *))(*(_QWORD *)ppv + 40LL))(
                    ppv,
                    2147844096LL,
                    &pszPath);
          if ( AppID < 0 )
            goto LABEL_22;
          ExtensionW = PathFindExtensionW(pszPath);
          v11 = ExtensionW;
          if ( !ExtensionW || StrCmpICW(ExtensionW, L".EXE") && StrCmpICW(v11, L".MSC") )
          {
            AppID = -2147467259;
          }
          else if ( ILGetHiddenStringAllocW((__int64)a2, 3203334173LL, (void **)a3) )
          {
            if ( a4 )
              *a4 = 1;
            AppID = 0;
          }
          else
          {
            AppID = CPinnedList::GenerateAppID(pszPath, v12, v13, a3);
          }
          CoTaskMemFree((LPVOID)pszPath);
          if ( AppID < 0 )
          {
LABEL_22:
            v17 = 0LL;
            Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v17);
            if ( CoCreateInstance(&CLSID_ShellLink, 0LL, 1u, &GUID_000214f9_0000_0000_c000_000000000046, &v17) >= 0
              && (*(int (__fastcall **)(LPVOID, const struct _ITEMIDLIST *))(*(_QWORD *)v17 + 40LL))(v17, a2) >= 0
              && (*(int (__fastcall **)(struct IApplicationResolver *, LPVOID, void *, unsigned __int16 **))(*(_QWORD *)a1 + 32LL))(
                   a1,
                   v17,
                   ppv,
                   a3) >= 0 )
            {
              AppID = 0;
            }
            Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v17);
          }
        }
      }
    }
    (*(void (__fastcall **)(void *))(*(_QWORD *)ppv + 16LL))(ppv);
  }
  return (unsigned int)AppID;
}
