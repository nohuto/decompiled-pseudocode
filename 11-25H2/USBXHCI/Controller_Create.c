/*
 * XREFs of Controller_Create @ 0x140074D44
 * Callers:
 *     Controller_WdfEvtDeviceAdd @ 0x140079910 (Controller_WdfEvtDeviceAdd.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x14000CCC8 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x14000CDA0 (WPP_RECORDER_SF_d.c)
 *     RtlStringCchPrintfA @ 0x140011198 (RtlStringCchPrintfA.c)
 *     RtlStringCchCopyA @ 0x14003C6AC (RtlStringCchCopyA.c)
 *     Controller_AllocateIrqlTrackingArray @ 0x14003FF84 (Controller_AllocateIrqlTrackingArray.c)
 *     Controller_QuerySupportedDSMs @ 0x140042160 (Controller_QuerySupportedDSMs.c)
 *     Controller_ReferenceTrustletProcess @ 0x1400421DC (Controller_ReferenceTrustletProcess.c)
 *     Device_IsSecureDevice @ 0x140043E88 (Device_IsSecureDevice.c)
 *     RtlStringCopyWorkerA @ 0x1400448E0 (RtlStringCopyWorkerA.c)
 *     DynamicLock_Create @ 0x1400564D4 (DynamicLock_Create.c)
 *     __security_check_cookie @ 0x1400596A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400596E0 (_guard_dispatch_icall.c)
 *     memmove @ 0x1400597C0 (memmove.c)
 *     memset @ 0x140059AC0 (memset.c)
 *     Controller_CreateSecureObject @ 0x140075BB8 (Controller_CreateSecureObject.c)
 *     Controller_GetDeviceEnumerator @ 0x140076AAC (Controller_GetDeviceEnumerator.c)
 *     Controller_PopulateDeviceFlags @ 0x140076CC0 (Controller_PopulateDeviceFlags.c)
 *     Controller_RetrieveAcpiData @ 0x14007810C (Controller_RetrieveAcpiData.c)
 *     Controller_RetrievePciData @ 0x14007835C (Controller_RetrievePciData.c)
 *     Controller_RetrieveUrsData @ 0x1400785BC (Controller_RetrieveUrsData.c)
 *     Controller_SetLogIdentifier @ 0x140078ED0 (Controller_SetLogIdentifier.c)
 */

__int64 __fastcall Controller_Create(__int64 a1, __int64 a2, int a3, __int64 *a4)
{
  __int64 (__fastcall *v8)(PWDF_DRIVER_GLOBALS, __int64, void *); // rax
  __int64 v9; // rax
  bool IsSecureDevice; // r12
  int v11; // r15d
  size_t v12; // rdx
  size_t *v13; // r8
  STRSAFE_PCNZCH v14; // r9
  int DeviceEnumerator; // eax
  int v16; // edx
  int AcpiData; // ebx
  int v18; // r9d
  int v19; // r11d
  unsigned int v20; // r10d
  unsigned int v21; // r10d
  int v22; // eax
  __int64 v23; // rdi
  __int64 v24; // rax
  bool v25; // zf
  __int128 v26; // xmm1
  __int128 v27; // xmm0
  struct _DEVICE_OBJECT *v28; // rax
  __int64 v29; // rbx
  int v30; // eax
  ULONG Size[2]; // [rsp+20h] [rbp-E0h]
  __int128 v33; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v34; // [rsp+50h] [rbp-B0h]
  __int128 v35; // [rsp+60h] [rbp-A0h]
  void *v36; // [rsp+70h] [rbp-90h]
  __int64 v37; // [rsp+78h] [rbp-88h] BYREF
  __int128 v38; // [rsp+80h] [rbp-80h] BYREF
  __int64 v39; // [rsp+90h] [rbp-70h]
  int v40; // [rsp+98h] [rbp-68h] BYREF
  ULONG RequiredSize; // [rsp+9Ch] [rbp-64h] BYREF
  __int128 v42; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v43; // [rsp+B0h] [rbp-50h]
  __int64 v44; // [rsp+C0h] [rbp-40h]
  int v45; // [rsp+C8h] [rbp-38h]
  ULONG Type; // [rsp+CCh] [rbp-34h] BYREF
  __int64 v47; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v48; // [rsp+D8h] [rbp-28h] BYREF
  __int128 v49; // [rsp+E8h] [rbp-18h]
  __int128 v50; // [rsp+F8h] [rbp-8h]
  __int64 v51; // [rsp+108h] [rbp+8h]
  _QWORD v52[32]; // [rsp+110h] [rbp+10h] BYREF
  char pszSrc[8]; // [rsp+210h] [rbp+110h] BYREF
  char v54[4]; // [rsp+218h] [rbp+118h] BYREF
  __int16 v55; // [rsp+21Ch] [rbp+11Ch]
  char v56; // [rsp+21Eh] [rbp+11Eh]
  __int128 v57; // [rsp+220h] [rbp+120h]
  __int128 v58; // [rsp+230h] [rbp+130h]
  char pszDest[16]; // [rsp+240h] [rbp+140h] BYREF
  __int64 v60; // [rsp+250h] [rbp+150h]
  _BYTE Src[400]; // [rsp+260h] [rbp+160h] BYREF

  v47 = -1LL;
  DWORD1(v42) = 0;
  DWORD1(v38) = 0;
  v60 = 0LL;
  DWORD1(v33) = 0;
  *(_QWORD *)&v34 = 0LL;
  v35 = 0LL;
  v37 = 0LL;
  v57 = 0LL;
  RequiredSize = 0;
  v58 = 0LL;
  Type = 0;
  *(_OWORD *)pszDest = 0LL;
  v8 = *(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01033 + 1616);
  v45 = a3;
  v40 = 0;
  v9 = v8(WdfDriverGlobals, a1, off_14006B240);
  IsSecureDevice = Device_IsSecureDevice(v9);
  *(_QWORD *)pszSrc = 0LL;
  *(_DWORD *)v54 = 0;
  v55 = 0;
  v56 = 0;
  v51 = 0LL;
  v48 = 0LL;
  v49 = 0LL;
  v50 = 0LL;
  memset(Src, 0, sizeof(Src));
  pszDest[0] = 0;
  HIDWORD(v58) = 16;
  *(_QWORD *)&v58 = 0LL;
  BYTE8(v58) = 0;
  *(_QWORD *)&v57 = 56LL;
  v60 = 0x200000002LL;
  *((_QWORD *)&v57 + 1) = 512LL;
  RtlStringCchPrintfA(pszDest, 0x10uLL, "%02d RUNDOWN", a3);
  v35 = 0LL;
  DWORD1(v33) = 0;
  *(_QWORD *)&v34 = 0LL;
  if ( WdfClientVersionHigherThanFramework )
  {
    if ( (unsigned int)WdfStructureCount <= 0x26 )
      LODWORD(v33) = -1;
    else
      LODWORD(v33) = *(_DWORD *)(WdfStructures + 304);
  }
  else
  {
    LODWORD(v33) = 56;
  }
  v36 = off_14006B290;
  v11 = 1;
  *((_QWORD *)&v34 + 1) = 0x100000001LL;
  *((_QWORD *)&v33 + 1) = Controller_WdfEvtCleanupCallback;
  memset(v52, 0, 0xF8uLL);
  v52[0] = -4294967048LL;
  *(_QWORD *)((char *)&v52[9] + 4) = 0x7FFFFFFF7FFFFFFFLL;
  LODWORD(v52[9]) = 0;
  BYTE4(v52[12]) = 0;
  BYTE1(v52[13]) = 0;
  BYTE6(v52[13]) = 0;
  WORD2(v52[10]) = 0;
  v52[11] = 0LL;
  LODWORD(v52[12]) = 0;
  RtlStringCopyWorkerA((NTSTRSAFE_PSTR)&v52[14] + 3, v12, v13, v14, *(size_t *)Size);
  v52[3] = Controller_UcxEvtGetCurrentFrameNumber;
  v52[5] = Controller_UcxEvtReset;
  v52[1] = Controller_UcxEvtQueryUsbCapability;
  v52[28] = Controller_UcxEvtStartTrackingForTimeSync;
  v52[29] = Controller_UcxEvtStopTrackingForTimeSync;
  v52[30] = Controller_UcxEvtGetFrameNumberAndQpcForTimeSync;
  v52[4] = UsbDevice_UcxEvtDeviceAdd;
  if ( IsSecureDevice )
  {
    memset(&v52[6], 0, 24);
  }
  else
  {
    v52[7] = Crashdump_UcxEvtGetDumpData;
    v52[8] = Crashdump_UcxEvtFreeDumpData;
    v52[6] = Controller_UcxEvtEnableForwardProgress;
  }
  DeviceEnumerator = Controller_GetDeviceEnumerator(a1, a2);
  if ( !DeviceEnumerator )
  {
    AcpiData = Controller_RetrievePciData(a1, a2, &v48, &v47);
    if ( AcpiData < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v18 = 98;
LABEL_13:
        LOBYTE(v16) = 2;
LABEL_14:
        WPP_RECORDER_SF_d(a2, v16, 4, v18, (__int64)&WPP_e3ec626fc5bc373e46c859b185ef609a_Traceguids, AcpiData);
        return (unsigned int)AcpiData;
      }
      return (unsigned int)AcpiData;
    }
    v19 = 2;
    goto LABEL_25;
  }
  if ( DeviceEnumerator == 1 )
  {
    v11 = 2;
    AcpiData = Controller_RetrieveAcpiData(a1, a2, pszSrc);
    if ( AcpiData < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return (unsigned int)AcpiData;
      v18 = 99;
      LOBYTE(v16) = 2;
      goto LABEL_14;
    }
  }
  else
  {
    AcpiData = Controller_RetrieveUrsData(
                 a1,
                 a2,
                 (unsigned int)&v40,
                 (unsigned int)pszSrc,
                 (__int64)&v48,
                 (__int64)&v47);
    if ( AcpiData < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return (unsigned int)AcpiData;
      v18 = 100;
      goto LABEL_13;
    }
    v11 = v40;
    v19 = 2;
    if ( v40 != 2 )
    {
LABEL_25:
      *(_QWORD *)((char *)&v52[9] + 4) = v48;
      WORD2(v52[10]) = WORD4(v48);
      v52[11] = __PAIR64__(v49, HIDWORD(v48));
      LODWORD(v52[12]) = DWORD1(v49);
      LODWORD(v52[9]) = 1;
      goto LABEL_27;
    }
  }
  LODWORD(v52[9]) = 2;
  RtlStringCchCopyA((NTSTRSAFE_PSTR)&v52[12] + 4, 5uLL, pszSrc);
  RtlStringCchCopyA((NTSTRSAFE_PSTR)&v52[13] + 1, v20, &pszSrc[5]);
  RtlStringCchCopyA((NTSTRSAFE_PSTR)&v52[13] + 6, v21, &v54[2]);
LABEL_27:
  v22 = DWORD2(v34);
  if ( IsSecureDevice )
    v22 = v19;
  DWORD2(v34) = v22;
  AcpiData = ((__int64 (__fastcall *)(__int64, __int64, _QWORD *, __int128 *, __int64 *))qword_14006BD88)(
               UcxDriverGlobals,
               a1,
               v52,
               &v33,
               &v37);
  if ( AcpiData < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return (unsigned int)AcpiData;
    v18 = 102;
    goto LABEL_32;
  }
  v23 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01033 + 1616))(
          WdfDriverGlobals,
          v37,
          off_14006B290);
  *(_QWORD *)v23 = a1;
  *(_QWORD *)(v23 + 32) = v23 + 24;
  *(_QWORD *)(v23 + 24) = v23 + 24;
  *(_QWORD *)(v23 + 8) = v37;
  *(_QWORD *)(v23 + 728) = v47;
  *(_QWORD *)(v23 + 72) = a2;
  *(_DWORD *)(v23 + 176) = v45;
  *(_DWORD *)(v23 + 644) = v11;
  *(_BYTE *)(v23 + 1001) = IsSecureDevice;
  v24 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01033 + 1616))(
          WdfDriverGlobals,
          a1,
          off_14006B240);
  v25 = *(_DWORD *)(v23 + 644) == 1;
  *(_QWORD *)(v23 + 112) = *(_QWORD *)(v24 + 96);
  if ( v25 )
  {
    v26 = v49;
    *(_OWORD *)(v23 + 648) = v48;
    v27 = v50;
    *(_OWORD *)(v23 + 664) = v26;
    *(_QWORD *)&v26 = v51;
    *(_OWORD *)(v23 + 680) = v27;
    *(_QWORD *)(v23 + 696) = v26;
    *(_BYTE *)(v23 + 704) = 0;
    *(_BYTE *)(v23 + 709) = 0;
    *(_BYTE *)(v23 + 714) = 0;
  }
  else
  {
    *(_QWORD *)(v23 + 704) = *(_QWORD *)pszSrc;
    *(_DWORD *)(v23 + 712) = *(_DWORD *)v54;
    *(_WORD *)(v23 + 716) = v55;
    *(_BYTE *)(v23 + 718) = v56;
    *(_DWORD *)(v23 + 648) = 0x7FFFFFFF;
    *(_DWORD *)(v23 + 652) = 0x7FFFFFFF;
    *(_WORD *)(v23 + 656) = 0;
    *(_QWORD *)(v23 + 660) = 0LL;
    *(_DWORD *)(v23 + 668) = 0;
  }
  v28 = (struct _DEVICE_OBJECT *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01033 + 264))(
                                   WdfDriverGlobals,
                                   a1);
  if ( IoGetDevicePropertyData(v28, &DEVPKEY_Device_InstanceId, 0, 0, 0x190u, Src, &RequiredSize, &Type) < 0 )
    *(_WORD *)(v23 + 244) = 0;
  else
    memmove((void *)(v23 + 244), Src, RequiredSize);
  Controller_SetLogIdentifier(v23);
  *a4 = v23;
  v36 = 0LL;
  v33 = 0LL;
  v34 = 0LL;
  v35 = 0LL;
  if ( WdfClientVersionHigherThanFramework )
  {
    if ( (unsigned int)WdfStructureCount <= 0x26 )
      LODWORD(v33) = -1;
    else
      LODWORD(v33) = *(_DWORD *)(WdfStructures + 304);
  }
  else
  {
    LODWORD(v33) = 56;
  }
  v36 = off_14006AE60;
  *((_QWORD *)&v34 + 1) = 0x100000001LL;
  v44 = 0LL;
  v42 = 0LL;
  v43 = 0LL;
  if ( IsSecureDevice )
  {
    if ( WdfClientVersionHigherThanFramework )
    {
      if ( (unsigned int)WdfStructureCount <= 0x37 )
        LODWORD(v42) = -1;
      else
        LODWORD(v42) = *(_DWORD *)(WdfStructures + 440);
    }
    else
    {
      LODWORD(v42) = 40;
    }
    LODWORD(v43) = 0;
    *((_QWORD *)&v42 + 1) = Controller_WdfEvtWatchdogTimerFunc;
    DWORD2(v34) = 2;
  }
  else
  {
    if ( WdfClientVersionHigherThanFramework )
    {
      if ( (unsigned int)WdfStructureCount <= 0x37 )
        LODWORD(v42) = -1;
      else
        LODWORD(v42) = *(_DWORD *)(WdfStructures + 440);
    }
    else
    {
      LODWORD(v42) = 40;
    }
    LODWORD(v43) = 5000;
    *((_QWORD *)&v42 + 1) = Controller_WdfEvtWatchdogTimerFunc;
  }
  *(_QWORD *)&v35 = v37;
  BYTE4(v43) = 1;
  DWORD2(v43) = 1000;
  AcpiData = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int128 *, __int128 *, __int64))(WdfFunctions_01033 + 2544))(
               WdfDriverGlobals,
               &v42,
               &v33,
               v23 + 760);
  if ( AcpiData < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return (unsigned int)AcpiData;
    v18 = 103;
    goto LABEL_32;
  }
  *(_QWORD *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void *))(WdfFunctions_01033 + 1616))(
               WdfDriverGlobals,
               *(_QWORD *)(v23 + 760),
               off_14006AE60) = MEMORY[0xFFFFF78000000014];
  v36 = 0LL;
  v33 = 0LL;
  v34 = 0LL;
  v35 = 0LL;
  if ( WdfClientVersionHigherThanFramework )
  {
    if ( (unsigned int)WdfStructureCount <= 0x26 )
      LODWORD(v33) = -1;
    else
      LODWORD(v33) = *(_DWORD *)(WdfStructures + 304);
  }
  else
  {
    LODWORD(v33) = 56;
  }
  *(_QWORD *)&v35 = v37;
  *((_QWORD *)&v34 + 1) = 0x100000001LL;
  v39 = 0LL;
  v38 = 0LL;
  if ( WdfClientVersionHigherThanFramework )
  {
    if ( (unsigned int)WdfStructureCount <= 0x43 )
      LODWORD(v38) = -1;
    else
      LODWORD(v38) = *(_DWORD *)(WdfStructures + 536);
  }
  else
  {
    LODWORD(v38) = 24;
  }
  *((_QWORD *)&v38 + 1) = Controller_IdleTimeoutUpdateWorker;
  LOBYTE(v39) = 1;
  AcpiData = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int128 *, __int128 *, __int64))(WdfFunctions_01033 + 3032))(
               WdfDriverGlobals,
               &v38,
               &v33,
               v23 + 968);
  if ( AcpiData < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return (unsigned int)AcpiData;
    v18 = 104;
    goto LABEL_32;
  }
  v36 = 0LL;
  v33 = 0LL;
  v34 = 0LL;
  v35 = 0LL;
  if ( WdfClientVersionHigherThanFramework )
  {
    if ( (unsigned int)WdfStructureCount <= 0x26 )
      LODWORD(v33) = -1;
    else
      LODWORD(v33) = *(_DWORD *)(WdfStructures + 304);
  }
  else
  {
    LODWORD(v33) = 56;
  }
  *(_QWORD *)&v35 = v37;
  *((_QWORD *)&v34 + 1) = 0x100000001LL;
  v39 = 0LL;
  v38 = 0LL;
  if ( WdfClientVersionHigherThanFramework )
  {
    if ( (unsigned int)WdfStructureCount <= 0x43 )
      LODWORD(v38) = -1;
    else
      LODWORD(v38) = *(_DWORD *)(WdfStructures + 536);
  }
  else
  {
    LODWORD(v38) = 24;
  }
  *((_QWORD *)&v38 + 1) = Controller_AudioOffloadWnfStateUpdateWorker;
  LOBYTE(v39) = 1;
  AcpiData = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int128 *, __int128 *, __int64))(WdfFunctions_01033 + 3032))(
               WdfDriverGlobals,
               &v38,
               &v33,
               v23 + 1240);
  if ( AcpiData < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return (unsigned int)AcpiData;
    v18 = 105;
    goto LABEL_32;
  }
  v36 = 0LL;
  v33 = 0LL;
  v34 = 0LL;
  v35 = 0LL;
  if ( WdfClientVersionHigherThanFramework )
  {
    if ( (unsigned int)WdfStructureCount <= 0x26 )
      LODWORD(v33) = -1;
    else
      LODWORD(v33) = *(_DWORD *)(WdfStructures + 304);
  }
  else
  {
    LODWORD(v33) = 56;
  }
  v36 = off_14006AF20;
  *(_QWORD *)&v35 = v37;
  *((_QWORD *)&v34 + 1) = 0x100000001LL;
  v39 = 0LL;
  v38 = 0LL;
  if ( WdfClientVersionHigherThanFramework )
  {
    if ( (unsigned int)WdfStructureCount <= 0x43 )
      LODWORD(v38) = -1;
    else
      LODWORD(v38) = *(_DWORD *)(WdfStructures + 536);
  }
  else
  {
    LODWORD(v38) = 24;
  }
  *((_QWORD *)&v38 + 1) = Controller_TelemetryReportWorker;
  LOBYTE(v39) = 1;
  AcpiData = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int128 *, __int128 *, __int64))(WdfFunctions_01033 + 3032))(
               WdfDriverGlobals,
               &v38,
               &v33,
               v23 + 768);
  if ( AcpiData < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return (unsigned int)AcpiData;
    v18 = 106;
    goto LABEL_32;
  }
  v29 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void *))(WdfFunctions_01033 + 1616))(
          WdfDriverGlobals,
          *(_QWORD *)(v23 + 768),
          off_14006AF20);
  KeInitializeMutex((PRKMUTEX)(v29 + 24), 0);
  *(_QWORD *)(v29 + 8) = v29;
  *(_QWORD *)v29 = v29;
  KeInitializeSpinLock((PKSPIN_LOCK)(v29 + 16));
  AcpiData = DynamicLock_Create(v37, a2, IsSecureDevice, (__int64 *)(v23 + 1080));
  if ( AcpiData < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return (unsigned int)AcpiData;
    v18 = 107;
    goto LABEL_32;
  }
  v33 = 0LL;
  v36 = 0LL;
  v34 = 0LL;
  v35 = 0LL;
  if ( WdfClientVersionHigherThanFramework )
  {
    if ( (unsigned int)WdfStructureCount <= 0x26 )
      LODWORD(v33) = -1;
    else
      LODWORD(v33) = *(_DWORD *)(WdfStructures + 304);
  }
  else
  {
    LODWORD(v33) = 56;
  }
  *(_QWORD *)&v35 = v37;
  *((_QWORD *)&v34 + 1) = 0x100000001LL;
  AcpiData = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int128 *, __int64))(WdfFunctions_01033 + 104))(
               WdfDriverGlobals,
               &v33,
               v23 + 1096);
  if ( AcpiData < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return (unsigned int)AcpiData;
    v18 = 108;
    goto LABEL_32;
  }
  v36 = 0LL;
  v33 = 0LL;
  v34 = 0LL;
  v35 = 0LL;
  if ( WdfClientVersionHigherThanFramework )
  {
    if ( (unsigned int)WdfStructureCount <= 0x26 )
      LODWORD(v33) = -1;
    else
      LODWORD(v33) = *(_DWORD *)(WdfStructures + 304);
  }
  else
  {
    LODWORD(v33) = 56;
  }
  v36 = off_14006AF20;
  *(_QWORD *)&v35 = v37;
  *((_QWORD *)&v34 + 1) = 0x100000001LL;
  v39 = 0LL;
  v38 = 0LL;
  if ( WdfClientVersionHigherThanFramework )
  {
    if ( (unsigned int)WdfStructureCount <= 0x43 )
      LODWORD(v38) = -1;
    else
      LODWORD(v38) = *(_DWORD *)(WdfStructures + 536);
  }
  else
  {
    LODWORD(v38) = 24;
  }
  *((_QWORD *)&v38 + 1) = Controller_TimeSyncStartTrackingWorker;
  LOBYTE(v39) = 1;
  AcpiData = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int128 *, __int128 *, __int64))(WdfFunctions_01033 + 3032))(
               WdfDriverGlobals,
               &v38,
               &v33,
               v23 + 1120);
  if ( AcpiData < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return (unsigned int)AcpiData;
    v18 = 109;
    goto LABEL_32;
  }
  *(_BYTE *)(v23 + 1128) = 0;
  *(_QWORD *)(v23 + 1112) = v23 + 1104;
  *(_QWORD *)(v23 + 1104) = v23 + 1104;
  *(_BYTE *)(v23 + 1072) = 0;
  KeQueryPerformanceCounter((PLARGE_INTEGER)(v23 + 1192));
  *(_QWORD *)(v23 + 1200) = 0LL;
  *(_QWORD *)(v23 + 1208) = 0LL;
  *(_DWORD *)(v23 + 1216) = 0;
  *(_DWORD *)(v23 + 1088) = 0;
  Controller_QuerySupportedDSMs(v23);
  *(_OWORD *)(v23 + 736) = 0LL;
  Controller_PopulateDeviceFlags(v23);
  if ( (*(_BYTE *)(v23 + 736) & 0x10) != 0 )
  {
    AcpiData = -1073741637;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(a2, 2, 4, 110, (__int64)&WPP_e3ec626fc5bc373e46c859b185ef609a_Traceguids);
    return (unsigned int)AcpiData;
  }
  if ( IsSecureDevice )
  {
    AcpiData = Controller_ReferenceTrustletProcess((_QWORD *)v23);
    if ( AcpiData < 0 )
      return (unsigned int)AcpiData;
    AcpiData = Controller_CreateSecureObject(v23);
    if ( AcpiData < 0 )
      return (unsigned int)AcpiData;
    v30 = (*(_DWORD *)(v23 + 1016) != 1) + 1;
  }
  else
  {
    v30 = 0;
  }
  *(_DWORD *)(v23 + 1012) = v30;
  *(_QWORD *)(v23 + 1044) = 0LL;
  AcpiData = DynamicLock_Create(v37, a2, 0, (__int64 *)(v23 + 1056));
  if ( AcpiData >= 0 )
    return (unsigned int)Controller_AllocateIrqlTrackingArray(v23);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v18 = 111;
LABEL_32:
    v16 = 2;
    goto LABEL_14;
  }
  return (unsigned int)AcpiData;
}
