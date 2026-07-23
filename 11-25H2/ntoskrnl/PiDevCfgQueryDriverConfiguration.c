/*
 * XREFs of PiDevCfgQueryDriverConfiguration @ 0x140A7AA64
 * Callers:
 *     PiDevCfgCheckDeviceNeedsUpdate @ 0x14071C9FC (PiDevCfgCheckDeviceNeedsUpdate.c)
 *     PiDevCfgRequestDriverConfigurations @ 0x14071F4B8 (PiDevCfgRequestDriverConfigurations.c)
 *     PpDevCfgProcessDeviceExtensions @ 0x14072097C (PpDevCfgProcessDeviceExtensions.c)
 *     PiDevCfgConfigureDevice @ 0x14097F7D4 (PiDevCfgConfigureDevice.c)
 *     PiDevCfgQueryIncludedDriverConfigurations @ 0x140A7B244 (PiDevCfgQueryIncludedDriverConfigurations.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14043FFA0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     PiDevCfgQueryObjectProperties @ 0x140892AE0 (PiDevCfgQueryObjectProperties.c)
 *     _PnpGetObjectProperty @ 0x1408CB8A0 (_PnpGetObjectProperty.c)
 *     RtlFreeAnsiString @ 0x1408F1D50 (RtlFreeAnsiString.c)
 *     RtlStringFromGUIDEx @ 0x140965070 (RtlStringFromGUIDEx.c)
 *     RtlpQueryRegistryValues @ 0x1409B3FD0 (RtlpQueryRegistryValues.c)
 *     PiDevCfgVerifyService @ 0x140A7B0B8 (PiDevCfgVerifyService.c)
 *     PiDevCfgQueryIncludedDriverConfigurations @ 0x140A7B244 (PiDevCfgQueryIncludedDriverConfigurations.c)
 *     PiDevCfgBuildDriverConfigurationId @ 0x140A9E750 (PiDevCfgBuildDriverConfigurationId.c)
 *     ExFreePool @ 0x140B62CB0 (ExFreePool.c)
 */

__int64 __fastcall PiDevCfgQueryDriverConfiguration(__int64 a1)
{
  int v1; // eax
  int ObjectProperties; // ebx
  const WCHAR *v4; // rbx
  int RegistryValues; // eax
  const WCHAR *v6; // rcx
  const WCHAR *v7; // rsi
  __int64 v8; // rax
  const WCHAR *v9; // rsi
  __int64 v10; // rax
  __int64 v11; // r9
  __int64 v12; // rdx
  char v13; // al
  ULONG v15; // [rsp+28h] [rbp-E0h]
  __int16 v16; // [rsp+68h] [rbp-A0h] BYREF
  char v17; // [rsp+6Ah] [rbp-9Eh] BYREF
  int v18; // [rsp+6Ch] [rbp-9Ch] BYREF
  __int64 v19; // [rsp+70h] [rbp-98h] BYREF
  UNICODE_STRING DestinationString; // [rsp+78h] [rbp-90h] BYREF
  __int64 *v21; // [rsp+98h] [rbp-70h] BYREF
  int v22; // [rsp+A0h] [rbp-68h]
  __int64 v23; // [rsp+A8h] [rbp-60h]
  int v24; // [rsp+B0h] [rbp-58h]
  int v25; // [rsp+B8h] [rbp-50h]
  const int *v26; // [rsp+C0h] [rbp-48h]
  int v27; // [rsp+C8h] [rbp-40h]
  __int64 v28; // [rsp+D0h] [rbp-38h]
  int v29; // [rsp+DCh] [rbp-2Ch]
  int v30; // [rsp+E0h] [rbp-28h]
  __int64 *v31; // [rsp+E8h] [rbp-20h]
  int v32; // [rsp+F0h] [rbp-18h]
  __int16 *v33; // [rsp+F8h] [rbp-10h]
  int v34; // [rsp+100h] [rbp-8h]
  int v35; // [rsp+108h] [rbp+0h]
  __int64 *v36; // [rsp+110h] [rbp+8h]
  int v37; // [rsp+118h] [rbp+10h]
  UNICODE_STRING *p_DestinationString; // [rsp+120h] [rbp+18h]
  int v39; // [rsp+12Ch] [rbp+24h]
  int v40; // [rsp+130h] [rbp+28h]
  int v41[4]; // [rsp+138h] [rbp+30h] BYREF
  const wchar_t *v42; // [rsp+148h] [rbp+40h]
  __int64 v43; // [rsp+150h] [rbp+48h]
  int v44; // [rsp+158h] [rbp+50h]
  int v45; // [rsp+178h] [rbp+70h]
  const wchar_t *v46; // [rsp+180h] [rbp+78h]
  __int64 v47; // [rsp+188h] [rbp+80h]
  int v48; // [rsp+190h] [rbp+88h]
  int v49; // [rsp+1B0h] [rbp+A8h]
  const wchar_t *v50; // [rsp+1B8h] [rbp+B0h]
  __int64 v51; // [rsp+1C0h] [rbp+B8h]
  int v52; // [rsp+1C8h] [rbp+C0h]
  int v53; // [rsp+1E8h] [rbp+E0h]
  const wchar_t *v54; // [rsp+1F0h] [rbp+E8h]
  __int64 v55; // [rsp+1F8h] [rbp+F0h]
  int v56; // [rsp+200h] [rbp+F8h]
  int v57; // [rsp+220h] [rbp+118h]
  const wchar_t *v58; // [rsp+228h] [rbp+120h]
  __int64 v59; // [rsp+230h] [rbp+128h]
  int v60; // [rsp+238h] [rbp+130h]
  int v61; // [rsp+258h] [rbp+150h]
  const wchar_t *v62; // [rsp+260h] [rbp+158h]
  __int64 v63; // [rsp+268h] [rbp+160h]
  int v64; // [rsp+270h] [rbp+168h]
  int v65; // [rsp+290h] [rbp+188h]
  const wchar_t *v66; // [rsp+298h] [rbp+190h]
  __int64 v67; // [rsp+2A0h] [rbp+198h]
  int v68; // [rsp+2A8h] [rbp+1A0h]
  int v69; // [rsp+2C8h] [rbp+1C0h]
  const wchar_t *v70; // [rsp+2D0h] [rbp+1C8h]
  __int64 v71; // [rsp+2D8h] [rbp+1D0h]
  int v72; // [rsp+2E0h] [rbp+1D8h]
  int v73; // [rsp+300h] [rbp+1F8h]
  const wchar_t *v74; // [rsp+308h] [rbp+200h]
  __int64 v75; // [rsp+310h] [rbp+208h]
  int v76; // [rsp+318h] [rbp+210h]

  v1 = *(_DWORD *)(a1 + 184);
  v16 = 0;
  v17 = 0;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  v18 = 1;
  LODWORD(v19) = 0;
  if ( (v1 & 0x20) != 0 )
  {
    v4 = *(const WCHAR **)(a1 + 32);
    if ( !v4 )
      return (unsigned int)-1073740653;
  }
  else
  {
    ObjectProperties = PiDevCfgBuildDriverConfigurationId(a1, a1 + 424);
    if ( ObjectProperties < 0 )
      goto LABEL_78;
    if ( !*(_QWORD *)(a1 + 24) )
      goto LABEL_5;
    v4 = *(const WCHAR **)(a1 + 32);
    if ( !v4 )
      goto LABEL_5;
  }
  memset_0(v41, 0, 0x230uLL);
  v44 = 0x1000000;
  v48 = 117440512;
  v41[2] = 288;
  v52 = 117440512;
  v42 = L"Service";
  v56 = 117440512;
  v45 = 304;
  v43 = a1 + 288;
  v49 = 304;
  v46 = L"LowerFilters";
  v53 = 304;
  v50 = L"UpperFilters";
  v60 = 0x4000000;
  v54 = L"Win32Services";
  v64 = 117440512;
  v58 = L"ConfigFlags";
  v59 = a1 + 416;
  v62 = L"IncludedInfs";
  v66 = L"IncludedConfigs";
  v70 = L"Reboot";
  v71 = a1 + 420;
  v74 = L"ShimIds";
  v61 = 304;
  v68 = 117440512;
  v65 = 304;
  v72 = 0x4000000;
  v69 = 288;
  v76 = 117440512;
  v73 = 304;
  v75 = a1 + 400;
  v47 = a1 + 304;
  v51 = a1 + 320;
  v55 = a1 + 336;
  v57 = 292;
  v63 = a1 + 352;
  v67 = a1 + 368;
  RegistryValues = RtlpQueryRegistryValues(3221225472LL, v4, (__int64)v41, 0LL, v15, 1);
  ObjectProperties = RegistryValues;
  if ( RegistryValues == -1073741772 )
    goto LABEL_5;
  if ( RegistryValues < 0 )
    goto LABEL_78;
  if ( *(_WORD *)(a1 + 304) <= 2u && *(_QWORD *)(a1 + 312) )
    RtlFreeAnsiString((PUNICODE_STRING)(a1 + 304));
  if ( *(_WORD *)(a1 + 320) <= 2u && *(_QWORD *)(a1 + 328) )
    RtlFreeAnsiString((PUNICODE_STRING)(a1 + 320));
  if ( *(_WORD *)(a1 + 336) <= 2u && *(_QWORD *)(a1 + 344) )
    RtlFreeAnsiString((PUNICODE_STRING)(a1 + 336));
  if ( *(_WORD *)(a1 + 352) <= 2u && *(_QWORD *)(a1 + 360) )
    RtlFreeAnsiString((PUNICODE_STRING)(a1 + 352));
  if ( *(_WORD *)(a1 + 368) <= 2u && *(_QWORD *)(a1 + 376) )
    RtlFreeAnsiString((PUNICODE_STRING)(a1 + 368));
  if ( *(_WORD *)(a1 + 400) <= 2u && *(_QWORD *)(a1 + 408) )
    RtlFreeAnsiString((PUNICODE_STRING)(a1 + 400));
  if ( (*(_DWORD *)(a1 + 184) & 0x20) != 0 )
  {
    if ( (*(_DWORD *)(a1 + 104) & 4) == 0 && *(_QWORD *)(a1 + 296) )
      RtlFreeAnsiString((PUNICODE_STRING)(a1 + 288));
    if ( (*(_DWORD *)(a1 + 104) & 2) == 0 )
    {
      if ( *(_QWORD *)(a1 + 312) )
        RtlFreeAnsiString((PUNICODE_STRING)(a1 + 304));
      if ( *(_QWORD *)(a1 + 328) )
        RtlFreeAnsiString((PUNICODE_STRING)(a1 + 320));
    }
  }
  v6 = *(const WCHAR **)(a1 + 296);
  if ( v6 )
  {
    if ( *(_WORD *)(a1 + 288) )
    {
      ObjectProperties = PiDevCfgVerifyService(v6);
      if ( ObjectProperties < 0 )
      {
LABEL_5:
        ObjectProperties = -1073740653;
        goto LABEL_78;
      }
    }
  }
  v7 = *(const WCHAR **)(a1 + 312);
  if ( v7 )
  {
    while ( *v7 )
    {
      ObjectProperties = PiDevCfgVerifyService(v7);
      if ( ObjectProperties < 0 )
        goto LABEL_5;
      v8 = -1LL;
      do
        ++v8;
      while ( v7[v8] );
      v7 += v8 + 1;
    }
    if ( ObjectProperties < 0 )
      goto LABEL_78;
  }
  v9 = *(const WCHAR **)(a1 + 328);
  if ( v9 )
  {
    while ( *v9 )
    {
      ObjectProperties = PiDevCfgVerifyService(v9);
      if ( ObjectProperties < 0 )
        goto LABEL_5;
      v10 = -1LL;
      do
        ++v10;
      while ( v9[v10] );
      v9 += v10 + 1;
    }
    if ( ObjectProperties < 0 )
      goto LABEL_78;
  }
  if ( (*(_DWORD *)(a1 + 184) & 0x20) != 0 )
    goto LABEL_77;
  memset_0(&v21, 0, 0xA0uLL);
  v11 = *(_QWORD *)(a1 + 16);
  v12 = *(_QWORD *)(a1 + 64);
  v21 = DEVPKEY_DriverPackage_ClassGuid;
  v22 = 13;
  v26 = &DEVPKEY_DriverPackage_ProviderName;
  v31 = DEVPKEY_DriverPackage_NeedsReconfig;
  v33 = &v16;
  v23 = a1 + 240;
  v36 = DEVPKEY_DriverPackage_GroupIds;
  v24 = 16;
  p_DestinationString = &DestinationString;
  v27 = 18;
  v28 = a1 + 272;
  v29 = 6;
  v32 = 17;
  v34 = 1;
  v37 = 8210;
  v39 = 6;
  ObjectProperties = PiDevCfgQueryObjectProperties(6LL, v12, 8, v11, (__int64)&v21, 4u);
  if ( ObjectProperties < 0 )
    goto LABEL_78;
  if ( v25 < 0 )
  {
    *(_OWORD *)(a1 + 240) = 0LL;
LABEL_60:
    if ( v30 < 0 )
      RtlInitUnicodeString((PUNICODE_STRING)(a1 + 272), 0LL);
    if ( v35 >= 0 )
    {
      v13 = v16;
    }
    else
    {
      v13 = 0;
      LOBYTE(v16) = 0;
    }
    if ( v13 == -1 )
      *(_DWORD *)(a1 + 184) |= 0x40u;
    if ( v40 < 0 )
      RtlInitUnicodeString(&DestinationString, 0LL);
    if ( DestinationString.Buffer )
    {
      if ( DestinationString.Length > 2u )
      {
        *(_DWORD *)(a1 + 184) |= 0x80u;
        if ( (int)PnpGetObjectProperty(
                    *(_QWORD **)&PiPnpRtlCtx,
                    *(const WCHAR **)(a1 + 64),
                    8u,
                    *(void **)(a1 + 16),
                    0LL,
                    (__int64)DEVPKEY_DriverPackage_NoGroupUpdate,
                    &v18,
                    &v17,
                    1u,
                    (__int64)&v19,
                    0) < 0
          || v18 != 17
          || (_DWORD)v19 != 1
          || !v17 )
        {
          *(_DWORD *)(a1 + 184) |= 0x100u;
        }
      }
    }
    ObjectProperties = PiDevCfgQueryIncludedDriverConfigurations(a1);
    if ( ObjectProperties < 0 )
      goto LABEL_78;
LABEL_77:
    *(_DWORD *)(a1 + 184) |= 1u;
    goto LABEL_78;
  }
  ObjectProperties = RtlStringFromGUIDEx((PGUID)(a1 + 240), (PUNICODE_STRING)(a1 + 256), 1u);
  if ( ObjectProperties >= 0 )
    goto LABEL_60;
LABEL_78:
  if ( DestinationString.Buffer )
    ExFreePool(DestinationString.Buffer);
  return (unsigned int)ObjectProperties;
}
