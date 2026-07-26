/*
 * XREFs of ?ndisMShutdownMiniport@@_Y2PAGENPNP@@AJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14017D2DC
 * Callers:
 *     ?ndisSetSystemPower@@YAJPEAU_IRP@@PEAU_IO_STACK_LOCATION@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140055D80 (-ndisSetSystemPower@@YAJPEAU_IRP@@PEAU_IO_STACK_LOCATION@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140010C40 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qZ @ 0x1400291D0 (WPP_RECORDER_SF_qZ.c)
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x14005A650 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     ?ndisMInvokeShutdown@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SHUTDOWN_ACTION@@@Z @ 0x1400A6374 (-ndisMInvokeShutdown@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SHUTDOWN_ACTION@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400EDFC0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ndisMShutdownMiniport(struct _NDIS_MINIPORT_BLOCK *a1)
{
  KIRQL v2; // dl
  unsigned int v3; // eax
  __int64 v4; // rdx
  void (__fastcall *ShutdownHandler)(void *); // rax
  KIRQL NewIrql; // [rsp+50h] [rbp+8h] BYREF

  NewIrql = 0;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      1,
      117,
      (struct _GUID *)&WPP_4a94757187d03d50151c0070042f9279_Traceguids,
      (char)a1);
  NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(a1, &NewIrql);
  v2 = NewIrql;
  v3 = a1->Flags & 0xFFFFFFFE;
  a1->PnPFlags |= 0x1000000u;
  a1->MiniportThread = 0LL;
  a1->Flags = v3 | 0x80000000;
  KeReleaseSpinLock(&a1->Lock, v2);
  if ( (a1->PnPFlags & 0x4004) != 0 || (unsigned int)(a1->CurrentDevicePowerState - 2) <= 2 )
    goto LABEL_12;
  if ( a1->MajorNdisVersion >= 6u )
  {
    if ( a1->DriverHandle->MiniportDriverCharacteristics.ShutdownHandlerEx )
      ndisMInvokeShutdown(a1, NdisShutdownPowerOff);
  }
  else
  {
    ShutdownHandler = a1->ShutdownHandler;
    if ( ShutdownHandler )
      ShutdownHandler(a1->ShutdownContext);
  }
  a1->PnPFlags |= 0x800000u;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_qZ(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v4,
      9u,
      0x76u,
      (struct _GUID *)&WPP_4a94757187d03d50151c0070042f9279_Traceguids,
      (char)a1,
      &a1->pAdapterInstanceName->Length);
LABEL_12:
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4,
        1,
        119,
        (struct _GUID *)&WPP_4a94757187d03d50151c0070042f9279_Traceguids,
        (char)a1);
  }
  return 0LL;
}
