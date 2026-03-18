/*
 * XREFs of PiDevCfgQueryDriverNode @ 0x140892318
 * Callers:
 *     PiDevCfgFindDeviceDriver @ 0x1408914DC (PiDevCfgFindDeviceDriver.c)
 * Callees:
 *     PnpDuplicateUnicodeString @ 0x1404C1CF4 (PnpDuplicateUnicodeString.c)
 *     PnpRegistryValueExists @ 0x1405A3830 (PnpRegistryValueExists.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     ZwClose @ 0x14069B320 (ZwClose.c)
 *     ZwOpenKey @ 0x14069B380 (ZwOpenKey.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     PipCheckComputerSupported @ 0x14070DD30 (PipCheckComputerSupported.c)
 *     PiDevCfgFreeDriverNode @ 0x140891C44 (PiDevCfgFreeDriverNode.c)
 *     PiDevCfgOpenDriverConfiguration @ 0x140892218 (PiDevCfgOpenDriverConfiguration.c)
 *     PiDevCfgGetDriverPackageId @ 0x140892A04 (PiDevCfgGetDriverPackageId.c)
 *     PiDevCfgQueryObjectProperties @ 0x140892AE0 (PiDevCfgQueryObjectProperties.c)
 *     RtlCreateUnicodeString @ 0x140893990 (RtlCreateUnicodeString.c)
 *     _PnpOpenObjectRegKey @ 0x1408CAD38 (_PnpOpenObjectRegKey.c)
 *     RtlFreeAnsiString @ 0x1408F1D50 (RtlFreeAnsiString.c)
 *     RtlpQueryRegistryValues @ 0x1409B3FD0 (RtlpQueryRegistryValues.c)
 *     IopOpenRegistryKeyEx @ 0x140A3E608 (IopOpenRegistryKeyEx.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePool @ 0x140B62CB0 (ExFreePool.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiDevCfgQueryDriverNode(PCWSTR SourceString, PCWSTR a2, int a3, int a4, char a5, __int64 *a6)
{
  const WCHAR *i; // rsi
  int DriverPackageId; // ebx
  int v10; // ecx
  __int64 Pool2; // rax
  __int64 v12; // rdi
  _QWORD *v13; // rax
  PVOID *v14; // rsi
  int v15; // ecx
  NTSTATUS v16; // eax
  const WCHAR *v17; // rdx
  int v18; // eax
  __int64 v20; // rax
  int v21; // ecx
  char v22; // al
  int v23; // eax
  ULONG v24; // [rsp+20h] [rbp-E0h]
  char v25; // [rsp+40h] [rbp-C0h] BYREF
  char v26; // [rsp+41h] [rbp-BFh] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-B8h] BYREF
  int v28; // [rsp+50h] [rbp-B0h] BYREF
  HANDLE v29; // [rsp+58h] [rbp-A8h] BYREF
  HANDLE v30; // [rsp+60h] [rbp-A0h] BYREF
  PVOID P[2]; // [rsp+68h] [rbp-98h] BYREF
  UNICODE_STRING v32; // [rsp+78h] [rbp-88h] BYREF
  int v33; // [rsp+88h] [rbp-78h]
  int v34; // [rsp+8Ch] [rbp-74h]
  HANDLE KeyHandle; // [rsp+90h] [rbp-70h] BYREF
  __int64 v36; // [rsp+98h] [rbp-68h] BYREF
  PVOID v37; // [rsp+A0h] [rbp-60h]
  __int64 *v38; // [rsp+A8h] [rbp-58h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+B0h] [rbp-50h] BYREF
  ULONG v40[2]; // [rsp+E0h] [rbp-20h] BYREF
  int v41; // [rsp+E8h] [rbp-18h]
  char *v42; // [rsp+F0h] [rbp-10h]
  int v43; // [rsp+F8h] [rbp-8h]
  int v44; // [rsp+100h] [rbp+0h]
  __int64 *v45; // [rsp+108h] [rbp+8h]
  int v46; // [rsp+110h] [rbp+10h]
  __int64 *v47; // [rsp+118h] [rbp+18h]
  int v48; // [rsp+120h] [rbp+20h]
  int v49; // [rsp+124h] [rbp+24h]
  int v50; // [rsp+128h] [rbp+28h]
  const int *v51; // [rsp+130h] [rbp+30h]
  int v52; // [rsp+138h] [rbp+38h]
  int *v53; // [rsp+140h] [rbp+40h]
  int v54; // [rsp+148h] [rbp+48h]
  int v55; // [rsp+150h] [rbp+50h]
  __int64 *v56; // [rsp+158h] [rbp+58h]
  int v57; // [rsp+160h] [rbp+60h]
  __int64 v58; // [rsp+168h] [rbp+68h]
  int v59; // [rsp+170h] [rbp+70h]
  int v60; // [rsp+178h] [rbp+78h]
  __int64 *v61; // [rsp+180h] [rbp+80h]
  int v62; // [rsp+188h] [rbp+88h]
  __int64 v63; // [rsp+190h] [rbp+90h]
  unsigned int v64; // [rsp+198h] [rbp+98h]
  int v65; // [rsp+19Ch] [rbp+9Ch]
  int v66; // [rsp+1A0h] [rbp+A0h]
  int v67[2]; // [rsp+1B0h] [rbp+B0h] BYREF
  int v68; // [rsp+1B8h] [rbp+B8h]
  const wchar_t *v69; // [rsp+1C0h] [rbp+C0h]
  __int64 v70; // [rsp+1C8h] [rbp+C8h]
  int v71; // [rsp+1D0h] [rbp+D0h]
  __int64 (__fastcall *v72)(__int64, int, _QWORD *, int, int, _QWORD *); // [rsp+1E8h] [rbp+E8h]
  const wchar_t *v73; // [rsp+1F8h] [rbp+F8h]
  __int64 v74; // [rsp+200h] [rbp+100h]
  int v75; // [rsp+228h] [rbp+128h]
  const wchar_t *v76; // [rsp+230h] [rbp+130h]
  __int64 v77; // [rsp+238h] [rbp+138h]
  int v78; // [rsp+240h] [rbp+140h]

  v38 = a6;
  P[0] = 0LL;
  P[1] = 0LL;
  Handle = 0LL;
  i = 0LL;
  v26 = 0;
  v36 = 0LL;
  v37 = 0LL;
  v25 = 0;
  v32 = 0LL;
  KeyHandle = 0LL;
  v30 = 0LL;
  v29 = 0LL;
  v33 = a4;
  v34 = a3;
  v28 = -16777216;
  DriverPackageId = PiDevCfgGetDriverPackageId(SourceString, P);
  if ( DriverPackageId < 0 )
    goto LABEL_33;
  DriverPackageId = PnpOpenObjectRegKey(PiPnpRtlCtx, P[1], 8, 131097, 0, (__int64)&Handle);
  if ( DriverPackageId < 0 )
    goto LABEL_33;
  memset_0(v40, 0, 0xC8uLL);
  *(_QWORD *)v40 = DEVPKEY_DriverPackage_Invalidated;
  v42 = &v26;
  v45 = DEVPKEY_DriverPackage_TargetComputerIds;
  v47 = &v36;
  v41 = 17;
  v43 = 1;
  v46 = 8210;
  v49 = 6;
  DriverPackageId = PiDevCfgQueryObjectProperties(v10, P[1], 8, (_DWORD)Handle, (__int64)v40, 2);
  if ( DriverPackageId < 0 )
    goto LABEL_33;
  if ( v44 >= 0 && v26 == -1 )
  {
    DriverPackageId = -1073741738;
    goto LABEL_33;
  }
  if ( v50 >= 0 && v37 && (unsigned __int16)v36 > 2u )
  {
    for ( i = (const WCHAR *)v37; *i; i += v20 + 1 )
    {
      if ( PipCheckComputerSupported(i) )
        break;
      v20 = -1LL;
      do
        ++v20;
      while ( i[v20] );
    }
    if ( !*i )
      goto LABEL_77;
  }
  if ( (a5 & 8) != 0 && !i )
  {
LABEL_77:
    DriverPackageId = -1073740764;
    goto LABEL_33;
  }
  Pool2 = ExAllocatePool2(0x100uLL);
  v12 = Pool2;
  if ( !Pool2 )
  {
    DriverPackageId = -1073741670;
    goto LABEL_33;
  }
  v13 = (_QWORD *)(Pool2 + 224);
  v13[1] = v13;
  *v13 = v13;
  *(_QWORD *)(v12 + 216) = v12 + 208;
  *(_QWORD *)(v12 + 208) = v12 + 208;
  *(_QWORD *)(v12 + 392) = v12 + 384;
  *(_QWORD *)(v12 + 384) = v12 + 384;
  if ( !RtlCreateUnicodeString((PUNICODE_STRING)(v12 + 40), SourceString)
    || !PnpDuplicateUnicodeString(v12 + 56, (__int64)P)
    || !RtlCreateUnicodeString((PUNICODE_STRING)(v12 + 72), a2)
    || i && !RtlCreateUnicodeString((PUNICODE_STRING)(v12 + 128), i) )
  {
    DriverPackageId = -1073741670;
    goto LABEL_32;
  }
  memset_0(v40, 0, 0xC8uLL);
  *(_QWORD *)v40 = DEVPKEY_DriverPackage_DriverDate;
  v41 = 16;
  v45 = DEVPKEY_DriverPackage_DriverVersion;
  v42 = (char *)(v12 + 112);
  v47 = (__int64 *)(v12 + 120);
  v43 = 8;
  v51 = &DEVPKEY_DriverPackage_SignerScore;
  v14 = (PVOID *)(v12 + 144);
  v48 = 8;
  v53 = &v28;
  v56 = DEVPKEY_DriverPackage_ExtensionId;
  v61 = DEVPKEY_DriverPackage_ExtensionContractIds;
  v46 = 9;
  v52 = 7;
  v54 = 4;
  v57 = 13;
  v58 = v12 + 188;
  v59 = 16;
  v62 = 4109;
  v63 = v12 + 144;
  v65 = 2;
  DriverPackageId = PiDevCfgQueryObjectProperties(16, P[1], 8, (_DWORD)Handle, (__int64)v40, 5);
  if ( DriverPackageId < 0 )
    goto LABEL_32;
  if ( v44 < 0 )
    *(_QWORD *)(v12 + 112) = 0LL;
  if ( v50 < 0 )
    *(_QWORD *)(v12 + 120) = 0LL;
  if ( v55 < 0 )
    v28 = -16777216;
  if ( v60 < 0 )
    *(_OWORD *)(v12 + 188) = 0LL;
  if ( v66 >= 0 )
  {
    if ( (v64 & 0xF) != 0 )
    {
      ExFreePoolWithTag(*v14, 0);
      *v14 = 0LL;
    }
    else
    {
      *(_DWORD *)(v12 + 152) = v64 >> 4;
    }
  }
  else
  {
    *v14 = 0LL;
  }
  if ( (a5 & 4) != 0 )
    v15 = -1;
  else
    v15 = (unsigned __int16)v34 | v33 & 0xFF0000 | v28 & ((a5 & 1) != 0 ? -268435456 : -16777216);
  *(_DWORD *)(v12 + 108) = v15;
  if ( (a5 & 2) != 0 )
  {
    memset_0(v40, 0, 0xC8uLL);
    *(_QWORD *)v40 = DEVPKEY_DriverPackage_F6;
    v42 = &v25;
    v41 = 17;
    v43 = 1;
    DriverPackageId = PiDevCfgQueryObjectProperties(v21, P[1], 8, (_DWORD)Handle, (__int64)v40, 1);
    if ( DriverPackageId < 0 )
      goto LABEL_32;
    if ( v44 >= 0 )
    {
      v22 = v25;
    }
    else
    {
      v22 = 0;
      v25 = 0;
    }
    if ( v22 == -1 )
      *(_DWORD *)(v12 + 184) |= 2u;
  }
  *(_DWORD *)&v32.Length = 1572886;
  v32.Buffer = L"Descriptors";
  ObjectAttributes.RootDirectory = Handle;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  ObjectAttributes.ObjectName = &v32;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v16 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  DriverPackageId = v16;
  if ( v16 == -1073741772 )
    goto LABEL_27;
  if ( v16 < 0 )
  {
LABEL_32:
    PiDevCfgFreeDriverNode(v12);
    goto LABEL_33;
  }
  v23 = IopOpenRegistryKeyEx(&v30, KeyHandle, v12 + 72, 131097LL);
  DriverPackageId = v23;
  if ( v23 != -1073741772 )
  {
    if ( v23 < 0 )
      goto LABEL_32;
    memset_0(v67, 0, 0xE0uLL);
    v69 = L"Configuration";
    v71 = 0x1000000;
    v70 = v12 + 88;
    v68 = 288;
    DriverPackageId = RtlpQueryRegistryValues(-1073741824, (int)v30, (int)v67, 0, v24, 1);
    if ( DriverPackageId < 0 )
      goto LABEL_32;
    if ( !*(_WORD *)(v12 + 88) && *(_QWORD *)(v12 + 96) )
      RtlFreeAnsiString((PUNICODE_STRING)(v12 + 88));
    goto LABEL_28;
  }
LABEL_27:
  DriverPackageId = 0;
LABEL_28:
  v17 = *(const WCHAR **)(v12 + 96);
  if ( v17 )
  {
    v18 = PiDevCfgOpenDriverConfiguration(Handle, v17, &v29);
    DriverPackageId = v18;
    if ( v18 == -1073741772 )
    {
      DriverPackageId = 0;
    }
    else
    {
      if ( v18 < 0 )
        goto LABEL_32;
      memset_0(v67, 0, 0xE0uLL);
      v70 = v12 + 112;
      *(_QWORD *)v67 = PiDevCfgQueryDriverVersionValueCallback;
      v69 = L"DriverDate";
      v72 = PiDevCfgQueryDriverVersionValueCallback;
      v73 = L"DriverVersion";
      v78 = 117440512;
      v74 = v12 + 120;
      v77 = v12 + 160;
      v76 = L"ExcludeIds";
      v75 = 304;
      DriverPackageId = RtlpQueryRegistryValues(-1073741824, (int)v29, (int)v67, 0, v24, 1);
      if ( DriverPackageId < 0 )
        goto LABEL_32;
      if ( *(_WORD *)(v12 + 160) <= 2u && *(_QWORD *)(v12 + 168) )
        RtlFreeAnsiString((PUNICODE_STRING)(v12 + 160));
    }
  }
  if ( PnpBootMode )
  {
    *(_DWORD *)&v32.Length = 1572886;
    v32.Buffer = L"ConfigFlags";
    if ( !v29 || !PnpRegistryValueExists(v29, &v32) )
      *(_DWORD *)(v12 + 184) |= 4u;
  }
  *(_QWORD *)(v12 + 16) = Handle;
  *(_QWORD *)(v12 + 24) = v30;
  *(_QWORD *)(v12 + 32) = v29;
  Handle = 0LL;
  v30 = 0LL;
  v29 = 0LL;
  *v38 = v12;
LABEL_33:
  if ( Handle )
    ZwClose(Handle);
  if ( v30 )
    ZwClose(v30);
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( v29 )
    ZwClose(v29);
  if ( P[1] )
  {
    ExFreePool(P[1]);
    *(_OWORD *)P = 0LL;
  }
  if ( v37 )
    ExFreePool(v37);
  return (unsigned int)DriverPackageId;
}
