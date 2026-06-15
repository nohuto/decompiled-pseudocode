/*
 * XREFs of ?LoadPropertyStore@CAudioSessionPropertyStore@@AEAAJXZ @ 0x1800169D0
 * Callers:
 *     ?LoadPropertyStore@@YAJPEAUIAudioSessionInfo@@PEAPEAUIPropertyStore@@@Z @ 0x18000F0DC (-LoadPropertyStore@@YAJPEAUIAudioSessionInfo@@PEAPEAUIPropertyStore@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180007BD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUHKEY__@@@Z @ 0x1800173A8 (-reset@-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@@YAJ0@ZU-$inte.c)
 *     ??1?$unique_ptr@GU?$default_delete@G@std@@@std@@QEAA@XZ @ 0x180019054 (--1-$unique_ptr@GU-$default_delete@G@std@@@std@@QEAA@XZ.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x18001BA28 (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 *     ??1?$unique_ptr@Upropstoreinfo_tag@@U?$default_delete@Upropstoreinfo_tag@@@std@@@std@@QEAA@XZ @ 0x18001F234 (--1-$unique_ptr@Upropstoreinfo_tag@@U-$default_delete@Upropstoreinfo_tag@@@std@@@std@@QEAA@XZ.c)
 *     ??1?$MakeAllocator@VCAudioSessionPropertyStore@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x18001F970 (--1-$MakeAllocator@VCAudioSessionPropertyStore@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x180020100 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800205CC (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18002060C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800206A4 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?StringCchCopyA@@YAJPEAD_KPEBD@Z @ 0x180025BEC (-StringCchCopyA@@YAJPEAD_KPEBD@Z.c)
 *     ?StringCbCopyW@@YAJPEAG_KPEBG@Z @ 0x180031158 (-StringCbCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?StringCbLengthW@@YAJPEBG_KPEA_K@Z @ 0x180041220 (-StringCbLengthW@@YAJPEBG_KPEA_K@Z.c)
 *     ?Create@?$CComSafeArray@M$03@ATL@@QEAAJKJ@Z @ 0x180044FC0 (-Create@-$CComSafeArray@M$03@ATL@@QEAAJKJ@Z.c)
 *     ?SetAt@?$CComSafeArray@M$03@ATL@@QEAAJJAEBMH@Z @ 0x180045A20 (-SetAt@-$CComSafeArray@M$03@ATL@@QEAAJJAEBMH@Z.c)
 *     ?StringCbLengthA@@YAJPEBD_KPEA_K@Z @ 0x180045A9C (-StringCbLengthA@@YAJPEBD_KPEA_K@Z.c)
 *     memcpy_0 @ 0x18004B3CC (memcpy_0.c)
 */

__int64 __fastcall CAudioSessionPropertyStore::LoadPropertyStore(HKEY *this)
{
  DWORD v2; // edi
  unsigned int v3; // eax
  HRESULT v4; // eax
  unsigned int v5; // ebx
  RPC_STATUS v6; // eax
  signed int v7; // ebx
  unsigned int v8; // eax
  unsigned int v9; // eax
  unsigned __int64 v10; // rax
  WCHAR *v11; // r14
  BYTE *v12; // rsi
  DWORD i; // r15d
  unsigned int v14; // eax
  HKEY v15; // rdi
  unsigned __int64 v16; // rdx
  __int64 v17; // xmm0_8
  unsigned int v18; // ecx
  unsigned int v19; // ecx
  unsigned int v20; // ecx
  const unsigned __int16 *v21; // r12
  SIZE_T v22; // rbx
  LPVOID v23; // rax
  const char *v24; // r12
  SIZE_T v25; // rbx
  LPVOID v26; // rax
  BSTR v27; // rax
  __int64 v28; // rdx
  unsigned __int64 v29; // rbx
  int v30; // eax
  unsigned int v31; // r12d
  __int64 v32; // rdx
  _DWORD *v33; // r8
  char *v34; // rbx
  int v35; // eax
  SIZE_T v36; // rbx
  LPVOID v37; // rax
  bool v38; // sf
  __int64 v40; // rdx
  HKEY v41; // rcx
  SAFEARRAY *v42; // rbx
  SAFEARRAY *v43; // rbx
  HKEY v44; // rcx
  SAFEARRAY *v45; // rbx
  unsigned int v46; // edi
  unsigned int lpReserved; // [rsp+20h] [rbp-E0h]
  unsigned int lpReserveda; // [rsp+20h] [rbp-E0h]
  unsigned int lpReservedb; // [rsp+20h] [rbp-E0h]
  unsigned int lpReservedc; // [rsp+20h] [rbp-E0h]
  HKEY phkResult; // [rsp+60h] [rbp-A0h] BYREF
  WCHAR *v52; // [rsp+68h] [rbp-98h] BYREF
  BYTE *v53; // [rsp+70h] [rbp-90h] BYREF
  HKEY v54; // [rsp+78h] [rbp-88h] BYREF
  SIZE_T cb; // [rsp+80h] [rbp-80h] BYREF
  DWORD cbMaxValueNameLen; // [rsp+88h] [rbp-78h] BYREF
  DWORD cbMaxValueLen; // [rsp+8Ch] [rbp-74h] BYREF
  DWORD cchName; // [rsp+90h] [rbp-70h] BYREF
  DWORD cbData; // [rsp+94h] [rbp-6Ch] BYREF
  DWORD cValues; // [rsp+98h] [rbp-68h] BYREF
  int v61; // [rsp+9Ch] [rbp-64h]
  DWORD v62; // [rsp+A0h] [rbp-60h]
  BYTE *v63; // [rsp+A8h] [rbp-58h] BYREF
  unsigned __int64 v64; // [rsp+B0h] [rbp-50h]
  GUID pclsid; // [rsp+B8h] [rbp-48h] BYREF
  WCHAR Name[104]; // [rsp+D0h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1D8h] [rbp+D8h]

  v2 = 0;
LABEL_2:
  v62 = v2;
  cchName = 100;
  v3 = RegEnumKeyExW(this[7], v2, Name, &cchName, 0LL, 0LL, 0LL, 0LL);
  if ( v3 == 259 )
    return 0LL;
  if ( v3 )
    return wil::details::in1diag3::Return_Win32(
             retaddr,
             (void *)0x35B,
             (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\audiosessionstore.cpp",
             (const char *)v3,
             lpReserved);
  pclsid = 0LL;
  v4 = CLSIDFromString(Name, &pclsid);
  v5 = v4;
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x35E,
      (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\audiosessionstore.cpp",
      (const char *)(unsigned int)v4);
    return v5;
  }
  phkResult = 0LL;
  v6 = RpcImpersonateClient(0LL);
  v7 = v6;
  if ( v6 && v6 != 1725 )
  {
    v38 = v6 < 0;
    if ( v6 > 0 )
    {
      v7 = (unsigned __int16)v6 | 0x80070000;
      v38 = 1;
    }
    if ( v38 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x366,
        (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\audiosessionstore.cpp",
        (const char *)(unsigned int)v7);
    goto LABEL_57;
  }
  wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::reset(
    &phkResult,
    0LL);
  v8 = RegOpenKeyExW(this[7], Name, 0, 0x20019u, &phkResult);
  if ( v8 )
  {
    v46 = wil::details::in1diag3::Return_Win32(
            retaddr,
            (void *)0x368,
            (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\audiosessionstore.cpp",
            (const char *)v8,
            lpReserveda);
    if ( !v7 )
      RpcRevertToSelf();
    if ( phkResult )
      RegCloseKey(phkResult);
    return v46;
  }
  if ( !v7 )
    RpcRevertToSelf();
  cValues = 0;
  cbMaxValueNameLen = 0;
  cbMaxValueLen = 0;
  v9 = RegQueryInfoKeyW(phkResult, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL, &cValues, &cbMaxValueNameLen, &cbMaxValueLen, 0LL, 0LL);
  if ( v9 )
  {
    v7 = wil::details::in1diag3::Return_Win32(
           retaddr,
           (void *)0x36F,
           (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\audiosessionstore.cpp",
           (const char *)v9,
           lpReservedb);
    goto LABEL_57;
  }
  v10 = 2LL * ++cbMaxValueNameLen;
  if ( !is_mul_ok(cbMaxValueNameLen, 2uLL) )
    v10 = -1LL;
  v11 = (WCHAR *)operator new[](v10, (const struct std::nothrow_t *)&std::nothrow);
  v52 = v11;
  if ( !v11 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x374,
      (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\audiosessionstore.cpp",
      (const char *)0x8007000ELL);
    std::unique_ptr<unsigned short>::~unique_ptr<unsigned short>(&v52);
    v41 = phkResult;
    if ( phkResult )
      goto LABEL_101;
    return 2147942414LL;
  }
  v12 = (BYTE *)operator new[](cbMaxValueLen, (const struct std::nothrow_t *)&std::nothrow);
  v53 = v12;
  if ( !v12 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x377,
      (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\audiosessionstore.cpp",
      (const char *)0x8007000ELL);
LABEL_63:
    Microsoft::WRL::Details::MakeAllocator<CAudioSessionPropertyStore>::~MakeAllocator<CAudioSessionPropertyStore>(&v53);
    std::unique_ptr<unsigned short>::~unique_ptr<unsigned short>(&v52);
    v41 = phkResult;
    if ( phkResult )
LABEL_101:
      RegCloseKey(v41);
    return 2147942414LL;
  }
  for ( i = 0; ; ++i )
  {
    if ( i >= cValues
      || (cchName = cbMaxValueNameLen,
          cbData = cbMaxValueLen,
          v14 = RegEnumValueW(phkResult, i, v11, &cchName, 0LL, 0LL, v12, &cbData),
          v14 == 259) )
    {
      Microsoft::WRL::Details::MakeAllocator<CAudioSessionPropertyStore>::~MakeAllocator<CAudioSessionPropertyStore>(&v53);
      std::unique_ptr<unsigned short>::~unique_ptr<unsigned short>(&v52);
      if ( phkResult )
        RegCloseKey(phkResult);
      v2 = v62 + 1;
      goto LABEL_2;
    }
    if ( v14 )
    {
      v7 = wil::details::in1diag3::Return_Win32(
             retaddr,
             (void *)0x381,
             (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\audiosessionstore.cpp",
             (const char *)v14,
             lpReservedc);
      operator delete(v12, (const struct std::nothrow_t *)1);
      operator delete(v11, (const struct std::nothrow_t *)2);
      goto LABEL_57;
    }
    v15 = (HKEY)operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
    v54 = v15;
    if ( !v15 )
    {
      v28 = 900LL;
      goto LABEL_62;
    }
    *((_QWORD *)v15 + 6) = this[6];
    *((_DWORD *)v15 + 4) = _o__wtoi(v11);
    *(GUID *)v15 = pclsid;
    v17 = *((_QWORD *)v12 + 2);
    *(_OWORD *)(v15 + 6) = *(_OWORD *)v12;
    *((_QWORD *)v15 + 5) = v17;
    v18 = *((unsigned __int16 *)v15 + 12);
    if ( v18 > 0x41 )
      break;
    if ( v18 == 65 )
      goto LABEL_47;
    v19 = v18 - 8;
    if ( v19 )
    {
      v20 = v19 - 22;
      if ( v20 )
      {
        if ( v20 != 1 )
          goto LABEL_49;
        cb = 0LL;
        v21 = (const unsigned __int16 *)&v12[*((_QWORD *)v15 + 4)];
        v7 = StringCbLengthW(v21, 0x7FFFFFFFuLL, &cb);
        if ( v7 < 0 )
        {
          v40 = 965LL;
          goto LABEL_66;
        }
        v22 = cb;
        v23 = CoTaskMemAlloc(cb);
        if ( !v23 )
        {
          v28 = 968LL;
          goto LABEL_62;
        }
        *((_QWORD *)v15 + 4) = v23;
        v7 = StringCbCopyW(0LL, v22, v21);
        if ( v7 < 0 )
        {
          v40 = 971LL;
          goto LABEL_66;
        }
        goto LABEL_49;
      }
      cb = 0LL;
      v24 = (const char *)&v12[*((_QWORD *)v15 + 4)];
      v7 = StringCbLengthA(v24, v16, &cb);
      if ( v7 >= 0 )
      {
        v25 = cb;
        v26 = CoTaskMemAlloc(cb);
        if ( !v26 )
        {
          v28 = 992LL;
          goto LABEL_62;
        }
        *((_QWORD *)v15 + 4) = v26;
        v7 = StringCchCopyA(0LL, v25, v24);
        if ( v7 < 0 )
        {
          v40 = 995LL;
          goto LABEL_66;
        }
        goto LABEL_49;
      }
      v40 = 989LL;
LABEL_66:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v40,
        (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\audiosessionstore.cpp",
        (const char *)(unsigned int)v7);
      std::unique_ptr<propstoreinfo_tag>::~unique_ptr<propstoreinfo_tag>(&v54);
      Microsoft::WRL::Details::MakeAllocator<CAudioSessionPropertyStore>::~MakeAllocator<CAudioSessionPropertyStore>(&v53);
      std::unique_ptr<unsigned short>::~unique_ptr<unsigned short>(&v52);
LABEL_57:
      if ( phkResult )
        RegCloseKey(phkResult);
      return (unsigned int)v7;
    }
    v27 = SysAllocString((const OLECHAR *)&v12[*((_QWORD *)v15 + 4)]);
    *((_QWORD *)v15 + 4) = v27;
    if ( !v27 )
    {
      v28 = 981LL;
LABEL_62:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v28,
        (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\audiosessionstore.cpp",
        (const char *)0x8007000ELL);
      std::unique_ptr<propstoreinfo_tag>::~unique_ptr<propstoreinfo_tag>(&v54);
      goto LABEL_63;
    }
LABEL_49:
    this[6] = v15;
  }
  if ( v18 == 70 )
  {
LABEL_47:
    v37 = CoTaskMemAlloc(*((unsigned int *)v15 + 8));
    if ( !v37 )
    {
      v28 = 915LL;
      goto LABEL_62;
    }
    *((_QWORD *)v15 + 5) = v37;
    memcpy_0(0LL, &v12[(_QWORD)v37], *((unsigned int *)v15 + 8));
    goto LABEL_49;
  }
  if ( v18 != 8196 )
    goto LABEL_49;
  v29 = ((unsigned __int64)cbData - 24) >> 2;
  v64 = v29;
  if ( (((_BYTE)cbData - 24) & 3) != 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3A9,
      (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\audiosessionstore.cpp",
      (const char *)0x80070057LL);
    std::unique_ptr<propstoreinfo_tag>::~unique_ptr<propstoreinfo_tag>(&v54);
    Microsoft::WRL::Details::MakeAllocator<CAudioSessionPropertyStore>::~MakeAllocator<CAudioSessionPropertyStore>(&v53);
    std::unique_ptr<unsigned short>::~unique_ptr<unsigned short>(&v52);
    v44 = phkResult;
    if ( phkResult )
LABEL_94:
      RegCloseKey(v44);
    return 2147942487LL;
  }
  else
  {
    v63 = &v12[*((_QWORD *)v15 + 4)];
    cb = 0LL;
    v30 = ATL::CComSafeArray<float,4>::Create(&cb, (unsigned int)v29);
    v31 = v30;
    if ( v30 >= 0 )
    {
      v32 = 0LL;
      v33 = v63;
      while ( 1 )
      {
        v61 = v32;
        if ( (unsigned int)v32 >= v29 )
        {
          v36 = cb;
          SafeArrayUnlock((SAFEARRAY *)cb);
          *((_QWORD *)v15 + 4) = v36;
          goto LABEL_49;
        }
        v34 = (char *)(v33 + 1);
        if ( v33 + 1 < v33 )
          break;
        if ( v34 < (char *)v12 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x3B4,
            (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\audiosessionstore.cpp",
            (const char *)0x80070216LL);
          v45 = (SAFEARRAY *)cb;
          if ( !cb || SafeArrayUnlock((SAFEARRAY *)cb) < 0 )
            goto LABEL_84;
          goto LABEL_83;
        }
        if ( v34 - (char *)v12 > (unsigned __int64)cbData )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x3B6,
            (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\audiosessionstore.cpp",
            (const char *)0x80070057LL);
          v43 = (SAFEARRAY *)cb;
          if ( cb && SafeArrayUnlock((SAFEARRAY *)cb) >= 0 )
            SafeArrayDestroy(v43);
          std::unique_ptr<propstoreinfo_tag>::~unique_ptr<propstoreinfo_tag>(&v54);
          Microsoft::WRL::Details::MakeAllocator<CAudioSessionPropertyStore>::~MakeAllocator<CAudioSessionPropertyStore>(&v53);
          std::unique_ptr<unsigned short>::~unique_ptr<unsigned short>(&v52);
          v44 = phkResult;
          if ( phkResult )
            goto LABEL_94;
          return 2147942487LL;
        }
        LODWORD(v63) = *v33;
        v35 = ATL::CComSafeArray<float,4>::SetAt(&cb, v32, &v63);
        v31 = v35;
        if ( v35 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x3B9,
            (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\audiosessionstore.cpp",
            (const char *)(unsigned int)v35);
          v42 = (SAFEARRAY *)cb;
          if ( cb && SafeArrayUnlock((SAFEARRAY *)cb) >= 0 )
            goto LABEL_89;
          goto LABEL_90;
        }
        v33 = v34;
        v32 = (unsigned int)(v61 + 1);
        v29 = v64;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x3B2,
        (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\audiosessionstore.cpp",
        (const char *)0x80070216LL);
      v45 = (SAFEARRAY *)cb;
      if ( !cb || SafeArrayUnlock((SAFEARRAY *)cb) < 0 )
        goto LABEL_84;
LABEL_83:
      SafeArrayDestroy(v45);
LABEL_84:
      std::unique_ptr<propstoreinfo_tag>::~unique_ptr<propstoreinfo_tag>(&v54);
      Microsoft::WRL::Details::MakeAllocator<CAudioSessionPropertyStore>::~MakeAllocator<CAudioSessionPropertyStore>(&v53);
      std::unique_ptr<unsigned short>::~unique_ptr<unsigned short>(&v52);
      if ( phkResult )
        RegCloseKey(phkResult);
      return 2147942934LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3AD,
      (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\audiosessionstore.cpp",
      (const char *)(unsigned int)v30);
    v42 = (SAFEARRAY *)cb;
    if ( cb && SafeArrayUnlock((SAFEARRAY *)cb) >= 0 )
LABEL_89:
      SafeArrayDestroy(v42);
LABEL_90:
    std::unique_ptr<propstoreinfo_tag>::~unique_ptr<propstoreinfo_tag>(&v54);
    Microsoft::WRL::Details::MakeAllocator<CAudioSessionPropertyStore>::~MakeAllocator<CAudioSessionPropertyStore>(&v53);
    std::unique_ptr<unsigned short>::~unique_ptr<unsigned short>(&v52);
    if ( phkResult )
      RegCloseKey(phkResult);
    return v31;
  }
}
