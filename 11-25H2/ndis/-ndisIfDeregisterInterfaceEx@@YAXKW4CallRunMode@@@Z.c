/*
 * XREFs of ?ndisIfDeregisterInterfaceEx@@YAXKW4CallRunMode@@@Z @ 0x14004B2E0
 * Callers:
 *     ?ndisIfCreateOrUpdateInterface@@YAXAEBU_GUID@@@Z @ 0x14008CAF0 (-ndisIfCreateOrUpdateInterface@@YAXAEBU_GUID@@@Z.c)
 *     NdisIfDeregisterInterface @ 0x140173220 (NdisIfDeregisterInterface.c)
 * Callees:
 *     ?ndisIfReferenceMiniport@@YAPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_IF_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z @ 0x14000E590 (-ndisIfReferenceMiniport@@YAPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_IF_BLOCK@@W4_NDIS_MPIF_REFTAG@@@.c)
 *     WPP_RECORDER_SF_d @ 0x140026510 (WPP_RECORDER_SF_d.c)
 *     ?ndisIfDereferenceMiniport@@YAXPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z @ 0x14004B0D0 (-ndisIfDereferenceMiniport@@YAXPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG.c)
 *     ?ndisIfFindInterface@@YAPEAU_NDIS_IF_BLOCK@@K@Z @ 0x14004BEA0 (-ndisIfFindInterface@@YAPEAU_NDIS_IF_BLOCK@@K@Z.c)
 *     ?IFBLOCK_DECREMENT_REF@@YAXPEAU_NDIS_IF_BLOCK@@W4_NDIS_IF_REFTAG@@@Z @ 0x14004C210 (-IFBLOCK_DECREMENT_REF@@YAXPEAU_NDIS_IF_BLOCK@@W4_NDIS_IF_REFTAG@@@Z.c)
 *     ?NdisMRemoveMiniportInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z @ 0x14008FA80 (-NdisMRemoveMiniportInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z.c)
 *     ?ndisPcwNotifyIfBlockRemoval@@YAXPEAU_NDIS_IF_BLOCK@@@Z @ 0x140140500 (-ndisPcwNotifyIfBlockRemoval@@YAXPEAU_NDIS_IF_BLOCK@@@Z.c)
 *     ?ndisMSetMiniportReadyForBinding@@YAXPEAU_NDIS_MINIPORT_BLOCK@@_NW4NDIS_DO_NOT_BIND_REASON@@W4CallRunMode@@@Z @ 0x14015D7E0 (-ndisMSetMiniportReadyForBinding@@YAXPEAU_NDIS_MINIPORT_BLOCK@@_NW4NDIS_DO_NOT_BIND_REASON@@W4Ca.c)
 *     ?ndisWaitForKernelObject@@YAXPEAX@Z @ 0x140160790 (-ndisWaitForKernelObject@@YAXPEAX@Z.c)
 *     ?ndisNsiNotifyClientInterfaceChange@@YAXPEAU_NDIS_IF_BLOCK@@W4_NSI_NOTIFICATION@@PEAU_NSI_SINGLE_PARAM_DESC@@W4_NDIS_NSI_OBJECT_INDEX@@@Z @ 0x14016C740 (-ndisNsiNotifyClientInterfaceChange@@YAXPEAU_NDIS_IF_BLOCK@@W4_NSI_NOTIFICATION@@PEAU_NSI_SINGLE.c)
 */

void __fastcall ndisIfDeregisterInterfaceEx(unsigned int a1, enum CallRunMode a2)
{
  struct _NDIS_IF_BLOCK *Interface; // rax
  KIRQL v5; // dl
  struct _NDIS_IF_BLOCK *v6; // rbx
  struct _NDIS_MINIPORT_BLOCK *v7; // rax
  struct _NDIS_MINIPORT_BLOCK *v8; // rbp
  KIRQL v9; // di
  unsigned __int16 v10; // r9
  unsigned __int8 v11; // dl
  struct _NDIS_MINIPORT_BLOCK *v12; // rdx
  KIRQL v13; // di
  __int64 v14; // [rsp+28h] [rbp-40h]
  struct _KEVENT Event; // [rsp+30h] [rbp-38h] BYREF

  memset(&Event, 0, sizeof(Event));
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x16u,
      0xEu,
      (struct _GUID *)&WPP_e5c80a74ae4b3c476e035af8615267ee_Traceguids,
      a1,
      *(_QWORD *)&Event.Header.Lock,
      Event.Header.WaitListHead.Flink,
      Event.Header.WaitListHead.Blink);
  KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension);
  Interface = ndisIfFindInterface(a1);
  v6 = Interface;
  if ( Interface->AlreadyDeregistered )
  {
    KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension, v5);
    goto LABEL_5;
  }
  Interface->AlreadyDeregistered = 1;
  KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension, v5);
  if ( !v6 )
  {
LABEL_5:
    if ( *(int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      return;
    v10 = 15;
    v11 = 3;
LABEL_16:
    LODWORD(v14) = a1;
    WPP_RECORDER_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v11,
      0x16u,
      v10,
      (struct _GUID *)&WPP_e5c80a74ae4b3c476e035af8615267ee_Traceguids,
      v14);
    return;
  }
  v7 = ndisIfReferenceMiniport(v6, 0x14u);
  v8 = v7;
  if ( v7 )
  {
    ndisMSetMiniportReadyForBinding(v7, 0, Reason_MiniportInterfaceDeregister, RunSynchronous);
    NdisMRemoveMiniportInternal(v8, NdisMEventErr_UninstalledByUsermode);
    ndisIfDereferenceMiniport(v6, v12, 0x14u);
  }
  ndisPcwNotifyIfBlockRemoval(v6);
  ndisNsiNotifyClientInterfaceChange(v6, 2LL, 0LL, 1LL);
  if ( a2 )
  {
    v9 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension);
    IFBLOCK_DECREMENT_REF(v6, IFREF_NUMBER_OF_TAGS|IFREF_SETDESCR|0xE0);
    KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension, v9);
  }
  else
  {
    KeInitializeEvent(&Event, NotificationEvent, 0);
    v6->AsyncEvent = &Event;
    v13 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension);
    IFBLOCK_DECREMENT_REF(v6, IFREF_NUMBER_OF_TAGS|IFREF_SETDESCR|0xE0);
    KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension, v13);
    ndisWaitForKernelObject(&Event);
  }
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v10 = 16;
    v11 = 4;
    goto LABEL_16;
  }
}
