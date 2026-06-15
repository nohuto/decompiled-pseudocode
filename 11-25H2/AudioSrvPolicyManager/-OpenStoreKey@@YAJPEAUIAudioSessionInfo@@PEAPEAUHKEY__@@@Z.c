/*
 * XREFs of ?OpenStoreKey@@YAJPEAUIAudioSessionInfo@@PEAPEAUHKEY__@@@Z @ 0x18000F2DC
 * Callers:
 *     ?LoadPropertyStore@@YAJPEAUIAudioSessionInfo@@PEAPEAUIPropertyStore@@@Z @ 0x18000F0DC (-LoadPropertyStore@@YAJPEAUIAudioSessionInfo@@PEAPEAUIPropertyStore@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180007BD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetThreadUserStringSid@@YAJPEAPEAG@Z @ 0x18000F64C (-GetThreadUserStringSid@@YAJPEAPEAG@Z.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x180010054 (--1-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@@YAJ0@ZU-$integral.c)
 *     ?StringCbPrintfW@@YAJPEAG_KPEBGZZ @ 0x180010430 (-StringCbPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUHKEY__@@@Z @ 0x1800173A8 (-reset@-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@@YAJ0@ZU-$inte.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x180017420 (--1-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_constan.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x180018FE0 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6APEAXPEAX@Z$1?LocalFree@@YAPEAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18001E9CC (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6APEAXPEAX@Z$1-LocalFree@@YAPEAX0@ZU.c)
 *     __security_check_cookie @ 0x180020100 (__security_check_cookie.c)
 *     ?TsSessionGetUserSid@@YAJKPEAPEAG@Z @ 0x180041AE8 (-TsSessionGetUserSid@@YAJKPEAPEAG@Z.c)
 *     ?CreateLowRightsRegistryKey@@YAJPEAUHKEY__@@PEBGKPEAPEAU1@@Z @ 0x180045024 (-CreateLowRightsRegistryKey@@YAJPEAUHKEY__@@PEBGKPEAPEAU1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18004F010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall OpenStoreKey(struct IAudioSessionInfo *a1, HKEY *a2)
{
  RPC_STATUS v4; // eax
  unsigned int v5; // edi
  bool v6; // sf
  unsigned int v8; // ebx
  int v9; // eax
  int v10; // ebx
  int ThreadUserStringSid; // eax
  int v12; // eax
  unsigned int v13; // esi
  bool v14; // sf
  unsigned int v15; // esi
  __int64 v16; // rdx
  int LowRightsRegistryKey; // eax
  HLOCAL hMem; // [rsp+30h] [rbp-D0h] BYREF
  HKEY hKey; // [rsp+38h] [rbp-C8h] BYREF
  WCHAR SubKey[264]; // [rsp+40h] [rbp-C0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+278h] [rbp+178h]

  v4 = RpcImpersonateClient(0LL);
  v5 = v4;
  if ( v4 && v4 != 1725 && v4 != 1765 )
  {
    v6 = v4 < 0;
    if ( v4 > 0 )
    {
      v5 = (unsigned __int16)v4 | 0x80070000;
      v6 = 1;
    }
    if ( v6 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xD2,
        (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\audiosessionstore.cpp",
        (const char *)v5);
    return v5;
  }
  if ( (*(unsigned int (__fastcall **)(struct IAudioSessionInfo *))(*(_QWORD *)a1 + 128LL))(a1) )
  {
    v8 = (*(__int64 (__fastcall **)(struct IAudioSessionInfo *))(*(_QWORD *)a1 + 136LL))(a1);
    hMem = 0LL;
    wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
      &hMem,
      0LL);
    TsSessionGetUserSid(v8, (unsigned __int16 **)&hMem);
    if ( hMem )
    {
      v9 = StringCbPrintfW(SubKey, 0x208uLL, L"%s\\Software\\Microsoft\\Internet Explorer\\LowRegistry");
      v10 = v9;
      if ( v9 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xBC,
          (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\audiosessionstore.cpp",
          (const char *)(unsigned int)v9);
        wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>(&hMem);
LABEL_20:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xD5,
          (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\audiosessionstore.cpp",
          (const char *)(unsigned int)v10);
LABEL_21:
        if ( !v5 )
          RpcRevertToSelf();
        return (unsigned int)v10;
      }
      wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>(&hMem);
      goto LABEL_25;
    }
    wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>(&hMem);
  }
  hMem = 0LL;
  ThreadUserStringSid = GetThreadUserStringSid((unsigned __int16 **)&hMem);
  v10 = ThreadUserStringSid;
  if ( ThreadUserStringSid < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xC4,
      (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\audiosessionstore.cpp",
      (const char *)(unsigned int)ThreadUserStringSid);
    if ( hMem )
      LocalFree(hMem);
    goto LABEL_20;
  }
  v12 = StringCbPrintfW(SubKey, 0x208uLL, L"%s\\Software\\Microsoft\\Internet Explorer\\LowRegistry", hMem);
  v10 = v12;
  if ( v12 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xC6,
      (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\audiosessionstore.cpp",
      (const char *)(unsigned int)v12);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>(&hMem);
    goto LABEL_20;
  }
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>(&hMem);
LABEL_25:
  v13 = 131103;
  hKey = 0LL;
  v10 = RegOpenKeyExW(HKEY_USERS, SubKey, 0, 0x2001Fu, &hKey);
  if ( v10 == 5 )
  {
    v13 = 131097;
    wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::reset(
      &hKey,
      0LL);
    v10 = RegOpenKeyExW(HKEY_USERS, SubKey, 0, 0x20019u, &hKey);
  }
  v14 = v10 < 0;
  if ( v10 > 0 )
  {
    v10 = (unsigned __int16)v10 | 0x80070000;
    v14 = v10 < 0;
  }
  if ( v14 )
  {
    v15 = -2147024894;
    if ( v10 == -2147024894 )
    {
      if ( hKey )
        RegCloseKey(hKey);
      goto LABEL_33;
    }
    v16 = 230LL;
    goto LABEL_37;
  }
  LowRightsRegistryKey = CreateLowRightsRegistryKey(hKey, L"Audio\\PolicyConfig\\PropertyStore", v13, a2);
  v10 = LowRightsRegistryKey;
  if ( LowRightsRegistryKey < 0 )
  {
    v15 = -2147024891;
    if ( LowRightsRegistryKey == -2147024891 )
    {
      wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>(&hKey);
LABEL_33:
      if ( !v5 )
        RpcRevertToSelf();
      return v15;
    }
    v16 = 232LL;
LABEL_37:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v16,
      (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\audiosessionstore.cpp",
      (const char *)(unsigned int)v10);
    wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>(&hKey);
    goto LABEL_21;
  }
  wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>(&hKey);
  if ( !v5 )
    RpcRevertToSelf();
  return 0LL;
}
