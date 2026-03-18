/*
 * XREFs of HalpDmaUseEmergencyLogicalAddressResources @ 0x14053A1F4
 * Callers:
 *     HalpAllocateDmaResourcesInternal @ 0x140331C00 (HalpAllocateDmaResourcesInternal.c)
 *     HalpConstructScatterGatherListDmarThin @ 0x14045FBC0 (HalpConstructScatterGatherListDmarThin.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402535A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeReleaseSpinLock @ 0x1402EA780 (KeReleaseSpinLock.c)
 */

char __fastcall HalpDmaUseEmergencyLogicalAddressResources(__int64 a1, _QWORD *a2, char a3)
{
  KSPIN_LOCK *v3; // rbp
  char v7; // bl
  KIRQL v8; // dl
  _QWORD *v9; // rcx

  v3 = (KSPIN_LOCK *)(a1 + 568);
  v7 = 0;
  v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 568));
  if ( *(_BYTE *)(a1 + 592) )
  {
    if ( a3 )
    {
      v9 = *(_QWORD **)(a1 + 584);
      if ( *v9 != a1 + 576 )
        __fastfail(3u);
      *a2 = a1 + 576;
      a2[1] = v9;
      *v9 = a2;
      *(_QWORD *)(a1 + 584) = a2;
    }
  }
  else
  {
    v7 = 1;
    *(_BYTE *)(a1 + 592) = 1;
  }
  KeReleaseSpinLock(v3, v8);
  return v7;
}
