/*
 * XREFs of PiDevCfgConfigureDevice @ 0x1409CA478
 * Callers:
 *     PiDevCfgProcessDevice @ 0x1409C9598 (PiDevCfgProcessDevice.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     RtlUnicodeStringPrintf @ 0x14047B368 (RtlUnicodeStringPrintf.c)
 *     PnpDuplicateUnicodeString @ 0x1404BBB34 (PnpDuplicateUnicodeString.c)
 *     PipIsDevNodeDNStarted @ 0x1404DD25C (PipIsDevNodeDNStarted.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     PiDevCfgAppendMultiSz @ 0x140726258 (PiDevCfgAppendMultiSz.c)
 *     PiDevCfgGetDeviceClassDriverConfigurable @ 0x140727B14 (PiDevCfgGetDeviceClassDriverConfigurable.c)
 *     PiDevCfgMakeServiceBootStart @ 0x1407281D8 (PiDevCfgMakeServiceBootStart.c)
 *     RtlCompareUnicodeStrings @ 0x14088C7D0 (RtlCompareUnicodeStrings.c)
 *     PiPnpRtlSetObjectProperty @ 0x1408B5E10 (PiPnpRtlSetObjectProperty.c)
 *     RtlFreeAnsiString @ 0x1408B69C0 (RtlFreeAnsiString.c)
 *     _PnpOpenObjectRegKey @ 0x1408CAE28 (_PnpOpenObjectRegKey.c)
 *     _PnpGetObjectProperty @ 0x1408CB9C0 (_PnpGetObjectProperty.c)
 *     PnpIsNullGuid @ 0x1408D0B80 (PnpIsNullGuid.c)
 *     RtlEqualUnicodeString @ 0x140929190 (RtlEqualUnicodeString.c)
 *     PiDevCfgConfigureDeviceKeys @ 0x14094C3DC (PiDevCfgConfigureDeviceKeys.c)
 *     PiDevCfgVerifyDeviceAllowed @ 0x14094CA3C (PiDevCfgVerifyDeviceAllowed.c)
 *     PiDevCfgBuildDriverNodeStrongName @ 0x14096E66C (PiDevCfgBuildDriverNodeStrongName.c)
 *     _CmDeleteDeviceRegKey @ 0x1409AAB2C (_CmDeleteDeviceRegKey.c)
 *     RtlpQueryRegistryValues @ 0x1409B4DD0 (RtlpQueryRegistryValues.c)
 *     PiDevCfgQueryDriverConfiguration @ 0x1409C7EF4 (PiDevCfgQueryDriverConfiguration.c)
 *     PiDevCfgQueryObjectProperties @ 0x1409CA030 (PiDevCfgQueryObjectProperties.c)
 *     PiDevCfgConfigureDeviceDriver @ 0x1409CCA78 (PiDevCfgConfigureDeviceDriver.c)
 *     PiDevCfgMigrateDevice @ 0x1409CCE1C (PiDevCfgMigrateDevice.c)
 *     IopOpenRegistryKeyEx @ 0x140A39394 (IopOpenRegistryKeyEx.c)
 *     PiDevCfgBuildIndirectString @ 0x140A5E534 (PiDevCfgBuildIndirectString.c)
 *     PiDevCfgEnforceDevicePolicy @ 0x140A6C2F8 (PiDevCfgEnforceDevicePolicy.c)
 *     PiDevCfgSetObjectProperty @ 0x140A70328 (PiDevCfgSetObjectProperty.c)
 *     PipHardwareConfigActivateService @ 0x140A7F050 (PipHardwareConfigActivateService.c)
 *     _PnpCtxRegDeleteTree @ 0x140A7F11C (_PnpCtxRegDeleteTree.c)
 *     PiDevCfgResetDeviceDriverSettings @ 0x140A7F31C (PiDevCfgResetDeviceDriverSettings.c)
 *     PiDevCfgConfigureDeviceLocation @ 0x140A8DA98 (PiDevCfgConfigureDeviceLocation.c)
 *     PnpDeleteDeviceInterfaces @ 0x140AA2768 (PnpDeleteDeviceInterfaces.c)
 *     PiDevCfgGetDeviceClassConfigFlags @ 0x140AAA0D8 (PiDevCfgGetDeviceClassConfigFlags.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePool @ 0x140B74850 (ExFreePool.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiDevCfgConfigureDevice(__int64 a1, __int64 a2, __int64 a3, int *a4, _DWORD *a5)
{
  __int64 v7; // r14
  void *v8; // r15
  wchar_t *v9; // r12
  int v10; // r13d
  int ObjectProperties; // ebx
  wchar_t *Buffer; // r13
  wchar_t *v13; // r14
  int v15; // edx
  __int64 v16; // r12
  int DriverConfiguration; // eax
  const WCHAR *v18; // rdx
  WCHAR *v19; // rbx
  _BYTE *v20; // rcx
  unsigned int v21; // eax
  WCHAR *v22; // rdx
  __int64 v23; // rcx
  WCHAR *v24; // rdx
  __int64 v25; // rcx
  int v26; // eax
  __int64 v27; // rbx
  int v28; // r9d
  _QWORD *v29; // rbx
  __int64 v30; // rcx
  int v31; // r8d
  int v32; // r8d
  PVOID v33; // r12
  __int64 v34; // r8
  WCHAR *v35; // rdx
  __int64 v36; // rcx
  const wchar_t *v37; // r8
  int *v38; // r12
  __int64 *i; // r12
  int *v40; // r13
  _DWORD *v41; // r12
  __int64 v42; // r10
  char v43; // r9
  __int128 v44; // xmm0
  int v45; // eax
  __int16 v46; // r12
  __int64 v47; // r8
  __int64 v48; // r8
  wchar_t *j; // rdi
  __int64 v50; // rax
  wchar_t *k; // rdi
  __int64 v52; // rax
  ULONG CaseInSensitive; // [rsp+20h] [rbp-E0h]
  BOOLEAN CaseInSensitivea[8]; // [rsp+20h] [rbp-E0h]
  char v55[8]; // [rsp+28h] [rbp-D8h]
  int v56; // [rsp+48h] [rbp-B8h]
  char v57; // [rsp+60h] [rbp-A0h] BYREF
  char v58; // [rsp+61h] [rbp-9Fh] BYREF
  wchar_t v59; // [rsp+62h] [rbp-9Eh] BYREF
  int v60; // [rsp+64h] [rbp-9Ch] BYREF
  UNICODE_STRING UnicodeString; // [rsp+68h] [rbp-98h] BYREF
  __int16 v62; // [rsp+78h] [rbp-88h] BYREF
  char v63; // [rsp+7Ah] [rbp-86h]
  UNICODE_STRING v64; // [rsp+80h] [rbp-80h] BYREF
  int v65; // [rsp+90h] [rbp-70h] BYREF
  int v66; // [rsp+94h] [rbp-6Ch]
  int v67; // [rsp+98h] [rbp-68h] BYREF
  int v68; // [rsp+9Ch] [rbp-64h]
  int v69[2]; // [rsp+A0h] [rbp-60h]
  PVOID P[2]; // [rsp+A8h] [rbp-58h] BYREF
  PCWCH String2[2]; // [rsp+B8h] [rbp-48h] BYREF
  HANDLE Handle; // [rsp+C8h] [rbp-38h] BYREF
  PVOID v73; // [rsp+D0h] [rbp-30h]
  PVOID v74[2]; // [rsp+D8h] [rbp-28h] BYREF
  PVOID v75[2]; // [rsp+E8h] [rbp-18h] BYREF
  PVOID v76[2]; // [rsp+F8h] [rbp-8h] BYREF
  unsigned int v77; // [rsp+108h] [rbp+8h]
  int v78; // [rsp+10Ch] [rbp+Ch] BYREF
  int v79; // [rsp+110h] [rbp+10h] BYREF
  int v80; // [rsp+114h] [rbp+14h] BYREF
  int v81; // [rsp+118h] [rbp+18h] BYREF
  int v82[2]; // [rsp+120h] [rbp+20h]
  _DWORD *v83; // [rsp+128h] [rbp+28h]
  int *v84; // [rsp+130h] [rbp+30h]
  PVOID v85[2]; // [rsp+138h] [rbp+38h] BYREF
  __int64 v86; // [rsp+148h] [rbp+48h] BYREF
  PVOID v87; // [rsp+150h] [rbp+50h]
  HANDLE v88; // [rsp+158h] [rbp+58h] BYREF
  PVOID v89; // [rsp+160h] [rbp+60h] BYREF
  UNICODE_STRING v90; // [rsp+168h] [rbp+68h] BYREF
  PVOID v91[2]; // [rsp+178h] [rbp+78h] BYREF
  UNICODE_STRING v92; // [rsp+188h] [rbp+88h] BYREF
  UNICODE_STRING v93; // [rsp+198h] [rbp+98h] BYREF
  UNICODE_STRING v94; // [rsp+1A8h] [rbp+A8h] BYREF
  UNICODE_STRING v95; // [rsp+1B8h] [rbp+B8h] BYREF
  UNICODE_STRING v96; // [rsp+1C8h] [rbp+C8h] BYREF
  UNICODE_STRING DestinationString; // [rsp+1D8h] [rbp+D8h] BYREF
  __int64 v98; // [rsp+1E8h] [rbp+E8h] BYREF
  STRSAFE_PCNZWCH v99; // [rsp+1F0h] [rbp+F0h]
  __int128 Source2; // [rsp+1F8h] [rbp+F8h] BYREF
  const DEVPROPKEY *v101; // [rsp+210h] [rbp+110h] BYREF
  int v102; // [rsp+218h] [rbp+118h]
  PVOID *p_Source2; // [rsp+220h] [rbp+120h]
  int v104; // [rsp+228h] [rbp+128h]
  int v105; // [rsp+22Ch] [rbp+12Ch]
  int v106; // [rsp+230h] [rbp+130h]
  __int64 *v107; // [rsp+238h] [rbp+138h]
  int v108; // [rsp+240h] [rbp+140h]
  char *v109; // [rsp+248h] [rbp+148h]
  int v110; // [rsp+250h] [rbp+150h]
  int v111; // [rsp+258h] [rbp+158h]
  const DEVPROPKEY *v112; // [rsp+260h] [rbp+160h]
  int v113; // [rsp+268h] [rbp+168h]
  PVOID *v114; // [rsp+270h] [rbp+170h]
  int v115; // [rsp+27Ch] [rbp+17Ch]
  int v116; // [rsp+280h] [rbp+180h]
  __int64 *v117; // [rsp+288h] [rbp+188h]
  int v118; // [rsp+290h] [rbp+190h]
  PVOID *v119; // [rsp+298h] [rbp+198h]
  unsigned int v120; // [rsp+2A0h] [rbp+1A0h]
  int v121; // [rsp+2A4h] [rbp+1A4h]
  int v122; // [rsp+2A8h] [rbp+1A8h]
  int v123[4]; // [rsp+2B0h] [rbp+1B0h] BYREF
  const wchar_t *v124; // [rsp+2C0h] [rbp+1C0h]
  PVOID *v125; // [rsp+2C8h] [rbp+1C8h]
  int v126; // [rsp+2D0h] [rbp+1D0h]
  int v127; // [rsp+2F0h] [rbp+1F0h]
  const wchar_t *v128; // [rsp+2F8h] [rbp+1F8h]
  PVOID *v129; // [rsp+300h] [rbp+200h]
  int v130; // [rsp+308h] [rbp+208h]

  *(_QWORD *)v69 = a1;
  *a4 = 1024;
  v84 = a4;
  v83 = a5;
  *(_DWORD *)(&DestinationString.MaximumLength + 1) = 0;
  Handle = 0LL;
  *a5 = 0;
  v7 = a1 + 40;
  v8 = *(void **)(a2 + 16);
  v88 = 0LL;
  v9 = 0LL;
  v86 = 0LL;
  v87 = 0LL;
  v10 = 1024;
  *(_QWORD *)&UnicodeString.Length = 0LL;
  UnicodeString.Buffer = 0LL;
  *(_QWORD *)&v90.Length = 0LL;
  v90.Buffer = 0LL;
  *(_QWORD *)&v92.Length = 0LL;
  v92.Buffer = 0LL;
  *(_QWORD *)&v93.Length = 0LL;
  v93.Buffer = 0LL;
  *(_QWORD *)&v94.Length = 0LL;
  v94.Buffer = 0LL;
  *(_QWORD *)&v96.Length = 0LL;
  v96.Buffer = 0LL;
  *(_QWORD *)&v64.Length = 0LL;
  v64.Buffer = 0LL;
  *(_QWORD *)&v95.Length = 0LL;
  v95.Buffer = 0LL;
  v66 = 0;
  v68 = 0;
  v65 = 0;
  v80 = 0;
  v81 = 0;
  *(_QWORD *)v82 = 0LL;
  v85[0] = 0LL;
  v85[1] = 0LL;
  P[0] = 0LL;
  P[1] = 0LL;
  v74[0] = 0LL;
  v74[1] = 0LL;
  v75[0] = 0LL;
  v98 = 0LL;
  v99 = 0LL;
  v91[0] = 0LL;
  v91[1] = 0LL;
  v58 = 0;
  v62 = 0;
  v57 = 0;
  v59 = 0;
  v89 = 0LL;
  v77 = 0;
  v67 = 0;
  v76[0] = 0LL;
  v76[1] = 0LL;
  v63 = 0;
  v78 = 0;
  v79 = 0;
  *(_OWORD *)String2 = 0LL;
  v60 = 1024;
  Source2 = 0LL;
  v73 = 0LL;
  v75[1] = 0LL;
  *(_DWORD *)&DestinationString.Length = 68157440;
  DestinationString.Buffer = (wchar_t *)ExAllocatePool2(0x100uLL, 0x410uLL, 0x63647050u);
  if ( !DestinationString.Buffer )
    goto LABEL_2;
  if ( !a3 )
  {
LABEL_135:
    if ( (*(_DWORD *)a2 & 1) == 0 )
    {
      memset_0(&v101, 0, 0xA0uLL);
      v22 = *(WCHAR **)(v7 + 8);
      p_Source2 = (PVOID *)&Source2;
      v107 = DEVPKEY_Device_InstallFlags;
      v101 = &DEVPKEY_Device_ClassGuid;
      v109 = (char *)&v67;
      v112 = (const DEVPROPKEY *)DEVPKEY_Device_DriverNodeStrongName;
      v114 = v76;
      v102 = 13;
      v104 = 16;
      v108 = 7;
      v110 = 4;
      v113 = 18;
      v115 = 6;
      ObjectProperties = PiDevCfgQueryObjectProperties(v23, v22, 1u, v8, (__int64)&v101, 3u);
      if ( ObjectProperties < 0 )
        goto LABEL_3;
      if ( v106 >= 0 )
        HIBYTE(v59) = 1;
      else
        Source2 = 0LL;
      if ( v111 < 0 )
        v67 = 0;
      if ( v116 < 0 )
        RtlInitUnicodeString((PUNICODE_STRING)v76, 0LL);
    }
    if ( !v57 )
    {
      if ( (v67 & 4) == 0 )
        goto LABEL_154;
      if ( !a3 )
        goto LABEL_152;
      memset_0(&v101, 0, 0xA0uLL);
      v24 = *(WCHAR **)(v7 + 8);
      p_Source2 = v91;
      v101 = &DEVPKEY_Device_DriverInfPath;
      v102 = 18;
      v105 = 6;
      ObjectProperties = PiDevCfgQueryObjectProperties(v25, v24, 1u, v8, (__int64)&v101, 1u);
      if ( ObjectProperties < 0 )
        goto LABEL_3;
      if ( v106 < 0 )
        RtlInitUnicodeString((PUNICODE_STRING)v91, 0LL);
      if ( v91[1] && RtlEqualUnicodeString((PCUNICODE_STRING)v91, (PCUNICODE_STRING)(a3 + 40), 1u) )
LABEL_152:
        v57 = -1;
      if ( !v57 )
      {
LABEL_154:
        ObjectProperties = PiDevCfgEnforceDevicePolicy(*(_QWORD *)v69, a2, *(_QWORD *)v82);
        if ( ObjectProperties < 0 )
          goto LABEL_3;
      }
    }
    if ( Handle )
    {
      LODWORD(String2[0]) = 1835034;
      String2[1] = L"Configuration";
      v26 = IopOpenRegistryKeyEx(&v88, Handle, String2, 131097LL);
      ObjectProperties = v26;
      if ( v26 != -1073741772 )
      {
        if ( v26 < 0 )
          goto LABEL_3;
        ObjectProperties = PiDevCfgVerifyDeviceAllowed(*(__int64 *)v69, v88);
        if ( ObjectProperties < 0 )
          goto LABEL_3;
      }
    }
    v27 = *(_QWORD *)v69;
    if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v69 + 32LL) + 8LL) + 16LL) & 4) != 0
      && ((int)PnpGetObjectProperty(
                 *(_QWORD **)&PiPnpRtlCtx,
                 *(WCHAR **)(v7 + 8),
                 1u,
                 v8,
                 0LL,
                 (__int64)&DEVPKEY_Device_Reported,
                 &v78,
                 &v59,
                 1u,
                 (__int64)&v79,
                 0) < 0
       || v78 != 17
       || v79 != 1) )
    {
      LOBYTE(v59) = 0;
    }
    if ( a3 && !v87 && !v85[1] && !(_BYTE)v59 && (*(_DWORD *)(v27 + 560) & 0x100) == 0 )
    {
      ObjectProperties = -1073740652;
      goto LABEL_3;
    }
    if ( (*(_DWORD *)a2 & 1) != 0 )
    {
      if ( !a3 )
      {
LABEL_176:
        v28 = 0;
        v31 = 0;
        goto LABEL_187;
      }
    }
    else
    {
      if ( !a3 )
      {
        if ( !HIBYTE(v59) || (*(_DWORD *)(v27 + 560) & 0x100) == 0 )
          CmDeleteDeviceRegKey(*(__int64 *)&PiPnpRtlCtx, *(_QWORD *)(v7 + 8), 17, 0);
        CmDeleteDeviceRegKey(*(__int64 *)&PiPnpRtlCtx, *(_QWORD *)(v7 + 8), 18, 0);
        goto LABEL_176;
      }
      if ( !PnpIsNullGuid(&Source2) )
      {
        v29 = (_QWORD *)(a3 + 240);
        if ( !PnpIsNullGuid((void *)(a3 + 240)) )
        {
          v30 = Source2 - *v29;
          if ( (_QWORD)Source2 == *v29 )
            v30 = *((_QWORD *)&Source2 + 1) - *(_QWORD *)(a3 + 248);
          if ( v30 )
            CmDeleteDeviceRegKey(*(__int64 *)&PiPnpRtlCtx, *(_QWORD *)(v7 + 8), 18, 0);
        }
        LODWORD(v27) = v69[0];
      }
    }
    v28 = a3 + 40;
    v31 = a3 + 256;
LABEL_187:
    if ( (int)PiDevCfgMigrateDevice(v27, a2, v31, v28, (__int64)&v80, (__int64)&v81) >= 0 )
    {
      v10 |= v80;
      v60 = v10;
      v65 = v81;
    }
    if ( (*(_DWORD *)a2 & 1) == 0 )
    {
      v32 = a3 + 240;
      if ( !a3 )
        v32 = 0;
      PiDevCfgResetDeviceDriverSettings(
        v27,
        a2,
        v32,
        (int)Handle,
        (PGUID)((unsigned __int64)&Source2 & -(__int64)(HIBYTE(v59) != 0)));
      PnpCtxRegDeleteTree(*(_QWORD *)&PiPnpRtlCtx, v8, L"Devices");
      PnpCtxRegDeleteTree(*(_QWORD *)&PiPnpRtlCtx, v8, L"Filters");
    }
    if ( !a3 || PnpIsNullGuid((void *)(a3 + 240)) )
    {
      if ( (*(_DWORD *)a2 & 1) == 0 )
        PiDevCfgSetObjectProperty(PiPnpRtlCtx, a2, *(_QWORD *)(v7 + 8), 1, (__int64)v8);
    }
    else
    {
      ObjectProperties = PiDevCfgSetObjectProperty(PiPnpRtlCtx, a2, *(_QWORD *)(v7 + 8), 1, (__int64)v8);
      if ( ObjectProperties < 0 )
        goto LABEL_3;
    }
    if ( v87 )
    {
      if ( (_WORD)v86 )
        goto LABEL_204;
    }
    else if ( v85[1] && LOWORD(v85[0]) )
    {
LABEL_204:
      ObjectProperties = PiDevCfgSetObjectProperty(PiPnpRtlCtx, a2, *(_QWORD *)(v7 + 8), 1, (__int64)v8);
      if ( ObjectProperties < 0 )
        goto LABEL_3;
LABEL_211:
      if ( v9 )
      {
        ObjectProperties = PiDevCfgSetObjectProperty(PiPnpRtlCtx, a2, *(_QWORD *)(v7 + 8), 1, (__int64)v8);
        if ( ObjectProperties < 0 )
          goto LABEL_3;
      }
      else if ( (*(_DWORD *)a2 & 1) == 0 )
      {
        PiDevCfgSetObjectProperty(PiPnpRtlCtx, a2, *(_QWORD *)(v7 + 8), 1, (__int64)v8);
      }
      if ( v90.Buffer )
      {
        ObjectProperties = PiDevCfgSetObjectProperty(PiPnpRtlCtx, a2, *(_QWORD *)(v7 + 8), 1, (__int64)v8);
        if ( ObjectProperties < 0 )
          goto LABEL_3;
      }
      else if ( (*(_DWORD *)a2 & 1) == 0 )
      {
        PiDevCfgSetObjectProperty(PiPnpRtlCtx, a2, *(_QWORD *)(v7 + 8), 1, (__int64)v8);
      }
      if ( v92.Buffer )
      {
        ObjectProperties = PiPnpRtlSetObjectProperty(
                             *(__int64 *)&PiPnpRtlCtx,
                             *(const WCHAR **)(v7 + 8),
                             1,
                             (__int64)v8,
                             0LL,
                             (__int64)DEVPKEY_Device_Win32Services,
                             8210,
                             v92.Buffer,
                             v92.Length,
                             (*(_DWORD *)a2 & 1u) << 17);
        if ( ObjectProperties < 0 )
          goto LABEL_3;
      }
      else if ( (*(_DWORD *)a2 & 1) == 0 )
      {
        PiDevCfgSetObjectProperty(PiPnpRtlCtx, a2, *(_QWORD *)(v7 + 8), 1, (__int64)v8);
      }
      if ( a3 && P[1] )
      {
        ObjectProperties = PiDevCfgBuildIndirectString(a3, P, v75, &v98);
        if ( ObjectProperties < 0 )
          goto LABEL_242;
        v33 = v75[1];
        v73 = v75[1];
        if ( (v10 & 0x400) == 0 || (PiDevCfgOptions & 1) != 0 )
        {
          ObjectProperties = PiPnpRtlSetObjectProperty(
                               *(__int64 *)&PiPnpRtlCtx,
                               *(const WCHAR **)(v7 + 8),
                               1,
                               (__int64)v8,
                               0LL,
                               (__int64)&DEVPKEY_Device_DeviceDesc,
                               18,
                               (STRSAFE_PCNZWCH)v75[1],
                               (unsigned int)LOWORD(v75[0]) + 2,
                               (*(_DWORD *)a2 & 1u) << 17);
          if ( ObjectProperties < 0 )
            goto LABEL_3;
        }
        if ( v99 )
        {
          ObjectProperties = PiPnpRtlSetObjectProperty(
                               *(__int64 *)&PiPnpRtlCtx,
                               *(const WCHAR **)(v7 + 8),
                               1,
                               (__int64)v8,
                               0LL,
                               (__int64)&DEVPKEY_Device_DriverDesc,
                               18,
                               v99,
                               (unsigned int)(unsigned __int16)v98 + 2,
                               (*(_DWORD *)a2 & 1u) << 17);
          if ( ObjectProperties < 0 )
            goto LABEL_3;
        }
        else if ( (*(_DWORD *)a2 & 1) == 0 )
        {
          PiDevCfgSetObjectProperty(PiPnpRtlCtx, a2, *(_QWORD *)(v7 + 8), 1, (__int64)v8);
        }
        if ( v33 )
        {
          ExFreePool(v33);
          *(_OWORD *)v75 = 0LL;
          v73 = (PVOID)_mm_srli_si128((__m128i)0LL, 8).m128i_u64[0];
        }
      }
      else if ( (*(_DWORD *)a2 & 1) != 0 )
      {
        if ( !a3 )
          goto LABEL_249;
      }
      else
      {
        PiDevCfgSetObjectProperty(PiPnpRtlCtx, a2, *(_QWORD *)(v7 + 8), 1, (__int64)v8);
        if ( !a3 )
        {
          memset_0(&v101, 0, 0xA0uLL);
          v35 = *(WCHAR **)(v7 + 8);
          v101 = &DEVPKEY_Device_BusReportedDeviceDesc;
          p_Source2 = P;
          v102 = 18;
          v105 = 6;
          if ( (int)PiDevCfgQueryObjectProperties(v36, v35, 1u, v8, (__int64)&v101, 1u) >= 0 && v106 >= 0 && P[1] )
          {
            ObjectProperties = PiDevCfgSetObjectProperty(PiPnpRtlCtx, a2, *(_QWORD *)(v7 + 8), 1, (__int64)v8);
            if ( ObjectProperties < 0 )
              goto LABEL_3;
          }
          else
          {
            PiDevCfgSetObjectProperty(PiPnpRtlCtx, a2, *(_QWORD *)(v7 + 8), 1, (__int64)v8);
          }
          goto LABEL_249;
        }
      }
      if ( v74[1] )
      {
        ObjectProperties = PiDevCfgBuildIndirectString(a3, v74, v75, 0LL);
        if ( ObjectProperties >= 0 )
        {
          v34 = *(_QWORD *)(v7 + 8);
          v73 = v75[1];
          ObjectProperties = PiDevCfgSetObjectProperty(PiPnpRtlCtx, a2, v34, 1, (__int64)v8);
          if ( ObjectProperties < 0 )
            goto LABEL_3;
LABEL_251:
          if ( a3 && (v37 = *(const wchar_t **)(a3 + 280)) != 0LL )
          {
            ObjectProperties = PiPnpRtlSetObjectProperty(
                                 *(__int64 *)&PiPnpRtlCtx,
                                 *(const WCHAR **)(v7 + 8),
                                 1,
                                 (__int64)v8,
                                 0LL,
                                 (__int64)&DEVPKEY_Device_DriverProvider,
                                 18,
                                 v37,
                                 (unsigned int)*(unsigned __int16 *)(a3 + 272) + 2,
                                 (*(_DWORD *)a2 & 1u) << 17);
            if ( ObjectProperties < 0 )
              goto LABEL_3;
          }
          else
          {
            if ( (*(_DWORD *)a2 & 1) == 0 )
              PiDevCfgSetObjectProperty(PiPnpRtlCtx, a2, *(_QWORD *)(v7 + 8), 1, (__int64)v8);
            if ( !a3 )
            {
              if ( (*(_DWORD *)a2 & 1) == 0 )
              {
                PiDevCfgSetObjectProperty(PiPnpRtlCtx, a2, *(_QWORD *)(v7 + 8), 1, (__int64)v8);
                PiDevCfgSetObjectProperty(PiPnpRtlCtx, a2, *(_QWORD *)(v7 + 8), 1, (__int64)v8);
                PiDevCfgSetObjectProperty(PiPnpRtlCtx, a2, *(_QWORD *)(v7 + 8), 1, (__int64)v8);
                PiDevCfgSetObjectProperty(PiPnpRtlCtx, a2, *(_QWORD *)(v7 + 8), 1, (__int64)v8);
                PiDevCfgSetObjectProperty(PiPnpRtlCtx, a2, *(_QWORD *)(v7 + 8), 1, (__int64)v8);
              }
              goto LABEL_276;
            }
          }
          ObjectProperties = PiPnpRtlSetObjectProperty(
                               *(__int64 *)&PiPnpRtlCtx,
                               *(const WCHAR **)(v7 + 8),
                               1,
                               (__int64)v8,
                               0LL,
                               (__int64)&DEVPKEY_Device_DriverDate,
                               16,
                               (STRSAFE_PCNZWCH)(a3 + 112),
                               8u,
                               (*(_DWORD *)a2 & 1u) << 17);
          if ( ObjectProperties < 0 )
            goto LABEL_3;
          *(_DWORD *)v55 = *(unsigned __int16 *)(a3 + 120);
          *(_DWORD *)CaseInSensitivea = *(unsigned __int16 *)(a3 + 122);
          ObjectProperties = RtlUnicodeStringPrintf(
                               &DestinationString,
                               L"%u.%u.%u.%u",
                               (unsigned __int16)HIWORD(*(_DWORD *)(a3 + 124)),
                               *(unsigned __int16 *)(a3 + 124),
                               *(_QWORD *)CaseInSensitivea,
                               *(_QWORD *)v55);
          if ( ObjectProperties < 0 )
            goto LABEL_3;
          ObjectProperties = PiPnpRtlSetObjectProperty(
                               *(__int64 *)&PiPnpRtlCtx,
                               *(const WCHAR **)(v7 + 8),
                               1,
                               (__int64)v8,
                               0LL,
                               (__int64)&DEVPKEY_Device_DriverVersion,
                               18,
                               DestinationString.Buffer,
                               (unsigned int)DestinationString.Length + 2,
                               (*(_DWORD *)a2 & 1u) << 17);
          if ( ObjectProperties < 0 )
            goto LABEL_3;
          ObjectProperties = PiPnpRtlSetObjectProperty(
                               *(__int64 *)&PiPnpRtlCtx,
                               *(const WCHAR **)(v7 + 8),
                               1,
                               (__int64)v8,
                               0LL,
                               (__int64)&DEVPKEY_Device_DriverInfPath,
                               18,
                               *(STRSAFE_PCNZWCH *)(a3 + 48),
                               (unsigned int)*(unsigned __int16 *)(a3 + 40) + 2,
                               (*(_DWORD *)a2 & 1u) << 17);
          if ( ObjectProperties < 0 )
            goto LABEL_3;
          ObjectProperties = PiPnpRtlSetObjectProperty(
                               *(__int64 *)&PiPnpRtlCtx,
                               *(const WCHAR **)(v7 + 8),
                               1,
                               (__int64)v8,
                               0LL,
                               (__int64)&DEVPKEY_Device_DriverInfSection,
                               18,
                               *(STRSAFE_PCNZWCH *)(a3 + 96),
                               (unsigned int)*(unsigned __int16 *)(a3 + 88) + 2,
                               (*(_DWORD *)a2 & 1u) << 17);
          if ( ObjectProperties < 0 )
            goto LABEL_3;
          ObjectProperties = PiDevCfgBuildDriverNodeStrongName(
                               a3,
                               (const UNICODE_STRING *)v74,
                               (const UNICODE_STRING *)P,
                               (UNICODE_STRING *)String2);
          if ( ObjectProperties < 0 )
            goto LABEL_3;
          if ( v76[1]
            && !RtlCompareUnicodeStrings(
                  (PCWCH)v76[1],
                  (unsigned __int64)LOWORD(v76[0]) >> 1,
                  String2[1],
                  (unsigned __int64)LOWORD(String2[0]) >> 1,
                  1u) )
          {
            RtlFreeAnsiString((PUNICODE_STRING)v76);
          }
          ObjectProperties = PiPnpRtlSetObjectProperty(
                               *(__int64 *)&PiPnpRtlCtx,
                               *(const WCHAR **)(v7 + 8),
                               1,
                               (__int64)v8,
                               0LL,
                               (__int64)DEVPKEY_Device_DriverNodeStrongName,
                               18,
                               String2[1],
                               (unsigned int)LOWORD(String2[0]) + 2,
                               (*(_DWORD *)a2 & 1u) << 17);
          if ( String2[1] )
          {
            ExFreePool((PVOID)String2[1]);
            *(_OWORD *)String2 = 0LL;
          }
          if ( ObjectProperties < 0 )
            goto LABEL_3;
LABEL_276:
          if ( !v76[1] || (v67 & 8) != 0 || (*(_DWORD *)(*(_QWORD *)v69 + 396LL) & 0x6000) != 0 )
          {
            if ( (*(_DWORD *)a2 & 1) == 0 )
              PiDevCfgSetObjectProperty(PiPnpRtlCtx, a2, *(_QWORD *)(v7 + 8), 1, (__int64)v8);
          }
          else
          {
            ObjectProperties = PiDevCfgSetObjectProperty(PiPnpRtlCtx, a2, *(_QWORD *)(v7 + 8), 1, (__int64)v8);
            if ( ObjectProperties < 0 )
              goto LABEL_3;
          }
          if ( v93.Buffer )
          {
            ObjectProperties = PiDevCfgSetObjectProperty(PiPnpRtlCtx, a2, *(_QWORD *)(v7 + 8), 1, (__int64)v8);
            if ( ObjectProperties < 0 )
              goto LABEL_3;
          }
          else if ( (*(_DWORD *)a2 & 1) == 0 )
          {
            PiDevCfgSetObjectProperty(PiPnpRtlCtx, a2, *(_QWORD *)(v7 + 8), 1, (__int64)v8);
          }
          if ( v94.Buffer )
          {
            ObjectProperties = PiDevCfgSetObjectProperty(PiPnpRtlCtx, a2, *(_QWORD *)(v7 + 8), 1, (__int64)v8);
            if ( ObjectProperties < 0 )
              goto LABEL_3;
          }
          else if ( (*(_DWORD *)a2 & 1) == 0 )
          {
            PiDevCfgSetObjectProperty(PiPnpRtlCtx, a2, *(_QWORD *)(v7 + 8), 1, (__int64)v8);
          }
          if ( v95.Buffer )
          {
            ObjectProperties = PiDevCfgSetObjectProperty(PiPnpRtlCtx, a2, *(_QWORD *)(v7 + 8), 1, (__int64)v8);
            if ( ObjectProperties < 0 )
              goto LABEL_3;
          }
          else if ( (*(_DWORD *)a2 & 1) == 0 )
          {
            PiDevCfgSetObjectProperty(PiPnpRtlCtx, a2, *(_QWORD *)(v7 + 8), 1, (__int64)v8);
          }
          if ( v96.Buffer )
          {
            ObjectProperties = PiDevCfgSetObjectProperty(PiPnpRtlCtx, a2, *(_QWORD *)(v7 + 8), 1, (__int64)v8);
            if ( ObjectProperties < 0 )
              goto LABEL_3;
          }
          else if ( (*(_DWORD *)a2 & 1) == 0 )
          {
            PiDevCfgSetObjectProperty(PiPnpRtlCtx, a2, *(_QWORD *)(v7 + 8), 1, (__int64)v8);
          }
          if ( !a3 || *(_DWORD *)(a3 + 108) == -1 )
          {
            if ( (*(_DWORD *)a2 & 1) == 0 )
            {
              PiDevCfgSetObjectProperty(PiPnpRtlCtx, a2, *(_QWORD *)(v7 + 8), 1, (__int64)v8);
              PiDevCfgSetObjectProperty(PiPnpRtlCtx, a2, *(_QWORD *)(v7 + 8), 1, (__int64)v8);
            }
          }
          else
          {
            ObjectProperties = PiPnpRtlSetObjectProperty(
                                 *(__int64 *)&PiPnpRtlCtx,
                                 *(const WCHAR **)(v7 + 8),
                                 1,
                                 (__int64)v8,
                                 0LL,
                                 (__int64)&DEVPKEY_Device_MatchingDeviceId,
                                 18,
                                 *(STRSAFE_PCNZWCH *)(a3 + 80),
                                 (unsigned int)*(unsigned __int16 *)(a3 + 72) + 2,
                                 (*(_DWORD *)a2 & 1u) << 17);
            if ( ObjectProperties < 0 )
              goto LABEL_3;
            ObjectProperties = PiPnpRtlSetObjectProperty(
                                 *(__int64 *)&PiPnpRtlCtx,
                                 *(const WCHAR **)(v7 + 8),
                                 1,
                                 (__int64)v8,
                                 0LL,
                                 (__int64)&DEVPKEY_Device_DriverRank,
                                 7,
                                 (STRSAFE_PCNZWCH)(a3 + 108),
                                 4u,
                                 (*(_DWORD *)a2 & 1u) << 17);
            if ( ObjectProperties < 0 )
              goto LABEL_3;
          }
          if ( v67 )
            PiDevCfgSetObjectProperty(PiPnpRtlCtx, a2, *(_QWORD *)(v7 + 8), 1, (__int64)v8);
          if ( a3 )
          {
            v38 = v84;
            *v84 = v10;
            if ( (*(_BYTE *)(a3 + 184) & 8) != 0 && (PiDevCfgFlags & 2) != 0 )
              *v38 = v10 | 0x400;
            ObjectProperties = PiDevCfgConfigureDeviceDriver(v69[0], a2, a3, (unsigned int)&v60, (__int64)&v65);
            if ( ObjectProperties < 0 )
              goto LABEL_3;
            *v38 |= v60;
            *v83 |= v65;
            for ( i = *(__int64 **)(a3 + 208); i != (__int64 *)(a3 + 208); i = (__int64 *)*i )
            {
              if ( (i[23] & 1) != 0 )
              {
                ObjectProperties = PiDevCfgConfigureDeviceDriver(
                                     v69[0],
                                     a2,
                                     (_DWORD)i,
                                     (unsigned int)&v60,
                                     (__int64)&v65);
                if ( ObjectProperties < 0 )
                  goto LABEL_3;
                *v84 |= v60;
                *v83 |= v65;
              }
            }
            ObjectProperties = PiDevCfgConfigureDeviceLocation(*(_QWORD *)v69, a2, &v60, &v65);
            if ( ObjectProperties < 0 )
              goto LABEL_3;
            v40 = v84;
            v41 = v83;
            *v84 |= v60;
            *v41 |= v65;
          }
          else
          {
            v42 = *(_QWORD *)v69;
            v40 = v84;
            if ( (*(_DWORD *)(*(_QWORD *)v69 + 560LL) & 0x100) != 0 )
            {
              *v84 = 0;
              v41 = v83;
LABEL_328:
              v43 = 0;
              if ( v66 && !InitIsWinPEMode && (unsigned int)PipIsDevNodeDNStarted(v42) )
                *v41 |= 0x10u;
              if ( (v67 & 2) != 0 )
                *v41 |= 0x20u;
              if ( HIBYTE(v59) != v43 )
                *v41 |= 1u;
              if ( v88 )
              {
                ObjectProperties = PiDevCfgConfigureDeviceKeys(v42, a2, v88, -1, &v60, &v65);
                if ( ObjectProperties < 0 )
                  goto LABEL_3;
                *v40 |= v60;
                *v41 |= v65;
              }
              if ( (*v41 & 2) == 0 && v58 == -1 && *(_QWORD *)v82 && Handle )
              {
                ObjectProperties = PiDevCfgGetDeviceClassConfigFlags(*(_QWORD *)v82, Handle, &v60);
                if ( ObjectProperties < 0 )
                  goto LABEL_3;
                *v40 |= v60;
              }
              if ( a3 )
                v44 = *(_OWORD *)(a3 + 424);
              else
                v44 = *(_OWORD *)&PiDevCfgEmptyString;
              v56 = (*(_DWORD *)a2 & 1) << 17;
              *(_OWORD *)String2 = v44;
              v45 = PiPnpRtlSetObjectProperty(
                      *(__int64 *)&PiPnpRtlCtx,
                      *(const WCHAR **)(v7 + 8),
                      1,
                      (__int64)v8,
                      0LL,
                      (__int64)&DEVPKEY_Device_ConfigurationId,
                      18,
                      *((STRSAFE_PCNZWCH *)&v44 + 1),
                      (unsigned int)(unsigned __int16)v44 + 2,
                      v56);
              Buffer = v64.Buffer;
              ObjectProperties = v45;
              if ( v45 < 0 )
                goto LABEL_4;
              if ( v64.Buffer )
              {
                ObjectProperties = PiDevCfgSetObjectProperty(PiPnpRtlCtx, a2, *(_QWORD *)(v7 + 8), 1, (__int64)v8);
                if ( ObjectProperties < 0 )
                  goto LABEL_4;
              }
              else if ( (*(_DWORD *)a2 & 1) == 0 )
              {
                PiDevCfgSetObjectProperty(PiPnpRtlCtx, a2, *(_QWORD *)(v7 + 8), 1, (__int64)v8);
              }
              if ( a3 && *(_QWORD *)(a3 + 136) )
              {
                ObjectProperties = PiDevCfgSetObjectProperty(PiPnpRtlCtx, a2, *(_QWORD *)(v7 + 8), 1, (__int64)v8);
                if ( ObjectProperties < 0 )
                  goto LABEL_4;
              }
              else if ( (*(_DWORD *)a2 & 1) == 0 )
              {
                PiDevCfgSetObjectProperty(PiPnpRtlCtx, a2, *(_QWORD *)(v7 + 8), 1, (__int64)v8);
              }
              v46 = v68;
              if ( (v68 & 0x80u) == 0 )
              {
                if ( (*(_DWORD *)a2 & 1) == 0 )
                  PiDevCfgSetObjectProperty(PiPnpRtlCtx, a2, *(_QWORD *)(v7 + 8), 1, (__int64)v8);
              }
              else
              {
                v47 = *(_QWORD *)(v7 + 8);
                HIBYTE(v62) = -1;
                ObjectProperties = PiDevCfgSetObjectProperty(PiPnpRtlCtx, a2, v47, 1, (__int64)v8);
                if ( ObjectProperties < 0 )
                  goto LABEL_4;
              }
              if ( (v46 & 0x100) != 0 )
              {
                v48 = *(_QWORD *)(v7 + 8);
                v63 = -1;
                ObjectProperties = PiDevCfgSetObjectProperty(PiPnpRtlCtx, a2, v48, 1, (__int64)v8);
                if ( ObjectProperties < 0 )
                  goto LABEL_4;
              }
              else if ( (*(_DWORD *)a2 & 1) == 0 )
              {
                PiDevCfgSetObjectProperty(PiPnpRtlCtx, a2, *(_QWORD *)(v7 + 8), 1, (__int64)v8);
              }
              if ( v87 && (_WORD)v86 )
                PipHardwareConfigActivateService((PCWSTR)v87);
              v13 = UnicodeString.Buffer;
              if ( UnicodeString.Buffer )
              {
                for ( j = UnicodeString.Buffer; *j; j += v50 + 1 )
                {
                  PipHardwareConfigActivateService(j);
                  if ( !PnpBootMode && (*(_DWORD *)(a3 + 184) & 0x10) != 0 )
                    PiDevCfgMakeServiceBootStart(j);
                  v50 = -1LL;
                  do
                    ++v50;
                  while ( j[v50] );
                }
              }
              if ( v90.Buffer )
              {
                for ( k = v90.Buffer; *k; k += v52 + 1 )
                {
                  PipHardwareConfigActivateService(k);
                  if ( !PnpBootMode && (*(_DWORD *)(a3 + 184) & 0x10) != 0 )
                    PiDevCfgMakeServiceBootStart(k);
                  v52 = -1LL;
                  do
                    ++v52;
                  while ( k[v52] );
                }
              }
              goto LABEL_5;
            }
            *v84 = 64;
            PnpDeleteDeviceInterfaces(v7);
            v41 = v83;
          }
          v42 = *(_QWORD *)v69;
          goto LABEL_328;
        }
LABEL_242:
        v73 = v75[1];
        goto LABEL_3;
      }
LABEL_249:
      if ( (*(_DWORD *)a2 & 1) == 0 )
        PiDevCfgSetObjectProperty(PiPnpRtlCtx, a2, *(_QWORD *)(v7 + 8), 1, (__int64)v8);
      goto LABEL_251;
    }
    if ( (*(_DWORD *)a2 & 1) == 0 && (v87 && v85[1] || !(_BYTE)v59) )
      PiDevCfgSetObjectProperty(PiPnpRtlCtx, a2, *(_QWORD *)(v7 + 8), 1, (__int64)v8);
    goto LABEL_211;
  }
  ObjectProperties = PiDevCfgQueryDriverConfiguration(a3);
  if ( ObjectProperties < 0 )
    goto LABEL_3;
  *(_QWORD *)v82 = *(_QWORD *)(a3 + 264);
  if ( (!*(_QWORD *)(a3 + 296) || PnpDuplicateUnicodeString((__int64)&v86, a3 + 288))
    && (!*(_QWORD *)(a3 + 312) || PnpDuplicateUnicodeString((__int64)&UnicodeString, a3 + 304))
    && (!*(_QWORD *)(a3 + 328) || PnpDuplicateUnicodeString((__int64)&v90, a3 + 320))
    && (!*(_QWORD *)(a3 + 344) || PnpDuplicateUnicodeString((__int64)&v92, a3 + 336))
    && (!*(_QWORD *)(a3 + 360) || PnpDuplicateUnicodeString((__int64)&v93, a3 + 352))
    && (!*(_QWORD *)(a3 + 376) || PnpDuplicateUnicodeString((__int64)&v94, a3 + 368))
    && (!*(_QWORD *)(a3 + 408) || PnpDuplicateUnicodeString((__int64)&v95, a3 + 400)) )
  {
    v10 = *(_DWORD *)(a3 + 416);
    v15 = *(_DWORD *)(a3 + 184);
    v66 = *(_DWORD *)(a3 + 420);
    v16 = *(_QWORD *)(a3 + 208);
    v60 = v10;
    v68 = v15;
    if ( v16 != a3 + 208 )
    {
      do
      {
        DriverConfiguration = PiDevCfgQueryDriverConfiguration(v16);
        ObjectProperties = DriverConfiguration;
        if ( DriverConfiguration >= 0 )
        {
          if ( *(_QWORD *)(v16 + 296) )
          {
            *(_DWORD *)(v16 + 184) &= ~1u;
          }
          else
          {
            if ( *(_QWORD *)(v16 + 312) )
            {
              ObjectProperties = PiDevCfgAppendMultiSz(&UnicodeString, 0LL, (const void **)(v16 + 304), 0);
              if ( ObjectProperties < 0 )
                goto LABEL_3;
            }
            if ( *(_QWORD *)(v16 + 328) )
            {
              ObjectProperties = PiDevCfgAppendMultiSz(&v90, 0LL, (const void **)(v16 + 320), 0);
              if ( ObjectProperties < 0 )
                goto LABEL_3;
            }
            if ( *(_QWORD *)(v16 + 344) )
            {
              ObjectProperties = PiDevCfgAppendMultiSz(&v92, 0LL, (const void **)(v16 + 336), 0);
              if ( ObjectProperties < 0 )
                goto LABEL_3;
            }
            if ( *(_QWORD *)(v16 + 360) )
            {
              ObjectProperties = PiDevCfgAppendMultiSz(&v93, 0LL, (const void **)(v16 + 352), 0);
              if ( ObjectProperties < 0 )
                goto LABEL_3;
            }
            if ( *(_QWORD *)(v16 + 376) )
            {
              ObjectProperties = PiDevCfgAppendMultiSz(&v94, 0LL, (const void **)(v16 + 368), 0);
              if ( ObjectProperties < 0 )
                goto LABEL_3;
            }
            v10 |= *(_DWORD *)(v16 + 416);
            v66 |= *(_DWORD *)(v16 + 420);
            v68 |= *(_DWORD *)(v16 + 184);
            v60 = v10;
            ObjectProperties = PiDevCfgAppendMultiSz(&v96, (const void **)(v16 + 40), 0LL, 0);
            if ( ObjectProperties < 0 )
              goto LABEL_3;
            ObjectProperties = PiDevCfgAppendMultiSz(&v64, (const void **)(v16 + 424), 0LL, 0);
            if ( ObjectProperties < 0 )
              goto LABEL_3;
            if ( *(_QWORD *)(v16 + 408) )
            {
              ObjectProperties = PiDevCfgAppendMultiSz(&v95, (const void **)(v16 + 400), 0LL, 0);
              if ( ObjectProperties < 0 )
                goto LABEL_3;
            }
          }
        }
        else
        {
          if ( DriverConfiguration != -1073740653 || !PnpBootMode || (PiDevCfgFlags & 2) == 0 )
            goto LABEL_3;
          v10 |= 0x400u;
          ObjectProperties = 0;
          v60 = v10;
        }
        v16 = *(_QWORD *)v16;
      }
      while ( v16 != a3 + 208 );
      LOBYTE(v15) = v68;
      if ( ObjectProperties < 0 )
        goto LABEL_3;
    }
    if ( (PiDevCfgFlags & 2) != 0 )
    {
      if ( (v10 & 0x400) != 0
        && (*(_BYTE *)(a3 + 440) & 2) == 0
        && (PiDevCfgOptions & 1) == 0
        && !InitIsWinPEMode
        && !PnpBootMode )
      {
        goto LABEL_89;
      }
      if ( (v15 & 0x40) != 0 )
      {
        if ( !PnpBootMode )
          goto LABEL_89;
        v10 |= 0x400u;
        v60 = v10;
      }
    }
    memset_0(v123, 0, 0xA8uLL);
    v123[2] = 288;
    v126 = 0x1000000;
    v124 = L"Description";
    v130 = 0x1000000;
    v18 = *(const WCHAR **)(a3 + 24);
    v125 = P;
    v128 = L"Manufacturer";
    v127 = 288;
    v129 = v74;
    ObjectProperties = RtlpQueryRegistryValues(3221225472LL, v18, (__int64)v123, 0LL, CaseInSensitive, 1);
    if ( ObjectProperties < 0 )
      goto LABEL_3;
    if ( !P[1] && !v74[1] && *(_QWORD *)(a3 + 168) && (PiDevCfgFlags & 2) != 0 && !InitIsWinPEMode )
    {
      if ( !PnpBootMode )
      {
        v13 = UnicodeString.Buffer;
        ObjectProperties = -1073740651;
        Buffer = v64.Buffer;
        goto LABEL_9;
      }
      v10 |= 0x400u;
      v60 = v10;
    }
    if ( !LOWORD(P[0]) && P[1] )
      RtlFreeAnsiString((PUNICODE_STRING)P);
    if ( !LOWORD(v74[0]) && v74[1] )
      RtlFreeAnsiString((PUNICODE_STRING)v74);
    v19 = *(WCHAR **)v82;
    if ( *(_QWORD *)v82
      && (int)PnpOpenObjectRegKey(*(_QWORD **)&PiPnpRtlCtx, *(WCHAR **)v82, 2, 131097, 0, (__int64)&Handle) >= 0 )
    {
      memset_0(&v101, 0, 0xA0uLL);
      v101 = (const DEVPROPKEY *)&DEVPKEY_DeviceClass_Configurable;
      v102 = 17;
      p_Source2 = (PVOID *)&v58;
      v108 = 17;
      v107 = DEVPKEY_DeviceClass_PolicyExempt;
      v109 = &v57;
      v104 = 1;
      v112 = &DEVPKEY_DeviceClass_DefaultService;
      v114 = v85;
      v117 = DEVPKEY_DeviceClass_CompatibleFeatureScores;
      v119 = &v89;
      v110 = 1;
      v113 = 18;
      v115 = 6;
      v118 = 4099;
      v121 = 2;
      ObjectProperties = PiDevCfgQueryObjectProperties(2LL, v19, 2u, Handle, (__int64)&v101, 4u);
      if ( ObjectProperties < 0 )
        goto LABEL_3;
      if ( v106 < 0 )
        v58 = 0;
      if ( v111 < 0 )
        v57 = 0;
      if ( v116 < 0 )
        RtlInitUnicodeString((PUNICODE_STRING)v85, 0LL);
      if ( v122 >= 0 )
        v77 = v120;
      else
        v89 = 0LL;
      if ( v58 )
        goto LABEL_128;
      if ( (int)PiDevCfgGetDeviceClassDriverConfigurable(
                  v82[0],
                  (int)Handle,
                  *(_QWORD *)(v7 + 8),
                  (int)v8,
                  *(wchar_t **)(a3 + 64),
                  *(_QWORD *)(a3 + 16),
                  &v62) >= 0
        && (_BYTE)v62 )
      {
        v58 = -1;
      }
    }
    if ( v58 || (PiDevCfgOptions & 1) != 0 || (PiDevCfgFlags & 2) == 0 )
    {
LABEL_128:
      v20 = v89;
      if ( v89 )
      {
        v21 = 0;
        if ( !v77 )
          goto LABEL_133;
        do
        {
          if ( *v20 == *(_BYTE *)(a3 + 110) )
            break;
          ++v21;
          ++v20;
        }
        while ( v21 < v77 );
        if ( v21 >= v77 )
        {
LABEL_133:
          ObjectProperties = -1073740764;
          goto LABEL_3;
        }
      }
      v9 = UnicodeString.Buffer;
      goto LABEL_135;
    }
    if ( PnpBootMode )
    {
      v10 |= 0x400u;
      v60 = v10;
      goto LABEL_128;
    }
LABEL_89:
    ObjectProperties = -1073740651;
    goto LABEL_3;
  }
LABEL_2:
  ObjectProperties = -1073741670;
LABEL_3:
  Buffer = v64.Buffer;
LABEL_4:
  v13 = UnicodeString.Buffer;
LABEL_5:
  if ( P[1] )
  {
    ExFreePool(P[1]);
    *(_OWORD *)P = 0LL;
  }
  if ( v74[1] )
  {
    ExFreePool(v74[1]);
    *(_OWORD *)v74 = 0LL;
  }
LABEL_9:
  if ( v85[1] )
  {
    ExFreePool(v85[1]);
    *(_OWORD *)v85 = 0LL;
  }
  if ( v87 )
    ExFreePool(v87);
  if ( v13 )
    ExFreePool(v13);
  if ( v90.Buffer )
    ExFreePool(v90.Buffer);
  if ( v92.Buffer )
    ExFreePool(v92.Buffer);
  if ( v93.Buffer )
    ExFreePool(v93.Buffer);
  if ( v94.Buffer )
    ExFreePool(v94.Buffer);
  if ( v96.Buffer )
    ExFreePool(v96.Buffer);
  if ( Buffer )
    ExFreePool(Buffer);
  if ( v95.Buffer )
    ExFreePool(v95.Buffer);
  if ( v73 )
    ExFreePool(v73);
  if ( v91[1] )
  {
    ExFreePool(v91[1]);
    *(_OWORD *)v91 = 0LL;
  }
  if ( v76[1] )
  {
    ExFreePool(v76[1]);
    *(_OWORD *)v76 = 0LL;
  }
  if ( DestinationString.Buffer )
    ExFreePoolWithTag(DestinationString.Buffer, 0);
  if ( v89 )
    ExFreePoolWithTag(v89, 0);
  if ( Handle )
    ZwClose(Handle);
  if ( v88 )
    ZwClose(v88);
  return (unsigned int)ObjectProperties;
}
