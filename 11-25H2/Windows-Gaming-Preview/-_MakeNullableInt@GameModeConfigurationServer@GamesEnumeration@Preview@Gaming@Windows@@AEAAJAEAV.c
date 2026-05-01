/*
 * XREFs of ?_MakeNullableInt@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJAEAV?$ComPtr@U?$IReference@H@Foundation@Windows@@@WRL@Microsoft@@H@Z @ 0x180037AD0
 * Callers:
 *     ?_LoadPropertyValues@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x180037464 (-_LoadPropertyValues@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJX.c)
 *     ?_ValidateAndSetNumericValue@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJPEAU?$IReference@H@Foundation@5@IAEAV?$ComPtr@U?$IReference@H@Foundation@Windows@@@WRL@Microsoft@@@Z @ 0x1800387A8 (-_ValidateAndSetNumericValue@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows.c)
 *     ?put_CpuExclusivityMaskHigh@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAU?$IReference@H@Foundation@5@@Z @ 0x180038CE0 (-put_CpuExclusivityMaskHigh@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@.c)
 *     ?put_CpuExclusivityMaskLow@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAU?$IReference@H@Foundation@5@@Z @ 0x180038F00 (-put_CpuExclusivityMaskLow@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@.c)
 * Callees:
 *     __security_check_cookie @ 0x180001D00 (__security_check_cookie.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180008B04 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18000E7B4 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180045010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer::_MakeNullableInt(
        __int64 a1,
        __int64 *a2,
        unsigned int a3)
{
  HRESULT v5; // eax
  int ActivationFactory; // eax
  unsigned int v7; // ebx
  __int64 v8; // rcx
  int v10; // eax
  __int64 (__fastcall ***v11)(_QWORD, _QWORD, _QWORD); // rcx
  __int64 v12; // rcx
  __int64 (__fastcall ***v13)(_QWORD, _QWORD, _QWORD); // rbx
  __int64 (__fastcall *v14)(_QWORD, GUID *, __int64 *); // rsi
  __int64 v15; // rcx
  int v16; // eax
  __int64 (__fastcall ***v17)(_QWORD, _QWORD, _QWORD); // rcx
  __int64 v18; // rcx
  __int64 (__fastcall ***v19)(_QWORD, _QWORD, _QWORD); // rcx
  __int64 v20; // rcx
  __int64 v21; // [rsp+20h] [rbp-40h] BYREF
  __int64 (__fastcall ***v22)(_QWORD, GUID *, __int64 *); // [rsp+28h] [rbp-38h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+30h] [rbp-30h] BYREF
  HSTRING string; // [rsp+48h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]

  v21 = 0LL;
  string = 0LL;
  v5 = WindowsCreateStringReference(L"Windows.Foundation.PropertyValue", 0x20u, &hstringHeader, &string);
  if ( v5 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v5);
    JUMPOUT(0x180037D00LL);
  }
  ActivationFactory = RoGetActivationFactory(string, &GUID_629bdbc8_d932_4ff4_96b9_8d96c5c1e858, &v21);
  v7 = ActivationFactory;
  if ( ActivationFactory < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x111,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamemodeconfiguration.cpp",
      (const char *)(unsigned int)ActivationFactory);
    v8 = v21;
    if ( v21 )
    {
      v21 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    }
    return v7;
  }
  v22 = 0LL;
  v10 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v21 + 80LL))(v21, a3, &v22);
  v7 = v10;
  if ( v10 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x114,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamemodeconfiguration.cpp",
      (const char *)(unsigned int)v10);
    v11 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v22;
    if ( v22 )
    {
      v22 = 0LL;
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD)))(*v11)[2])(v11);
    }
    v12 = v21;
    if ( v21 )
    {
      v21 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    }
    return v7;
  }
  v13 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v22;
  v14 = **v22;
  v15 = *a2;
  if ( *a2 )
  {
    *a2 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  }
  v16 = v14(v13, &GUID_548cefbd_bc8a_5fa0_8df2_957440fc8bf4, a2);
  v7 = v16;
  if ( v16 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x115,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamemodeconfiguration.cpp",
      (const char *)(unsigned int)v16);
    v17 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v22;
    if ( v22 )
    {
      v22 = 0LL;
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD)))(*v17)[2])(v17);
    }
    v18 = v21;
    if ( v21 )
    {
      v21 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
    }
    return v7;
  }
  v19 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v22;
  if ( v22 )
  {
    v22 = 0LL;
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD)))(*v19)[2])(v19);
  }
  v20 = v21;
  if ( v21 )
  {
    v21 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
  }
  return 0LL;
}
