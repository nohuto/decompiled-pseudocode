/*
 * XREFs of HalpDmaAllocateDomain @ 0x14054DE6C
 * Callers:
 *     HalJoinDmaDomain @ 0x1404D9CF0 (HalJoinDmaDomain.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402535A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeReleaseSpinLock @ 0x1402EA780 (KeReleaseSpinLock.c)
 *     HalpMmAllocCtxFree @ 0x140337DCC (HalpMmAllocCtxFree.c)
 *     HalpMmAllocCtxAlloc @ 0x140338EDC (HalpMmAllocCtxAlloc.c)
 *     HalpDmaDereferenceDomainObject @ 0x1404118D8 (HalpDmaDereferenceDomainObject.c)
 *     HalpDmaReferenceDomainObject @ 0x1404148C8 (HalpDmaReferenceDomainObject.c)
 *     HalpDmaGetReservedRegionsForDeviceResources @ 0x14054E274 (HalpDmaGetReservedRegionsForDeviceResources.c)
 *     HalpDmaGetReservedRegionsForHybridPassthroughDomain @ 0x14054E500 (HalpDmaGetReservedRegionsForHybridPassthroughDomain.c)
 *     HalpDmaGetReservedRegionsForTranslateDomain @ 0x14054E588 (HalpDmaGetReservedRegionsForTranslateDomain.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
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
  __int64 v26; // rcx
  unsigned __int64 v28; // [rsp+30h] [rbp-10h]
  __int64 v29; // [rsp+38h] [rbp-8h]
  unsigned int v30; // [rsp+90h] [rbp+50h]

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
  v9 = (__int64 *)qword_140FC0318;
  if ( *(__int64 **)qword_140FC0318 != &HalpDmaDomainList )
    __fastfail(3u);
  *(_QWORD *)v7 = &HalpDmaDomainList;
  *(_QWORD *)(v7 + 8) = v9;
  *v9 = v7;
  qword_140FC0318 = v7;
  KeReleaseSpinLock(&HalpDmaDomainListLock, v8);
  HalpDmaReferenceDomainObject(v7);
  v10 = HalpIommuDomainMaxInputBitWidth;
  *(_BYTE *)(v7 + 32) = *(_BYTE *)(a1 + 445);
  v29 = (-(__int64)(*(_BYTE *)(a1 + 153) != 0) & 0xFFFF0000LL) + 0x10000;
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
  v28 = v4;
  if ( !v12 )
    v16 = v17;
  v18 = v16;
  v19 = *(_QWORD *)(a1 + 544);
  v20 = (unsigned int)(v18 + 1);
  v30 = v20;
  if ( v19 )
  {
    if ( (int)guard_dispatch_icall_no_overrides(v19) < 0 )
    {
LABEL_48:
      HalpDmaDereferenceDomainObject((__int64 *)v7);
      v7 = 0LL;
      goto LABEL_49;
    }
    v20 = v30;
  }
  if ( !v2 )
  {
    v21 = 1;
    goto LABEL_46;
  }
  if ( v2 == 1 || v2 == 2 )
  {
    v21 = 0;
  }
  else
  {
    if ( v2 == 3 )
    {
      v21 = 0;
      goto LABEL_34;
    }
    v21 = 4;
  }
  if ( v2 == 1 )
    goto LABEL_39;
LABEL_34:
  if ( v2 == 3 )
  {
    ReservedRegionsForTranslateDomain = HalpDmaGetReservedRegionsForTranslateDomain(*(_QWORD *)(a1 + 536), v7 + 33);
  }
  else
  {
    if ( v2 != 2 )
      goto LABEL_39;
    ReservedRegionsForTranslateDomain = HalpDmaGetReservedRegionsForHybridPassthroughDomain();
  }
  v5 = (__int64 *)ReservedRegionsForTranslateDomain;
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
LABEL_46:
  if ( (int)guard_dispatch_icall_no_overrides(v21) < 0 )
    goto LABEL_48;
  **(_QWORD **)(v7 + 40) = v7;
  *(_QWORD *)(v7 + 80) = 0LL;
  *(_QWORD *)(v7 + 16) = v28;
  *(_QWORD *)(v7 + 24) = v29;
  *(_DWORD *)(v7 + 48) = v2;
  *(_QWORD *)(v7 + 64) = 0LL;
  *(_QWORD *)(v7 + 72) = 0LL;
  *(_QWORD *)(v7 + 104) = 0LL;
  *(_QWORD *)(v7 + 96) = v7 + 88;
  *(_QWORD *)(v7 + 88) = v7 + 88;
LABEL_49:
  if ( v5 )
    HalpMmAllocCtxFree(v26, (__int64)v5);
  if ( v3 )
    HalpMmAllocCtxFree(v26, v3);
  return v7;
}
