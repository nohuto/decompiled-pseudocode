/*
 * XREFs of PpDevCfgProcessDeviceExtensions @ 0x14072A910
 * Callers:
 *     PiConfigureDevice @ 0x140721A7C (PiConfigureDevice.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     PiDevCfgAppendMultiSz @ 0x140726258 (PiDevCfgAppendMultiSz.c)
 *     RtlFreeAnsiString @ 0x1408B69C0 (RtlFreeAnsiString.c)
 *     _CmGetDeviceRegProp @ 0x1408C35E0 (_CmGetDeviceRegProp.c)
 *     PiDevCfgQueryDriverConfiguration @ 0x1409C7EF4 (PiDevCfgQueryDriverConfiguration.c)
 *     PiDevCfgFindDeviceDriver @ 0x1409C86B4 (PiDevCfgFindDeviceDriver.c)
 *     PiDevCfgInitDeviceContext @ 0x1409C9D7C (PiDevCfgInitDeviceContext.c)
 *     PiDevCfgFreeDeviceContext @ 0x1409C9EF4 (PiDevCfgFreeDeviceContext.c)
 *     PiDevCfgQueryObjectProperties @ 0x1409CA030 (PiDevCfgQueryObjectProperties.c)
 *     PiDevCfgConfigureDeviceDriver @ 0x1409CCA78 (PiDevCfgConfigureDeviceDriver.c)
 *     PiDevCfgSetDeviceRegProp @ 0x1409CDCF0 (PiDevCfgSetDeviceRegProp.c)
 *     PiDevCfgSetObjectProperty @ 0x140A70328 (PiDevCfgSetObjectProperty.c)
 *     PiDevCfgFreeDriverNode @ 0x140ABF4A0 (PiDevCfgFreeDriverNode.c)
 */

__int64 __fastcall PpDevCfgProcessDeviceExtensions(__int64 a1)
{
  wchar_t *v2; // r12
  wchar_t *v3; // r13
  int v4; // r15d
  int inited; // ebx
  __int64 v6; // rcx
  __int64 v7; // rsi
  __int64 v8; // rdx
  __int64 *v9; // rdi
  int DriverConfiguration; // eax
  char v11; // r9
  UNICODE_STRING *v12; // rcx
  __int64 v13; // rdi
  int Buffer; // ecx
  unsigned int v15; // r12d
  __int64 v16; // r13
  __int64 v17; // rdx
  __int64 *v18; // rax
  __int64 v19; // rcx
  __int64 *v20; // rax
  __int64 *v21; // rdi
  __int64 v22; // r8
  __int64 v23; // r8
  __int64 v24; // rdx
  int v25; // ecx
  int v26; // eax
  __int64 v28; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v29; // [rsp+70h] [rbp-98h] BYREF
  __int64 v30; // [rsp+78h] [rbp-90h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+80h] [rbp-88h] BYREF
  UNICODE_STRING DestinationString; // [rsp+90h] [rbp-78h] BYREF
  UNICODE_STRING v33; // [rsp+A0h] [rbp-68h] BYREF
  UNICODE_STRING v34; // [rsp+B0h] [rbp-58h] BYREF
  UNICODE_STRING v35; // [rsp+C0h] [rbp-48h] BYREF
  __int64 *v36; // [rsp+D0h] [rbp-38h] BYREF
  __int64 v37; // [rsp+D8h] [rbp-30h]
  UNICODE_STRING *p_DestinationString; // [rsp+E0h] [rbp-28h]
  int v39; // [rsp+E8h] [rbp-20h]
  int v40; // [rsp+ECh] [rbp-1Ch]
  __int64 v41; // [rsp+F0h] [rbp-18h]
  UNICODE_STRING v42; // [rsp+F8h] [rbp-10h] BYREF
  UNICODE_STRING v43; // [rsp+108h] [rbp+0h] BYREF
  UNICODE_STRING v44; // [rsp+118h] [rbp+10h] BYREF
  UNICODE_STRING v45; // [rsp+128h] [rbp+20h] BYREF
  UNICODE_STRING v46; // [rsp+138h] [rbp+30h] BYREF
  _BYTE v47[16]; // [rsp+158h] [rbp+50h] BYREF
  __int64 v48; // [rsp+168h] [rbp+60h]
  __int128 v49; // [rsp+1B8h] [rbp+B0h]
  __int128 v50; // [rsp+1C8h] [rbp+C0h]
  UNICODE_STRING *v51; // [rsp+1D8h] [rbp+D0h]

  memset_0(v47, 0, 0x58uLL);
  LODWORD(v30) = 1;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  v2 = 0LL;
  v29 = 0LL;
  v3 = 0LL;
  *(_QWORD *)&v35.Length = 0LL;
  v4 = 0;
  v35.Buffer = 0LL;
  *(_QWORD *)&v42.Length = 0LL;
  v42.Buffer = 0LL;
  *(_QWORD *)&v43.Length = 0LL;
  v43.Buffer = 0LL;
  *(_QWORD *)&v44.Length = 0LL;
  v44.Buffer = 0LL;
  *(_QWORD *)&v45.Length = 0LL;
  v45.Buffer = 0LL;
  *(_QWORD *)&v46.Length = 0LL;
  v46.Buffer = 0LL;
  *(_QWORD *)&v33.Length = 0LL;
  v33.Buffer = 0LL;
  *(_QWORD *)&v34.Length = 0LL;
  v34.Buffer = 0LL;
  *(_QWORD *)&UnicodeString.Length = 0LL;
  UnicodeString.Buffer = 0LL;
  v49 = 0LL;
  v51 = 0LL;
  v50 = 0LL;
  v28 = 0LL;
  if ( !PiDevCfgMode )
  {
    inited = 0;
    goto LABEL_68;
  }
  v6 = *(_QWORD *)(a1 + 48);
  if ( !v6 )
  {
    inited = -1073741808;
    goto LABEL_68;
  }
  inited = PiDevCfgInitDeviceContext(v6, 0LL, v47);
  if ( inited < 0 )
    goto LABEL_66;
  v7 = v48;
  v8 = *(_QWORD *)(a1 + 48);
  v36 = DEVPKEY_Device_PendingConfigurationIds;
  p_DestinationString = &DestinationString;
  v37 = 8210LL;
  v39 = 0;
  v41 = 0LL;
  v40 = 6;
  inited = PiDevCfgQueryObjectProperties(1, v8, 1, v48, (__int64)&v36, 1);
  if ( inited < 0 )
    goto LABEL_66;
  if ( (int)v41 < 0 )
    RtlInitUnicodeString(&DestinationString, 0LL);
  inited = PiDevCfgFindDeviceDriver(v47, DestinationString.Buffer, &v29);
  if ( inited < 0 )
    goto LABEL_66;
  v9 = *(__int64 **)(v29 + 208);
  if ( v9 == (__int64 *)(v29 + 208) )
    goto LABEL_50;
  do
  {
    DriverConfiguration = PiDevCfgQueryDriverConfiguration(v9);
    inited = DriverConfiguration;
    if ( DriverConfiguration == -1073740653 )
    {
      v11 = 1;
      v12 = &v35;
    }
    else
    {
      if ( DriverConfiguration < 0 )
        goto LABEL_66;
      if ( v9[37] )
      {
        *((_DWORD *)v9 + 46) &= ~1u;
        goto LABEL_29;
      }
      if ( v9[39] )
      {
        inited = PiDevCfgAppendMultiSz(&v42, 0LL, (const void **)v9 + 38, 0);
        if ( inited < 0 )
          goto LABEL_66;
      }
      if ( v9[41] )
      {
        inited = PiDevCfgAppendMultiSz(&v43, 0LL, (const void **)v9 + 40, 0);
        if ( inited < 0 )
          goto LABEL_66;
      }
      if ( v9[43] )
      {
        inited = PiDevCfgAppendMultiSz(&v44, 0LL, (const void **)v9 + 42, 0);
        if ( inited < 0 )
          goto LABEL_66;
      }
      if ( v9[45] )
      {
        inited = PiDevCfgAppendMultiSz(&v45, 0LL, (const void **)v9 + 44, 0);
        if ( inited < 0 )
          goto LABEL_66;
      }
      if ( v9[47] )
      {
        inited = PiDevCfgAppendMultiSz(&v46, 0LL, (const void **)v9 + 46, 0);
        if ( inited < 0 )
          goto LABEL_66;
      }
      v4 |= *((_DWORD *)v9 + 104);
      inited = PiDevCfgAppendMultiSz(&v33, (const void **)v9 + 5, 0LL, 0);
      if ( inited < 0 )
        goto LABEL_66;
      v11 = 0;
      v12 = &v34;
    }
    inited = PiDevCfgAppendMultiSz(v12, (const void **)v9 + 53, 0LL, v11);
    if ( inited < 0 )
      goto LABEL_66;
LABEL_29:
    v9 = (__int64 *)*v9;
  }
  while ( v9 != (__int64 *)(v29 + 208) );
  v13 = 0LL;
  if ( inited < 0 )
    goto LABEL_66;
  Buffer = (int)v35.Buffer;
  if ( v35.Buffer )
  {
    inited = PiDevCfgSetObjectProperty(PiPnpRtlCtx, (unsigned int)v47, *(_QWORD *)(a1 + 48), 1, v7);
    if ( inited >= 0 )
      inited = -1073740653;
    goto LABEL_66;
  }
  v15 = 0;
  *(_QWORD *)&v49 = &v42;
  *((_QWORD *)&v49 + 1) = &v43;
  *(_QWORD *)&v50 = &v44;
  *((_QWORD *)&v50 + 1) = &v45;
  v51 = &v46;
  do
  {
    v16 = *(_QWORD *)((char *)&v49 + v13);
    if ( *(_QWORD *)(v16 + 8) )
    {
      v17 = *(_QWORD *)(a1 + 48);
      v18 = *(__int64 **)((char *)&off_140FD86A8 + v13);
      v39 = 0;
      v41 = 0LL;
      v36 = v18;
      p_DestinationString = &UnicodeString;
      v37 = 8210LL;
      v40 = 6;
      inited = PiDevCfgQueryObjectProperties(Buffer, v17, 1, v7, (__int64)&v36, 1);
      if ( inited < 0 )
        goto LABEL_66;
      if ( (int)v41 < 0 )
        RtlInitUnicodeString(&UnicodeString, 0LL);
      inited = PiDevCfgAppendMultiSz(&UnicodeString, 0LL, (const void **)v16, 0);
      if ( inited < 0 )
        goto LABEL_66;
      inited = PiDevCfgSetObjectProperty(PiPnpRtlCtx, (unsigned int)v47, *(_QWORD *)(a1 + 48), 1, v7);
      if ( inited < 0 )
        goto LABEL_66;
      RtlFreeAnsiString(&UnicodeString);
    }
    ++v15;
    v13 += 8LL;
  }
  while ( v15 < 5 );
  v19 = v29;
  v20 = (__int64 *)(v29 + 208);
  v21 = *(__int64 **)(v29 + 208);
  while ( v21 != v20 )
  {
    if ( (v21[23] & 1) != 0 )
    {
      inited = PiDevCfgConfigureDeviceDriver(a1, (unsigned int)v47, (_DWORD)v21, (unsigned int)&v28, 0LL);
      if ( inited < 0 )
        goto LABEL_66;
      v4 |= v28;
      v19 = v29;
    }
    v21 = (__int64 *)*v21;
    v20 = (__int64 *)(v19 + 208);
  }
  v2 = v33.Buffer;
  v3 = v34.Buffer;
LABEL_50:
  if ( DestinationString.Buffer )
    PiDevCfgSetObjectProperty(PiPnpRtlCtx, (unsigned int)v47, *(_QWORD *)(a1 + 48), 1, v7);
  v22 = *(_QWORD *)(a1 + 48);
  if ( v2 )
  {
    inited = PiDevCfgSetObjectProperty(PiPnpRtlCtx, (unsigned int)v47, v22, 1, v7);
    if ( inited < 0 )
      goto LABEL_66;
  }
  else
  {
    PiDevCfgSetObjectProperty(PiPnpRtlCtx, (unsigned int)v47, v22, 1, v7);
  }
  v23 = *(_QWORD *)(a1 + 48);
  if ( v3 )
  {
    inited = PiDevCfgSetObjectProperty(PiPnpRtlCtx, (unsigned int)v47, v23, 1, v7);
    if ( inited < 0 )
      goto LABEL_66;
  }
  else
  {
    PiDevCfgSetObjectProperty(PiPnpRtlCtx, (unsigned int)v47, v23, 1, v7);
  }
  if ( v4 )
  {
    v24 = *(_QWORD *)(a1 + 48);
    HIDWORD(v28) = 4;
    if ( (int)CmGetDeviceRegProp(PiPnpRtlCtx, v24, v7, 11, (__int64)&v30, (__int64)&v28, (__int64)&v28 + 4, 0) < 0
      || (_DWORD)v30 != 4
      || (v26 = v28, HIDWORD(v28) != 4) )
    {
      v26 = 0;
    }
    LODWORD(v28) = v4 | v26;
    PiDevCfgSetDeviceRegProp(v25, (unsigned int)v47, 11, 4, (__int64)&v28, 4);
  }
LABEL_66:
  if ( v29 )
    PiDevCfgFreeDriverNode(v29);
LABEL_68:
  RtlFreeAnsiString(&DestinationString);
  RtlFreeAnsiString(&v42);
  RtlFreeAnsiString(&v43);
  RtlFreeAnsiString(&v44);
  RtlFreeAnsiString(&v45);
  RtlFreeAnsiString(&v46);
  RtlFreeAnsiString(&v33);
  RtlFreeAnsiString(&v34);
  RtlFreeAnsiString(&UnicodeString);
  RtlFreeAnsiString(&v35);
  PiDevCfgFreeDeviceContext(v47);
  return (unsigned int)inited;
}
