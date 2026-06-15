/*
 * XREFs of ?OpenSessionKey@@YAJPEAUIAudioSessionInfo@@PEAUHKEY__@@PEAPEAU2@@Z @ 0x18000F540
 * Callers:
 *     ?LoadPropertyStore@@YAJPEAUIAudioSessionInfo@@PEAPEAUIPropertyStore@@@Z @ 0x18000EE40 (-LoadPropertyStore@@YAJPEAUIAudioSessionInfo@@PEAPEAUIPropertyStore@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800059D4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@CStringData@ATL@@QEAAXXZ @ 0x18000FDD8 (-Release@CStringData@ATL@@QEAAXXZ.c)
 *     ?Hash@?$CStringElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@ATL@@SAKPEBG@Z @ 0x180010208 (-Hash@-$CStringElementTraits@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@ATL.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUHKEY__@@@Z @ 0x1800175C8 (-reset@-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@@YAJ0@ZU-$inte.c)
 *     ??1?$unique_ptr@GU?$default_delete@G@std@@@std@@QEAA@XZ @ 0x180019184 (--1-$unique_ptr@GU-$default_delete@G@std@@@std@@QEAA@XZ.c)
 *     ??0?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@XZ @ 0x18001B5E4 (--0-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@XZ.c)
 *     ?Format@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAXPEBGZZ @ 0x18001B6A0 (-Format@-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAXPEBGZZ.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x18001BB58 (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 *     ??1?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@XZ @ 0x18001D8FC (--1-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002067C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180020754 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?CreateLowRightsRegistryKey@@YAJPEAUHKEY__@@PEBGKPEAPEAU1@@Z @ 0x180042804 (-CreateLowRightsRegistryKey@@YAJPEAUHKEY__@@PEBGKPEAPEAU1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18004C010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall OpenSessionKey(struct IAudioSessionInfo *a1, HKEY a2, HKEY *a3)
{
  HKEY v3; // r12
  RPC_STATUS v5; // eax
  RPC_STATUS *v6; // rbx
  unsigned int v7; // ebx
  __int64 v9; // rax
  int v10; // eax
  unsigned int v11; // edi
  unsigned int v12; // r14d
  __int64 v13; // r13
  __int64 v14; // rax
  void *v15; // rcx
  LPCWSTR v16; // rdi
  unsigned int v17; // eax
  DWORD i; // r14d
  const unsigned __int16 *v19; // rdi
  int v20; // eax
  LPCWSTR *p_lpSubKey; // rcx
  HKEY v22; // rdi
  LSTATUS v23; // eax
  unsigned int v24; // esi
  void *v25; // rcx
  unsigned int ValueW; // eax
  HKEY v27; // rcx
  unsigned __int64 v28; // rcx
  unsigned __int64 v29; // rax
  char *v30; // r15
  unsigned int v31; // eax
  HKEY v32; // rcx
  ATL::CAtlException *v33; // rbx
  ATL::CAtlException *v34; // rbx
  ATL::CAtlException *v35; // rbx
  unsigned int phkResult; // [rsp+20h] [rbp-C8h]
  unsigned int phkResulta; // [rsp+20h] [rbp-C8h]
  unsigned int phkResultb; // [rsp+20h] [rbp-C8h]
  LPVOID pv; // [rsp+40h] [rbp-A8h] BYREF
  DWORD pcbData; // [rsp+48h] [rbp-A0h] BYREF
  HKEY hKey; // [rsp+50h] [rbp-98h] BYREF
  char *v42; // [rsp+58h] [rbp-90h]
  LPCWSTR lpSubKey; // [rsp+60h] [rbp-88h] BYREF
  HKEY v44; // [rsp+68h] [rbp-80h] BYREF
  unsigned int v45; // [rsp+70h] [rbp-78h]
  char *v46; // [rsp+78h] [rbp-70h] BYREF
  LPCWSTR v47; // [rsp+80h] [rbp-68h] BYREF
  RPC_STATUS *v48; // [rsp+88h] [rbp-60h]
  char v49; // [rsp+90h] [rbp-58h]
  ATL::CAtlException *v50; // [rsp+98h] [rbp-50h] BYREF
  ATL::CAtlException *v51; // [rsp+A0h] [rbp-48h] BYREF
  ATL::CAtlException *v52; // [rsp+A8h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+0h]
  RPC_STATUS v56; // [rsp+108h] [rbp+20h] BYREF

  v3 = a2;
  *a3 = 0LL;
  v5 = RpcImpersonateClient(0LL);
  v56 = v5;
  v6 = &v56;
  v48 = &v56;
  v49 = 1;
  if ( v5 && v5 != 1725 )
  {
    if ( v5 > 0 )
      v7 = (unsigned __int16)v5 | 0x80070000;
    else
      v7 = v5;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x112,
      (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\audiosessionstore.cpp",
      (const char *)v7);
    if ( !v56 )
      RpcRevertToSelf();
    return v7;
  }
  v9 = *(_QWORD *)a1;
  pv = 0LL;
  v10 = (*(__int64 (__fastcall **)(struct IAudioSessionInfo *, LPVOID *))(v9 + 144))(a1, &pv);
  v11 = v10;
  if ( v10 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x115,
      (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\audiosessionstore.cpp",
      (const char *)(unsigned int)v10);
    if ( pv )
      CoTaskMemFree(pv);
    if ( !v56 )
      RpcRevertToSelf();
    return v11;
  }
  try
  {
    v45 = 0;
    v45 = ATL::CStringElementTraits<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>>::Hash(pv);
  }
  catch ( ATL::CAtlException *v50 )
  {
    v33 = v50;
    if ( *(_DWORD *)v50 == -1073741571 )
      _o__resetstkoflw();
    LODWORD(v42) = *(_DWORD *)v33;
    v7 = (unsigned int)v42;
    if ( (int)v42 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x11D,
        (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\audiosessionstore.cpp",
        (const char *)(unsigned int)v42);
      if ( pv )
        CoTaskMemFree(pv);
      if ( !v56 )
        goto LABEL_19;
      return v7;
    }
    v3 = a2;
    v6 = v48;
  }
  v12 = 0;
  v13 = -1LL;
  while ( 1 )
  {
    LODWORD(v42) = v12;
    v14 = ((__int64 (__fastcall *)(void ***))ATL::g_strmgr[3])(&ATL::g_strmgr);
    try
    {
      lpSubKey = (LPCWSTR)(v14 + 24);
      ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Format(
        &lpSubKey,
        L"%x_%d",
        v45,
        v12);
    }
    catch ( ATL::CAtlException *v51 )
    {
      v34 = v51;
      if ( *(_DWORD *)v51 == -1073741571 )
        _o__resetstkoflw();
      LODWORD(v46) = *(_DWORD *)v34;
      v7 = (unsigned int)v46;
      if ( (int)v46 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x126,
          (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\audiosessionstore.cpp",
          (const char *)(unsigned int)v46);
        ATL::CStringData::Release((ATL::CStringData *)(lpSubKey - 12));
        v15 = pv;
        if ( pv )
LABEL_25:
          CoTaskMemFree(v15);
LABEL_26:
        if ( !*v48 )
        {
LABEL_19:
          RpcRevertToSelf();
          return v7;
        }
        return v7;
      }
      v13 = -1LL;
      v3 = a2;
      v6 = v48;
      v12 = (unsigned int)v42;
    }
    hKey = 0LL;
    v16 = lpSubKey;
    v17 = RegOpenKeyExW(v3, lpSubKey, 0, 0x2001Fu, &hKey);
    if ( v17 == 2 )
    {
      if ( hKey )
        RegCloseKey(hKey);
      ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::~CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(&lpSubKey);
      for ( i = 0; ; ++i )
      {
        pcbData = i;
        ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(&v47);
        try
        {
          ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Format(
            &v47,
            L"%x_%d",
            v45,
            i);
        }
        catch ( ATL::CAtlException *v52 )
        {
          v35 = v52;
          if ( *(_DWORD *)v52 == -1073741571 )
            _o__resetstkoflw();
          LODWORD(v46) = *(_DWORD *)v35;
          v7 = (unsigned int)v46;
          if ( (int)v46 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x145,
              (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\audiosessionstore.cpp",
              (const char *)(unsigned int)v46);
            ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::~CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(&v47);
            v15 = pv;
            if ( !pv )
              goto LABEL_26;
            goto LABEL_25;
          }
          v13 = -1LL;
          v3 = a2;
          v6 = v48;
          i = pcbData;
        }
        v44 = 0LL;
        wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::reset(
          &v44,
          0LL);
        v19 = v47;
        if ( RegOpenKeyExW(v3, v47, 0, 0x20019u, &v44) )
          break;
        if ( v44 )
          RegCloseKey(v44);
        ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::~CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(&v47);
      }
      if ( v44 )
        RegCloseKey(v44);
      v44 = 0LL;
      wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::reset(
        &v44,
        0LL);
      v20 = CreateLowRightsRegistryKey(v3, v19, 0x2001Fu, &v44);
      v11 = v20;
      if ( v20 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x152,
          (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\audiosessionstore.cpp",
          (const char *)(unsigned int)v20);
        if ( v44 )
          RegCloseKey(v44);
        p_lpSubKey = &v47;
        goto LABEL_72;
      }
      do
        ++v13;
      while ( *((_WORD *)pv + v13) );
      v22 = v44;
      v23 = RegSetValueExW(v44, 0LL, 0, 1u, (const BYTE *)pv, 2 * v13 + 2);
      v24 = v23;
      if ( v23 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x156,
          (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\audiosessionstore.cpp",
          (const char *)(unsigned int)v23);
        if ( v22 )
          RegCloseKey(v22);
        ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::~CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(&v47);
        if ( pv )
          CoTaskMemFree(pv);
        if ( !*v6 )
          RpcRevertToSelf();
        return v24;
      }
      *a3 = v22;
      ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::~CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(&v47);
      if ( pv )
        CoTaskMemFree(pv);
      if ( *v6 )
        return 0LL;
LABEL_86:
      RpcRevertToSelf();
      return 0LL;
    }
    if ( v17 )
    {
      v11 = wil::details::in1diag3::Return_Win32(
              retaddr,
              (void *)0x12C,
              (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\audiosessionstore.cpp",
              (const char *)v17,
              phkResult);
      if ( hKey )
        RegCloseKey(hKey);
      ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::~CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(&lpSubKey);
      v25 = pv;
      if ( pv )
        goto LABEL_65;
      goto LABEL_66;
    }
    pcbData = 0;
    ValueW = RegGetValueW(hKey, 0LL, 0LL, 2u, 0LL, 0LL, &pcbData);
    if ( ValueW )
    {
      v11 = wil::details::in1diag3::Return_Win32(
              retaddr,
              (void *)0x12F,
              (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\audiosessionstore.cpp",
              (const char *)ValueW,
              phkResulta);
      v27 = hKey;
      if ( hKey )
        goto LABEL_70;
      goto LABEL_71;
    }
    v28 = ((unsigned __int64)pcbData >> 1) + 1;
    v29 = 2 * v28;
    if ( !is_mul_ok(v28, 2uLL) )
      v29 = -1LL;
    v30 = (char *)operator new[](v29, (const struct std::nothrow_t *)&std::nothrow);
    v46 = v30;
    if ( !v30 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x132,
        (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\audiosessionstore.cpp",
        (const char *)0x8007000ELL);
      std::unique_ptr<unsigned short>::~unique_ptr<unsigned short>(&v46);
      if ( hKey )
        RegCloseKey(hKey);
      ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::~CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(&lpSubKey);
      if ( pv )
        CoTaskMemFree(pv);
      if ( !*v6 )
        RpcRevertToSelf();
      return 2147942414LL;
    }
    v31 = RegGetValueW(hKey, 0LL, 0LL, 2u, 0LL, v30, &pcbData);
    if ( v31 )
      break;
    if ( CompareStringW(0x7Fu, 1u, (PCNZWCH)pv, -1, (PCNZWCH)v30, -1) == 2 )
    {
      v32 = hKey;
      hKey = 0LL;
      *a3 = v32;
      std::unique_ptr<unsigned short>::~unique_ptr<unsigned short>(&v46);
      if ( hKey )
        RegCloseKey(hKey);
      ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::~CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(&lpSubKey);
      if ( pv )
        CoTaskMemFree(pv);
      if ( *v6 )
        return 0LL;
      goto LABEL_86;
    }
    operator delete(v30, (const struct std::nothrow_t *)2);
    if ( hKey )
      RegCloseKey(hKey);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)v16 - 2, 0xFFFFFFFF) <= 1 )
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)v16 - 3) + 8LL))(*((_QWORD *)v16 - 3));
    ++v12;
    v6 = v48;
  }
  v11 = wil::details::in1diag3::Return_Win32(
          retaddr,
          (void *)0x134,
          (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\audiosessionstore.cpp",
          (const char *)v31,
          phkResultb);
  std::unique_ptr<unsigned short>::~unique_ptr<unsigned short>(&v46);
  v27 = hKey;
  if ( hKey )
LABEL_70:
    RegCloseKey(v27);
LABEL_71:
  p_lpSubKey = &lpSubKey;
LABEL_72:
  ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::~CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(p_lpSubKey);
  v25 = pv;
  if ( pv )
LABEL_65:
    CoTaskMemFree(v25);
LABEL_66:
  if ( *v6 )
    return v11;
  RpcRevertToSelf();
  return v11;
}
