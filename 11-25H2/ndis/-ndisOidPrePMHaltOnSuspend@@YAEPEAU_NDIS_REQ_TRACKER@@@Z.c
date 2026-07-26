/*
 * XREFs of ?ndisOidPrePMHaltOnSuspend@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x14005C1B0
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisUpdateAndIndicatePMCapabilities@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14005B600 (-ndisUpdateAndIndicatePMCapabilities@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?GetMiniportFromReqTracker@@YAPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_REQ_TRACKER@@@Z @ 0x14005CA10 (-GetMiniportFromReqTracker@@YAPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_REQ_TRACKER@@@Z.c)
 */

unsigned __int8 __fastcall ndisOidPrePMHaltOnSuspend(struct _NDIS_REQ_TRACKER *a1)
{
  __int64 v1; // rcx
  struct _NDIS_MINIPORT_BLOCK *MiniportFromReqTracker; // rbx
  KIRQL v3; // al

  MiniportFromReqTracker = GetMiniportFromReqTracker(a1);
  if ( (MiniportFromReqTracker->Flags & 0x80u) != 0 )
  {
    *(_DWORD *)(v1 + 40) = -1073741637;
  }
  else
  {
    v3 = KeAcquireSpinLockRaiseToDpc(&MiniportFromReqTracker->Lock);
    MiniportFromReqTracker->WSyncFlags |= 0x10u;
    MiniportFromReqTracker->MiniportThread = 0LL;
    KeReleaseSpinLock(&MiniportFromReqTracker->Lock, v3);
    MiniportFromReqTracker->PnPFlags &= 0xFFFFFF9F;
    MiniportFromReqTracker->PnPCapabilities |= 0x10u;
    ndisUpdateAndIndicatePMCapabilities(MiniportFromReqTracker);
  }
  return 1;
}
