/*
 * XREFs of ?ndisRequestWaitWake@@YAJPEAU_NDIS_MINIPORT_BLOCK@@P6AXPEAU_DEVICE_OBJECT@@ET_POWER_STATE@@PEAXPEAU_IO_STATUS_BLOCK@@@Z@Z @ 0x140081290
 * Callers:
 *     NdisMIdleNotificationConfirm @ 0x140069490 (NdisMIdleNotificationConfirm.c)
 *     ?ndisPrepForLowPower@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z @ 0x140081000 (-ndisPrepForLowPower@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z.c)
 *     ?ndisRequestNicQuiet@@YAJPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x140161DA0 (-ndisRequestNicQuiet@@YAJPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ?ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPER_CONFIGURATION_HANDLE@@PEAU_UNICODE_STRING@@PEAX@Z @ 0x14017BC40 (-ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPE.c)
 * Callees:
 *     ?ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x140011280 (-ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     WPP_RECORDER_SF_q @ 0x140014040 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_Lq @ 0x140036410 (WPP_RECORDER_SF_Lq.c)
 *     McTemplateK0jqxd_EtwWriteTransfer @ 0x1400388D0 (McTemplateK0jqxd_EtwWriteTransfer.c)
 *     ?ndisCompleteWaitWake@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140061560 (-ndisCompleteWaitWake@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisWaitForKernelObject@@YAXPEAX@Z @ 0x140153F20 (-ndisWaitForKernelObject@@YAXPEAX@Z.c)
 */

__int64 __fastcall ndisRequestWaitWake(struct _NDIS_MINIPORT_BLOCK *a1, PREQUEST_POWER_COMPLETE CompletionFunction)
{
  int v5; // edx
  unsigned int v6; // ebx
  _UNKNOWN **v7; // rcx
  PVOID Context; // [rsp+20h] [rbp-28h]
  __int64 v9; // [rsp+30h] [rbp-18h]

  if ( !(unsigned __int8)ndisReferenceMiniport(a1, 0xAu) )
    return 3221225473LL;
  ndisWaitForKernelObject(&a1->WaitWakeIrpCompleted);
  KeClearEvent(&a1->WaitWakeIrpCompleted);
  a1->WaitWakeSystemState = a1->DeviceCaps.SystemWake;
  a1->WaitWakeCancelAttempted = 0;
  a1->WaitWakeIoCompletionRoutineRan = 0;
  if ( (a1->Flags & 0x80u) != 0 )
    NT_ASSERT("(!(MINIPORT_TEST_FLAG(Miniport, 0x00000080)))");
  v6 = PoRequestPowerIrp(
         a1->PhysicalDeviceObject,
         0,
         (POWER_STATE)a1->DeviceCaps.SystemWake,
         CompletionFunction,
         a1,
         &a1->WaitWakeIrp);
  if ( v6 == 259 )
  {
    v7 = &WPP_RECORDER_INITIALIZED;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v5) = 4;
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v5,
        14,
        149,
        (struct _GUID *)&WPP_4a94757187d03d50151c0070042f9279_Traceguids,
        (char)a1);
    }
    if ( (byte_14011B101 & 8) != 0 )
    {
      LODWORD(v9) = a1->WaitWakeIrp;
      LODWORD(Context) = a1->IfIndex;
      McTemplateK0jqxd_EtwWriteTransfer(
        (__int64)v7,
        (__int64)&CreatedWakeIrp,
        (__int64)&a1->InterfaceGuid,
        (__int64)&a1->InterfaceGuid,
        (__int64)Context,
        a1->NetLuid.Value,
        v9);
    }
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_Lq(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        0xEu,
        0x96u,
        (struct _GUID *)&WPP_4a94757187d03d50151c0070042f9279_Traceguids,
        v6,
        a1);
    ndisCompleteWaitWake(a1);
  }
  return v6;
}
