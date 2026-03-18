/*
 * XREFs of Endpoint_Create @ 0x140080B84
 * Callers:
 *     Endpoint_UcxEvtUsbDeviceEndpointAdd @ 0x140080760 (Endpoint_UcxEvtUsbDeviceEndpointAdd.c)
 *     Endpoint_UcxEvtUsbDeviceDefaultEndpointAdd @ 0x140080930 (Endpoint_UcxEvtUsbDeviceDefaultEndpointAdd.c)
 * Callees:
 *     WPP_RECORDER_SF_ddL @ 0x140001D34 (WPP_RECORDER_SF_ddL.c)
 *     Etw_EndpointCreate @ 0x140002758 (Etw_EndpointCreate.c)
 *     WPP_RECORDER_SF_dD @ 0x14000D338 (WPP_RECORDER_SF_dD.c)
 *     XilEndpoint_AcquireBuffer @ 0x14000E5BC (XilEndpoint_AcquireBuffer.c)
 *     WPP_RECORDER_SF_ddq @ 0x140021C28 (WPP_RECORDER_SF_ddq.c)
 *     UsbDevice_AddEndpointToDeviceEndpointList @ 0x140031120 (UsbDevice_AddEndpointToDeviceEndpointList.c)
 *     WPP_RECORDER_SF_ddqDdd @ 0x1400314E4 (WPP_RECORDER_SF_ddqDdd.c)
 *     XilEndpoint_Create @ 0x140032E00 (XilEndpoint_Create.c)
 *     Controller_IsSecureDevice @ 0x140034338 (Controller_IsSecureDevice.c)
 *     Endpoint_CreateClearStallContext @ 0x1400347F8 (Endpoint_CreateClearStallContext.c)
 *     XilRegister_GetContextSize @ 0x140034A14 (XilRegister_GetContextSize.c)
 *     TR_GetWdfQueue @ 0x140035838 (TR_GetWdfQueue.c)
 *     _guard_dispatch_icall @ 0x1400596E0 (_guard_dispatch_icall.c)
 *     Endpoint_SetType @ 0x1400820D4 (Endpoint_SetType.c)
 *     TR_Create @ 0x14008313C (TR_Create.c)
 */

__int64 __fastcall Endpoint_Create(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, _QWORD *a6)
{
  __int64 v8; // rsi
  unsigned int v9; // ebx
  __int64 v10; // rdx
  char IsSecureDevice; // al
  int v12; // edx
  int v13; // ecx
  int v14; // edx
  int ClearStallContext; // edi
  unsigned int v16; // ebx
  __int64 v17; // rax
  unsigned __int16 v18; // r9
  unsigned int v19; // ebx
  __int64 v20; // rax
  __int64 v21; // rbx
  char v22; // al
  bool v23; // zf
  unsigned int v24; // ebx
  __int64 v25; // rax
  struct _DEVICE_OBJECT *v26; // rax
  PIO_WORKITEM WorkItem; // rax
  unsigned int v28; // ebx
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rcx
  __int64 v32; // rcx
  int v33; // eax
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  int ContextSize; // eax
  unsigned int v38; // edx
  __int64 WdfQueue; // rax
  __int64 v40; // rcx
  __int64 v41; // rcx
  int v43; // [rsp+28h] [rbp-89h]
  __int64 v44; // [rsp+30h] [rbp-81h]
  __int64 v45; // [rsp+38h] [rbp-79h]
  __int64 v46; // [rsp+40h] [rbp-71h]
  __int64 v47; // [rsp+68h] [rbp-49h] BYREF
  __int128 v48; // [rsp+70h] [rbp-41h] BYREF
  __int128 v49; // [rsp+80h] [rbp-31h]
  __int128 v50; // [rsp+90h] [rbp-21h]
  void *v51; // [rsp+A0h] [rbp-11h]
  __int128 v52; // [rsp+A8h] [rbp-9h] BYREF
  __int128 v53; // [rsp+B8h] [rbp+7h]
  __int64 v54; // [rsp+C8h] [rbp+17h]
  __int64 v55; // [rsp+D0h] [rbp+1Fh]
  __int64 v56; // [rsp+118h] [rbp+67h] BYREF

  v56 = a3;
  DWORD1(v48) = 0;
  DWORD1(v52) = 0;
  v47 = 0LL;
  v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01033 + 1616))(
         WdfDriverGlobals,
         a1,
         off_14006B290);
  v55 = *(_QWORD *)(v8 + 88);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v9 = *(unsigned __int8 *)(a4 + 2);
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01033 + 1616))(
      WdfDriverGlobals,
      a2,
      off_14006B128);
    HIDWORD(v46) = HIDWORD(a4);
    WPP_RECORDER_SF_ddqDdd(
      *(_QWORD *)(v8 + 72),
      v10,
      (v9 >> 7) + 2 * (*(_BYTE *)(a4 + 2) & 0x7F),
      *(_BYTE *)(a4 + 3) & 3,
      v43);
  }
  v50 = 0LL;
  DWORD1(v48) = 0;
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
  v51 = off_14006AFE8;
  *((_QWORD *)&v49 + 1) = 0x100000001LL;
  *((_QWORD *)&v48 + 1) = Endpoint_EvtEndpointCleanupCallback;
  *(_QWORD *)&v49 = Endpoint_EvtDestroyCallback;
  IsSecureDevice = Controller_IsSecureDevice(v8);
  v13 = v12;
  v14 = v12 + 1;
  if ( IsSecureDevice )
    v13 = v14;
  DWORD2(v49) = v13;
  ClearStallContext = qword_14006BDD0(UcxDriverGlobals, a2, &v56, &v48, &v47);
  if ( ClearStallContext >= 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v19 = *(unsigned __int8 *)(a4 + 2);
      v20 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01033 + 1616))(
              WdfDriverGlobals,
              a2,
              off_14006B128);
      WPP_RECORDER_SF_ddq(
        *(_QWORD *)(v8 + 72),
        4u,
        0xDu,
        0x10u,
        (__int64)&WPP_0e51d3b82fdb347dedaae242937bad3f_Traceguids,
        *(unsigned __int8 *)(v20 + 135),
        (v19 >> 7) + 2 * (*(_BYTE *)(a4 + 2) & 0x7F),
        v47);
    }
    v21 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01033 + 1616))(
            WdfDriverGlobals,
            v47,
            off_14006AFE8);
    KeInitializeEvent((PRKEVENT)(v21 + 40), NotificationEvent, 0);
    v54 = 0LL;
    v52 = 0LL;
    v53 = 0LL;
    if ( WdfClientVersionHigherThanFramework )
    {
      if ( (unsigned int)WdfStructureCount <= 0x37 )
        LODWORD(v52) = -1;
      else
        LODWORD(v52) = *(_DWORD *)(WdfStructures + 440);
    }
    else
    {
      LODWORD(v52) = 40;
    }
    LODWORD(v53) = 0;
    DWORD2(v53) = 0;
    *((_QWORD *)&v52 + 1) = Endpoint_WdfEvtStateMachineTimer;
    v22 = v54;
    BYTE4(v53) = 1;
    v23 = (*(_QWORD *)(v8 + 744) & 0x40000LL) == 0;
    v48 = 0LL;
    if ( !v23 )
      v22 = 1;
    LOBYTE(v54) = v22;
    v51 = 0LL;
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
    *(_QWORD *)&v50 = v47;
    *((_QWORD *)&v49 + 1) = 0x100000001LL;
    ClearStallContext = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int128 *, __int128 *, __int64))(WdfFunctions_01033 + 2544))(
                          WdfDriverGlobals,
                          &v52,
                          &v48,
                          v21 + 1304);
    if ( ClearStallContext < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return (unsigned int)ClearStallContext;
      v24 = *(unsigned __int8 *)(a4 + 2);
      v25 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01033 + 1616))(
              WdfDriverGlobals,
              a2,
              off_14006B128);
      v18 = 17;
      goto LABEL_31;
    }
    v26 = (struct _DEVICE_OBJECT *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01033 + 248))(
                                     WdfDriverGlobals,
                                     *(_QWORD *)v8);
    WorkItem = IoAllocateWorkItem(v26);
    *(_QWORD *)(v21 + 1280) = WorkItem;
    if ( !WorkItem )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v28 = *(unsigned __int8 *)(a4 + 2);
        v29 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01033 + 1616))(
                WdfDriverGlobals,
                a2,
                off_14006B128);
        LODWORD(v45) = (v28 >> 7) + 2 * (*(_BYTE *)(a4 + 2) & 0x7F);
        LODWORD(v44) = *(unsigned __int8 *)(v29 + 135);
        WPP_RECORDER_SF_dD(
          *(_QWORD *)(v8 + 72),
          2u,
          0xDu,
          0x12u,
          (__int64)&WPP_0e51d3b82fdb347dedaae242937bad3f_Traceguids,
          v44,
          v45);
      }
      return (unsigned int)-1073741670;
    }
    *(_DWORD *)(v21 + 1176) = 0;
    *(_DWORD *)(v21 + 1148) = 2000;
    *(_DWORD *)(v21 + 1272) = 2000;
    *(_QWORD *)(v21 + 1264) = &ESMStateTable;
    *(_QWORD *)(v21 + 1256) = v21;
    *(_BYTE *)(v21 + 1314) = Controller_IsSecureDevice(v8);
    if ( *(_BYTE *)(g_WdfDriverUsbXhciContext + 28) && (*(_DWORD *)(v8 + 1284) & 1) != 0 )
      *(_BYTE *)(v21 + 1314) = 1;
    *(_QWORD *)v21 = v8;
    *(_QWORD *)(v21 + 8) = a2;
    v30 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01033 + 1616))(
            WdfDriverGlobals,
            a2,
            off_14006B128);
    v31 = a5;
    *(_QWORD *)(v21 + 16) = v30;
    *(_QWORD *)(v21 + 136) = 0LL;
    *(_QWORD *)(v21 + 272) = 0LL;
    *(_DWORD *)(v21 + 96) = *(_DWORD *)a4;
    *(_WORD *)(v21 + 100) = *(_WORD *)(a4 + 4);
    *(_BYTE *)(v21 + 102) = *(_BYTE *)(a4 + 6);
    if ( v31 )
    {
      *(_DWORD *)(v21 + 103) = *(_DWORD *)v31;
      *(_WORD *)(v21 + 107) = *(_WORD *)(v31 + 4);
    }
    if ( a6 )
      *(_QWORD *)(v21 + 109) = *a6;
    Endpoint_SetType(v21);
    if ( *(_DWORD *)(v21 + 120) == 1 || (unsigned int)(*(_DWORD *)(v21 + 120) - 2) < 2 )
      v33 = 2 * (*(_BYTE *)(v21 + 98) & 0xF);
    else
      v33 = 2 * (*(_BYTE *)(v21 + 98) & 0xF) + 1;
    *(_DWORD *)(v21 + 144) = v33;
    ClearStallContext = XilEndpoint_Create(v32);
    if ( ClearStallContext < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return (unsigned int)ClearStallContext;
      v24 = *(unsigned __int8 *)(a4 + 2);
      v25 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01033 + 1616))(
              WdfDriverGlobals,
              a2,
              off_14006B128);
      v18 = 19;
LABEL_31:
      LODWORD(v46) = ClearStallContext;
      LODWORD(v45) = (v24 >> 7) + 2 * (*(_BYTE *)(a4 + 2) & 0x7F);
      LODWORD(v44) = *(unsigned __int8 *)(v25 + 135);
      goto LABEL_13;
    }
    v34 = *(_QWORD *)(v21 + 16);
    *(_QWORD *)(v21 + 264) = 0LL;
    if ( *(_DWORD *)(v34 + 20) == 3 && (*(_BYTE *)(v21 + 99) & 3) == 2 && (*(_BYTE *)(v21 + 106) & 0x1F) != 0 )
    {
      v35 = *(_QWORD *)v21;
      *(_BYTE *)(v21 + 37) = 1;
      if ( (*(_QWORD *)(v35 + 736) & 0x200000LL) != 0 )
      {
        ClearStallContext = Endpoint_CreateClearStallContext(v21);
        if ( ClearStallContext < 0 )
        {
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            return (unsigned int)ClearStallContext;
          v36 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01033 + 1616))(
                  WdfDriverGlobals,
                  a2,
                  off_14006B128);
          v18 = 20;
          goto LABEL_57;
        }
        ContextSize = XilRegister_GetContextSize(v55);
        v38 = 2112;
        if ( ContextSize != 1 )
          v38 = 1056;
        *(_QWORD *)(v21 + 264) = XilEndpoint_AcquireBuffer((_BYTE *)v21, v38, v21, 0x33747045u);
      }
    }
    else
    {
      *(_BYTE *)(v21 + 37) = 0;
    }
    ClearStallContext = TR_Create(v8, v21, v47, *(_BYTE *)(v21 + 37) != 0, v21 + 88);
    if ( ClearStallContext >= 0 )
    {
      WdfQueue = TR_GetWdfQueue(*(_QWORD *)(v21 + 88));
      ((void (__fastcall *)(__int64, __int64, __int64))qword_14006BDF8)(UcxDriverGlobals, v47, WdfQueue);
      if ( *(_DWORD *)(v21 + 144) == 1 )
        *(_QWORD *)(*(_QWORD *)(v21 + 16) + 176LL) = v21;
      v40 = *(_QWORD *)(v21 + 16);
      *(_QWORD *)(v21 + 24) = v47;
      UsbDevice_AddEndpointToDeviceEndpointList(v40, v47, (_QWORD *)(v21 + 64));
      Etw_EndpointCreate(v41, (_QWORD *)v21);
      return (unsigned int)ClearStallContext;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return (unsigned int)ClearStallContext;
    v36 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01033 + 1616))(
            WdfDriverGlobals,
            a2,
            off_14006B128);
    v18 = 21;
LABEL_57:
    LODWORD(v46) = ClearStallContext;
    LODWORD(v45) = *(_DWORD *)(v21 + 144);
    LODWORD(v44) = *(unsigned __int8 *)(v36 + 135);
    goto LABEL_13;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v16 = *(unsigned __int8 *)(a4 + 2);
    v17 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01033 + 1616))(
            WdfDriverGlobals,
            a2,
            off_14006B128);
    v18 = 15;
    LODWORD(v46) = ClearStallContext;
    LODWORD(v45) = (v16 >> 7) + 2 * (*(_BYTE *)(a4 + 2) & 0x7F);
    LODWORD(v44) = *(unsigned __int8 *)(v17 + 135);
LABEL_13:
    WPP_RECORDER_SF_ddL(
      *(_QWORD *)(v8 + 72),
      2u,
      0xDu,
      v18,
      (__int64)&WPP_0e51d3b82fdb347dedaae242937bad3f_Traceguids,
      v44,
      v45,
      v46);
  }
  return (unsigned int)ClearStallContext;
}
