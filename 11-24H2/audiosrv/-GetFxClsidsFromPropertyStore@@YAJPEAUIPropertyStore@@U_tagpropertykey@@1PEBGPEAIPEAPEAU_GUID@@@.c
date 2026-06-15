/*
 * XREFs of ?GetFxClsidsFromPropertyStore@@YAJPEAUIPropertyStore@@U_tagpropertykey@@1PEBGPEAIPEAPEAU_GUID@@@Z @ 0x18008EE8C
 * Callers:
 *     ?ReadConfiguration@EffectPackConfiguration@@QEAAJPEAUIPropertyStore@@0W4ValidEffectPackConfigurationSettings@@@Z @ 0x180145224 (-ReadConfiguration@EffectPackConfiguration@@QEAAJPEAUIPropertyStore@@0W4ValidEffectPackConfigura.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180014EAC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ @ 0x180043528 (-Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ.c)
 *     ?IsAPOClsidRegistered@@YA_NPEAUHKEY__@@U_GUID@@@Z @ 0x180043B9C (-IsAPOClsidRegistered@@YA_NPEAUHKEY__@@U_GUID@@@Z.c)
 *     ??8@YAHAEBU_tagpropertykey@@0@Z @ 0x18005374C (--8@YAHAEBU_tagpropertykey@@0@Z.c)
 *     ??$make_unique_cotaskmem_nothrow@$$BY0A@U_GUID@@@wil@@YA?AV?$unique_ptr@$$BY0A@U_GUID@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@_K@Z @ 0x180061644 (--$make_unique_cotaskmem_nothrow@$$BY0A@U_GUID@@@wil@@YA-AV-$unique_ptr@$$BY0A@U_GUID@@U-$functi.c)
 *     ??4?$unique_ptr@UtWAVEFORMATEX@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@QEAAAEAV01@$$QEAV01@@Z @ 0x18006EA80 (--4-$unique_ptr@UtWAVEFORMATEX@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@YAX0@Z@wil@@@wis.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x1800A206C (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 *     __security_check_cookie @ 0x1800A3DA0 (__security_check_cookie.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x1800B6890 (--1-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@@YAJ0@ZU-$integral.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall GetFxClsidsFromPropertyStore(
        struct IPropertyStore *a1,
        struct _tagpropertykey *a2,
        struct _tagpropertykey *a3,
        const unsigned __int16 *a4,
        unsigned int *a5,
        struct _GUID **a6)
{
  const unsigned __int16 *v6; // r15
  WCHAR *v9; // r13
  LPCLSID v10; // rbx
  unsigned int v11; // esi
  int v12; // eax
  __int64 v13; // r8
  const char *v14; // r9
  unsigned int v15; // edi
  unsigned __int64 v16; // r9
  __int64 v17; // rdx
  int v18; // eax
  __int64 v19; // rdx
  void **v20; // rax
  void *v21; // rcx
  HRESULT v22; // eax
  int v23; // eax
  __int64 v24; // r8
  const char *v25; // r9
  void **unique_cotaskmem; // rax
  void *v27; // rcx
  unsigned int v28; // edi
  __int64 v29; // r14
  HRESULT v30; // eax
  HRESULT v31; // r15d
  unsigned int v32; // r14d
  GUID *v33; // rdi
  int v34; // eax
  CONFIGRET v35; // eax
  DWORD v36; // eax
  CONFIGRET v37; // eax
  DWORD v38; // eax
  unsigned int phkDevice; // [rsp+20h] [rbp-F0h]
  const char *ulFlags; // [rsp+28h] [rbp-E8h]
  LPVOID pv; // [rsp+90h] [rbp-80h] BYREF
  DEVNODE pdnDevInst; // [rsp+98h] [rbp-78h] BYREF
  LPCLSID pclsid; // [rsp+A0h] [rbp-70h] BYREF
  DEVINSTID_W pDeviceID[2]; // [rsp+A8h] [rbp-68h] BYREF
  __int64 v46; // [rsp+B8h] [rbp-58h]
  LPCOLESTR lpsz[2]; // [rsp+C0h] [rbp-50h] BYREF
  __int64 v48; // [rsp+D0h] [rbp-40h]
  const unsigned __int16 *v49; // [rsp+D8h] [rbp-38h]
  GUID rguid; // [rsp+E0h] [rbp-30h] BYREF
  struct _GUID **v51; // [rsp+100h] [rbp-10h]
  unsigned int *v52; // [rsp+108h] [rbp-8h]
  GUID v53; // [rsp+110h] [rbp+0h] BYREF
  int v54; // [rsp+120h] [rbp+10h]
  wil::details::in1diag3 *retaddr; // [rsp+178h] [rbp+68h]

  v6 = a4;
  v49 = a4;
  v52 = a5;
  v51 = a6;
  v9 = 0LL;
  *a5 = 0;
  *a6 = 0LL;
  *(_OWORD *)lpsz = 0LL;
  v48 = 0LL;
  v10 = 0LL;
  pclsid = 0LL;
  v11 = 0;
  v12 = ((__int64 (__fastcall *)(struct IPropertyStore *, struct _tagpropertykey *, LPCOLESTR *))a1->lpVtbl->GetValue)(
          a1,
          a2,
          lpsz);
  v15 = v12;
  if ( v12 < 0 )
  {
    v16 = (unsigned int)v12;
    v17 = 332LL;
LABEL_44:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v17,
      (int)"avcore\\audiocore\\server\\lib\\audioengineutil\\epcutil.cpp",
      (const char *)v16);
    goto LABEL_61;
  }
  v18 = LOWORD(lpsz[0]);
  if ( !LOWORD(lpsz[0]) )
  {
    if ( (unsigned int)operator==((__int64)a3, (__int64)&unk_1801902B0) )
      goto LABEL_30;
    v23 = ((__int64 (__fastcall *)(struct IPropertyStore *, struct _tagpropertykey *, LPCOLESTR *))a1->lpVtbl->GetValue)(
            a1,
            a3,
            lpsz);
    v15 = v23;
    if ( v23 < 0 )
    {
      v16 = (unsigned int)v23;
      v17 = 347LL;
      goto LABEL_44;
    }
    v18 = LOWORD(lpsz[0]);
    if ( !LOWORD(lpsz[0]) )
      goto LABEL_30;
    if ( LOWORD(lpsz[0]) != 4127 )
    {
      v19 = 350LL;
      goto LABEL_6;
    }
    v11 = (unsigned int)lpsz[1];
    if ( !LODWORD(lpsz[1]) )
    {
      v15 = -2147024883;
      v17 = 351LL;
LABEL_43:
      v16 = v15;
      goto LABEL_44;
    }
    unique_cotaskmem = (void **)wil::make_unique_cotaskmem_nothrow<_GUID [0]>(&pv, LODWORD(lpsz[1]), v24, v25);
    wistd::unique_ptr<tWAVEFORMATEX,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::operator=(
      (void **)&pclsid,
      unique_cotaskmem);
    v27 = pv;
    pv = 0LL;
    if ( v27 )
      CoTaskMemFree(v27);
    v10 = pclsid;
    if ( pclsid )
    {
      v28 = 0;
      if ( v11 )
      {
        v29 = 0LL;
        do
        {
          v30 = CLSIDFromString(*(LPCOLESTR *)(v29 + v48), &v10[v28]);
          v31 = v30;
          if ( v30 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x166,
              (int)"avcore\\audiocore\\server\\lib\\audioengineutil\\epcutil.cpp",
              (const char *)(unsigned int)v30);
LABEL_39:
            CoTaskMemFree(v10);
LABEL_40:
            v15 = v31;
            goto LABEL_61;
          }
          ++v28;
          v29 += 8LL;
        }
        while ( v28 < v11 );
        v6 = v49;
      }
      goto LABEL_30;
    }
    v17 = 355LL;
LABEL_42:
    v15 = -2147024882;
    goto LABEL_43;
  }
  if ( LOWORD(lpsz[0]) != 31 )
  {
    v19 = 338LL;
LABEL_6:
    LODWORD(ulFlags) = v18;
    v15 = -2147023092;
    wil::details::in1diag3::Return_HrMsg(
      retaddr,
      (void *)v19,
      (int)"avcore\\audiocore\\server\\lib\\audioengineutil\\epcutil.cpp",
      (const char *)0x8007070CLL,
      (__int64)"0x%08X",
      ulFlags);
    goto LABEL_61;
  }
  v11 = 1;
  v20 = (void **)wil::make_unique_cotaskmem_nothrow<_GUID [0]>(&pv, 1uLL, v13, v14);
  wistd::unique_ptr<tWAVEFORMATEX,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::operator=(
    (void **)&pclsid,
    v20);
  v21 = pv;
  pv = 0LL;
  if ( v21 )
    CoTaskMemFree(v21);
  v10 = pclsid;
  if ( !pclsid )
  {
    v17 = 342LL;
    goto LABEL_42;
  }
  v22 = CLSIDFromString(lpsz[1], pclsid);
  v15 = v22;
  if ( v22 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x157,
      (int)"avcore\\audiocore\\server\\lib\\audioengineutil\\epcutil.cpp",
      (const char *)(unsigned int)v22);
    goto LABEL_12;
  }
LABEL_30:
  v32 = 0;
  if ( !v11 )
  {
LABEL_60:
    *v51 = v10;
    *v52 = v11;
    v15 = (unsigned int)v9;
    goto LABEL_61;
  }
  v33 = v10;
  while ( 1 )
  {
    *(_OWORD *)pDeviceID = 0LL;
    v46 = 0LL;
    if ( v6 )
    {
      v9 = (WCHAR *)v6;
    }
    else
    {
      *(_QWORD *)&rguid.Data1 = v9;
      *(_QWORD *)rguid.Data4 = v9;
      v53 = *v33;
      v54 = 100;
      v34 = ((__int64 (__fastcall *)(struct IPropertyStore *, GUID *, DEVINSTID_W *))a1->lpVtbl->GetValue)(
              a1,
              &v53,
              pDeviceID);
      v31 = v34;
      if ( v34 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x17B,
          (int)"avcore\\audiocore\\server\\lib\\audioengineutil\\epcutil.cpp",
          (const char *)(unsigned int)v34);
        PropVariantClear((PROPVARIANT *)pDeviceID);
        if ( !v10 )
          goto LABEL_40;
        goto LABEL_39;
      }
      if ( LOWORD(pDeviceID[0]) != 31 || (v9 = pDeviceID[1]) == 0LL )
      {
        rguid = *v33;
        if ( !IsAPOClsidRegistered(HKEY_CLASSES_ROOT, &rguid) )
        {
          LODWORD(ulFlags) = v10[v32].Data1;
          v15 = -2005139398;
          wil::details::in1diag3::Return_HrMsg(
            retaddr,
            (void *)0x19F,
            (int)"avcore\\audiocore\\server\\lib\\audioengineutil\\epcutil.cpp",
            (const char *)0x887C003ALL,
            (__int64)"Missing APO registration for {%08X-%04X-%04X-%02X%02X-%02X%02X%02X%02X%02X%02X}",
            ulFlags,
            v10[v32].Data2,
            v10[v32].Data3,
            v10[v32].Data4[0],
            v10[v32].Data4[1],
            v10[v32].Data4[2],
            v10[v32].Data4[3],
            v10[v32].Data4[4],
            v10[v32].Data4[5],
            v10[v32].Data4[6],
            v10[v32].Data4[7]);
          goto LABEL_58;
        }
        goto LABEL_50;
      }
    }
    pdnDevInst = 0;
    v35 = CM_Locate_DevNodeW(&pdnDevInst, v9, 0);
    v36 = CM_MapCrToWin32Err(v35, 0x507u);
    if ( v36 )
      break;
    pv = 0LL;
    v37 = CM_Open_DevNode_Key(pdnDevInst, 0x20019u, 0, 1u, (PHKEY)&pv, 1u);
    v38 = CM_MapCrToWin32Err(v37, 0x507u);
    if ( v38 )
    {
      v15 = wil::details::in1diag3::Return_Win32(
              retaddr,
              (void *)0x191,
              (unsigned int)"avcore\\audiocore\\server\\lib\\audioengineutil\\epcutil.cpp",
              (const char *)v38,
              phkDevice);
      goto LABEL_56;
    }
    rguid = *v33;
    if ( !IsAPOClsidRegistered((HKEY)pv, &rguid) )
    {
      LODWORD(ulFlags) = v10[v32].Data1;
      v15 = -2005139398;
      wil::details::in1diag3::Return_HrMsg(
        retaddr,
        (void *)0x197,
        (int)"avcore\\audiocore\\server\\lib\\audioengineutil\\epcutil.cpp",
        (const char *)0x887C003ALL,
        (__int64)"Missing device relative APO registration for {%08X-%04X-%04X-%02X%02X-%02X%02X%02X%02X%02X%02X} deviceId: %ws",
        ulFlags,
        v10[v32].Data2,
        v10[v32].Data3,
        v10[v32].Data4[0],
        v10[v32].Data4[1],
        v10[v32].Data4[2],
        v10[v32].Data4[3],
        v10[v32].Data4[4],
        v10[v32].Data4[5],
        v10[v32].Data4[6],
        v10[v32].Data4[7],
        v9);
LABEL_56:
      wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>(&pv);
      goto LABEL_58;
    }
    wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>(&pv);
    v9 = 0LL;
LABEL_50:
    PropVariantClear((PROPVARIANT *)pDeviceID);
    ++v32;
    ++v33;
    if ( v32 >= v11 )
      goto LABEL_60;
    v6 = v49;
  }
  v15 = wil::details::in1diag3::Return_Win32(
          retaddr,
          (void *)0x18D,
          (unsigned int)"avcore\\audiocore\\server\\lib\\audioengineutil\\epcutil.cpp",
          (const char *)v36,
          phkDevice);
LABEL_58:
  PropVariantClear((PROPVARIANT *)pDeviceID);
  if ( !v10 )
    goto LABEL_61;
LABEL_12:
  CoTaskMemFree(v10);
LABEL_61:
  PropVariantClear((PROPVARIANT *)lpsz);
  return v15;
}
