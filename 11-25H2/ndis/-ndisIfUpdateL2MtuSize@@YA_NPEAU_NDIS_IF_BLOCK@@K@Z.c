/*
 * XREFs of ?ndisIfUpdateL2MtuSize@@YA_NPEAU_NDIS_IF_BLOCK@@K@Z @ 0x1400CFCEC
 * Callers:
 *     ?ndisIfUpdateL2MtuSizeAndNotify@@YAXPEAU_NDIS_IF_BLOCK@@K@Z @ 0x140152608 (-ndisIfUpdateL2MtuSizeAndNotify@@YAXPEAU_NDIS_IF_BLOCK@@K@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall ndisIfUpdateL2MtuSize(struct _NDIS_IF_BLOCK *a1, unsigned int a2)
{
  KIRQL v4; // al
  char v5; // bl

  v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension);
  if ( a1->ifMtu == a2 )
  {
    v5 = 0;
  }
  else
  {
    a1->ifMtu = a2;
    v5 = 1;
  }
  KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension, v4);
  return v5;
}
