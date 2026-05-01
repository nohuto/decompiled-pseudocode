/*
 * XREFs of ?GetDisplayMonitors@GamingOverlayExperienceManager@@UEAAJ_KPEAPEAU?$IVectorView@PEAUHSTRING__@@@Collections@Foundation@Windows@@PEAH@Z @ 0x18023DD00
 * Callers:
 *     ?GetCurrentDisplayCoordinates@GamingOverlayExperienceManager@@UEAAJPEAH000@Z @ 0x18034ECF0 (-GetCurrentDisplayCoordinates@GamingOverlayExperienceManager@@UEAAJPEAH000@Z.c)
 *     ?OnViewCreatedViewEvent@GamingOverlayExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@3456@@Z @ 0x180356230 (-OnViewCreatedViewEvent@GamingOverlayExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop.c)
 *     ?SetGameBarDisplayMonitor@GamingOverlayExperienceManager@@UEAAJH@Z @ 0x18035A7E0 (-SetGameBarDisplayMonitor@GamingOverlayExperienceManager@@UEAAJH@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180048710 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800B9040 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180122480 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@std@@YAXPEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@QEAV10@AEAV?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@0@@Z @ 0x18014AEF8 (--$_Destroy_range@V-$allocator@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@st.c)
 *     ?GetTargetWindowRect@GamingOverlayExperienceManager@@UEAAJ_KPEAH111@Z @ 0x180223380 (-GetTargetWindowRect@GamingOverlayExperienceManager@@UEAAJ_KPEAH111@Z.c)
 *     ??$CreateExternalVector@PEAUHSTRING__@@V?$AgileVector@PEAUHSTRING__@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@$0A@@Internal@Collections@Foundation@Windows@@@detail@Internal@Collections@Foundation@Windows@@YAJP8IVectorStatics@Detail@234@EAAJPEAPEAU?$IVector@PEAUHSTRING__@@@234@@ZPEAPEAV?$AgileVector@PEAUHSTRING__@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@$0A@@1234@@Z @ 0x18023CC38 (--$CreateExternalVector@PEAUHSTRING__@@V-$AgileVector@PEAUHSTRING__@@U-$DefaultEqualityPredicate.c)
 *     ??$_Emplace_one_at_back@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@AEAAAEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@$$QEAV21@@Z @ 0x1802C1C3C (--$_Emplace_one_at_back@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@-$vector@.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall GamingOverlayExperienceManager::GetDisplayMonitors(__int64 a1, HWND a2, __int64 a3, _DWORD *a4)
{
  HWND *v4; // rax
  HWND v8; // rdx
  void **v9; // rdx
  __int64 v11; // rcx
  int v12; // eax
  unsigned int v13; // r8d
  unsigned int v14; // edi
  __int64 v15; // rdx
  _QWORD *v16; // rdi
  _QWORD *v17; // rsi
  __int64 v18; // rbx
  __int64 (__fastcall *v19)(__int64, PVOID); // r15
  _QWORD *v20; // rax
  HSTRING_HEADER *v21; // rax
  int v22; // eax
  int v23; // ebx
  int v24; // [rsp+30h] [rbp-40h] BYREF
  int v25; // [rsp+34h] [rbp-3Ch] BYREF
  int v26[2]; // [rsp+38h] [rbp-38h] BYREF
  HSTRING_HEADER v27; // [rsp+40h] [rbp-30h] BYREF
  int v28[2]; // [rsp+60h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]

  v4 = (HWND *)(a1 + 1416);
  if ( a2 )
    *v4 = a2;
  v8 = *v4;
  if ( *v4 )
  {
    v25 = 0;
    v28[0] = 0;
    v24 = 0;
    v26[0] = 0;
    if ( (int)GamingOverlayExperienceManager::GetTargetWindowRect(
                (GamingOverlayExperienceManager *)a1,
                v8,
                &v25,
                v28,
                &v24,
                v26) < 0 )
    {
      *(_DWORD *)(a1 + 1404) = 0;
      *(_DWORD *)(a1 + 1408) = 0;
    }
    else
    {
      *(_DWORD *)(a1 + 1404) = (v24 + v25) / 2;
      *(_DWORD *)(a1 + 1408) = (v26[0] + v28[0]) / 2;
    }
  }
  v9 = *(void ***)(a1 + 1368);
  if ( *(void ***)(a1 + 1360) != v9 )
  {
    std::_Destroy_range<std::allocator<std::wstring>>(*(void ***)(a1 + 1360), v9);
    *(_QWORD *)(a1 + 1368) = *(_QWORD *)(a1 + 1360);
  }
  std::wstring::wstring((char **)&v27, L"game");
  std::vector<std::wstring>::_Emplace_one_at_back<std::wstring>(a1 + 1360, &v27);
  std::wstring::_Tidy_deallocate(&v27.Reserved.Reserved1);
  if ( !EnumDisplayMonitors(0LL, 0LL, (MONITORENUMPROC)GamingOverlayExperienceManager::MonitorEnumProc, a1 - 136) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xB1D,
      (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\GamingOverlayExperienceManager.cpp",
      (const char *)0x80004005LL);
    return 2147500037LL;
  }
  if ( a4 )
    *a4 = *(_DWORD *)(a1 + 1384);
  if ( !a3 )
    return 0LL;
  *(_QWORD *)v28 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v28);
  v12 = Windows::Foundation::Collections::Internal::detail::CreateExternalVector<HSTRING__ *,Windows::Foundation::Collections::Internal::AgileVector<HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,0>>(
          v11,
          (__int64 *)v28);
  v14 = v12;
  if ( v12 >= 0 )
  {
    v16 = *(_QWORD **)(a1 + 1360);
    v17 = *(_QWORD **)(a1 + 1368);
    while ( v16 != v17 )
    {
      v18 = *(_QWORD *)v28;
      v19 = *(__int64 (__fastcall **)(__int64, PVOID))(**(_QWORD **)v28 + 104LL);
      v20 = v16;
      if ( v16[3] > 7uLL )
        v20 = (_QWORD *)*v16;
      *(_QWORD *)v26 = v20;
      v21 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v27, (const WCHAR **)v26, v13);
      v22 = v19(v18, v21[1].Reserved.Reserved1);
      v23 = v22;
      if ( v22 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xB2C,
          (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\GamingOverlayExperienceManager.cpp",
          (const char *)(unsigned int)v22);
        v14 = v23;
        goto LABEL_25;
      }
      v16 += 4;
    }
    v12 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)v28 + 64LL))(*(_QWORD *)v28, a3);
    v14 = v12;
    if ( v12 < 0 )
    {
      v15 = 2863LL;
      goto LABEL_24;
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v28);
    return 0LL;
  }
  v15 = 2856LL;
LABEL_24:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v15,
    (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\GamingOverlayExperienceManager.cpp",
    (const char *)(unsigned int)v12);
LABEL_25:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v28);
  return v14;
}
