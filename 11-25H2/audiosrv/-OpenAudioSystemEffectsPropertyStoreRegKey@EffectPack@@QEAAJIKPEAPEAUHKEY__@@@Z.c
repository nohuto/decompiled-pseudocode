/*
 * XREFs of ?OpenAudioSystemEffectsPropertyStoreRegKey@EffectPack@@QEAAJIKPEAPEAUHKEY__@@@Z @ 0x18013C5F0
 * Callers:
 *     ?CreateEffectPackContexts@CEndpointCharacteristics@@AEAAJPEAVEffectPack@@@Z @ 0x18012B290 (-CreateEffectPackContexts@CEndpointCharacteristics@@AEAAJPEAVEffectPack@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001AC8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x18004FB30 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x1800A5C5C (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 *     __security_check_cookie @ 0x1800A7AB0 (__security_check_cookie.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x1800B742C (--1-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@@YAJ0@ZU-$integral.c)
 *     ?GetEffectPackDevNodeRegistryRoot@@YAJPEBGPEAPEAUHKEY__@@@Z @ 0x1801257BC (-GetEffectPackDevNodeRegistryRoot@@YAJPEBGPEAPEAUHKEY__@@@Z.c)
 */

__int64 __fastcall EffectPack::OpenAudioSystemEffectsPropertyStoreRegKey(
        EffectPack *this,
        int a2,
        __int64 a3,
        HKEY *a4)
{
  __int64 v5; // rcx
  int EffectPackDevNodeRegistryRoot; // eax
  unsigned int v9; // ebx
  __int64 v10; // rdx
  unsigned int *v11; // rax
  unsigned int v12; // eax
  HKEY v13; // rax
  int phkResult; // [rsp+20h] [rbp-E0h]
  int v16; // [rsp+28h] [rbp-D8h]
  int v17; // [rsp+30h] [rbp-D0h]
  int v18; // [rsp+38h] [rbp-C8h]
  int v19; // [rsp+40h] [rbp-C0h]
  int v20; // [rsp+48h] [rbp-B8h]
  int v21; // [rsp+50h] [rbp-B0h]
  int v22; // [rsp+58h] [rbp-A8h]
  int v23; // [rsp+60h] [rbp-A0h]
  int v24; // [rsp+68h] [rbp-98h]
  int v25; // [rsp+70h] [rbp-90h]
  HKEY v26; // [rsp+80h] [rbp-80h] BYREF
  HKEY hKey; // [rsp+88h] [rbp-78h] BYREF
  WCHAR SubKey[128]; // [rsp+90h] [rbp-70h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1D8h] [rbp+D8h]

  *a4 = 0LL;
  v5 = *((_QWORD *)this + 196);
  hKey = 0LL;
  EffectPackDevNodeRegistryRoot = GetEffectPackDevNodeRegistryRoot((DEVINSTID_W)(v5 + 544), &hKey);
  v9 = EffectPackDevNodeRegistryRoot;
  if ( EffectPackDevNodeRegistryRoot >= 0 )
  {
    v11 = (unsigned int *)*((_QWORD *)this + 196);
    v25 = a2;
    v24 = *((unsigned __int8 *)v11 + 15);
    v23 = *((unsigned __int8 *)v11 + 14);
    v22 = *((unsigned __int8 *)v11 + 13);
    v21 = *((unsigned __int8 *)v11 + 12);
    v20 = *((unsigned __int8 *)v11 + 11);
    v19 = *((unsigned __int8 *)v11 + 10);
    v18 = *((unsigned __int8 *)v11 + 9);
    v17 = *((unsigned __int8 *)v11 + 8);
    v16 = *((unsigned __int16 *)v11 + 3);
    phkResult = *((unsigned __int16 *)v11 + 2);
    EffectPackDevNodeRegistryRoot = StringCchPrintfW(
                                      SubKey,
                                      128LL,
                                      L"EffectPackRegistration\\{%08x-%04x-%04x-%02x%02x-%02x%02x%02x%02x%02x%02x}\\FxProperties\\FX\\%d",
                                      *v11,
                                      phkResult,
                                      v16,
                                      v17,
                                      v18,
                                      v19,
                                      v20,
                                      v21,
                                      v22,
                                      v23,
                                      v24,
                                      v25);
    v9 = EffectPackDevNodeRegistryRoot;
    if ( EffectPackDevNodeRegistryRoot >= 0 )
    {
      v26 = 0LL;
      v12 = RegOpenKeyExW(hKey, SubKey, 0, 0x20019u, &v26);
      if ( v12 != 2 )
      {
        if ( v12 )
        {
          v9 = wil::details::in1diag3::Return_Win32(
                 retaddr,
                 (void *)0x146,
                 (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\effectpack.cpp",
                 (const char *)v12);
          wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>(&v26);
          goto LABEL_11;
        }
        v13 = v26;
        v26 = 0LL;
        *a4 = v13;
      }
      wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>(&v26);
      v9 = 0;
      goto LABEL_11;
    }
    v10 = 315LL;
  }
  else
  {
    v10 = 308LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v10,
    (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\effectpack.cpp",
    (const char *)(unsigned int)EffectPackDevNodeRegistryRoot);
LABEL_11:
  wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>(&hKey);
  return v9;
}
