/*
 * XREFs of ?ndisGetLowerFilterWithPnpRef@@YAPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU1@W4_NDIS_FPNP_REFTAG@@@Z @ 0x14005C640
 * Callers:
 *     ?ndisFDevicePnPEventNotifyInternal@@YAXPEAX@Z @ 0x14007A6B0 (-ndisFDevicePnPEventNotifyInternal@@YAXPEAX@Z.c)
 * Callees:
 *     ?ndisReferenceRefEx@@YAEPEAU_REFERENCE_EX@@EPEAW4_NDIS_REFERENCE_STATUS@@@Z @ 0x140010EE0 (-ndisReferenceRefEx@@YAEPEAU_REFERENCE_EX@@EPEAW4_NDIS_REFERENCE_STATUS@@@Z.c)
 */

struct _NDIS_FILTER_BLOCK *__fastcall ndisGetLowerFilterWithPnpRef(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_FILTER_BLOCK *a2,
        unsigned __int8 a3)
{
  KIRQL v6; // bp
  _NDIS_FILTER_BLOCK *LowerFilter; // rbx
  int v9; // [rsp+40h] [rbp+8h] BYREF

  v6 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
  a1->MiniportThread = KeGetCurrentThread();
  if ( a2 )
    LowerFilter = a2->LowerFilter;
  else
    LowerFilter = a1->HighestFilter;
  for ( ; LowerFilter; LowerFilter = LowerFilter->LowerFilter )
  {
    v9 = 0;
    if ( ndisReferenceRefEx(&LowerFilter->PnPRef.SpinLock, a3, (enum _NDIS_REFERENCE_STATUS *)&v9) )
      break;
  }
  a1->MiniportThread = 0LL;
  KeReleaseSpinLock(&a1->Lock, v6);
  return LowerFilter;
}
