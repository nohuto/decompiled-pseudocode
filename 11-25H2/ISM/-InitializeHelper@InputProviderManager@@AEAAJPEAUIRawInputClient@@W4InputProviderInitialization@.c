/*
 * XREFs of ?InitializeHelper@InputProviderManager@@AEAAJPEAUIRawInputClient@@W4InputProviderInitialization@@@Z @ 0x1800383A0
 * Callers:
 *     ?Initialize@OneCoreUAPInputHost@@IEAAJPEAX@Z @ 0x18005C55C (-Initialize@OneCoreUAPInputHost@@IEAAJPEAX@Z.c)
 *     ??0DeviceInputHost@@AEAA@XZ @ 0x18008D3FC (--0DeviceInputHost@@AEAA@XZ.c)
 *     ?DeferredInitializeStatic@OneCoreUAPInputHost@@SAJPEAX_NPEAU_FILETIME@@@Z @ 0x1800A2F70 (-DeferredInitializeStatic@OneCoreUAPInputHost@@SAJPEAX_NPEAU_FILETIME@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EAF4 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?IsEdition@@YA_N_K@Z @ 0x1800392B0 (-IsEdition@@YA_N_K@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008DFBC (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18008DFDC (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$emplace_back@UInputProvider@@@?$vector@UInputProvider@@V?$allocator@UInputProvider@@@std@@@std@@QEAA?A_T$$QEAUInputProvider@@@Z @ 0x180097988 (--$emplace_back@UInputProvider@@@-$vector@UInputProvider@@V-$allocator@UInputProvider@@@std@@@st.c)
 *     ?GetRIMRawInputProviderSpecific@@YAKW4ISMScenario@@@Z @ 0x18009A91C (-GetRIMRawInputProviderSpecific@@YAKW4ISMScenario@@@Z.c)
 *     __security_check_cookie @ 0x18009D480 (__security_check_cookie.c)
 *     IsGetMPCInputPostProcessorPresent @ 0x18009E138 (IsGetMPCInputPostProcessorPresent.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall InputProviderManager::InitializeHelper(__int64 a1, __int64 a2, int a3, const char *a4)
{
  const char *v7; // r9
  const char *v8; // r9
  _DWORD *v9; // rbx
  int v11; // eax
  _DWORD *v12; // rbx
  int v13; // eax
  __int128 v14; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v15[3]; // [rsp+30h] [rbp-D0h] BYREF
  bool v16; // [rsp+48h] [rbp-B8h]
  _DWORD v17[3]; // [rsp+4Ch] [rbp-B4h] BYREF
  char v18; // [rsp+58h] [rbp-A8h] BYREF
  __int64 (__fastcall *v19)(struct IRawInputClient *, unsigned int, struct IRawInputProvider **); // [rsp+60h] [rbp-A0h]
  __int64 v20; // [rsp+68h] [rbp-98h]
  bool v21; // [rsp+70h] [rbp-90h]
  _DWORD v22[7]; // [rsp+74h] [rbp-8Ch] BYREF
  bool v23; // [rsp+90h] [rbp-70h]
  __int64 v24; // [rsp+94h] [rbp-6Ch]
  __int64 (__fastcall *v25)(struct IRawInputClient *, unsigned int, struct IRawInputProvider **); // [rsp+A0h] [rbp-60h]
  __int64 v26; // [rsp+A8h] [rbp-58h]
  bool v27; // [rsp+B0h] [rbp-50h]
  int v28; // [rsp+B4h] [rbp-4Ch]
  int RIMRawInputProviderSpecific; // [rsp+B8h] [rbp-48h]
  __int64 (__fastcall *v30)(struct IRawInputClient *, unsigned int, struct IRawInputProvider **); // [rsp+C0h] [rbp-40h]
  __int64 v31; // [rsp+C8h] [rbp-38h]
  char v32; // [rsp+D0h] [rbp-30h]
  __int64 v33; // [rsp+D4h] [rbp-2Ch]
  __int64 (__fastcall *v34)(struct IRawInputClient *, unsigned int, struct IRawInputProvider **); // [rsp+E0h] [rbp-20h]
  __int64 v35; // [rsp+E8h] [rbp-18h]
  char v36; // [rsp+F0h] [rbp-10h]
  __int64 v37; // [rsp+F4h] [rbp-Ch]
  __int64 v38; // [rsp+100h] [rbp+0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+138h] [rbp+38h]

  if ( !ISMScenarios::s_instance )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x1C,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\ismstatics\\system\\ismscenarios.cpp",
      a4);
  if ( *(_DWORD *)ISMScenarios::s_instance )
  {
    if ( *(_DWORD *)ISMScenarios::s_instance == 1 )
    {
      v15[1] = (__int64)RIMRawInputProvider::Create;
      v15[2] = 262123LL;
      if ( !ISMTestMode::s_instance )
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          (void *)0x21,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\ismstatics\\system\\ismtestmode.cpp",
          a4);
      v16 = *(_BYTE *)ISMTestMode::s_instance == 0;
      v17[0] = 0;
      v17[1] = GetRIMRawInputProviderSpecific(1LL);
      v12 = v17;
      do
      {
        if ( IsEdition(*(_QWORD *)(v12 - 3)) && *((_BYTE *)v12 - 4) && *v12 == a3 )
        {
          v15[0] = 0LL;
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v15);
          v13 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(v12 - 5))(a2, (unsigned int)v12[1], v15);
          if ( v13 < 0 )
            wil::details::in1diag3::FailFast_Hr(
              retaddr,
              (void *)0xA3,
              (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\manager\\lib\\inputprovidermanager.cpp",
              (const char *)(unsigned int)v13,
              v14);
          v14 = *(_OWORD *)(v12 - 3);
          std::vector<InputProvider>::emplace_back<InputProvider>(a1, &v14);
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v15);
        }
        v12 += 8;
      }
      while ( v12 - 5 != (_DWORD *)&v18 );
    }
  }
  else
  {
    v19 = GameControllerRawInputProvider::Create;
    v20 = 253419LL;
    if ( !ISMTestMode::s_instance )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x21,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\ismstatics\\system\\ismtestmode.cpp",
        a4);
    v21 = *(_BYTE *)ISMTestMode::s_instance == 0;
    *(_QWORD *)v22 = 0LL;
    *(_QWORD *)&v22[3] = MPCRawInputProvider::Create;
    *(_QWORD *)&v22[5] = 262123LL;
    v23 = (unsigned __int8)IsGetMPCInputPostProcessorPresent(retaddr) != 0;
    v24 = 0LL;
    v25 = RIMRawInputProvider::Create;
    v26 = 262123LL;
    if ( !ISMTestMode::s_instance )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x21,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\ismstatics\\system\\ismtestmode.cpp",
        v7);
    v27 = *(_BYTE *)ISMTestMode::s_instance == 0;
    v28 = 0;
    RIMRawInputProviderSpecific = GetRIMRawInputProviderSpecific(0LL);
    v30 = LampArrayRawInputProvider::Create;
    v31 = 262123LL;
    v32 = 1;
    v33 = 0LL;
    v34 = InjectionRawInputProvider::Create;
    v35 = 262123LL;
    if ( !ISMTestMode::s_instance )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x21,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\ismstatics\\system\\ismtestmode.cpp",
        v8);
    v36 = 0;
    v37 = 0LL;
    v9 = v22;
    do
    {
      if ( IsEdition(*(_QWORD *)(v9 - 3)) && *((_BYTE *)v9 - 4) && *v9 == a3 )
      {
        v15[0] = 0LL;
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v15);
        v11 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(v9 - 5))(a2, (unsigned int)v9[1], v15);
        if ( v11 < 0 )
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0x88,
            (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\manager\\lib\\inputprovidermanager.cpp",
            (const char *)(unsigned int)v11,
            v14);
        v14 = *(_OWORD *)(v9 - 3);
        std::vector<InputProvider>::emplace_back<InputProvider>(a1, &v14);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v15);
      }
      v9 += 8;
    }
    while ( v9 - 5 != (_DWORD *)&v38 );
  }
  return 0LL;
}
