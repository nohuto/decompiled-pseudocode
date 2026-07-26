/*
 * XREFs of ?ndisAoAcResumeRefTimeAccumulation@@YAXPEAU_NDIS_MINIPORT_AOAC@@@Z @ 0x140065210
 * Callers:
 *     ?ndisRequestDevicePowerD0@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z @ 0x140016750 (-ndisRequestDevicePowerD0@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z.c)
 * Callees:
 *     ?ndisAoAcStartRefTimeStats@@YAXPEAU_NDIS_MINIPORT_AOAC@@@Z @ 0x140065980 (-ndisAoAcStartRefTimeStats@@YAXPEAU_NDIS_MINIPORT_AOAC@@@Z.c)
 */

void __fastcall ndisAoAcResumeRefTimeAccumulation(KSPIN_LOCK *a1)
{
  KSPIN_LOCK v2; // rcx
  KIRQL v3; // dl
  PKSPIN_LOCK v4; // rcx

  KeAcquireSpinLockRaiseToDpc(a1);
  if ( *((_BYTE *)a1 + 1081) )
    v2 = MEMORY[0xFFFFF78000000008];
  else
    v2 = 0LL;
  a1[105] = v2;
  ndisAoAcStartRefTimeStats((struct _NDIS_MINIPORT_AOAC *)a1);
  KeReleaseSpinLock(v4, v3);
}
