/*
 * XREFs of ?OpenAudioSystemEffectsPropertyStore@EffectPack@@SAJPEAUHKEY__@@IKPEAU_GUID@@PEAPEAUIAudioSystemEffectsPropertyStore@@@Z @ 0x180144EB0
 * Callers:
 *     ?CreateEffectPackContexts@CEndpointCharacteristics@@AEAAJPEAVEffectPack@@@Z @ 0x1801333B0 (-CreateEffectPackContexts@CEndpointCharacteristics@@AEAAJPEAVEffectPack@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180014EAC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x1800A206C (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 *     __security_check_cookie @ 0x1800A3DA0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800A4EB4 (memset_0.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x1800B6890 (--1-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@@YAJ0@ZU-$integral.c)
 */

__int64 __fastcall EffectPack::OpenAudioSystemEffectsPropertyStore(
        HKEY hKey,
        DWORD dwIndex,
        __int64 a3,
        struct _GUID *a4,
        struct IAudioSystemEffectsPropertyStore **a5)
{
  HRESULT v8; // eax
  unsigned int v9; // ebx
  unsigned int v11; // eax
  HKEY v12; // rcx
  int AudioSystemEffectsPropertyStore; // eax
  HKEY phkResult; // [rsp+40h] [rbp-C0h] BYREF
  DWORD cchName; // [rsp+48h] [rbp-B8h] BYREF
  GUID pclsid; // [rsp+50h] [rbp-B0h] BYREF
  WCHAR Name[264]; // [rsp+60h] [rbp-A0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+2A8h] [rbp+1A8h]

  *a4 = GUID_00000000_0000_0000_0000_000000000000;
  *a5 = 0LL;
  memset_0(Name, 0, 0x208uLL);
  cchName = 260;
  if ( RegEnumKeyExW(hKey, dwIndex, Name, &cchName, 0LL, 0LL, 0LL, 0LL) != 259 )
  {
    pclsid = 0LL;
    v8 = CLSIDFromString(Name, &pclsid);
    v9 = v8;
    if ( v8 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x162,
        (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\effectpack.cpp",
        (const char *)(unsigned int)v8);
      return v9;
    }
    phkResult = 0LL;
    v11 = RegOpenKeyExW(hKey, Name, 0, 0x20019u, &phkResult);
    if ( v11 )
    {
      v9 = wil::details::in1diag3::Return_Win32(
             retaddr,
             (void *)0x166,
             (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\effectpack.cpp",
             (const char *)v11);
LABEL_9:
      wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>(&phkResult);
      return v9;
    }
    v12 = phkResult;
    phkResult = 0LL;
    AudioSystemEffectsPropertyStore = MMDeviceCreateAudioSystemEffectsPropertyStore(v12, a5);
    v9 = AudioSystemEffectsPropertyStore;
    if ( AudioSystemEffectsPropertyStore < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x169,
        (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\effectpack.cpp",
        (const char *)(unsigned int)AudioSystemEffectsPropertyStore);
      goto LABEL_9;
    }
    *a4 = pclsid;
    wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>(&phkResult);
  }
  return 0LL;
}
