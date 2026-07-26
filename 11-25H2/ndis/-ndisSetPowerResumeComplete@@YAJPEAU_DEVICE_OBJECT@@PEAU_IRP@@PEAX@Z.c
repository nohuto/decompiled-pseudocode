/*
 * XREFs of ?ndisSetPowerResumeComplete@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z @ 0x1400CA630
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qD @ 0x140010DF0 (WPP_RECORDER_SF_qD.c)
 *     ?ndisLogMiniportEvent@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z @ 0x140016910 (-ndisLogMiniportEvent@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z.c)
 *     WPP_RECORDER_SF_dq @ 0x14007F640 (WPP_RECORDER_SF_dq_ea_14007F640.c)
 *     ?ndisScheduleD0CompleteSignalWorkItem@@YAXPEAU_NDIS_MINIPORT_BLOCK@@J@Z @ 0x140098210 (-ndisScheduleD0CompleteSignalWorkItem@@YAXPEAU_NDIS_MINIPORT_BLOCK@@J@Z.c)
 *     ?NdisUnexpectedSsError@@YAXPEAU_NDIS_MINIPORT_BLOCK@@GJ@Z @ 0x140098350 (-NdisUnexpectedSsError@@YAXPEAU_NDIS_MINIPORT_BLOCK@@GJ@Z.c)
 *     ?ndisMiniportFatalError@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z @ 0x140174190 (-ndisMiniportFatalError@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z.c)
 */

__int64 __fastcall ndisSetPowerResumeComplete(
        struct _DEVICE_OBJECT *a1,
        struct _IRP *a2,
        struct _NDIS_MINIPORT_BLOCK *a3)
{
  struct _NDIS_SELECTIVE_SUSPEND *SelectiveSuspend; // rdi
  int Status; // esi
  KIRQL v7; // al
  int v9; // [rsp+30h] [rbp-28h]

  SelectiveSuspend = a3->SelectiveSuspend;
  Status = a2->IoStatus.Status;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v9 = a2->IoStatus.Status;
    WPP_RECORDER_SF_qD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xEu,
      0x1Cu,
      (struct _GUID *)&WPP_0da1f7415b08391dc91ed9194dfe6793_Traceguids,
      (char)a3,
      v9);
  }
  ndisLogMiniportEvent(a3, NdisMEventD0_SSComplete);
  if ( Status >= 0 )
  {
    *((_QWORD *)SelectiveSuspend + 61) = a3;
    *((_QWORD *)SelectiveSuspend + 62) = a2;
    ExQueueWorkItem((PWORK_QUEUE_ITEM)((char *)SelectiveSuspend + 456), CustomPriorityWorkQueue|RealTimeWorkQueue|0x8);
    return 3221225494LL;
  }
  else
  {
    NdisUnexpectedSsError(a3, 7u, Status);
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_dq(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        0xFu,
        0x1Du,
        (struct _GUID *)&WPP_0da1f7415b08391dc91ed9194dfe6793_Traceguids,
        Status,
        a3);
    v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)SelectiveSuspend);
    *((_DWORD *)SelectiveSuspend + 126) &= ~0x20u;
    KeReleaseSpinLock((PKSPIN_LOCK)SelectiveSuspend, v7);
    ndisMiniportFatalError(a3, NdisMEventErr_FailedPowerD0);
    ndisScheduleD0CompleteSignalWorkItem(a3, Status);
    return 0LL;
  }
}
