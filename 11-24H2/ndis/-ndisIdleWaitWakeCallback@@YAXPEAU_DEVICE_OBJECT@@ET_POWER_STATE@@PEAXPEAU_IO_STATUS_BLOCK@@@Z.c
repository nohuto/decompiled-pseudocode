/*
 * XREFs of ?ndisIdleWaitWakeCallback@@YAXPEAU_DEVICE_OBJECT@@ET_POWER_STATE@@PEAXPEAU_IO_STATUS_BLOCK@@@Z @ 0x1400613F0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qZ @ 0x14002C3B0 (WPP_RECORDER_SF_qZ.c)
 *     ?ndisScheduleWorkItemInternal@@YAXPEAU_NDIS_WORK_ITEM@@@Z @ 0x1400371A0 (-ndisScheduleWorkItemInternal@@YAXPEAU_NDIS_WORK_ITEM@@@Z.c)
 *     McTemplateK0jqx_EtwWriteTransfer @ 0x1400378C0 (McTemplateK0jqx_EtwWriteTransfer.c)
 *     ndisSelectiveSuspendSetResumeBusyReason @ 0x140038080 (ndisSelectiveSuspendSetResumeBusyReason.c)
 *     ?ndisCompleteWaitWake@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140061560 (-ndisCompleteWaitWake@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     WPP_RECORDER_SF_dq @ 0x140063790 (WPP_RECORDER_SF_dq_ea_140063790.c)
 *     ?NdisUnexpectedSsError@@YAXPEAU_NDIS_MINIPORT_BLOCK@@GJ@Z @ 0x14008CBA0 (-NdisUnexpectedSsError@@YAXPEAU_NDIS_MINIPORT_BLOCK@@GJ@Z.c)
 */

void __fastcall ndisIdleWaitWakeCallback(
        PDEVICE_OBJECT DeviceObject,
        UCHAR MinorFunction,
        POWER_STATE PowerState,
        PVOID Context,
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
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v11) = 2;
        WPP_RECORDER_SF_dq(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v11,
          15,
          25,
          (struct _GUID *)&WPP_d69e2148828f3cdf9c5ee0d0c96342c3_Traceguids,
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
      if ( (byte_14011B103 & 4) != 0 )
      {
        LODWORD(v12) = *((_DWORD *)Context + 1014);
        McTemplateK0jqx_EtwWriteTransfer(
          v10,
          (__int64)&DeviceWaitWakeComplete,
          (__int64)Context + 4008,
          (__int64)Context + 4008,
          (__int64)v12,
          *((_QWORD *)Context + 503));
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_qZ(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v9,
          9u,
          0x18u,
          (struct _GUID *)&WPP_d69e2148828f3cdf9c5ee0d0c96342c3_Traceguids,
          (char)Context,
          *((unsigned __int16 **)Context + 482));
      ndisScheduleWorkItemInternal((struct _NDIS_WORK_ITEM *)(v6 + 376));
    }
    KeReleaseSpinLock((PKSPIN_LOCK)v6, v8);
  }
  ndisCompleteWaitWake((struct _NDIS_MINIPORT_BLOCK *)Context);
}
