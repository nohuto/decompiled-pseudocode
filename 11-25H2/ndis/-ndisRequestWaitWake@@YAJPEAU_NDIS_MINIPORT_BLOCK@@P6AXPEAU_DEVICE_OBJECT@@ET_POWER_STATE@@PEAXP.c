/*
 * XREFs of ?ndisRequestWaitWake@@YAJPEAU_NDIS_MINIPORT_BLOCK@@P6AXPEAU_DEVICE_OBJECT@@ET_POWER_STATE@@PEAXPEAU_IO_STATUS_BLOCK@@@Z@Z @ 0x14005D8D0
 * Callers:
 *     ?ndisPrepForLowPower@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z @ 0x1400549A0 (-ndisPrepForLowPower@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z.c)
 *     NdisMIdleNotificationConfirm @ 0x140084C90 (NdisMIdleNotificationConfirm.c)
 *     ?ndisRequestNicQuiet@@YAJPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x14016D440 (-ndisRequestNicQuiet@@YAJPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ?ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPER_CONFIGURATION_HANDLE@@PEAU_UNICODE_STRING@@PEAX@Z @ 0x140186B80 (-ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPE.c)
 * Callees:
 *     ?ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x14000E960 (-ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     WPP_RECORDER_SF_q @ 0x140010C40 (WPP_RECORDER_SF_q.c)
 *     McTemplateK0jqxd_EtwWriteTransfer @ 0x1400246C0 (McTemplateK0jqxd_EtwWriteTransfer.c)
 *     WPP_RECORDER_SF_Lq @ 0x140025AD0 (WPP_RECORDER_SF_Lq.c)
 *     ?ndisCompleteWaitWake@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14005BA50 (-ndisCompleteWaitWake@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisWaitForKernelObject@@YAXPEAX@Z @ 0x140160790 (-ndisWaitForKernelObject@@YAXPEAX@Z.c)
 */

__int64 __fastcall ndisRequestWaitWake(struct _NDIS_MINIPORT_BLOCK *a1, PREQUEST_POWER_COMPLETE CompletionFunction)
{
  unsigned int Flags; // eax
  POWER_STATE v5; // r8d
  int v6; // edx
  __int64 v7; // rcx
  unsigned int v8; // edi
  PVOID Context; // [rsp+20h] [rbp-28h]
  __int64 v11; // [rsp+30h] [rbp-18h]

  if ( !(unsigned __int8)ndisReferenceMiniport(a1, 0xAu) )
    return 3221225473LL;
  ndisWaitForKernelObject(&a1->WaitWakeIrpCompleted);
  KeClearEvent(&a1->WaitWakeIrpCompleted);
  Flags = a1->Flags;
  v5.SystemState = a1->DeviceCaps.SystemWake;
  a1->WaitWakeCancelAttempted = 0;
  a1->WaitWakeIoCompletionRoutineRan = 0;
  a1->WaitWakeSystemState = v5.SystemState;
  if ( (Flags & 0x80u) != 0 )
    NT_ASSERT("(!((((Miniport)->Flags & (0x00000080)) != 0)))");
  v8 = PoRequestPowerIrp(a1->PhysicalDeviceObject, 0, v5, CompletionFunction, a1, &a1->WaitWakeIrp);
  if ( v8 == 259 )
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v6) = 4;
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v6,
        14,
        149,
        (struct _GUID *)&WPP_4a94757187d03d50151c0070042f9279_Traceguids,
        (char)a1);
    }
    if ( (byte_140125101 & 8) != 0 )
    {
      LODWORD(v11) = a1->WaitWakeIrp;
      LODWORD(Context) = a1->IfIndex;
      McTemplateK0jqxd_EtwWriteTransfer(
        v7,
        (const EVENT_DESCRIPTOR *)"#'",
        &a1->InterfaceGuid,
        (__int64)&a1->InterfaceGuid,
        (__int64)Context,
        a1->NetLuid.Value,
        v11);
    }
  }
  else
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_Lq(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        0xEu,
        0x96u,
        (struct _GUID *)&WPP_4a94757187d03d50151c0070042f9279_Traceguids,
        v8,
        a1);
    ndisCompleteWaitWake(a1);
  }
  return v8;
}
