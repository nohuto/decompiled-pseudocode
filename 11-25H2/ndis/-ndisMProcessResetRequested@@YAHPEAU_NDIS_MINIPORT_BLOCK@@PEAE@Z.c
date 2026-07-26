/*
 * XREFs of ?ndisMProcessResetRequested@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1400A644C
 * Callers:
 *     ?ndisMProcessDeferred@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140096DC0 (-ndisMProcessDeferred@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140010C40 (WPP_RECORDER_SF_q.c)
 *     McTemplateK0jqxd_EtwWriteTransfer @ 0x1400246C0 (McTemplateK0jqxd_EtwWriteTransfer.c)
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK_DPC@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140025750 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK_DPC@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMSwapOpenHandlers@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1400554F0 (-ndisMSwapOpenHandlers@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     NdisMIndicateStatusEx @ 0x140069730 (NdisMIndicateStatusEx.c)
 *     ?ndisMDeQueueWorkItem@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_WORK_ITEM_TYPE@@PEAPEAXPEAP6AXPEAX3@Z@Z @ 0x140087070 (-ndisMDeQueueWorkItem@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_WORK_ITEM_TYPE@@PEAPEAXPEAP6AXPEAX3@.c)
 *     __security_check_cookie @ 0x1400EDF40 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400EDFC0 (_guard_dispatch_icall.c)
 *     memset @ 0x1400EE380 (memset.c)
 */

__int64 __fastcall ndisMProcessResetRequested(struct _NDIS_MINIPORT_BLOCK *a1, unsigned __int8 *a2)
{
  unsigned int v4; // edi
  int v5; // edx
  __int64 v6; // rcx
  struct _GUID *v8; // [rsp+20h] [rbp-A8h]
  __int64 v9; // [rsp+30h] [rbp-98h]
  struct _NDIS_STATUS_INDICATION StatusIndication; // [rsp+40h] [rbp-88h] BYREF

  ndisMDeQueueWorkItem(a1, NdisWorkItemResetRequested, 0LL, 0LL);
  if ( (a1->PnPFlags & 0x80000) != 0 )
  {
    a1->Flags &= ~0x100000u;
    return (unsigned int)-2147418111;
  }
  else
  {
    a1->Flags = a1->Flags & 0xFFCFFFFF | 0x200000;
    ndisMSwapOpenHandlers(a1, 1u);
    a1->MiniportThread = 0LL;
    KeReleaseSpinLockFromDpcLevel(&a1->Lock);
    memset(&StatusIndication, 0, sizeof(StatusIndication));
    StatusIndication.StatusBuffer = 0LL;
    StatusIndication.StatusBufferSize = 0;
    StatusIndication.Header = (_NDIS_OBJECT_HEADER)7340440;
    StatusIndication.SourceHandle = a1;
    StatusIndication.StatusCode = 1073807364;
    NdisMIndicateStatusEx(a1, &StatusIndication);
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v5) = 4;
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v5,
        17,
        71,
        (struct _GUID *)&WPP_43271d933b6d32d160b64a5fa7a4854c_Traceguids,
        (char)a1);
    }
    if ( (byte_140125101 & 4) != 0 )
    {
      LODWORD(v9) = 65537;
      LODWORD(v8) = a1->IfIndex;
      McTemplateK0jqxd_EtwWriteTransfer(
        v6,
        &CallMiniportReset,
        &a1->InterfaceGuid,
        (__int64)&a1->InterfaceGuid,
        (__int64)v8,
        a1->NetLuid.Value,
        v9);
    }
    v4 = ((__int64 (__fastcall *)(unsigned __int8 *, void *))a1->DriverHandle->MiniportDriverCharacteristics.ReturnNetBufferListsHandler)(
           a2,
           a1->MiniportAdapterContext);
    NDIS_ACQUIRE_MINIPORT_SPIN_LOCK_DPC(a1);
  }
  return v4;
}
