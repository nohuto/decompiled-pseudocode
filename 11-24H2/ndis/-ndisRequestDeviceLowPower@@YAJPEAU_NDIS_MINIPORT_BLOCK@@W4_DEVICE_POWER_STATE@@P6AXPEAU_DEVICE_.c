/*
 * XREFs of ?ndisRequestDeviceLowPower@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4_DEVICE_POWER_STATE@@P6AXPEAU_DEVICE_OBJECT@@ET_POWER_STATE@@PEAXPEAU_IO_STATUS_BLOCK@@@Z4W4_NDIS_MINIPORT_EVENT@@@Z @ 0x1400810F0
 * Callers:
 *     NdisMIdleNotificationConfirm @ 0x140069490 (NdisMIdleNotificationConfirm.c)
 *     ?ndisSetSystemPower@@YAJPEAU_IRP@@PEAU_IO_STACK_LOCATION@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140081520 (-ndisSetSystemPower@@YAJPEAU_IRP@@PEAU_IO_STACK_LOCATION@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMediaDisconnectWorker@@YAXPEAX@Z @ 0x1400A87E0 (-ndisMediaDisconnectWorker@@YAXPEAX@Z.c)
 *     ?ndisRequestNicQuiet@@YAJPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x140161DA0 (-ndisRequestNicQuiet@@YAJPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_Lq @ 0x140036410 (WPP_RECORDER_SF_Lq.c)
 *     ?ndisLogMiniportEvent@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z @ 0x1400372C0 (-ndisLogMiniportEvent@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z.c)
 *     McTemplateK0jqx_EtwWriteTransfer @ 0x1400378C0 (McTemplateK0jqx_EtwWriteTransfer.c)
 */

__int64 __fastcall ndisRequestDeviceLowPower(
        struct _NDIS_MINIPORT_BLOCK *a1,
        POWER_STATE PowerState,
        PREQUEST_POWER_COMPLETE CompletionFunction,
        PVOID Context,
        enum _NDIS_MINIPORT_EVENT a5)
{
  __int64 v9; // rcx
  unsigned int v10; // edi
  KSPIN_LOCK *AoAc; // rbx
  KIRQL v12; // cl
  _QWORD *v13; // rdx
  __int64 v14; // r8
  PVOID Contexta; // [rsp+20h] [rbp-28h]

  ndisLogMiniportEvent(a1, a5);
  if ( (byte_14011B103 & 4) != 0 )
  {
    LODWORD(Contexta) = a1->IfIndex;
    McTemplateK0jqx_EtwWriteTransfer(
      v9,
      (__int64)&DevicePowerDownRequested,
      (__int64)&a1->InterfaceGuid,
      (__int64)&a1->InterfaceGuid,
      (__int64)Contexta,
      a1->NetLuid.Value);
  }
  _InterlockedOr((volatile signed __int32 *)&a1->InterlockedFlags, 4u);
  if ( (a1->Flags & 0x80u) == 0 )
  {
    v10 = PoRequestPowerIrp(a1->PhysicalDeviceObject, 2u, PowerState, CompletionFunction, Context, 0LL);
    if ( v10 != 259 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_Lq(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        0xEu,
        0x97u,
        (struct _GUID *)&WPP_4a94757187d03d50151c0070042f9279_Traceguids,
        v10,
        a1);
  }
  else
  {
    v10 = 259;
  }
  AoAc = (KSPIN_LOCK *)a1->AoAc;
  if ( AoAc )
  {
    v12 = KeAcquireSpinLockRaiseToDpc(AoAc);
    if ( AoAc[105] )
    {
      AoAc[103] += MEMORY[0xFFFFF78000000008] - AoAc[105];
      AoAc[105] = 0LL;
    }
    v13 = AoAc + 68;
    v14 = 17LL;
    do
    {
      if ( *v13 )
      {
        *(v13 - 1) += MEMORY[0xFFFFF78000000008] - *v13;
        *v13 = 0LL;
      }
      v13 += 2;
      --v14;
    }
    while ( v14 );
    KeReleaseSpinLock(AoAc, v12);
  }
  return v10;
}
