/*
 * XREFs of ?ndisIdleWaitWakeCallback@@YAXPEAU_DEVICE_OBJECT@@ET_POWER_STATE@@PEAXPEAU_IO_STATUS_BLOCK@@@Z @ 0x14005B8E0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0jqx_EtwWriteTransfer @ 0x1400252F0 (McTemplateK0jqx_EtwWriteTransfer.c)
 *     WPP_RECORDER_SF_qZ @ 0x1400291D0 (WPP_RECORDER_SF_qZ.c)
 *     ndisSelectiveSuspendSetResumeBusyReason @ 0x14003F7E0 (ndisSelectiveSuspendSetResumeBusyReason.c)
 *     ?ndisScheduleWorkItemInternal@@YAXPEAU_NDIS_WORK_ITEM@@@Z @ 0x14005ABD0 (-ndisScheduleWorkItemInternal@@YAXPEAU_NDIS_WORK_ITEM@@@Z.c)
 *     ?ndisCompleteWaitWake@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14005BA50 (-ndisCompleteWaitWake@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     WPP_RECORDER_SF_dq @ 0x14007F640 (WPP_RECORDER_SF_dq_ea_14007F640.c)
 *     ?NdisUnexpectedSsError@@YAXPEAU_NDIS_MINIPORT_BLOCK@@GJ@Z @ 0x140098350 (-NdisUnexpectedSsError@@YAXPEAU_NDIS_MINIPORT_BLOCK@@GJ@Z.c)
 */

void __fastcall ndisIdleWaitWakeCallback(
        PDEVICE_OBJECT DeviceObject,
        UCHAR MinorFunction,
        POWER_STATE PowerState,
        char *Context,
        PIO_STATUS_BLOCK IoStatus)
{
  __int64 v6; // rbx
  int Status; // r8d
  KIRQL v8; // si
  __int64 v9; // rdx
  __int64 v10; // rcx
  int v11; // edx
  struct _GUID *v12; // [rsp+20h] [rbp-28h]

  v6 = *((_QWORD *)Context + 556);
  Status = IoStatus->Status;
  if ( IoStatus->Status < 0 )
  {
    if ( Status != -1073741536 )
    {
      NdisUnexpectedSsError((struct _NDIS_MINIPORT_BLOCK *)Context, 6u, Status);
      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v11) = 2;
        WPP_RECORDER_SF_dq(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v11,
          15,
          25,
          (struct _GUID *)&WPP_0da1f7415b08391dc91ed9194dfe6793_Traceguids,
          IoStatus->Status,
          (char)Context);
      }
    }
  }
  else
  {
    v8 = KeAcquireSpinLockRaiseToDpc(*((PKSPIN_LOCK *)Context + 556));
    if ( (*(_DWORD *)(v6 + 504) & 0xC4) == 4 )
    {
      *(_DWORD *)(v6 + 504) |= 0x40u;
      ndisSelectiveSuspendSetResumeBusyReason((_DWORD *)v6, 1, 0x41u, 0);
      if ( (byte_140125103 & 4) != 0 )
      {
        LODWORD(v12) = *((_DWORD *)Context + 1014);
        McTemplateK0jqx_EtwWriteTransfer(
          v10,
          (const EVENT_DESCRIPTOR *)"F(",
          (const GUID *)(Context + 4008),
          (__int64)(Context + 4008),
          (__int64)v12,
          *((_QWORD *)Context + 503));
      }
      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_qZ(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v9,
          9u,
          0x18u,
          (struct _GUID *)&WPP_0da1f7415b08391dc91ed9194dfe6793_Traceguids,
          (char)Context,
          *((unsigned __int16 **)Context + 482));
      ndisScheduleWorkItemInternal((struct _NDIS_WORK_ITEM *)(v6 + 376));
    }
    KeReleaseSpinLock((PKSPIN_LOCK)v6, v8);
  }
  ndisCompleteWaitWake((struct _NDIS_MINIPORT_BLOCK *)Context);
}
