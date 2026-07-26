/*
 * XREFs of ?ndisClearBusy@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@@Z @ 0x140021940
 * Callers:
 *     ?ndisWdfReturnNbl@@YAXPEAXPEAU_NET_BUFFER_LIST@@K@Z @ 0x140020EA0 (-ndisWdfReturnNbl@@YAXPEAXPEAU_NET_BUFFER_LIST@@K@Z.c)
 *     ?ndisReturnNblWithPowerQueue@@YAXPEAXPEAU_NET_BUFFER_LIST@@K@Z @ 0x140020F60 (-ndisReturnNblWithPowerQueue@@YAXPEAXPEAU_NET_BUFFER_LIST@@K@Z.c)
 *     NdisMSendNetBufferListsComplete @ 0x140021180 (NdisMSendNetBufferListsComplete.c)
 *     NdisMResetComplete @ 0x14009FE80 (NdisMResetComplete.c)
 *     ?ndisMCancelSendNetBufferListsOnMiniport@@YAXPEAX0@Z @ 0x1400C47E0 (-ndisMCancelSendNetBufferListsOnMiniport@@YAXPEAX0@Z.c)
 *     ndisDoCancelDirectOidRequest @ 0x1400C706C (ndisDoCancelDirectOidRequest.c)
 *     ?ndisMPauseMiniportInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x14017F400 (-ndisMPauseMiniportInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 *     ?ndisMRestartMiniportInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_RESTART_ATTRIBUTES@@@Z @ 0x14017F6D0 (-ndisMRestartMiniportInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_RESTART_ATTRIBUTES@@@Z.c)
 * Callees:
 *     ?NdisWdfGetCxBlockFromMiniport@@YAPEAU_NDIS_WDF_CX_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140038840 (-NdisWdfGetCxBlockFromMiniport@@YAPEAU_NDIS_WDF_CX_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400E7130 (_guard_dispatch_icall.c)
 */

void __fastcall ndisClearBusy(struct _NDIS_MINIPORT_BLOCK *a1, int a2, int a3)
{
  struct _NDIS_SELECTIVE_SUSPEND *SelectiveSuspend; // rdi
  int v7; // ebp
  KIRQL v8; // r15
  struct _NDIS_WDF_CX_DRIVER_BLOCK *CxBlockFromMiniport; // rax

  SelectiveSuspend = a1->SelectiveSuspend;
  v7 = a1->Flags & 0x80;
  v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)SelectiveSuspend);
  switch ( a3 )
  {
    case '!':
      *((_DWORD *)SelectiveSuspend + 128) &= ~1u;
      break;
    case '"':
      *((_DWORD *)SelectiveSuspend + 128) &= ~2u;
      break;
    case '#':
      *((_DWORD *)SelectiveSuspend + 128) &= ~4u;
      break;
    case '$':
      *((_DWORD *)SelectiveSuspend + 128) &= ~8u;
      break;
    case '%':
      --*((_DWORD *)SelectiveSuspend + 129);
      break;
    case '1':
      *((_DWORD *)SelectiveSuspend + 128) &= ~0x10u;
      break;
    case '2':
      *((_DWORD *)SelectiveSuspend + 132) -= a2;
      break;
    case '3':
      *((_DWORD *)SelectiveSuspend + 133) -= a2;
      break;
    case '4':
      *((_DWORD *)SelectiveSuspend + 130) -= a2;
      break;
    case '5':
      *((_DWORD *)SelectiveSuspend + 131) -= a2;
      break;
    case '6':
      *((_DWORD *)SelectiveSuspend + 144) -= a2;
      break;
    default:
      break;
  }
  if ( v7
    && !*((_DWORD *)SelectiveSuspend + 128)
    && !*((_DWORD *)SelectiveSuspend + 129)
    && !*((_DWORD *)SelectiveSuspend + 132)
    && !*((_DWORD *)SelectiveSuspend + 133)
    && !*((_DWORD *)SelectiveSuspend + 130)
    && !*((_DWORD *)SelectiveSuspend + 131)
    && !*((_DWORD *)SelectiveSuspend + 144)
    && !*((_DWORD *)SelectiveSuspend + 127) )
  {
    CxBlockFromMiniport = NdisWdfGetCxBlockFromMiniport(a1);
    CxBlockFromMiniport->Chars.EvtCxPowerDereference(a1->MiniportAdapterContext);
  }
  KeReleaseSpinLock((PKSPIN_LOCK)SelectiveSuspend, v8);
}
