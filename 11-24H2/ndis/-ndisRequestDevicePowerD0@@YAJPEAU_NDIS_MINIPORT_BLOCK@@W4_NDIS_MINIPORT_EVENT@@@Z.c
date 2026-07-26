/*
 * XREFs of ?ndisRequestDevicePowerD0@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z @ 0x14003A230
 * Callers:
 *     ?ndisAoAcWakeWorkItem@@YAXPEAU_NDIS_WORK_ITEM@@PEAX@Z @ 0x140039950 (-ndisAoAcWakeWorkItem@@YAXPEAU_NDIS_WORK_ITEM@@PEAX@Z.c)
 *     ?ndisRequestNicActive@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@@Z @ 0x140039B90 (-ndisRequestNicActive@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@@Z.c)
 *     ?ndisSetSystemPowerOnComplete@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z @ 0x14003A8D0 (-ndisSetSystemPowerOnComplete@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z.c)
 *     ?ndisGenericWaitWakeCallback@@YAXPEAU_DEVICE_OBJECT@@ET_POWER_STATE@@PEAXPEAU_IO_STATUS_BLOCK@@@Z @ 0x1400A8250 (-ndisGenericWaitWakeCallback@@YAXPEAU_DEVICE_OBJECT@@ET_POWER_STATE@@PEAXPEAU_IO_STATUS_BLOCK@@@.c)
 *     ?ndisMediaDisconnectComplete@@YAXPEAU_DEVICE_OBJECT@@ET_POWER_STATE@@PEAXPEAU_IO_STATUS_BLOCK@@@Z @ 0x1400A8500 (-ndisMediaDisconnectComplete@@YAXPEAU_DEVICE_OBJECT@@ET_POWER_STATE@@PEAXPEAU_IO_STATUS_BLOCK@@@.c)
 *     ?ndisWakeUpDevice@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1400B5E5C (-ndisWakeUpDevice@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisRequestPowerResume@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1400C2F54 (-ndisRequestPowerResume@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_Lq @ 0x140036410 (WPP_RECORDER_SF_Lq.c)
 *     ?ndisLogMiniportEvent@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z @ 0x1400372C0 (-ndisLogMiniportEvent@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z.c)
 *     McTemplateK0jqx_EtwWriteTransfer @ 0x1400378C0 (McTemplateK0jqx_EtwWriteTransfer.c)
 *     ?ndisAoAcStartRefTimeStats@@YAXPEAU_NDIS_MINIPORT_AOAC@@@Z @ 0x14003BE50 (-ndisAoAcStartRefTimeStats@@YAXPEAU_NDIS_MINIPORT_AOAC@@@Z.c)
 *     ?ndisScheduleD0CompleteSignalWorkItem@@YAXPEAU_NDIS_MINIPORT_BLOCK@@J@Z @ 0x14008CA60 (-ndisScheduleD0CompleteSignalWorkItem@@YAXPEAU_NDIS_MINIPORT_BLOCK@@J@Z.c)
 */

__int64 __fastcall ndisRequestDevicePowerD0(struct _NDIS_MINIPORT_BLOCK *a1, enum _NDIS_MINIPORT_EVENT a2)
{
  KIRQL v4; // bp
  unsigned int SyncFlags; // eax
  __int64 v7; // rdi
  __int64 v8; // rcx
  unsigned int v9; // esi
  struct _NDIS_MINIPORT_AOAC *AoAc; // rbx
  KIRQL v11; // dl
  PKSPIN_LOCK v12; // rcx
  PVOID Context; // [rsp+20h] [rbp-28h]

  v4 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
  SyncFlags = a1->SyncFlags;
  a1->MiniportThread = KeGetCurrentThread();
  if ( (SyncFlags & 2) != 0 )
  {
    a1->MiniportThread = 0LL;
    KeReleaseSpinLock(&a1->Lock, v4);
    return 259LL;
  }
  else
  {
    a1->LastD0Reason = a2;
    a1->SyncFlags = SyncFlags | 2;
    KeClearEvent(&a1->PowerD0CompleteEvent);
    v7 = 0LL;
    a1->MiniportThread = 0LL;
    KeReleaseSpinLock(&a1->Lock, v4);
    ndisLogMiniportEvent(a1, a2);
    if ( (byte_14011B103 & 4) != 0 )
    {
      LODWORD(Context) = a1->IfIndex;
      McTemplateK0jqx_EtwWriteTransfer(
        v8,
        (__int64)&DevicePowerOnRequested,
        (__int64)&a1->InterfaceGuid,
        (__int64)&a1->InterfaceGuid,
        (__int64)Context,
        a1->NetLuid.Value);
    }
    _InterlockedOr((volatile signed __int32 *)&a1->InterlockedFlags, 2u);
    if ( (a1->Flags & 0x80u) != 0 )
    {
      v9 = 0;
    }
    else
    {
      v9 = PoRequestPowerIrp(a1->PhysicalDeviceObject, 2u, (POWER_STATE)1, 0LL, 0LL, 0LL);
      if ( v9 != 259 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_Lq(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            2u,
            0xEu,
            0x94u,
            (struct _GUID *)&WPP_4a94757187d03d50151c0070042f9279_Traceguids,
            v9,
            a1);
        ndisScheduleD0CompleteSignalWorkItem(a1, v9);
      }
    }
    AoAc = a1->AoAc;
    if ( AoAc )
    {
      KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)AoAc);
      if ( *((_BYTE *)AoAc + 1081) )
        v7 = MEMORY[0xFFFFF78000000008];
      *((_QWORD *)AoAc + 105) = v7;
      ndisAoAcStartRefTimeStats(AoAc);
      KeReleaseSpinLock(v12, v11);
    }
    return v9;
  }
}
