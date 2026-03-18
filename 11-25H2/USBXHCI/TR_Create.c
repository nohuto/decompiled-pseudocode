/*
 * XREFs of TR_Create @ 0x14008313C
 * Callers:
 *     Endpoint_UcxEvtEndpointStaticStreamsAdd @ 0x140047AD0 (Endpoint_UcxEvtEndpointStaticStreamsAdd.c)
 *     Endpoint_Create @ 0x140080B84 (Endpoint_Create.c)
 * Callees:
 *     TR_EnsureSegments @ 0x14001F530 (TR_EnsureSegments.c)
 *     TR_AcquireSegment @ 0x140031090 (TR_AcquireSegment.c)
 *     Controller_IsSecureDevice @ 0x140034338 (Controller_IsSecureDevice.c)
 *     Endpoint_IsProxyEndpoint @ 0x140034F38 (Endpoint_IsProxyEndpoint.c)
 *     XilUsbDevice_IsSecureUsbDevice @ 0x14003CD10 (XilUsbDevice_IsSecureUsbDevice.c)
 *     TR_CreateSecureObject @ 0x14004B7A0 (TR_CreateSecureObject.c)
 *     WPP_RECORDER_SF_DDDd @ 0x14004BE90 (WPP_RECORDER_SF_DDDd.c)
 *     _guard_dispatch_icall @ 0x1400596E0 (_guard_dispatch_icall.c)
 *     memset @ 0x140059AC0 (memset.c)
 *     Bulk_GetConfiguration @ 0x14008212C (Bulk_GetConfiguration.c)
 *     Counter_CreateTransferRingInstance @ 0x140082188 (Counter_CreateTransferRingInstance.c)
 */

__int64 __fastcall TR_Create(__int64 a1, __int64 a2, __int64 a3, int a4, __int64 *a5)
{
  char IsProxyEndpoint; // al
  int v10; // r10d
  int v11; // ecx
  int v12; // edx
  __int64 v13; // rax
  int v14; // edx
  bool v15; // zf
  int v16; // eax
  int v17; // r11d
  int v18; // eax
  int SecureObject; // ebx
  __int64 (__fastcall **v20)(); // r15
  unsigned int v21; // r8d
  char v22; // al
  bool v23; // cf
  __int64 v24; // rax
  int v25; // eax
  __int64 (__fastcall *v26)(); // rax
  char v27; // al
  __int64 v28; // rdx
  int v29; // r11d
  int v30; // ecx
  unsigned __int16 v31; // r9
  __int64 v32; // r8
  __int64 v33; // rax
  __int128 v34; // xmm0
  __int64 v35; // rdi
  __int128 v36; // xmm1
  __int64 v37; // rax
  char IsSecureUsbDevice; // al
  __int64 (__fastcall *v39)(); // r8
  __int64 v40; // rax
  __int64 (__fastcall *v41)(); // r8
  __int64 (__fastcall *v42)(); // r8
  int v44; // [rsp+28h] [rbp-D8h]
  int v45; // [rsp+30h] [rbp-D0h]
  int v46; // [rsp+38h] [rbp-C8h]
  int v47; // [rsp+40h] [rbp-C0h]
  __int128 v48; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v49; // [rsp+60h] [rbp-A0h]
  __int128 v50; // [rsp+70h] [rbp-90h]
  void *v51; // [rsp+80h] [rbp-80h]
  __int128 v52; // [rsp+88h] [rbp-78h] BYREF
  __int128 v53; // [rsp+98h] [rbp-68h]
  __int64 (__fastcall **v54)(); // [rsp+A8h] [rbp-58h]
  __int128 v55; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v56; // [rsp+C0h] [rbp-40h]
  __int128 v57; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v58; // [rsp+D8h] [rbp-28h]
  _QWORD v59[12]; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v60; // [rsp+178h] [rbp+78h] BYREF

  LODWORD(v58) = 0;
  LODWORD(v56) = 0;
  LODWORD(v51) = 0;
  v57 = 0LL;
  v55 = 0LL;
  v48 = 0LL;
  v49 = 0LL;
  v50 = 0LL;
  memset(v59, 0, sizeof(v59));
  v60 = 0LL;
  v52 = 0LL;
  v54 = 0LL;
  v53 = 0LL;
  IsProxyEndpoint = Endpoint_IsProxyEndpoint(a2);
  v10 = -1;
  if ( IsProxyEndpoint )
  {
    v11 = 16776704;
    v12 = -1;
  }
  else
  {
    v13 = *(_QWORD *)(a1 + 96);
    v11 = *(_DWORD *)(v13 + 16);
    v12 = *(_DWORD *)(v13 + 20);
  }
  DWORD2(v52) = v12;
  DWORD1(v52) = v11 - 4096;
  v14 = 3;
  v15 = (*(_BYTE *)(a2 + 99) & 3) == 0;
  v16 = *(_BYTE *)(a2 + 99) & 3;
  LODWORD(v52) = v16;
  v17 = 1;
  if ( v15 )
  {
    v20 = ControlFunctionTable;
    HIDWORD(v52) = 1;
    LODWORD(v53) = 400;
    v54 = ControlFunctionTable;
    v23 = Controller_IsSecureDevice(a1) != 0;
    v24 = *(_QWORD *)(a1 + 736);
    DWORD2(v53) = v23 ? 0 : 0x200;
    v22 = v24 & 8;
LABEL_13:
    DWORD1(v53) = v22 != 0 ? 4096 : 512;
    goto LABEL_14;
  }
  v18 = v16 - 1;
  if ( !v18 )
  {
    DWORD2(v53) = 0;
    v20 = IsochFunctionTable;
    v15 = *(_BYTE *)(a1 + 1004) == 0;
    v21 = 448;
    HIDWORD(v52) = 3;
    LODWORD(v53) = 448;
    v54 = IsochFunctionTable;
    if ( v15 )
    {
      DWORD1(v53) = 512;
      goto LABEL_14;
    }
    v22 = Endpoint_IsProxyEndpoint(a2);
    goto LABEL_13;
  }
  if ( (unsigned int)(v18 - 1) >= 2 )
    return (unsigned int)-1073741823;
  Bulk_GetConfiguration(a1, 3LL, (__int64)&v52);
  v14 = HIDWORD(v52);
  v20 = v54;
  v21 = v53;
LABEL_14:
  if ( WdfClientVersionHigherThanFramework )
  {
    if ( (unsigned int)WdfStructureCount <= 0x21 )
      LODWORD(v59[0]) = v10;
    else
      LODWORD(v59[0]) = *(_DWORD *)(WdfStructures + 264);
  }
  else
  {
    LODWORD(v59[0]) = 96;
  }
  v25 = v59[10];
  LODWORD(v59[1]) = 2;
  HIDWORD(v59[0]) = v14;
  if ( v14 == 2 )
    v25 = v10;
  LODWORD(v59[10]) = v25;
  v59[2] = v20[20];
  v26 = v20[21];
  DWORD1(v48) = 0;
  *(_QWORD *)&v49 = 0LL;
  v59[9] = v26;
  if ( WdfClientVersionHigherThanFramework )
  {
    if ( (unsigned int)WdfStructureCount <= 0x26 )
      LODWORD(v48) = v10;
    else
      LODWORD(v48) = *(_DWORD *)(WdfStructures + 304);
  }
  else
  {
    LODWORD(v48) = 56;
  }
  v51 = off_14006B1F0;
  *((_QWORD *)&v50 + 1) = v21;
  *((_QWORD *)&v48 + 1) = TR_WdfEvtCleanupCallback;
  HIDWORD(v49) = v17;
  *(_QWORD *)&v50 = a3;
  v27 = Endpoint_IsProxyEndpoint(a2);
  v28 = *(_QWORD *)a1;
  v30 = v29;
  if ( v27 )
    v30 = 2;
  DWORD2(v49) = v30;
  SecureObject = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *, __int128 *, __int64 *))(WdfFunctions_01033 + 1216))(
                   WdfDriverGlobals,
                   v28,
                   v59,
                   &v48,
                   &v60);
  if ( SecureObject < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return (unsigned int)SecureObject;
    v31 = 10;
    v47 = SecureObject;
    v46 = a4;
    v32 = *(unsigned __int8 *)(*(_QWORD *)(a2 + 16) + 135LL);
    v45 = *(_DWORD *)(a2 + 144);
    v44 = *(unsigned __int8 *)(*(_QWORD *)(a2 + 16) + 135LL);
LABEL_31:
    WPP_RECORDER_SF_DDDd(
      *(_QWORD *)(a1 + 72),
      2u,
      v32,
      v31,
      (__int64)&WPP_dd12c690235e31d2d4306bcf93bb1f34_Traceguids,
      v44,
      v45,
      v46,
      v47);
    return (unsigned int)SecureObject;
  }
  v33 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01033 + 1616))(
          WdfDriverGlobals,
          v60,
          off_14006B1F0);
  v34 = v52;
  v35 = v33;
  v36 = v53;
  *(_QWORD *)(v33 + 40) = a1;
  *(_OWORD *)v33 = v34;
  *(_QWORD *)&v34 = v54;
  *(_OWORD *)(v33 + 16) = v36;
  *(_QWORD *)(v33 + 32) = v34;
  *(_QWORD *)(v33 + 48) = *(_QWORD *)(a2 + 16);
  *(_QWORD *)(v33 + 56) = a2;
  *(_DWORD *)(v33 + 64) = a4;
  v37 = v60;
  *(_QWORD *)(v35 + 312) = 0LL;
  *(_DWORD *)(v35 + 320) = 0;
  *(_QWORD *)(v35 + 72) = v37;
  if ( Controller_IsSecureDevice(a1) )
  {
    if ( *(_DWORD *)(a1 + 1012) == 2 )
      IsSecureUsbDevice = XilUsbDevice_IsSecureUsbDevice(*(_QWORD *)(a2 + 16));
    else
      IsSecureUsbDevice = 1;
    *(_BYTE *)(v35 + 288) = IsSecureUsbDevice;
    v39 = v20[24];
    v56 = 0LL;
    v55 = 0LL;
    if ( WdfClientVersionHigherThanFramework )
    {
      if ( (unsigned int)WdfStructureCount <= 0x43 )
        LODWORD(v55) = -1;
      else
        LODWORD(v55) = *(_DWORD *)(WdfStructures + 536);
    }
    else
    {
      LODWORD(v55) = 24;
    }
    *((_QWORD *)&v55 + 1) = v39;
    LOBYTE(v56) = 1;
    v51 = 0LL;
    v48 = 0LL;
    v49 = 0LL;
    v50 = 0LL;
    if ( WdfClientVersionHigherThanFramework )
    {
      if ( (unsigned int)WdfStructureCount <= 0x26 )
        LODWORD(v48) = -1;
      else
        LODWORD(v48) = *(_DWORD *)(WdfStructures + 304);
    }
    else
    {
      LODWORD(v48) = 56;
    }
    *(_QWORD *)&v50 = v60;
    *((_QWORD *)&v49 + 1) = 0x100000001LL;
    SecureObject = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int128 *, __int128 *, __int64))(WdfFunctions_01033 + 3032))(
                     WdfDriverGlobals,
                     &v55,
                     &v48,
                     v35 + 88);
    if ( SecureObject < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return (unsigned int)SecureObject;
      v31 = 11;
      goto LABEL_49;
    }
  }
  else
  {
    *(_BYTE *)(v35 + 288) = 0;
  }
  KeInitializeSpinLock((PKSPIN_LOCK)(v35 + 96));
  v15 = *(_BYTE *)(v35 + 288) == 0;
  *(_QWORD *)(v35 + 216) = v35 + 208;
  *(_QWORD *)(v35 + 208) = v35 + 208;
  *(_QWORD *)(v35 + 232) = v35 + 224;
  *(_QWORD *)(v35 + 224) = v35 + 224;
  if ( v15 )
  {
    SecureObject = TR_EnsureSegments(v35, 1u, 0);
    if ( SecureObject < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return (unsigned int)SecureObject;
      v40 = *(_QWORD *)(v35 + 48);
      v31 = 12;
      goto LABEL_50;
    }
  }
  else
  {
    SecureObject = TR_CreateSecureObject(v35);
    if ( SecureObject < 0 )
      return (unsigned int)SecureObject;
  }
  v41 = v20[22];
  if ( v41 )
  {
    SecureObject = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64 (__fastcall *)(), __int64))(WdfFunctions_01033 + 1328))(
                     WdfDriverGlobals,
                     v60,
                     v41,
                     v35);
    if ( SecureObject < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return (unsigned int)SecureObject;
      v31 = 13;
      goto LABEL_49;
    }
  }
  v42 = v20[23];
  v58 = 0LL;
  v57 = 0LL;
  if ( WdfClientVersionHigherThanFramework )
  {
    if ( (unsigned int)WdfStructureCount <= 0x17 )
      LODWORD(v57) = -1;
    else
      LODWORD(v57) = *(_DWORD *)(WdfStructures + 184);
  }
  else
  {
    LODWORD(v57) = 24;
  }
  *((_QWORD *)&v57 + 1) = v42;
  v51 = 0LL;
  LOBYTE(v58) = 1;
  v48 = 0LL;
  v49 = 0LL;
  v50 = 0LL;
  if ( WdfClientVersionHigherThanFramework )
  {
    if ( (unsigned int)WdfStructureCount <= 0x26 )
      LODWORD(v48) = -1;
    else
      LODWORD(v48) = *(_DWORD *)(WdfStructures + 304);
  }
  else
  {
    LODWORD(v48) = 56;
  }
  *(_QWORD *)&v50 = v60;
  *((_QWORD *)&v49 + 1) = 0x100000001LL;
  SecureObject = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int128 *, __int128 *, __int64))(WdfFunctions_01033
                                                                                                 + 888))(
                   WdfDriverGlobals,
                   &v57,
                   &v48,
                   v35 + 80);
  if ( SecureObject < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return (unsigned int)SecureObject;
    v31 = 14;
    goto LABEL_49;
  }
  *(_QWORD *)(v35 + 176) = TR_AcquireSegment(v35);
  SecureObject = ((__int64 (__fastcall *)(__int64))*v20)(v35);
  if ( SecureObject >= 0 )
  {
    Counter_CreateTransferRingInstance(*(__int64 **)(v35 + 56), *(_DWORD *)(v35 + 64), (PPCW_INSTANCE *)(v35 + 248));
    *a5 = v35;
    return (unsigned int)SecureObject;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v31 = 15;
LABEL_49:
    v40 = *(_QWORD *)(a2 + 16);
LABEL_50:
    v47 = SecureObject;
    v46 = a4;
    v45 = *(_DWORD *)(a2 + 144);
    v44 = *(unsigned __int8 *)(v40 + 135);
    goto LABEL_31;
  }
  return (unsigned int)SecureObject;
}
