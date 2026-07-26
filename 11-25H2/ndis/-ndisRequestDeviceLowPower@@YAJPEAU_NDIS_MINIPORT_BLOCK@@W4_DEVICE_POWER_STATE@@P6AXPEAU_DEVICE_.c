/*
 * XREFs of ?ndisRequestDeviceLowPower@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4_DEVICE_POWER_STATE@@P6AXPEAU_DEVICE_OBJECT@@ET_POWER_STATE@@PEAXPEAU_IO_STATUS_BLOCK@@@Z4W4_NDIS_MINIPORT_EVENT@@@Z @ 0x140025790
 * Callers:
 *     ?ndisSetSystemPower@@YAJPEAU_IRP@@PEAU_IO_STACK_LOCATION@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140055D80 (-ndisSetSystemPower@@YAJPEAU_IRP@@PEAU_IO_STACK_LOCATION@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     NdisMIdleNotificationConfirm @ 0x140084C90 (NdisMIdleNotificationConfirm.c)
 *     ?ndisMediaDisconnectWorker@@YAXPEAX@Z @ 0x1400B0950 (-ndisMediaDisconnectWorker@@YAXPEAX@Z.c)
 *     ?ndisRequestNicQuiet@@YAJPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x14016D440 (-ndisRequestNicQuiet@@YAJPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 * Callees:
 *     McTemplateK0jqx_EtwWriteTransfer @ 0x1400252F0 (McTemplateK0jqx_EtwWriteTransfer.c)
 *     ?ndisRecordEvent@@YAXPEAUNDIS_EVENT_LOG_HANDLE__@@GPEAX@Z @ 0x140025A10 (-ndisRecordEvent@@YAXPEAUNDIS_EVENT_LOG_HANDLE__@@GPEAX@Z.c)
 *     WPP_RECORDER_SF_Lq @ 0x140025AD0 (WPP_RECORDER_SF_Lq.c)
 *     McTemplateK0jqxzq_EtwWriteTransfer @ 0x140025C00 (McTemplateK0jqxzq_EtwWriteTransfer.c)
 *     ?ndisCloseTimeInterval@@YAXPEA_K0@Z @ 0x140065B40 (-ndisCloseTimeInterval@@YAXPEA_K0@Z.c)
 */

__int64 __fastcall ndisRequestDeviceLowPower(
        struct _NDIS_MINIPORT_BLOCK *a1,
        POWER_STATE PowerState,
        PREQUEST_POWER_COMPLETE CompletionFunction,
        PVOID Context,
        enum _NDIS_MINIPORT_EVENT a5)
{
  POWER_STATE v7; // r15d
  void *v9; // rdx
  __int64 v10; // rcx
  unsigned int v11; // ebx
  NTSTATUS v12; // eax
  int v13; // edx
  unsigned int v14; // esi
  KSPIN_LOCK *AoAc; // rdi
  KIRQL v16; // r9
  _QWORD *v17; // r8
  PVOID Contexta; // [rsp+20h] [rbp-48h]

  v7.SystemState = PowerState.SystemState;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(PowerState.SystemState) = 4;
    WPP_RECORDER_SF_Lq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      PowerState.SystemState,
      14,
      152,
      (struct _GUID *)&WPP_4a94757187d03d50151c0070042f9279_Traceguids,
      a5,
      (char)a1);
  }
  if ( (unsigned __int16)(a5 - 70) > 6u )
  {
    if ( (byte_140125105 & 4) == 0 )
      goto LABEL_7;
    v9 = &MiniportEvent;
    goto LABEL_6;
  }
  if ( (byte_140125105 & 8) != 0 )
  {
    v9 = &MiniportFatalError;
LABEL_6:
    McTemplateK0jqxzq_EtwWriteTransfer(
      (_DWORD)a1,
      (_DWORD)v9,
      (_DWORD)a1 + 4008,
      (_DWORD)a1 + 4008,
      a1->IfIndex,
      a1->NetLuid.Value,
      (__int64)a1->pAdapterInstanceName->Buffer,
      a5);
  }
LABEL_7:
  ndisRecordEvent(a1->PnpEventLog, a5, 0LL);
  if ( (byte_140125103 & 4) != 0 )
  {
    LODWORD(Contexta) = a1->IfIndex;
    McTemplateK0jqx_EtwWriteTransfer(
      v10,
      &DevicePowerDownRequested,
      &a1->InterfaceGuid,
      (__int64)&a1->InterfaceGuid,
      (__int64)Contexta,
      a1->NetLuid.Value);
  }
  _InterlockedOr((volatile signed __int32 *)&a1->InterlockedFlags, 4u);
  v11 = 0;
  if ( (a1->Flags & 0x80u) != 0 )
  {
    v14 = 259;
  }
  else
  {
    v12 = PoRequestPowerIrp(a1->PhysicalDeviceObject, 2u, v7, CompletionFunction, Context, 0LL);
    v14 = v12;
    if ( v12 != 259 && *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v13) = 2;
      WPP_RECORDER_SF_Lq(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v13,
        14,
        151,
        (struct _GUID *)&WPP_4a94757187d03d50151c0070042f9279_Traceguids,
        v12,
        (char)a1);
    }
  }
  AoAc = (KSPIN_LOCK *)a1->AoAc;
  if ( AoAc )
  {
    v16 = KeAcquireSpinLockRaiseToDpc(AoAc);
    if ( AoAc[105] )
    {
      AoAc[103] += MEMORY[0xFFFFF78000000008] - AoAc[105];
      AoAc[105] = 0LL;
    }
    v17 = AoAc + 68;
    do
    {
      if ( *v17 )
        ndisCloseTimeInterval(&AoAc[2 * v11 + 68], &AoAc[2 * v11 + 67]);
      ++v11;
      v17 += 2;
    }
    while ( v11 < 0x11 );
    KeReleaseSpinLock(AoAc, v16);
  }
  return v14;
}
