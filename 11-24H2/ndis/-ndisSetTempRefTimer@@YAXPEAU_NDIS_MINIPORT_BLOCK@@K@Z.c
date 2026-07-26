/*
 * XREFs of ?ndisSetTempRefTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x14003AC20
 * Callers:
 *     ?ndisAoAcClearStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z @ 0x14003AA90 (-ndisAoAcClearStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z.c)
 *     ?ndisNicActiveRequestComplete@@YAXPEAU_NDIS_MINIPORT_BLOCK@@J@Z @ 0x14003C040 (-ndisNicActiveRequestComplete@@YAXPEAU_NDIS_MINIPORT_BLOCK@@J@Z.c)
 *     ?ndisNicActiveRelease@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@PEAU_NDIS_PM_NIC_ACTIVE@@@Z @ 0x14003C5F0 (-ndisNicActiveRelease@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@PEAU_N.c)
 *     NdisReleaseNicActive @ 0x140075FC0 (NdisReleaseNicActive.c)
 * Callees:
 *     ?ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x140011280 (-ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1400129C0 (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 */

void __fastcall ndisSetTempRefTimer(struct _NDIS_MINIPORT_BLOCK *a1, int a2)
{
  struct _NDIS_MINIPORT_AOAC *AoAc; // rdi
  __int64 v4; // rbx
  KIRQL v5; // al
  __int64 v6; // rbx

  AoAc = a1->AoAc;
  v4 = a2;
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)AoAc);
  if ( !*((_DWORD *)AoAc + 16) || *((_DWORD *)AoAc + 95) )
  {
    KeReleaseSpinLock((PKSPIN_LOCK)AoAc, v5);
  }
  else
  {
    KeReleaseSpinLock((PKSPIN_LOCK)AoAc, v5);
    v6 = -10000 * v4;
    if ( (unsigned __int8)ndisReferenceMiniport(a1, 2u) )
    {
      if ( KeSetCoalescableTimer((PKTIMER)((char *)AoAc + 72), (LARGE_INTEGER)v6, 0, 0, (PKDPC)((char *)AoAc + 136)) )
        ndisDereferenceMiniport(a1, 2u);
    }
  }
}
