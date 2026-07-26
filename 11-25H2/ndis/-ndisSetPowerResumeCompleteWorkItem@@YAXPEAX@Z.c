/*
 * XREFs of ?ndisSetPowerResumeCompleteWorkItem@@YAXPEAX@Z @ 0x1400CA780
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_Lq @ 0x140025AD0 (WPP_RECORDER_SF_Lq.c)
 *     WPP_RECORDER_SF_qZ @ 0x1400291D0 (WPP_RECORDER_SF_qZ.c)
 *     McTemplateK0jqxqq_EtwWriteTransfer @ 0x1400568E0 (McTemplateK0jqxqq_EtwWriteTransfer.c)
 *     ?ndisSignalD0RequestComplete@@YAXPEAU_NDIS_MINIPORT_BLOCK@@J@Z @ 0x140064100 (-ndisSignalD0RequestComplete@@YAXPEAU_NDIS_MINIPORT_BLOCK@@J@Z.c)
 *     ?NDIS_COUNT_POWER_TRANSITION@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z @ 0x14007CDE0 (-NDIS_COUNT_POWER_TRANSITION@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z.c)
 *     ?NdisUnexpectedSsError@@YAXPEAU_NDIS_MINIPORT_BLOCK@@GJ@Z @ 0x140098350 (-NdisUnexpectedSsError@@YAXPEAU_NDIS_MINIPORT_BLOCK@@GJ@Z.c)
 *     ?ndisSelectiveSuspendResumeOperations@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1400CA3A8 (-ndisSelectiveSuspendResumeOperations@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     __security_check_cookie @ 0x1400EDF40 (__security_check_cookie.c)
 *     memset @ 0x1400EE380 (memset.c)
 *     ?ndisRemoveWoLDirectedMAC@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14014ADE0 (-ndisRemoveWoLDirectedMAC@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisWaitForKernelObject@@YAXPEAX@Z @ 0x140160790 (-ndisWaitForKernelObject@@YAXPEAX@Z.c)
 *     ?ndisMInvokeOidRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x140165EE0 (-ndisMInvokeOidRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z.c)
 */

void __fastcall ndisSetPowerResumeCompleteWorkItem(_QWORD *a1)
{
  __int64 v1; // rbx
  _IRP *v2; // r15
  int v3; // edi
  __int64 v4; // r14
  __int64 v5; // rcx
  int v6; // esi
  __int64 v7; // rcx
  __int64 v8; // rdx
  KIRQL v9; // al
  struct _GUID *v10; // [rsp+20h] [rbp-E0h]
  __int64 v11; // [rsp+30h] [rbp-D0h]
  __int64 v12; // [rsp+38h] [rbp-C8h]
  POWER_STATE State; // [rsp+40h] [rbp-C0h] BYREF
  struct _NDIS_OID_REQUEST v14; // [rsp+50h] [rbp-B0h] BYREF

  v1 = a1[4];
  v2 = (_IRP *)a1[5];
  v3 = 0;
  v4 = *(_QWORD *)(v1 + 4448);
  memset(&v14.Header.Revision, 0, 0xF7uLL);
  NDIS_COUNT_POWER_TRANSITION((struct _NDIS_MINIPORT_BLOCK *)v1, 1);
  if ( (byte_140125101 & 8) != 0 )
  {
    LODWORD(v12) = 1;
    LODWORD(v11) = 1;
    LODWORD(v10) = *(_DWORD *)(v1 + 4056);
    McTemplateK0jqxqq_EtwWriteTransfer(
      v5,
      &DevicePowerStateChange,
      (const GUID *)(v1 + 4008),
      v1 + 4008,
      (__int64)v10,
      *(_QWORD *)(v1 + 4024),
      v11,
      v12);
  }
  State.SystemState = PowerSystemWorking;
  memset(&v14, 0, 0xF8uLL);
  *(_DWORD *)&v14.NdisReserved[16] |= 8u;
  *(_QWORD *)&v14.NdisReserved[32] = &ndisIntReqGeneric;
  EtwActivityIdControl(3u, (LPGUID)&v14.NdisReserved[96]);
  *(_DWORD *)&v14.NdisReserved[16] |= 0x400u;
  v14.DATA.QUERY_INFORMATION.InformationBuffer = &State;
  v14.Header = (NDIS_OBJECT_HEADER)15466902;
  v14.DATA.QUERY_INFORMATION.Oid = -50265855;
  *(_QWORD *)&v14.RequestType = 1LL;
  v14.DATA.QUERY_INFORMATION.InformationBufferLength = 4;
  KeInitializeEvent((PRKEVENT)&v14.NdisReserved[40], NotificationEvent, 0);
  v6 = ndisMInvokeOidRequest((struct _NDIS_MINIPORT_BLOCK *)v1, &v14);
  if ( v6 == 259 )
  {
    ndisWaitForKernelObject(&v14.NdisReserved[40]);
    v6 = *(_DWORD *)&v14.NdisReserved[8];
  }
  if ( v6 )
  {
    v3 = -1073741823;
    NdisUnexpectedSsError((struct _NDIS_MINIPORT_BLOCK *)v1, 8u, v6);
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_Lq(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        0xFu,
        0x1Eu,
        (struct _GUID *)&WPP_0da1f7415b08391dc91ed9194dfe6793_Traceguids,
        v6,
        v1);
  }
  else
  {
    v7 = *(_QWORD *)(v1 + 4456);
    if ( v7
      && (*(_BYTE *)(v1 + 124) & 0x60) == 0x60
      && (unsigned int)(*(_DWORD *)(v1 + 1272) - 2) <= 2
      && (*(_DWORD *)(v1 + 1004) & 6) != 0
      && *(_BYTE *)(v7 + 1080) )
    {
      ndisRemoveWoLDirectedMAC((struct _NDIS_MINIPORT_BLOCK *)v1);
    }
    ndisSelectiveSuspendResumeOperations((struct _NDIS_MINIPORT_BLOCK *)v1, 1);
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qZ(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v8,
        9u,
        0x1Fu,
        (struct _GUID *)&WPP_0da1f7415b08391dc91ed9194dfe6793_Traceguids,
        v1,
        *(unsigned __int16 **)(v1 + 3856));
  }
  v2->IoStatus.Status = v3;
  v9 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v4);
  *(_DWORD *)(v4 + 504) &= ~0x20u;
  KeReleaseSpinLock((PKSPIN_LOCK)v4, v9);
  PoSetPowerState(*(PDEVICE_OBJECT *)(v1 + 3824), DevicePowerState, State);
  IofCompleteRequest(v2, 0);
  ndisSignalD0RequestComplete((struct _NDIS_MINIPORT_BLOCK *)v1, v3);
}
