/*
 * XREFs of ?ndisPowerSuspendRequestComplete@@YAXPEAU_DEVICE_OBJECT@@ET_POWER_STATE@@PEAXPEAU_IO_STATUS_BLOCK@@@Z @ 0x14007CB30
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qD @ 0x140010DF0 (WPP_RECORDER_SF_qD.c)
 *     ?ndisLogMiniportEvent@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z @ 0x140016910 (-ndisLogMiniportEvent@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z.c)
 *     WPP_RECORDER_SF_qZ @ 0x1400291D0 (WPP_RECORDER_SF_qZ.c)
 *     McTemplateK0jqxqq_EtwWriteTransfer @ 0x1400568E0 (McTemplateK0jqxqq_EtwWriteTransfer.c)
 *     ?NDIS_COUNT_POWER_TRANSITION@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z @ 0x14007CDE0 (-NDIS_COUNT_POWER_TRANSITION@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z.c)
 *     WPP_RECORDER_SF_dq @ 0x14007F640 (WPP_RECORDER_SF_dq_ea_14007F640.c)
 *     ?NdisUnexpectedSsError@@YAXPEAU_NDIS_MINIPORT_BLOCK@@GJ@Z @ 0x140098350 (-NdisUnexpectedSsError@@YAXPEAU_NDIS_MINIPORT_BLOCK@@GJ@Z.c)
 */

void __fastcall ndisPowerSuspendRequestComplete(
        PDEVICE_OBJECT DeviceObject,
        UCHAR MinorFunction,
        POWER_STATE PowerState,
        struct _NDIS_MINIPORT_BLOCK *Context,
        PIO_STATUS_BLOCK IoStatus)
{
  struct _NDIS_SELECTIVE_SUSPEND *SelectiveSuspend; // rdi
  KIRQL v7; // si
  bool v8; // zf
  int v9; // ecx
  __int64 v10; // rdx
  __int64 v11; // rcx
  int v12; // edx
  KIRQL v13; // al
  KIRQL v14; // bl
  struct _GUID *v15; // [rsp+20h] [rbp-28h]
  __int64 v16; // [rsp+30h] [rbp-18h]
  int Status; // [rsp+30h] [rbp-18h]
  __int64 v18; // [rsp+38h] [rbp-10h]

  SelectiveSuspend = Context->SelectiveSuspend;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    Status = IoStatus->Status;
    WPP_RECORDER_SF_qD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xEu,
      0x15u,
      (struct _GUID *)&WPP_0da1f7415b08391dc91ed9194dfe6793_Traceguids,
      (char)Context,
      Status);
  }
  ndisLogMiniportEvent(Context, NdisMEventDx_SSComplete);
  if ( IoStatus->Status >= 0 )
  {
    v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)SelectiveSuspend);
    *((_DWORD *)SelectiveSuspend + 126) = *((_DWORD *)SelectiveSuspend + 126) & 0xFFFFFFE7 | 0x10;
    KeClearEvent((PRKEVENT)((char *)SelectiveSuspend + 248));
    KeSetEvent((PRKEVENT)((char *)SelectiveSuspend + 176), 0, 0);
    ++*((_DWORD *)SelectiveSuspend + 161);
    v8 = *((_DWORD *)SelectiveSuspend + 157) == 0;
    *((_QWORD *)SelectiveSuspend + 81) = MEMORY[0xFFFFF78000000014];
    if ( !v8 )
    {
      v9 = *((_DWORD *)SelectiveSuspend + 157);
      if ( (unsigned int)v9 <= 0xF )
      {
LABEL_8:
        if ( v9 >= 0 && (unsigned __int64)v9 < 0x31 )
          *((_QWORD *)SelectiveSuspend + 2 * v9 + 93) += (MEMORY[0xFFFFF78000000014] - *((_QWORD *)SelectiveSuspend + 82))
                                                       / 10000LL;
        goto LABEL_11;
      }
      if ( (unsigned int)(v9 - 33) <= 0x20 )
      {
        v9 -= 17;
        goto LABEL_8;
      }
    }
LABEL_11:
    KeReleaseSpinLock((PKSPIN_LOCK)SelectiveSuspend, v7);
    NDIS_COUNT_POWER_TRANSITION(Context, *((enum _NDIS_DEVICE_POWER_STATE *)SelectiveSuspend + 174));
    if ( (byte_140125101 & 8) != 0 )
    {
      LODWORD(v18) = *((_DWORD *)SelectiveSuspend + 174);
      LODWORD(v16) = 1;
      LODWORD(v15) = Context->IfIndex;
      McTemplateK0jqxqq_EtwWriteTransfer(
        v11,
        &DevicePowerStateChange,
        &Context->InterfaceGuid,
        (__int64)&Context->InterfaceGuid,
        (__int64)v15,
        Context->NetLuid.Value,
        v16,
        v18);
    }
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qZ(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v10,
        9u,
        0x16u,
        (struct _GUID *)&WPP_0da1f7415b08391dc91ed9194dfe6793_Traceguids,
        (char)Context,
        &Context->pAdapterInstanceName->Length);
    return;
  }
  NdisUnexpectedSsError(Context, 5u, IoStatus->Status);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v12) = 2;
    WPP_RECORDER_SF_dq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v12,
      15,
      23,
      (struct _GUID *)&WPP_0da1f7415b08391dc91ed9194dfe6793_Traceguids,
      IoStatus->Status,
      (char)Context);
  }
  v13 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)SelectiveSuspend);
  *((_DWORD *)SelectiveSuspend + 126) &= ~8u;
  v14 = v13;
  KeSetEvent((PRKEVENT)((char *)SelectiveSuspend + 176), 0, 0);
  KeReleaseSpinLock((PKSPIN_LOCK)SelectiveSuspend, v14);
}
