/*
 * XREFs of ?GetAppKey@ApplicationSpecificEndpointInfo@@AEAAJK_NPEAPEAUHKEY__@@@Z @ 0x18000FE10
 * Callers:
 *     ?AttemptToUpdateEndpointInterfaceId@ApplicationSpecificEndpointInfo@@AEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@PEAPEAG@Z @ 0x180045150 (-AttemptToUpdateEndpointInterfaceId@ApplicationSpecificEndpointInfo@@AEAAJW4__MIDL___MIDL_itf_mm.c)
 *     ?LoadApplicationDefaultEndpoints@ApplicationSpecificEndpointInfo@@AEAAJXZ @ 0x180045940 (-LoadApplicationDefaultEndpoints@ApplicationSpecificEndpointInfo@@AEAAJXZ.c)
 *     ?SetPersistedDefaultAudioEndpoint@ApplicationSpecificEndpointInfo@@UEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@PEBG@Z @ 0x180046220 (-SetPersistedDefaultAudioEndpoint@ApplicationSpecificEndpointInfo@@UEAAJW4__MIDL___MIDL_itf_mmde.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800059D4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?StringCbPrintfW@@YAJPEAG_KPEBGZZ @ 0x180010190 (-StringCbPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?Hash@?$CStringElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@ATL@@SAKPEBG@Z @ 0x180010208 (-Hash@-$CStringElementTraits@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@ATL.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUHKEY__@@@Z @ 0x1800175C8 (-reset@-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@@YAJ0@ZU-$inte.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x18001BB58 (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 *     __security_check_cookie @ 0x1800201B0 (__security_check_cookie.c)
 *     ?StringCbLengthW@@YAJPEBG_KPEA_K@Z @ 0x18003EA00 (-StringCbLengthW@@YAJPEBG_KPEA_K@Z.c)
 *     ?ReadKey@ApplicationSpecificEndpointInfo@@CAJPEAUHKEY__@@PEBGPEAPEAG@Z @ 0x180045E1C (-ReadKey@ApplicationSpecificEndpointInfo@@CAJPEAUHKEY__@@PEBGPEAPEAG@Z.c)
 *     ?CreateNewRegistryKey@@YAJPEAUHKEY__@@PEBGKPEAPEAU1@@Z @ 0x180046BE0 (-CreateNewRegistryKey@@YAJPEAUHKEY__@@PEBGKPEAPEAU1@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ApplicationSpecificEndpointInfo::GetAppKey(
        ApplicationSpecificEndpointInfo *this,
        REGSAM a2,
        char a3,
        HKEY *a4)
{
  int v6; // r12d
  int v7; // eax
  unsigned int v8; // ebx
  const char *v9; // r9
  __int64 result; // rax
  HKEY v11; // rbx
  DWORD LastError; // edi
  ApplicationSpecificEndpointInfo *v13; // rdi
  int Key; // eax
  unsigned int v15; // ebx
  void *v16; // rbx
  char v17; // si
  int v18; // r15d
  HKEY v19; // rcx
  unsigned int v20; // r8d
  int v21; // eax
  unsigned int v22; // ebx
  int v23; // eax
  unsigned int v24; // ebx
  unsigned int v25; // eax
  unsigned int v26; // ebx
  PHKEY phkResult; // [rsp+20h] [rbp-288h]
  unsigned int phkResulta; // [rsp+20h] [rbp-288h]
  __int64 cchCount2; // [rsp+28h] [rbp-280h]
  HKEY hKey; // [rsp+30h] [rbp-278h] BYREF
  LPVOID pv; // [rsp+38h] [rbp-270h] BYREF
  ApplicationSpecificEndpointInfo *v32; // [rsp+40h] [rbp-268h]
  HKEY *v33; // [rsp+48h] [rbp-260h]
  WCHAR SubKey[264]; // [rsp+50h] [rbp-258h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+2A8h] [rbp+0h]

  try
  {
    v33 = a4;
    v13 = this;
    v32 = this;
    v17 = 0;
    v18 = 0;
    hKey = 0LL;
    v6 = ATL::CStringElementTraits<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>>::Hash(*((_QWORD *)this + 10));
    while ( 1 )
    {
      LODWORD(cchCount2) = v18;
      LODWORD(phkResult) = v6;
      v7 = StringCbPrintfW(
             SubKey,
             0x20AuLL,
             L"%s\\%x_%x",
             L"Software\\Microsoft\\Multimedia\\Audio\\DefaultEndpoint",
             phkResult,
             cchCount2);
      v8 = v7;
      if ( v7 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x22A,
          (int)"avcore\\audiocore\\server\\audiosrv\\applicationspecificendpointinfo\\applicationspecificendpointinfo.cpp",
          (const char *)(unsigned int)v7);
        if ( hKey )
          RegCloseKey(hKey);
        return v8;
      }
      v11 = hKey;
      if ( hKey )
      {
        LastError = GetLastError();
        RegCloseKey(v11);
        SetLastError(LastError);
        v13 = v32;
      }
      hKey = 0LL;
      if ( RegOpenKeyExW(HKEY_CURRENT_USER, SubKey, 0, a2, &hKey) )
        break;
      pv = 0LL;
      Key = ApplicationSpecificEndpointInfo::ReadKey(hKey, 0LL, (unsigned __int16 **)&pv);
      v15 = Key;
      if ( Key < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x232,
          (int)"avcore\\audiocore\\server\\audiosrv\\applicationspecificendpointinfo\\applicationspecificendpointinfo.cpp",
          (const char *)(unsigned int)Key);
        if ( pv )
          CoTaskMemFree(pv);
        if ( hKey )
          RegCloseKey(hKey);
        return v15;
      }
      v16 = pv;
      if ( CompareStringW(0x7Fu, 1u, *((PCNZWCH *)v13 + 10), -1, (PCNZWCH)pv, -1) == 2 )
      {
        v17 = 0;
      }
      else
      {
        ++v18;
        v17 = 1;
        wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::reset(
          &hKey,
          0LL);
      }
      if ( v16 )
        CoTaskMemFree(v16);
LABEL_33:
      if ( !v17 )
        goto LABEL_34;
    }
    if ( !a3 )
      goto LABEL_33;
    wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::reset(
      &hKey,
      0LL);
    v21 = CreateNewRegistryKey(v19, SubKey, v20, &hKey);
    v22 = v21;
    if ( v21 >= 0 )
    {
      pv = 0LL;
      v23 = StringCbLengthW(*((const unsigned __int16 **)v13 + 10), 0x20AuLL, (unsigned __int64 *)&pv);
      v24 = v23;
      if ( v23 >= 0 )
      {
        v25 = RegSetValueExW(hKey, 0LL, 0, 1u, *((const BYTE **)v13 + 10), (_DWORD)pv + 2);
        if ( !v25 )
        {
LABEL_34:
          if ( !hKey )
            return 2147943568LL;
          *v33 = hKey;
          return 0LL;
        }
        v26 = wil::details::in1diag3::Return_Win32(
                retaddr,
                (void *)0x256,
                (unsigned int)"avcore\\audiocore\\server\\audiosrv\\applicationspecificendpointinfo\\applicationspecificendpointinfo.cpp",
                (const char *)v25,
                phkResulta);
        if ( hKey )
          RegCloseKey(hKey);
        result = v26;
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x248,
          (int)"avcore\\audiocore\\server\\audiosrv\\applicationspecificendpointinfo\\applicationspecificendpointinfo.cpp",
          (const char *)(unsigned int)v23);
        if ( hKey )
          RegCloseKey(hKey);
        result = v24;
      }
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x244,
        (int)"avcore\\audiocore\\server\\audiosrv\\applicationspecificendpointinfo\\applicationspecificendpointinfo.cpp",
        (const char *)(unsigned int)v21);
      if ( hKey )
        RegCloseKey(hKey);
      result = v22;
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x268,
                           (unsigned int)"avcore\\audiocore\\server\\audiosrv\\applicationspecificendpointinfo\\applicati"
                                         "onspecificendpointinfo.cpp",
                           v9);
  }
  return result;
}
