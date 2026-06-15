/*
 * XREFs of ??$get_runtime_activation_factory_impl@$0A@@impl@winrt@@YA?AUhresult@1@AEBUhstring@param@1@AEBUguid@1@PEAPEAX@Z @ 0x1800E3270
 * Callers:
 *     ??$call@P6A?AUBluetoothAudioSharingController@Internal@Interface@Audio@Bluetooth@Microsoft@winrt@@AEBUIBluetoothAudioSharingControllerStatics@234567@@Z@?$factory_cache_entry@UBluetoothAudioSharingController@Internal@Interface@Audio@Bluetooth@Microsoft@winrt@@UIBluetoothAudioSharingControllerStatics@234567@@impl@winrt@@QEAA?A_P$$QEAP6A?AUBluetoothAudioSharingController@Internal@Interface@Audio@Bluetooth@Microsoft@2@AEBUIBluetoothAudioSharingControllerStatics@456782@@Z@Z @ 0x1800E2F38 (--$call@P6A-AUBluetoothAudioSharingController@Internal@Interface@Audio@Bluetooth@Microsoft@winrt.c)
 *     ??$call@P6A?AUBluetoothAudioSharingParameters@Internal@Interface@Audio@Bluetooth@Microsoft@winrt@@AEBUIBluetoothAudioSharingParametersStatics@234567@@Z@?$factory_cache_entry@UBluetoothAudioSharingParameters@Internal@Interface@Audio@Bluetooth@Microsoft@winrt@@UIBluetoothAudioSharingParametersStatics@234567@@impl@winrt@@QEAA?A_P$$QEAP6A?AUBluetoothAudioSharingParameters@Internal@Interface@Audio@Bluetooth@Microsoft@2@AEBUIBluetoothAudioSharingParametersStatics@456782@@Z@Z @ 0x1800E3088 (--$call@P6A-AUBluetoothAudioSharingParameters@Internal@Interface@Audio@Bluetooth@Microsoft@winrt.c)
 * Callees:
 *     ?c_str@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBAPEBGXZ @ 0x18000F840 (-c_str@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBAPEBGXZ.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x18004DC2C (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?_Myptr@?$_String_val@U?$_Simple_types@G@std@@@std@@QEAAPEAGXZ @ 0x1800620CC (-_Myptr@-$_String_val@U-$_Simple_types@G@std@@@std@@QEAAPEAGXZ.c)
 *     ??$_Construct@$00PEBG@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXQEBG_K@Z @ 0x18009C798 (--$_Construct@$00PEBG@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXQEBG_K@Z.c)
 *     __security_check_cookie @ 0x1800A3DA0 (__security_check_cookie.c)
 *     WINRT_IMPL_GetProcAddress @ 0x1800A5291 (WINRT_IMPL_GetProcAddress.c)
 *     RoGetActivationFactory_0 @ 0x1800A595E (RoGetActivationFactory_0.c)
 *     WINRT_IMPL_FreeLibrary @ 0x1800A7A2E (WINRT_IMPL_FreeLibrary.c)
 *     LoadLibraryExW_0 @ 0x1800A7A3A (LoadLibraryExW_0.c)
 *     GetErrorInfo_0 @ 0x1800A8121 (GetErrorInfo_0.c)
 *     SetErrorInfo_0 @ 0x1800A815D (SetErrorInfo_0.c)
 *     ??$_Reallocate_grow_by@V_lambda_7030d12a21dba11210293044e97fe9c7_@@PEBG_K@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAAEAV01@_KV_lambda_7030d12a21dba11210293044e97fe9c7_@@PEBG_K@Z @ 0x1800E2C30 (--$_Reallocate_grow_by@V_lambda_7030d12a21dba11210293044e97fe9c7_@@PEBG_K@-$basic_string@GU-$cha.c)
 *     ??$_Traits_rfind_ch@U?$char_traits@G@std@@@std@@YA_KQEBG_K1G@Z @ 0x1800E2E14 (--$_Traits_rfind_ch@U-$char_traits@G@std@@@std@@YA_KQEBG_K1G@Z.c)
 *     ?resize@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAX_KG@Z @ 0x1800E8840 (-resize@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAX_KG@Z.c)
 *     ?unconditional_release_ref@?$com_ptr@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winrt@@@winrt@@AEAAXXZ @ 0x1800E8C8C (-unconditional_release_ref@-$com_ptr@Utype@-$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winr.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_DWORD *__fastcall winrt::impl::get_runtime_activation_factory_impl<0>(_DWORD *a1, __int64 *a2, __int64 a3, __int64 a4)
{
  __int64 v8; // rcx
  int ActivationFactory_0; // ebx
  HMODULE Library; // rax
  FARPROC ProcAddress; // rax
  __int64 v12; // rax
  const WCHAR *v13; // rdx
  unsigned __int64 v14; // r8
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rdx
  const WCHAR *v21; // rax
  HMODULE v22; // rdi
  FARPROC v23; // rax
  __int64 v24; // rdx
  _WORD *v25; // rax
  __int64 v26; // r8
  __int16 v27; // r9
  __int64 v28; // rax
  unsigned int (__fastcall ***v30)(_QWORD, __int64, __int64); // [rsp+30h] [rbp-48h] BYREF
  IErrorInfo *pperrinfo; // [rsp+38h] [rbp-40h] BYREF
  __int128 Src; // [rsp+40h] [rbp-38h] BYREF
  __int64 v33; // [rsp+50h] [rbp-28h]
  __int64 v34; // [rsp+58h] [rbp-20h]

  v8 = *a2;
  if ( winrt_activation_handler )
  {
    *a1 = ((__int64 (__fastcall *)(__int64, __int64, __int64))winrt_activation_handler)(v8, a3, a4);
    return a1;
  }
  ActivationFactory_0 = RoGetActivationFactory_0(v8, a3, a4);
  if ( ActivationFactory_0 == -2147221008 )
  {
    Library = LoadLibraryExW_0(L"combase.dll", 0LL, 0x1000u);
    ProcAddress = WINRT_IMPL_GetProcAddress(Library, "CoIncrementMTAUsage");
    if ( !ProcAddress )
    {
      *a1 = -2147221008;
      return a1;
    }
    v30 = 0LL;
    ((void (__fastcall *)(unsigned int (__fastcall ****)(_QWORD, __int64, __int64)))ProcAddress)(&v30);
    ActivationFactory_0 = RoGetActivationFactory_0(*a2, a3, a4);
  }
  if ( !ActivationFactory_0 )
  {
    *a1 = 0;
    return a1;
  }
  pperrinfo = 0LL;
  GetErrorInfo_0(0, &pperrinfo);
  Src = 0LL;
  v33 = 0LL;
  v34 = 0LL;
  v12 = *a2;
  if ( *a2 )
  {
    v13 = *(const WCHAR **)(v12 + 16);
    v14 = *(unsigned int *)(v12 + 4);
  }
  else
  {
    v13 = &LocaleName;
    v14 = 0LL;
  }
  std::wstring::_Construct<1,unsigned short const *>((char **)&Src, v13, v14);
  while ( 1 )
  {
    do
    {
      v25 = (_WORD *)std::wstring::c_str((__int64)&Src, v15);
      v28 = std::_Traits_rfind_ch<std::char_traits<unsigned short>>(v25, v33, v26, v27);
      if ( v28 == -1 )
      {
        SetErrorInfo_0(0, pperrinfo);
        *a1 = ActivationFactory_0;
        goto LABEL_25;
      }
      std::wstring::resize(&Src, v28);
      v18 = v33;
      if ( (unsigned __int64)(v34 - v33) < 4 )
      {
        std::wstring::_Reallocate_grow_by<_lambda_7030d12a21dba11210293044e97fe9c7_,unsigned short const *,unsigned __int64>(
          (const void **)&Src,
          4uLL,
          v16,
          v17,
          4LL);
      }
      else
      {
        v33 += 4LL;
        v19 = std::_String_val<std::_Simple_types<unsigned short>>::_Myptr((__int64)&Src, v18);
        *(_QWORD *)(v19 + 2 * v20) = 0x6C006C0064002ELL;
        *(_WORD *)(v19 + 2 * v20 + 8) = 0;
      }
      v21 = (const WCHAR *)std::wstring::c_str((__int64)&Src, v20);
      v22 = LoadLibraryExW_0(v21, 0LL, 0x1000u);
      std::wstring::resize(&Src, v33 - 4);
    }
    while ( !v22 );
    v23 = WINRT_IMPL_GetProcAddress(v22, "DllGetActivationFactory");
    if ( v23 )
      break;
LABEL_22:
    WINRT_IMPL_FreeLibrary(v22);
  }
  v30 = 0LL;
  if ( ((unsigned int (__fastcall *)(__int64, unsigned int (__fastcall ****)(_QWORD, __int64, __int64)))v23)(*a2, &v30)
    || (**v30)(v30, a3, a4) )
  {
    if ( v30 )
      winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref(&v30);
    goto LABEL_22;
  }
  *a1 = 0;
  if ( v30 )
    winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref(&v30);
LABEL_25:
  std::wstring::_Tidy_deallocate((__int64)&Src, v24);
  if ( pperrinfo )
    winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref(&pperrinfo);
  return a1;
}
