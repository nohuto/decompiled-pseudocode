/*
 * XREFs of ?ndisMInvokeOidRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x140152C80
 * Callers:
 *     ?ndisMDoOidRequest@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14000A5A0 (-ndisMDoOidRequest@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisWdmSendPmOidsForSuspend@@YAHPEAU_NDIS_MINIPORT_BLOCK@@W4_DEVICE_POWER_STATE@@@Z @ 0x140068B80 (-ndisWdmSendPmOidsForSuspend@@YAHPEAU_NDIS_MINIPORT_BLOCK@@W4_DEVICE_POWER_STATE@@@Z.c)
 *     ndisMSendPmParametersOidForSuspend @ 0x140068E80 (ndisMSendPmParametersOidForSuspend.c)
 *     ?ndisSetPowerResumeCompleteWorkItem@@YAXPEAX@Z @ 0x1400C37A0 (-ndisSetPowerResumeCompleteWorkItem@@YAXPEAX@Z.c)
 *     ?ndisMInvokeBlockingOidRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x140138028 (-ndisMInvokeBlockingOidRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z.c)
 *     ?ndisAddWoLDirectedMAC@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14013FBA0 (-ndisAddWoLDirectedMAC@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisRemoveWoLDirectedMAC@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14013FF20 (-ndisRemoveWoLDirectedMAC@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     ?ndisOidFreeInternalCloneRequest@@YAXPEAU_NDIS_OBJECT_HEADER@@PEAU_NDIS_OID_REQUEST@@EPEAPEAU2@@Z @ 0x14000CBF0 (-ndisOidFreeInternalCloneRequest@@YAXPEAU_NDIS_OBJECT_HEADER@@PEAU_NDIS_OID_REQUEST@@EPEAPEAU2@@.c)
 *     WPP_RECORDER_SF_qDqd @ 0x140015CC0 (WPP_RECORDER_SF_qDqd_ea_140015CC0.c)
 *     WPP_RECORDER_SF_qDq @ 0x140015E00 (WPP_RECORDER_SF_qDq.c)
 *     ?ndisOidCloneForCompatibility@@YAHPEAU_NDIS_OBJECT_HEADER@@PEAU_NDIS_OID_REQUEST@@EPEAPEAU2@@Z @ 0x140016CB0 (-ndisOidCloneForCompatibility@@YAHPEAU_NDIS_OBJECT_HEADER@@PEAU_NDIS_OID_REQUEST@@EPEAPEAU2@@Z.c)
 *     ?ndisIsMiniportVerified@@YAEPEAU_NDIS_M_DRIVER_BLOCK@@@Z @ 0x140047700 (-ndisIsMiniportVerified@@YAEPEAU_NDIS_M_DRIVER_BLOCK@@@Z.c)
 *     ?ndisDisarmWatchdogAsync@@YAXPEAUNDISWATCHDOG__@@@Z @ 0x140048E80 (-ndisDisarmWatchdogAsync@@YAXPEAUNDISWATCHDOG__@@@Z.c)
 *     ??$ndisAzTelemetryOidDelivered@U_NDIS_MINIPORT_BLOCK@@@@YAXPEBU_NDIS_MINIPORT_BLOCK@@PEBU_NDIS_OID_REQUEST@@@Z @ 0x14004CB10 (--$ndisAzTelemetryOidDelivered@U_NDIS_MINIPORT_BLOCK@@@@YAXPEBU_NDIS_MINIPORT_BLOCK@@PEBU_NDIS_O.c)
 *     ?WatchdogFromHandle@@YAPEAUNdisWatchdogState@@PEAUNDISWATCHDOG__@@@Z @ 0x140051440 (-WatchdogFromHandle@@YAPEAUNdisWatchdogState@@PEAUNDISWATCHDOG__@@@Z.c)
 *     ?ndisOidNeedArmWatchDog@@YAEPEAU_NDIS_OID_REQUEST@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140085ED0 (-ndisOidNeedArmWatchDog@@YAEPEAU_NDIS_OID_REQUEST@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisBugCheckEx@@YAX_K000@Z @ 0x14008ADC0 (-ndisBugCheckEx@@YAX_K000@Z.c)
 *     _guard_dispatch_icall @ 0x1400E7130 (_guard_dispatch_icall.c)
 *     ndisReduceTimeoutFor9FBugcheck @ 0x140153240 (ndisReduceTimeoutFor9FBugcheck.c)
 */

__int64 __fastcall ndisMInvokeOidRequest(struct _NDIS_MINIPORT_BLOCK *a1, struct _NDIS_OID_REQUEST *a2)
{
  __int64 Oid; // r12
  _NDIS_M_DRIVER_BLOCK *DriverHandle; // r13
  NDIS_STATUS v6; // eax
  unsigned int v7; // ebx
  struct _NDIS_OID_REQUEST *v8; // rsi
  struct _NDIS_OID_REQUEST *v9; // rbp
  _NDIS_M_DRIVER_BLOCK *v10; // rax
  _NDIS_MINIPORT_DRIVER_CHARACTERISTICS *value; // rcx
  NDISWATCHDOG__ *m_ptr; // r15
  struct NDISWATCHDOG__ *v13; // rax
  NTSTATUS v14; // eax
  int (__fastcall *OidRequestHandler)(void *, _NDIS_OID_REQUEST *); // rbx
  unsigned int v16; // edx
  struct NDISWATCHDOG__ *v17; // rsi
  int Type; // eax
  _NDIS_MINIPORT_BLOCK *BaseMiniport; // rcx
  char v20; // al
  unsigned int v21; // eax
  __int64 v22; // rbx
  int v23; // r8d
  _NDIS_M_DRIVER_BLOCK *v24; // rax
  _NDIS_MINIPORT_DRIVER_CHARACTERISTICS *v25; // rcx
  int v26; // r8d
  int v27; // eax
  int v28; // edx
  int v29; // r8d
  int v31; // eax
  unsigned __int16 v32; // r9
  NDIS_OID v33; // [rsp+90h] [rbp+8h]
  unsigned int v34; // [rsp+98h] [rbp+10h] BYREF
  struct _NDIS_OID_REQUEST *v35; // [rsp+A0h] [rbp+18h] BYREF

  Oid = a2->DATA.QUERY_INFORMATION.Oid;
  DriverHandle = a1->DriverHandle;
  v33 = a2->DATA.QUERY_INFORMATION.Oid;
  v35 = 0LL;
  v6 = ndisOidCloneForCompatibility(&a1->Header, a2, 1, &v35);
  v7 = v6;
  if ( v6 )
  {
    if ( v6 == 259 )
      return v7;
    v8 = v35;
    goto LABEL_23;
  }
  v8 = v35;
  v9 = a2;
  v10 = a1->DriverHandle;
  if ( v35 )
    v9 = v35;
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
    OidRequestHandler = DriverHandle->MiniportDriverCharacteristics.OidRequestHandler;
    v34 = ndisWatchdogOidTimeout;
    v17 = WatchdogFromHandle(m_ptr);
    *((_DWORD *)v17 + 50) = 846677070;
    Type = a1->Header.Type;
    if ( Type == 5 )
    {
      BaseMiniport = *(_NDIS_MINIPORT_BLOCK **)&a1->Reserved4.Length;
    }
    else
    {
      v31 = Type - 17;
      if ( v31 )
      {
        if ( v31 != 1 )
        {
LABEL_13:
          *((_DWORD *)v17 + 51) = v16;
          *((_QWORD *)v17 + 26) = &ndisGlobalTriageBlock;
          *((_QWORD *)v17 + 27) = a1;
          *((_QWORD *)v17 + 28) = MEMORY[0xFFFFF78000000008];
          *((_QWORD *)v17 + 29) = KeGetCurrentThread();
          v21 = g_ndisWatchdogSequenceNumber;
          *((_QWORD *)v17 + 32) = OidRequestHandler;
          *((_QWORD *)v17 + 30) = Oid;
          g_ndisWatchdogSequenceNumber = v21 + 1;
          *((_DWORD *)v17 + 41) = v21 + 1;
          v22 = -10000LL * *((unsigned int *)v17 + 51);
          *((_DWORD *)v17 + 48) = 35;
          *((_DWORD *)v17 + 40) = 1;
          KeClearEvent((PRKEVENT)v17 + 7);
          KeSetTimerEx((PKTIMER)v17 + 1, (LARGE_INTEGER)v22, 0, (PKDPC)v17);
          v8 = v35;
          goto LABEL_14;
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
      v20 = ndisReduceTimeoutFor9FBugcheck(BaseMiniport, &v34);
      v16 = v34;
      *((_BYTE *)v17 + 248) = v20;
    }
    goto LABEL_13;
  }
LABEL_14:
  ndisAzTelemetryOidDelivered<_NDIS_MINIPORT_BLOCK>((__int64)a1, (__int64)v9);
  v24 = a1->DriverHandle;
  v25 = v24->UnhookedCharacteristics.__ptr_.__value_;
  if ( !v25 || v25->OidRequestHandler == v24->MiniportDriverCharacteristics.OidRequestHandler )
  {
    if ( ndisIsMiniportVerified(DriverHandle) )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_qDq(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          4u,
          v26,
          0xEEu,
          (struct _GUID *)&WPP_af651eb67934303d7b17b39d6bfcb024_Traceguids,
          (char)a1,
          v33,
          v9);
      v27 = (*((__int64 (__fastcall **)(void *, struct _NDIS_OID_REQUEST *, struct _NDIS_MINIPORT_BLOCK *, void *, int (__fastcall *)(void *, _NDIS_OID_REQUEST *)))ndisVerifierNdisDispatch
             + 3))(
              a1->MiniportAdapterContext,
              v9,
              a1,
              a1->VerifierContext,
              DriverHandle->MiniportDriverCharacteristics.OidRequestHandler);
      v7 = v27;
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_19;
      v32 = 239;
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_qDq(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          4u,
          v26,
          0xF0u,
          (struct _GUID *)&WPP_af651eb67934303d7b17b39d6bfcb024_Traceguids,
          (char)a1,
          v33,
          v9);
      v27 = DriverHandle->MiniportDriverCharacteristics.OidRequestHandler(a1->MiniportAdapterContext, v9);
      v7 = v27;
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_19;
      v32 = 241;
    }
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qDq(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        v23,
        0xECu,
        (struct _GUID *)&WPP_af651eb67934303d7b17b39d6bfcb024_Traceguids,
        (char)a1,
        v33,
        v9);
    v27 = DriverHandle->MiniportDriverCharacteristics.OidRequestHandler(a1->MiniportAdapterContext, v9);
    v7 = v27;
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_19;
    v32 = 237;
  }
  WPP_RECORDER_SF_qDqd(
    *((_QWORD *)WPP_GLOBAL_Control + 8),
    v28,
    v29,
    v32,
    (struct _GUID *)&WPP_af651eb67934303d7b17b39d6bfcb024_Traceguids,
    (char)a1,
    v33,
    (char)v9,
    v27);
LABEL_19:
  if ( v7 == 259 )
    return v7;
  if ( ndisOidNeedArmWatchDog(a2, a1) )
    ndisDisarmWatchdogAsync(m_ptr);
LABEL_23:
  if ( v8 )
    ndisOidFreeInternalCloneRequest(&a1->Header, v8, 1, 0LL);
  return v7;
}
