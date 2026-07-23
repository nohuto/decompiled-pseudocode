/*
 * XREFs of HalpDmaAllocateDomain @ 0x14054E10C
 * Callers:
 *     HalJoinDmaDomain @ 0x1404D20F0 (HalJoinDmaDomain.c)
 * Callees:
 *     HalpMmAllocCtxAlloc @ 0x14027C378 (HalpMmAllocCtxAlloc.c)
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 *     HalpMmAllocCtxFree @ 0x1402EA1C8 (HalpMmAllocCtxFree.c)
 *     HalpDmaReferenceDomainObject @ 0x140396628 (HalpDmaReferenceDomainObject.c)
 *     HalpDmaDereferenceDomainObject @ 0x140397F8C (HalpDmaDereferenceDomainObject.c)
 *     HalpDmaGetReservedRegionsForDeviceResources @ 0x14054E514 (HalpDmaGetReservedRegionsForDeviceResources.c)
 *     HalpDmaGetReservedRegionsForHybridPassthroughDomain @ 0x14054E7A0 (HalpDmaGetReservedRegionsForHybridPassthroughDomain.c)
 *     HalpDmaGetReservedRegionsForTranslateDomain @ 0x14054E828 (HalpDmaGetReservedRegionsForTranslateDomain.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall HalpDmaAllocateDomain(__int64 a1)
{
  unsigned int v2; // esi
  __int64 v3; // r12
  unsigned __int64 v4; // r15
  __int64 *v5; // r14
  void *v6; // rax
  __int64 v7; // rdi
  KIRQL v8; // al
  __int64 *v9; // rcx
  unsigned __int8 v10; // r8
  unsigned __int8 v11; // dl
  bool v12; // zf
  __int64 v13; // rdx
  unsigned __int8 v14; // cl
  unsigned __int64 v15; // rax
  unsigned __int8 v16; // cl
  __int64 v17; // rax
  int v18; // r8d
  __int64 v19; // rcx
  __int64 v20; // r8
  unsigned int v21; // r15d
  __int64 ReservedRegionsForTranslateDomain; // rax
  __int64 ReservedRegionsForDeviceResources; // rax
  __int64 *v24; // rdx
  __int64 *v25; // rax
  unsigned __int64 v26; // rdx
  __int64 v27; // rcx
  unsigned __int64 v29; // [rsp+30h] [rbp-10h]
  __int64 v30; // [rsp+38h] [rbp-8h]
  unsigned int v31; // [rsp+90h] [rbp+50h]

  v2 = *(_DWORD *)(a1 + 520);
  v3 = 0LL;
  v4 = *(_QWORD *)(a1 + 144);
  v5 = 0LL;
  v6 = (void *)HalpMmAllocCtxAlloc(a1, 120LL);
  v7 = (__int64)v6;
  if ( !v6 )
    return v7;
  memset_0(v6, 0, 0x78uLL);
  v8 = KeAcquireSpinLockRaiseToDpc(&HalpDmaDomainListLock);
  v9 = (__int64 *)qword_140FC0D18;
  if ( *(__int64 **)qword_140FC0D18 != &HalpDmaDomainList )
    __fastfail(3u);
  *(_QWORD *)v7 = &HalpDmaDomainList;
  *(_QWORD *)(v7 + 8) = v9;
  *v9 = v7;
  qword_140FC0D18 = v7;
  KeReleaseSpinLock(&HalpDmaDomainListLock, v8);
  HalpDmaReferenceDomainObject(v7);
  v10 = HalpIommuDomainMaxInputBitWidth;
  *(_BYTE *)(v7 + 32) = *(_BYTE *)(a1 + 445);
  v30 = (-(__int64)(*(_BYTE *)(a1 + 153) != 0) & 0xFFFF0000LL) + 0x10000;
  if ( v2 == 2 )
  {
    v11 = v10;
    goto LABEL_16;
  }
  v12 = !_BitScanReverse64((unsigned __int64 *)&v13, HalpMaximumPhysicalMemoryAddress);
  if ( v12 )
    goto LABEL_11;
  if ( (unsigned __int8)v13 < 0x1Eu )
  {
    v11 = 32;
    goto LABEL_12;
  }
  if ( (unsigned __int8)v13 >= 0x3Fu )
LABEL_11:
    v11 = 64;
  else
    v11 = v13 + 2;
LABEL_12:
  if ( v2 )
  {
    v14 = v11;
    if ( v11 > v10 )
      v14 = v10;
    v11 = v14;
  }
LABEL_16:
  if ( v11 < 0x40u )
    v15 = (1LL << v11) - 1;
  else
    v15 = -1LL;
  v16 = -1;
  if ( v15 <= v4 )
    v4 = v15;
  v12 = !_BitScanReverse64((unsigned __int64 *)&v17, v4);
  v29 = v4;
  if ( !v12 )
    v16 = v17;
  v18 = v16;
  v19 = *(_QWORD *)(a1 + 544);
  v20 = (unsigned int)(v18 + 1);
  v31 = v20;
  if ( v19 )
  {
    if ( (int)guard_dispatch_icall_no_overrides(v19, 3LL) < 0 )
    {
LABEL_50:
      HalpDmaDereferenceDomainObject((__int64 *)v7);
      v7 = 0LL;
      goto LABEL_51;
    }
    v20 = v31;
  }
  if ( !v2 )
  {
    v21 = 1;
    v26 = 0LL;
    goto LABEL_48;
  }
  if ( v2 == 1 || v2 == 2 )
  {
    v21 = 0;
LABEL_33:
    if ( v2 == 1 )
      goto LABEL_39;
    goto LABEL_34;
  }
  if ( v2 != 3 )
  {
    v21 = 4;
    goto LABEL_33;
  }
  v21 = 0;
LABEL_34:
  if ( v2 == 3 )
  {
    ReservedRegionsForTranslateDomain = HalpDmaGetReservedRegionsForTranslateDomain(*(_QWORD *)(a1 + 536), v7 + 33);
LABEL_38:
    v5 = (__int64 *)ReservedRegionsForTranslateDomain;
    goto LABEL_39;
  }
  if ( v2 == 2 )
  {
    ReservedRegionsForTranslateDomain = HalpDmaGetReservedRegionsForHybridPassthroughDomain();
    goto LABEL_38;
  }
LABEL_39:
  ReservedRegionsForDeviceResources = HalpDmaGetReservedRegionsForDeviceResources(*(_QWORD *)(a1 + 528), v2, v20);
  v3 = ReservedRegionsForDeviceResources;
  if ( v5 )
  {
    v24 = (__int64 *)*v5;
    v25 = v5;
    if ( *v5 )
    {
      do
      {
        v25 = v24;
        v24 = (__int64 *)*v24;
      }
      while ( v24 );
    }
    *v25 = v3;
  }
  else
  {
    v5 = (__int64 *)ReservedRegionsForDeviceResources;
    v3 = 0LL;
  }
  v26 = 0x8000000000000000uLL;
  if ( v2 == 2 )
    v26 = 0xC000000000000000uLL;
LABEL_48:
  if ( (int)guard_dispatch_icall_no_overrides(v21, v26) < 0 )
    goto LABEL_50;
  **(_QWORD **)(v7 + 40) = v7;
  *(_QWORD *)(v7 + 80) = 0LL;
  *(_QWORD *)(v7 + 16) = v29;
  *(_QWORD *)(v7 + 24) = v30;
  *(_DWORD *)(v7 + 48) = v2;
  *(_QWORD *)(v7 + 64) = 0LL;
  *(_QWORD *)(v7 + 72) = 0LL;
  *(_QWORD *)(v7 + 104) = 0LL;
  *(_QWORD *)(v7 + 96) = v7 + 88;
  *(_QWORD *)(v7 + 88) = v7 + 88;
LABEL_51:
  if ( v5 )
    HalpMmAllocCtxFree(v27, (__int64)v5);
  if ( v3 )
    HalpMmAllocCtxFree(v27, v3);
  return v7;
}
