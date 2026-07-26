/*
 * XREFs of ?ndisMInvokeOidRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x140165EE0
 * Callers:
 *     ?ndisMDoOidRequest@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1400229C0 (-ndisMDoOidRequest@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisWdmSendPmOidsForSuspend@@YAHPEAU_NDIS_MINIPORT_BLOCK@@W4_DEVICE_POWER_STATE@@@Z @ 0x140083FB0 (-ndisWdmSendPmOidsForSuspend@@YAHPEAU_NDIS_MINIPORT_BLOCK@@W4_DEVICE_POWER_STATE@@@Z.c)
 *     ndisMSendPmParametersOidForSuspend @ 0x1400842B0 (ndisMSendPmParametersOidForSuspend.c)
 *     ?ndisSetPowerResumeCompleteWorkItem@@YAXPEAX@Z @ 0x1400CA780 (-ndisSetPowerResumeCompleteWorkItem@@YAXPEAX@Z.c)
 *     ?ndisMInvokeBlockingOidRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x140143048 (-ndisMInvokeBlockingOidRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z.c)
 *     ?ndisAddWoLDirectedMAC@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14014AA60 (-ndisAddWoLDirectedMAC@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisRemoveWoLDirectedMAC@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14014ADE0 (-ndisRemoveWoLDirectedMAC@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     ?ndisOidCloneForCompatibility@@YAHPEAU_NDIS_OBJECT_HEADER@@PEAU_NDIS_OID_REQUEST@@EPEAPEAU2@@Z @ 0x140022040 (-ndisOidCloneForCompatibility@@YAHPEAU_NDIS_OBJECT_HEADER@@PEAU_NDIS_OID_REQUEST@@EPEAPEAU2@@Z.c)
 *     WPP_RECORDER_SF_qDq @ 0x140024890 (WPP_RECORDER_SF_qDq.c)
 *     WPP_RECORDER_SF_qDqd @ 0x140025370 (WPP_RECORDER_SF_qDqd.c)
 *     ?ndisDisarmWatchdogAsync@@YAXPEAUNDISWATCHDOG__@@@Z @ 0x1400256F0 (-ndisDisarmWatchdogAsync@@YAXPEAUNDISWATCHDOG__@@@Z.c)
 *     ?ndisOidFreeInternalCloneRequest@@YAXPEAU_NDIS_OBJECT_HEADER@@PEAU_NDIS_OID_REQUEST@@EPEAPEAU2@@Z @ 0x140027350 (-ndisOidFreeInternalCloneRequest@@YAXPEAU_NDIS_OBJECT_HEADER@@PEAU_NDIS_OID_REQUEST@@EPEAPEAU2@@.c)
 *     ?ndisIsMiniportVerified@@YAEPEAU_NDIS_M_DRIVER_BLOCK@@@Z @ 0x140060C80 (-ndisIsMiniportVerified@@YAEPEAU_NDIS_M_DRIVER_BLOCK@@@Z.c)
 *     ??$ndisAzTelemetryOidDelivered@U_NDIS_MINIPORT_BLOCK@@@@YAXPEBU_NDIS_MINIPORT_BLOCK@@PEBU_NDIS_OID_REQUEST@@@Z @ 0x140068790 (--$ndisAzTelemetryOidDelivered@U_NDIS_MINIPORT_BLOCK@@@@YAXPEBU_NDIS_MINIPORT_BLOCK@@PEBU_NDIS_O.c)
 *     ?ndisOidNeedArmWatchDog@@YAEPEAU_NDIS_OID_REQUEST@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14006A760 (-ndisOidNeedArmWatchDog@@YAEPEAU_NDIS_OID_REQUEST@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?WatchdogFromHandle@@YAPEAUNdisWatchdogState@@PEAUNDISWATCHDOG__@@@Z @ 0x14006CFF0 (-WatchdogFromHandle@@YAPEAUNdisWatchdogState@@PEAUNDISWATCHDOG__@@@Z.c)
 *     ?ndisBugCheckEx@@YAX_K000@Z @ 0x140096020 (-ndisBugCheckEx@@YAX_K000@Z.c)
 *     _guard_dispatch_icall @ 0x1400EDFC0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ndisMInvokeOidRequest(struct _NDIS_MINIPORT_BLOCK *a1, struct _NDIS_OID_REQUEST *a2)
{
  NDIS_OID Oid; // eax
  _NDIS_M_DRIVER_BLOCK *DriverHandle; // r13
  NDIS_STATUS v6; // eax
  unsigned int v7; // ebx
  struct _NDIS_OID_REQUEST *v8; // rsi
  struct _NDIS_OID_REQUEST *v9; // rbp
  _NDIS_M_DRIVER_BLOCK *v10; // rax
  _NDIS_MINIPORT_DRIVER_CHARACTERISTICS *value; // rcx
  NDISWATCHDOG__ *m_ptr; // r12
  struct NDISWATCHDOG__ *v13; // rax
  NTSTATUS v14; // eax
  unsigned int v15; // ebx
  int (__fastcall *OidRequestHandler)(void *, _NDIS_OID_REQUEST *); // r14
  struct NDISWATCHDOG__ *v17; // rsi
  int Type; // eax
  _NDIS_MINIPORT_BLOCK *BaseMiniport; // rcx
  _DEVICE_OBJECT *PhysicalDeviceObject; // rcx
  BOOLEAN v21; // al
  unsigned int v22; // eax
  __int64 v23; // rbx
  int v24; // r8d
  _NDIS_M_DRIVER_BLOCK *v25; // rax
  _NDIS_MINIPORT_DRIVER_CHARACTERISTICS *v26; // rcx
  int v27; // r8d
  int v28; // eax
  int v29; // edx
  int v30; // r8d
  int v32; // eax
  unsigned __int16 v33; // r9
  ULONG v34; // eax
  int v35; // ecx
  unsigned int v36; // eax
  unsigned int v37; // ecx
  NDIS_OID v38; // [rsp+90h] [rbp+8h]
  ULONG SecondsRemaining; // [rsp+98h] [rbp+10h] BYREF
  struct _NDIS_OID_REQUEST *v40; // [rsp+A0h] [rbp+18h] BYREF

  Oid = a2->DATA.QUERY_INFORMATION.Oid;
  DriverHandle = a1->DriverHandle;
  v40 = 0LL;
  v38 = Oid;
  v6 = ndisOidCloneForCompatibility(&a1->Header, a2, 1, &v40);
  v7 = v6;
  if ( v6 )
  {
    if ( v6 == 259 )
      return v7;
    v8 = v40;
    goto LABEL_25;
  }
  v8 = v40;
  v9 = a2;
  v10 = a1->DriverHandle;
  if ( v40 )
    v9 = v40;
  value = v10->UnhookedCharacteristics.__ptr_.__value_;
  if ( !value || value->OidRequestHandler == v10->MiniportDriverCharacteristics.OidRequestHandler )
    m_ptr = a1->PendingOidWatchdog.m_ptr;
  else
    m_ptr = a1->HookedOidWatchdog.m_ptr;
  if ( ndisOidNeedArmWatchDog(a2, a1) && m_ptr != (NDISWATCHDOG__ *)-1LL )
  {
    v13 = WatchdogFromHandle(m_ptr);
    v14 = KeWaitForSingleObject(v13 + 42, Executive, 0, 0, 0LL);
    if ( v14 )
      ndisBugCheckEx(0x24uLL, 1uLL, v14, 1uLL);
    v15 = ndisWatchdogOidTimeout;
    OidRequestHandler = DriverHandle->MiniportDriverCharacteristics.OidRequestHandler;
    v17 = WatchdogFromHandle(m_ptr);
    *((_DWORD *)v17 + 50) = 846677070;
    Type = a1->Header.Type;
    if ( Type == 5 )
    {
      BaseMiniport = *(_NDIS_MINIPORT_BLOCK **)&a1->Reserved4.Length;
    }
    else
    {
      v32 = Type - 17;
      if ( v32 )
      {
        if ( v32 != 1 )
        {
LABEL_15:
          *((_DWORD *)v17 + 51) = v15;
          *((_QWORD *)v17 + 26) = &ndisGlobalTriageBlock;
          *((_QWORD *)v17 + 27) = a1;
          *((_QWORD *)v17 + 28) = MEMORY[0xFFFFF78000000008];
          *((_QWORD *)v17 + 29) = KeGetCurrentThread();
          *((_QWORD *)v17 + 30) = v38;
          v22 = g_ndisWatchdogSequenceNumber;
          *((_QWORD *)v17 + 32) = OidRequestHandler;
          g_ndisWatchdogSequenceNumber = v22 + 1;
          *((_DWORD *)v17 + 41) = v22 + 1;
          v23 = -10000LL * *((unsigned int *)v17 + 51);
          *((_DWORD *)v17 + 48) = 35;
          *((_DWORD *)v17 + 40) = 1;
          KeClearEvent((PRKEVENT)v17 + 7);
          KeSetTimerEx((PKTIMER)v17 + 1, (LARGE_INTEGER)v23, 0, (PKDPC)v17);
          v8 = v40;
          goto LABEL_16;
        }
        BaseMiniport = a1->BaseMiniport;
      }
      else
      {
        BaseMiniport = a1;
      }
    }
    if ( BaseMiniport )
    {
      if ( (BaseMiniport->Flags & 0x100) != 0 )
      {
        v21 = 0;
      }
      else
      {
        PhysicalDeviceObject = BaseMiniport->PhysicalDeviceObject;
        SecondsRemaining = 0;
        v21 = PoQueryWatchdogTime(PhysicalDeviceObject, &SecondsRemaining);
        if ( v21 )
        {
          v34 = SecondsRemaining;
          if ( SecondsRemaining < 3 )
            v34 = 3;
          v35 = 1000 * v34;
          v36 = 3000;
          v37 = v35 - 3000;
          if ( v37 >= 0xBB8 )
            v36 = v37;
          if ( v36 < v15 )
            v15 = v36;
          v21 = 1;
        }
      }
      *((_BYTE *)v17 + 248) = v21;
    }
    goto LABEL_15;
  }
LABEL_16:
  ndisAzTelemetryOidDelivered<_NDIS_MINIPORT_BLOCK>((__int64)a1, (__int64)v9);
  v25 = a1->DriverHandle;
  v26 = v25->UnhookedCharacteristics.__ptr_.__value_;
  if ( !v26 || v26->OidRequestHandler == v25->MiniportDriverCharacteristics.OidRequestHandler )
  {
    if ( ndisIsMiniportVerified(DriverHandle) )
    {
      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_qDq(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          4u,
          v27,
          0xEDu,
          (struct _GUID *)&WPP_43271d933b6d32d160b64a5fa7a4854c_Traceguids,
          (char)a1,
          v38,
          v9);
      v28 = (*((__int64 (__fastcall **)(void *, struct _NDIS_OID_REQUEST *, struct _NDIS_MINIPORT_BLOCK *, void *, int (__fastcall *)(void *, _NDIS_OID_REQUEST *)))ndisVerifierNdisDispatch
             + 3))(
              a1->MiniportAdapterContext,
              v9,
              a1,
              a1->VerifierContext,
              DriverHandle->MiniportDriverCharacteristics.OidRequestHandler);
      v7 = v28;
      if ( *(int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        goto LABEL_21;
      v33 = 238;
    }
    else
    {
      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_qDq(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          4u,
          v27,
          0xEFu,
          (struct _GUID *)&WPP_43271d933b6d32d160b64a5fa7a4854c_Traceguids,
          (char)a1,
          v38,
          v9);
      v28 = DriverHandle->MiniportDriverCharacteristics.OidRequestHandler(a1->MiniportAdapterContext, v9);
      v7 = v28;
      if ( *(int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        goto LABEL_21;
      v33 = 240;
    }
  }
  else
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qDq(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        v24,
        0xEBu,
        (struct _GUID *)&WPP_43271d933b6d32d160b64a5fa7a4854c_Traceguids,
        (char)a1,
        v38,
        v9);
    v28 = DriverHandle->MiniportDriverCharacteristics.OidRequestHandler(a1->MiniportAdapterContext, v9);
    v7 = v28;
    if ( *(int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      goto LABEL_21;
    v33 = 236;
  }
  WPP_RECORDER_SF_qDqd(
    *((_QWORD *)WPP_GLOBAL_Control + 8),
    v29,
    v30,
    v33,
    (struct _GUID *)&WPP_43271d933b6d32d160b64a5fa7a4854c_Traceguids,
    (char)a1,
    v38,
    (char)v9,
    v28);
LABEL_21:
  if ( v7 == 259 )
    return v7;
  if ( ndisOidNeedArmWatchDog(a2, a1) )
    ndisDisarmWatchdogAsync(m_ptr);
LABEL_25:
  if ( v8 )
    ndisOidFreeInternalCloneRequest(&a1->Header, v8, 1, 0LL);
  return v7;
}
