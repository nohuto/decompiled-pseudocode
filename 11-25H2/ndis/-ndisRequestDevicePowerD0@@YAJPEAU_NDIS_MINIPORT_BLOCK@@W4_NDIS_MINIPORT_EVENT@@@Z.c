/*
 * XREFs of ?ndisRequestDevicePowerD0@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z @ 0x140016750
 * Callers:
 *     ?ndisRequestNicActive@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@@Z @ 0x1400173B0 (-ndisRequestNicActive@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@@Z.c)
 *     ?ndisAoAcWakeWorkItem@@YAXPEAU_NDIS_WORK_ITEM@@PEAX@Z @ 0x140017A50 (-ndisAoAcWakeWorkItem@@YAXPEAU_NDIS_WORK_ITEM@@PEAX@Z.c)
 *     ?ndisSetSystemPowerOnComplete@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z @ 0x1400182A0 (-ndisSetSystemPowerOnComplete@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z.c)
 *     ?ndisGenericWaitWakeCallback@@YAXPEAU_DEVICE_OBJECT@@ET_POWER_STATE@@PEAXPEAU_IO_STATUS_BLOCK@@@Z @ 0x1400B03C0 (-ndisGenericWaitWakeCallback@@YAXPEAU_DEVICE_OBJECT@@ET_POWER_STATE@@PEAXPEAU_IO_STATUS_BLOCK@@@.c)
 *     ?ndisMediaDisconnectComplete@@YAXPEAU_DEVICE_OBJECT@@ET_POWER_STATE@@PEAXPEAU_IO_STATUS_BLOCK@@@Z @ 0x1400B0670 (-ndisMediaDisconnectComplete@@YAXPEAU_DEVICE_OBJECT@@ET_POWER_STATE@@PEAXPEAU_IO_STATUS_BLOCK@@@.c)
 *     ?ndisWakeUpDevice@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1400BDBEC (-ndisWakeUpDevice@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisRequestPowerResume@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1400CA184 (-ndisRequestPowerResume@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     ?ndisLogMiniportEvent@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z @ 0x140016910 (-ndisLogMiniportEvent@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z.c)
 *     McTemplateK0jqx_EtwWriteTransfer @ 0x1400252F0 (McTemplateK0jqx_EtwWriteTransfer.c)
 *     WPP_RECORDER_SF_Lq @ 0x140025AD0 (WPP_RECORDER_SF_Lq.c)
 *     ?ndisAoAcResumeRefTimeAccumulation@@YAXPEAU_NDIS_MINIPORT_AOAC@@@Z @ 0x140065210 (-ndisAoAcResumeRefTimeAccumulation@@YAXPEAU_NDIS_MINIPORT_AOAC@@@Z.c)
 *     ?ndisScheduleD0CompleteSignalWorkItem@@YAXPEAU_NDIS_MINIPORT_BLOCK@@J@Z @ 0x140098210 (-ndisScheduleD0CompleteSignalWorkItem@@YAXPEAU_NDIS_MINIPORT_BLOCK@@J@Z.c)
 */

__int64 __fastcall ndisRequestDevicePowerD0(struct _NDIS_MINIPORT_BLOCK *a1, enum _NDIS_MINIPORT_EVENT a2)
{
  KIRQL v4; // al
  KIRQL v5; // r14
  unsigned int SyncFlags; // r8d
  unsigned int v7; // edi
  __int64 v8; // rcx
  int v9; // edx
  struct _NDIS_MINIPORT_AOAC *AoAc; // rcx

  v4 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
  v5 = v4;
  a1->MiniportThread = KeGetCurrentThread();
  SyncFlags = a1->SyncFlags;
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
    v7 = 0;
    a1->MiniportThread = 0LL;
    KeReleaseSpinLock(&a1->Lock, v5);
    ndisLogMiniportEvent(a1, a2);
    if ( (byte_140125103 & 4) != 0 )
      ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD))McTemplateK0jqx_EtwWriteTransfer)(
        v8,
        &DevicePowerOnRequested,
        &a1->InterfaceGuid,
        &a1->InterfaceGuid,
        a1->IfIndex,
        (_NET_LUID_LH)a1->NetLuid.Value);
    _InterlockedOr((volatile signed __int32 *)&a1->InterlockedFlags, 2u);
    if ( (a1->Flags & 0x80u) == 0 )
    {
      v7 = PoRequestPowerIrp(a1->PhysicalDeviceObject, 2u, (POWER_STATE)1, 0LL, 0LL, 0LL);
      if ( v7 != 259 )
      {
        if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v9) = 2;
          WPP_RECORDER_SF_Lq(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            v9,
            14,
            148,
            (struct _GUID *)&WPP_4a94757187d03d50151c0070042f9279_Traceguids,
            v7,
            (char)a1);
        }
        ndisScheduleD0CompleteSignalWorkItem(a1, v7);
      }
    }
    AoAc = a1->AoAc;
    if ( AoAc )
      ndisAoAcResumeRefTimeAccumulation(AoAc);
    return v7;
  }
}
