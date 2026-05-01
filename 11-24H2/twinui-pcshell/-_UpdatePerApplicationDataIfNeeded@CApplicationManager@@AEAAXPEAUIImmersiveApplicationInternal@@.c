/*
 * XREFs of ?_UpdatePerApplicationDataIfNeeded@CApplicationManager@@AEAAXPEAUIImmersiveApplicationInternal@@PEAUHWND__@@W4UpdateAppDataReason@1@@Z @ 0x18008ED78
 * Callers:
 *     ?OnShellHookMessage@CApplicationManager@@UEAAJ_K_J@Z @ 0x1800312D0 (-OnShellHookMessage@CApplicationManager@@UEAAJ_K_J@Z.c)
 *     ?_HandleActivation@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@@Z @ 0x180043140 (-_HandleActivation@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@@Z.c)
 *     ?_ForgetApplicationNoLock@CApplicationManager@@AEAAXPEAUIImmersiveApplicationInternal@@W4ForgetReason@@@Z @ 0x180090E44 (-_ForgetApplicationNoLock@CApplicationManager@@AEAAXPEAUIImmersiveApplicationInternal@@W4ForgetR.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x180020A48 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ?GetItem@?$CSimpleHashTable@_KV?$ComPtr@V?$CRefCountedObject@UPER_APPLICATION_DATA@@@@@WRL@Microsoft@@V?$CDefaultHashPolicy@_K@@V?$CDefaultKeyCompare@_K@@VCDefaultResizePolicy@@VCDefaultRehashPolicy@@@@QEBAJAEB_KAEAV?$ComPtr@V?$CRefCountedObject@UPER_APPLICATION_DATA@@@@@WRL@Microsoft@@@Z @ 0x1800904E4 (-GetItem@-$CSimpleHashTable@_KV-$ComPtr@V-$CRefCountedObject@UPER_APPLICATION_DATA@@@@@WRL@Micro.c)
 *     ?ValidateWindowProcess@CApplicationManagerUtility@@YA_NPEAUHWND__@@W4WINDOW_BELONGS_TO_PROCESSTYPE@1@@Z @ 0x1802EF334 (-ValidateWindowProcess@CApplicationManagerUtility@@YA_NPEAUHWND__@@W4WINDOW_BELONGS_TO_PROCESSTY.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall CApplicationManager::_UpdatePerApplicationDataIfNeeded(
        __int64 a1,
        __int64 (__fastcall ***a2)(_QWORD, GUID *, __int64 *),
        HWND a3,
        int a4)
{
  __int64 (__fastcall *v8)(_QWORD, GUID *, __int64 *); // rbx
  __int64 result; // rax
  __int64 v10; // rbx
  __int64 v11; // rcx
  __int64 (__fastcall *v12)(_QWORD, GUID *, __int64 *); // rdi
  __int64 v13; // rdx
  __int64 v14; // [rsp+20h] [rbp-30h] BYREF
  __int64 v15; // [rsp+28h] [rbp-28h] BYREF
  __int64 v16; // [rsp+30h] [rbp-20h] BYREF
  HWND v17; // [rsp+38h] [rbp-18h] BYREF
  __int64 v18; // [rsp+40h] [rbp-10h] BYREF
  char v19; // [rsp+48h] [rbp-8h]
  __int64 v20; // [rsp+78h] [rbp+28h] BYREF

  v15 = -1LL;
  v20 = 0LL;
  v8 = **a2;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v20);
  result = v8(a2, &GUID_b00297dd_eb90_48c8_99c0_f0b2d68213d3, &v20);
  if ( (int)result < 0 )
    goto LABEL_9;
  result = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v20 + 24LL))(v20, &v15);
  if ( (int)result < 0 )
    goto LABEL_9;
  v16 = 0LL;
  result = CSimpleHashTable<unsigned __int64,Microsoft::WRL::ComPtr<CRefCountedObject<PER_APPLICATION_DATA>>,CDefaultHashPolicy<unsigned __int64>,CDefaultKeyCompare<unsigned __int64>,CDefaultResizePolicy,CDefaultRehashPolicy>::GetItem(
             a1 + 1000,
             &v15,
             &v16);
  v10 = v16;
  if ( (int)result >= 0 )
  {
    if ( *(_QWORD *)(v16 + 24) || a4 )
    {
      if ( *(HWND *)(v16 + 24) == a3 && a4 == 1 )
      {
        *(_QWORD *)(v16 + 24) = 0LL;
        result = (__int64)Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)(v10 + 16), 0LL);
        *(_BYTE *)(v10 + 32) = 0;
      }
      goto LABEL_7;
    }
    result = (unsigned int)GetPropW(a3, L"Windows.ImmersiveShell.IdentifyAsMainCoreWindow") - 1;
    if ( (_DWORD)result )
    {
      if ( (_DWORD)result == 1 )
        goto LABEL_17;
    }
    else
    {
      result = CApplicationManagerUtility::ValidateWindowProcess(a3, 2LL);
      if ( !(_BYTE)result )
      {
        SetPropW(a3, L"Windows.ImmersiveShell.IdentifyAsMainCoreWindow", HANDLE_FLAG_PROTECT_FROM_CLOSE);
LABEL_17:
        v14 = 0LL;
        v12 = (*a2)[38];
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v14);
        v17 = a3;
        v18 = 0LL;
        v19 = 0;
        v12(a2, (GUID *)&v17, &v14);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v18);
        v13 = v14;
        *(_QWORD *)(v10 + 24) = a3;
        Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)(v10 + 16), v13);
        if ( !*(_BYTE *)(v10 + 36) )
          *(_BYTE *)(v10 + 32) = (unsigned int)GetPropW(
                                                 a3,
                                                 L"Windows.ImmersiveShell.DisableShowingMainViewOnActivation") == 0;
        *(_BYTE *)(v10 + 33) = GetPropW(a3, L"Windows.ImmersiveShell.ForceTerminateOnClose") != 0LL;
        result = Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v14);
      }
    }
  }
LABEL_7:
  if ( v10 )
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
LABEL_9:
  v11 = v20;
  if ( v20 )
  {
    v20 = 0LL;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  }
  return result;
}
