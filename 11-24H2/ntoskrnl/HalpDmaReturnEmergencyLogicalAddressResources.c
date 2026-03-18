/*
 * XREFs of HalpDmaReturnEmergencyLogicalAddressResources @ 0x14053C948
 * Callers:
 *     HalPutScatterGatherListDmarThin @ 0x1403AD350 (HalPutScatterGatherListDmarThin.c)
 *     HalpDmaFreeLa @ 0x14053C600 (HalpDmaFreeLa.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14024DD30 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140254B20 (KeAcquireSpinLockRaiseToDpc.c)
 *     HalpAllocateDmaResourcesInternal @ 0x140392950 (HalpAllocateDmaResourcesInternal.c)
 *     HalpConstructScatterGatherListDmarThin @ 0x14045EE40 (HalpConstructScatterGatherListDmarThin.c)
 */

void __fastcall HalpDmaReturnEmergencyLogicalAddressResources(__int64 a1)
{
  KSPIN_LOCK *v1; // rbp
  __int64 v3; // rdi
  KIRQL v4; // al
  _QWORD *v5; // rcx
  KIRQL v6; // r8
  _QWORD *v7; // rdx
  char v8; // si
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  int v13; // ecx

  v1 = (KSPIN_LOCK *)(a1 + 568);
  v3 = 0LL;
  v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 568));
  v5 = (_QWORD *)(a1 + 576);
  v6 = v4;
  v7 = *(_QWORD **)(a1 + 576);
  if ( v7 == (_QWORD *)(a1 + 576) )
  {
    v8 = 1;
    *(_BYTE *)(a1 + 592) = 0;
  }
  else
  {
    v8 = 0;
    v3 = *(_QWORD *)(a1 + 576);
    if ( (_QWORD *)v7[1] != v5 || (v9 = *v7, *(_QWORD **)(*v7 + 8LL) != v7) )
      __fastfail(3u);
    *v5 = v9;
    *(_QWORD *)(v9 + 8) = v5;
  }
  KeReleaseSpinLock(v1, v6);
  if ( !v8 )
  {
    v13 = *(_DWORD *)(v3 + 16);
    if ( v13 )
    {
      if ( v13 != 1 )
        return;
    }
    else if ( *(_DWORD *)(a1 + 624) == 3 )
    {
      *(_QWORD *)(*(_QWORD *)(a1 + 240) + 24LL) = *(_QWORD *)(a1 + 560);
      ++*(_DWORD *)(a1 + 624);
      HalpAllocateDmaResourcesInternal(a1, 1, 0LL);
      return;
    }
    HalpConstructScatterGatherListDmarThin(v3, v10, v11, v12);
  }
}
