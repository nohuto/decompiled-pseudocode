/*
 * XREFs of ?ndisClearBusy@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@@Z @ 0x14003CD40
 * Callers:
 *     ?ndisMRawOidRequestComplete@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_OID_REQUEST@@H@Z @ 0x1400255B0 (-ndisMRawOidRequestComplete@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_OID_REQUEST@@H@Z.c)
 *     ?ndisMDoDirectOidRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@E@Z @ 0x140027FA0 (-ndisMDoDirectOidRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@E@Z.c)
 *     ?ndisQueuedCheckForHang@@YAXPEAX@Z @ 0x14003CEF0 (-ndisQueuedCheckForHang@@YAXPEAX@Z.c)
 *     ?ndisDevicePnPEventNotifyMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_PNP_EVENT@@PEAXK@Z @ 0x140068C70 (-ndisDevicePnPEventNotifyMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_PNP_EVENT@@PEAXK@.c)
 *     ?ndisFDevicePnPEventNotifyInternal@@YAXPEAX@Z @ 0x140068E40 (-ndisFDevicePnPEventNotifyInternal@@YAXPEAX@Z.c)
 *     ?ndisMRawDirectOidRequestComplete@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_OID_REQUEST@@H@Z @ 0x140077570 (-ndisMRawDirectOidRequestComplete@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_OID_REQUEST@.c)
 *     NdisMResetComplete @ 0x1400A83A0 (NdisMResetComplete.c)
 *     ?ndisMCancelSendNetBufferListsOnMiniport@@YAXPEAX0@Z @ 0x1400CB790 (-ndisMCancelSendNetBufferListsOnMiniport@@YAXPEAX0@Z.c)
 *     ndisDoCancelDirectOidRequest @ 0x1400CE0FC (ndisDoCancelDirectOidRequest.c)
 *     ?ndisMPauseMiniportInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x14018BD20 (-ndisMPauseMiniportInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 *     ?ndisMRestartMiniportInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_RESTART_ATTRIBUTES@@@Z @ 0x14018BFF0 (-ndisMRestartMiniportInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_RESTART_ATTRIBUTES@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400EDFC0 (_guard_dispatch_icall.c)
 */

void __fastcall ndisClearBusy(__int64 a1, int a2, int a3)
{
  __int64 v4; // rbx
  int v7; // edi
  KIRQL v8; // bp

  v4 = *(_QWORD *)(a1 + 4448);
  v7 = *(_DWORD *)(a1 + 120) & 0x80;
  v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v4);
  if ( a3 == 54 )
  {
    *(_DWORD *)(v4 + 576) -= a2;
  }
  else if ( a3 == 52 )
  {
    *(_DWORD *)(v4 + 520) -= a2;
  }
  else
  {
    switch ( a3 )
    {
      case '!':
        *(_DWORD *)(v4 + 512) &= ~1u;
        break;
      case '"':
        *(_DWORD *)(v4 + 512) &= ~2u;
        break;
      case '#':
        *(_DWORD *)(v4 + 512) &= ~4u;
        break;
      case '$':
        *(_DWORD *)(v4 + 512) &= ~8u;
        break;
      case '%':
        --*(_DWORD *)(v4 + 516);
        break;
      case '1':
        *(_DWORD *)(v4 + 512) &= ~0x10u;
        break;
      case '2':
        *(_DWORD *)(v4 + 528) -= a2;
        break;
      case '3':
        *(_DWORD *)(v4 + 532) -= a2;
        break;
      case '5':
        *(_DWORD *)(v4 + 524) -= a2;
        break;
      default:
        break;
    }
  }
  if ( v7
    && !*(_DWORD *)(v4 + 512)
    && !*(_DWORD *)(v4 + 516)
    && !*(_DWORD *)(v4 + 528)
    && !*(_DWORD *)(v4 + 532)
    && !*(_DWORD *)(v4 + 520)
    && !*(_DWORD *)(v4 + 524)
    && !*(_DWORD *)(v4 + 576)
    && !*(_DWORD *)(v4 + 508) )
  {
    if ( (*(_DWORD *)(a1 + 120) & 0x80u) == 0 )
      NT_ASSERT("((((Miniport)->Flags & (0x00000080)) != 0))");
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(a1 + 3760) + 360LL) + 48LL))(*(_QWORD *)(a1 + 24));
  }
  KeReleaseSpinLock((PKSPIN_LOCK)v4, v8);
}
