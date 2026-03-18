/*
 * XREFs of Endpoint_Create @ 0x140080F6C
 * Callers:
 *     Endpoint_UcxEvtUsbDeviceEndpointAdd_V2 @ 0x14007B620 (Endpoint_UcxEvtUsbDeviceEndpointAdd_V2.c)
 *     Endpoint_UcxEvtUsbDeviceEndpointAdd @ 0x140080B40 (Endpoint_UcxEvtUsbDeviceEndpointAdd.c)
 *     Endpoint_UcxEvtUsbDeviceDefaultEndpointAdd @ 0x140080D10 (Endpoint_UcxEvtUsbDeviceDefaultEndpointAdd.c)
 * Callees:
 *     WPP_RECORDER_SF_ddq @ 0x140001BE8 (WPP_RECORDER_SF_ddq.c)
 *     WPP_RECORDER_SF_dD @ 0x14001BF58 (WPP_RECORDER_SF_dD.c)
 *     XilEndpoint_AcquireBuffer @ 0x14001D4EC (XilEndpoint_AcquireBuffer.c)
 *     WPP_RECORDER_SF_ddL @ 0x14001F9A4 (WPP_RECORDER_SF_ddL.c)
 *     UsbDevice_AddEndpointToDeviceEndpointList @ 0x1400302D0 (UsbDevice_AddEndpointToDeviceEndpointList.c)
 *     WPP_RECORDER_SF_ddqDdd @ 0x140030694 (WPP_RECORDER_SF_ddqDdd.c)
 *     Etw_EndpointCreate @ 0x1400313AC (Etw_EndpointCreate.c)
 *     XilEndpoint_Create @ 0x1400318C4 (XilEndpoint_Create.c)
 *     Controller_IsSecureDevice @ 0x1400328B8 (Controller_IsSecureDevice.c)
 *     Endpoint_CreateClearStallContext @ 0x140032CB8 (Endpoint_CreateClearStallContext.c)
 *     XilRegister_GetContextSize @ 0x140032E84 (XilRegister_GetContextSize.c)
 *     TR_GetWdfQueue @ 0x140033C98 (TR_GetWdfQueue.c)
 *     Feature_EUSB2__private_IsEnabledDeviceUsageNoInline @ 0x140043D58 (Feature_EUSB2__private_IsEnabledDeviceUsageNoInline.c)
 *     _guard_dispatch_icall @ 0x140058B00 (_guard_dispatch_icall.c)
 *     Endpoint_SetType @ 0x140081DA4 (Endpoint_SetType.c)
 *     TR_Create @ 0x140082E54 (TR_Create.c)
 */

__int64 __fastcall Endpoint_Create(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, _QWORD *a6, _QWORD *a7)
{
  __int64 v9; // rsi
  unsigned int v10; // ebx
  __int64 v11; // rdx
  char IsSecureDevice; // al
  int v13; // edx
  int v14; // ecx
  int v15; // edx
  int ClearStallContext; // edi
  unsigned int v17; // ebx
  __int64 v18; // rax
  unsigned __int16 v19; // r9
  unsigned int v20; // ebx
  __int64 v21; // rax
  __int64 v22; // rbx
  char v23; // al
  bool v24; // zf
  unsigned int v25; // ebx
  __int64 v26; // rax
  struct _DEVICE_OBJECT *v27; // rax
  PIO_WORKITEM WorkItem; // rax
  unsigned int v29; // ebx
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rcx
  _QWORD *v33; // rax
  __int64 v34; // rcx
  int v35; // eax
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rax
  int ContextSize; // eax
  int v40; // edx
  __int64 WdfQueue; // rax
  __int64 v42; // rcx
  __int64 v43; // rcx
  int v45; // [rsp+28h] [rbp-91h]
  __int64 v46; // [rsp+30h] [rbp-89h]
  __int64 v47; // [rsp+38h] [rbp-81h]
  __int64 v48; // [rsp+40h] [rbp-79h]
  __int64 v49; // [rsp+68h] [rbp-51h] BYREF
  __int128 v50; // [rsp+70h] [rbp-49h] BYREF
  __int128 v51; // [rsp+80h] [rbp-39h]
  __int128 v52; // [rsp+90h] [rbp-29h]
  void *v53; // [rsp+A0h] [rbp-19h]
  __int128 v54; // [rsp+A8h] [rbp-11h] BYREF
  __int128 v55; // [rsp+B8h] [rbp-1h]
  __int64 v56; // [rsp+C8h] [rbp+Fh]
  __int64 v57; // [rsp+D0h] [rbp+17h]
  __int64 v58; // [rsp+118h] [rbp+5Fh] BYREF

  v58 = a3;
  DWORD1(v50) = 0;
  DWORD1(v54) = 0;
  v49 = 0LL;
  v9 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01033 + 1616))(
         WdfDriverGlobals,
         a1,
         off_14006B290);
  v57 = *(_QWORD *)(v9 + 88);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v10 = *(unsigned __int8 *)(a4 + 2);
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01033 + 1616))(
      WdfDriverGlobals,
      a2,
      off_14006B128);
    HIDWORD(v48) = HIDWORD(a4);
    WPP_RECORDER_SF_ddqDdd(
      *(_QWORD *)(v9 + 72),
      v11,
      (v10 >> 7) + 2 * (*(_BYTE *)(a4 + 2) & 0x7F),
      *(_BYTE *)(a4 + 3) & 3,
      v45);
  }
  v52 = 0LL;
  DWORD1(v50) = 0;
  if ( WdfClientVersionHigherThanFramework )
  {
    if ( (unsigned int)WdfStructureCount <= 0x26 )
      LODWORD(v50) = -1;
    else
      LODWORD(v50) = *(_DWORD *)(WdfStructures + 304);
  }
  else
  {
    LODWORD(v50) = 56;
  }
  v53 = off_14006AFE8;
  *((_QWORD *)&v51 + 1) = 0x100000001LL;
  *((_QWORD *)&v50 + 1) = Endpoint_EvtEndpointCleanupCallback;
  *(_QWORD *)&v51 = Endpoint_EvtDestroyCallback;
  IsSecureDevice = Controller_IsSecureDevice(v9);
  v14 = v13;
  v15 = v13 + 1;
  if ( IsSecureDevice )
    v14 = v15;
  DWORD2(v51) = v14;
  ClearStallContext = qword_14006BDB0(UcxDriverGlobals, a2, &v58, &v50, &v49);
  if ( ClearStallContext >= 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v20 = *(unsigned __int8 *)(a4 + 2);
      v21 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01033 + 1616))(
              WdfDriverGlobals,
              a2,
              off_14006B128);
      WPP_RECORDER_SF_ddq(
        *(_QWORD *)(v9 + 72),
        4u,
        0xDu,
        0x11u,
        (__int64)&WPP_d3be1904650e34f1a39197b3dd99b0d4_Traceguids,
        *(unsigned __int8 *)(v21 + 143),
        (v20 >> 7) + 2 * (*(_BYTE *)(a4 + 2) & 0x7F),
        v49);
    }
    v22 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01033 + 1616))(
            WdfDriverGlobals,
            v49,
            off_14006AFE8);
    KeInitializeEvent((PRKEVENT)(v22 + 40), NotificationEvent, 0);
    v56 = 0LL;
    v54 = 0LL;
    v55 = 0LL;
    if ( WdfClientVersionHigherThanFramework )
    {
      if ( (unsigned int)WdfStructureCount <= 0x37 )
        LODWORD(v54) = -1;
      else
        LODWORD(v54) = *(_DWORD *)(WdfStructures + 440);
    }
    else
    {
      LODWORD(v54) = 40;
    }
    LODWORD(v55) = 0;
    DWORD2(v55) = 0;
    *((_QWORD *)&v54 + 1) = Endpoint_WdfEvtStateMachineTimer;
    v23 = v56;
    BYTE4(v55) = 1;
    v24 = (*(_QWORD *)(v9 + 744) & 0x40000LL) == 0;
    v50 = 0LL;
    if ( !v24 )
      v23 = 1;
    LOBYTE(v56) = v23;
    v53 = 0LL;
    v51 = 0LL;
    v52 = 0LL;
    if ( WdfClientVersionHigherThanFramework )
    {
      if ( (unsigned int)WdfStructureCount <= 0x26 )
        LODWORD(v50) = -1;
      else
        LODWORD(v50) = *(_DWORD *)(WdfStructures + 304);
    }
    else
    {
      LODWORD(v50) = 56;
    }
    *(_QWORD *)&v52 = v49;
    *((_QWORD *)&v51 + 1) = 0x100000001LL;
    ClearStallContext = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int128 *, __int128 *, __int64))(WdfFunctions_01033 + 2544))(
                          WdfDriverGlobals,
                          &v54,
                          &v50,
                          v22 + 1312);
    if ( ClearStallContext < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return (unsigned int)ClearStallContext;
      v25 = *(unsigned __int8 *)(a4 + 2);
      v26 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01033 + 1616))(
              WdfDriverGlobals,
              a2,
              off_14006B128);
      v19 = 18;
      goto LABEL_31;
    }
    v27 = (struct _DEVICE_OBJECT *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01033 + 248))(
                                     WdfDriverGlobals,
                                     *(_QWORD *)v9);
    WorkItem = IoAllocateWorkItem(v27);
    *(_QWORD *)(v22 + 1288) = WorkItem;
    if ( !WorkItem )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v29 = *(unsigned __int8 *)(a4 + 2);
        v30 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01033 + 1616))(
                WdfDriverGlobals,
                a2,
                off_14006B128);
        LODWORD(v47) = (v29 >> 7) + 2 * (*(_BYTE *)(a4 + 2) & 0x7F);
        LODWORD(v46) = *(unsigned __int8 *)(v30 + 143);
        WPP_RECORDER_SF_dD(
          *(_QWORD *)(v9 + 72),
          2u,
          0xDu,
          0x13u,
          (__int64)&WPP_d3be1904650e34f1a39197b3dd99b0d4_Traceguids,
          v46,
          v47);
      }
      return (unsigned int)-1073741670;
    }
    *(_DWORD *)(v22 + 1184) = 0;
    *(_DWORD *)(v22 + 1156) = 2000;
    *(_DWORD *)(v22 + 1280) = 2000;
    *(_QWORD *)(v22 + 1272) = &ESMStateTable;
    *(_QWORD *)(v22 + 1264) = v22;
    *(_BYTE *)(v22 + 1322) = Controller_IsSecureDevice(v9);
    if ( *(_BYTE *)(g_WdfDriverUsbXhciContext + 28) && (*(_DWORD *)(v9 + 1276) & 1) != 0 )
      *(_BYTE *)(v22 + 1322) = 1;
    *(_QWORD *)v22 = v9;
    *(_QWORD *)(v22 + 8) = a2;
    v31 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01033 + 1616))(
            WdfDriverGlobals,
            a2,
            off_14006B128);
    v32 = a5;
    *(_QWORD *)(v22 + 16) = v31;
    *(_QWORD *)(v22 + 144) = 0LL;
    *(_QWORD *)(v22 + 280) = 0LL;
    *(_DWORD *)(v22 + 96) = *(_DWORD *)a4;
    *(_WORD *)(v22 + 100) = *(_WORD *)(a4 + 4);
    *(_BYTE *)(v22 + 102) = *(_BYTE *)(a4 + 6);
    if ( v32 )
    {
      *(_DWORD *)(v22 + 111) = *(_DWORD *)v32;
      *(_WORD *)(v22 + 115) = *(_WORD *)(v32 + 4);
    }
    if ( a6 )
      *(_QWORD *)(v22 + 117) = *a6;
    if ( (unsigned int)Feature_EUSB2__private_IsEnabledDeviceUsageNoInline() )
    {
      v33 = a7;
      if ( a7 )
      {
        *(_BYTE *)(v22 + 39) = 1;
        *(_QWORD *)(v22 + 103) = *v33;
      }
      else
      {
        *(_BYTE *)(v22 + 39) = 0;
      }
    }
    Endpoint_SetType(v22);
    if ( *(_DWORD *)(v22 + 128) == 1 || (unsigned int)(*(_DWORD *)(v22 + 128) - 2) < 2 )
      v35 = 2 * (*(_BYTE *)(v22 + 98) & 0xF);
    else
      v35 = 2 * (*(_BYTE *)(v22 + 98) & 0xF) + 1;
    *(_DWORD *)(v22 + 152) = v35;
    ClearStallContext = XilEndpoint_Create(v34);
    if ( ClearStallContext < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return (unsigned int)ClearStallContext;
      v25 = *(unsigned __int8 *)(a4 + 2);
      v26 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01033 + 1616))(
              WdfDriverGlobals,
              a2,
              off_14006B128);
      v19 = 20;
LABEL_31:
      LODWORD(v48) = ClearStallContext;
      LODWORD(v47) = (v25 >> 7) + 2 * (*(_BYTE *)(a4 + 2) & 0x7F);
      LODWORD(v46) = *(unsigned __int8 *)(v26 + 143);
      goto LABEL_13;
    }
    v36 = *(_QWORD *)(v22 + 16);
    *(_QWORD *)(v22 + 272) = 0LL;
    if ( *(_DWORD *)(v36 + 20) == 3 && (*(_BYTE *)(v22 + 99) & 3) == 2 && (*(_BYTE *)(v22 + 114) & 0x1F) != 0 )
    {
      v37 = *(_QWORD *)v22;
      *(_BYTE *)(v22 + 37) = 1;
      if ( (*(_QWORD *)(v37 + 736) & 0x200000LL) != 0 )
      {
        ClearStallContext = Endpoint_CreateClearStallContext(v22);
        if ( ClearStallContext < 0 )
        {
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            return (unsigned int)ClearStallContext;
          v38 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01033 + 1616))(
                  WdfDriverGlobals,
                  a2,
                  off_14006B128);
          v19 = 21;
          goto LABEL_61;
        }
        ContextSize = XilRegister_GetContextSize(v57);
        v40 = 2112;
        if ( ContextSize != 1 )
          v40 = 1056;
        *(_QWORD *)(v22 + 272) = XilEndpoint_AcquireBuffer((_BYTE *)v22, v40, v22, 863268933);
      }
    }
    else
    {
      *(_BYTE *)(v22 + 37) = 0;
    }
    ClearStallContext = TR_Create(v9, v22, v49, *(_BYTE *)(v22 + 37) != 0, v22 + 88);
    if ( ClearStallContext >= 0 )
    {
      WdfQueue = TR_GetWdfQueue(*(_QWORD *)(v22 + 88));
      ((void (__fastcall *)(__int64, __int64, __int64))qword_14006BDD8)(UcxDriverGlobals, v49, WdfQueue);
      if ( *(_DWORD *)(v22 + 152) == 1 )
        *(_QWORD *)(*(_QWORD *)(v22 + 16) + 184LL) = v22;
      v42 = *(_QWORD *)(v22 + 16);
      *(_QWORD *)(v22 + 24) = v49;
      UsbDevice_AddEndpointToDeviceEndpointList(v42, v49, (_QWORD *)(v22 + 64));
      Etw_EndpointCreate(v43, (_QWORD *)v22);
      return (unsigned int)ClearStallContext;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return (unsigned int)ClearStallContext;
    v38 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01033 + 1616))(
            WdfDriverGlobals,
            a2,
            off_14006B128);
    v19 = 22;
LABEL_61:
    LODWORD(v48) = ClearStallContext;
    LODWORD(v47) = *(_DWORD *)(v22 + 152);
    LODWORD(v46) = *(unsigned __int8 *)(v38 + 143);
    goto LABEL_13;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v17 = *(unsigned __int8 *)(a4 + 2);
    v18 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01033 + 1616))(
            WdfDriverGlobals,
            a2,
            off_14006B128);
    v19 = 16;
    LODWORD(v48) = ClearStallContext;
    LODWORD(v47) = (v17 >> 7) + 2 * (*(_BYTE *)(a4 + 2) & 0x7F);
    LODWORD(v46) = *(unsigned __int8 *)(v18 + 143);
LABEL_13:
    WPP_RECORDER_SF_ddL(
      *(_QWORD *)(v9 + 72),
      2u,
      0xDu,
      v19,
      (__int64)&WPP_d3be1904650e34f1a39197b3dd99b0d4_Traceguids,
      v46,
      v47,
      v48);
  }
  return (unsigned int)ClearStallContext;
}
