/*
 * XREFs of HalpDmaAllocateDomain @ 0x1405507CC
 * Callers:
 *     HalJoinDmaDomain @ 0x1404D8CA0 (HalJoinDmaDomain.c)
 * Callees:
 *     HalpMmAllocCtxAlloc @ 0x14024BD68 (HalpMmAllocCtxAlloc.c)
 *     KeReleaseSpinLock @ 0x14024DD30 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140254B20 (KeAcquireSpinLockRaiseToDpc.c)
 *     HalpMmAllocCtxFree @ 0x14037CBAC (HalpMmAllocCtxFree.c)
 *     HalpDmaDereferenceDomainObject @ 0x1403A92FC (HalpDmaDereferenceDomainObject.c)
 *     HalpDmaReferenceDomainObject @ 0x14041119C (HalpDmaReferenceDomainObject.c)
 *     HalpDmaGetReservedRegionsForDeviceResources @ 0x140550BD4 (HalpDmaGetReservedRegionsForDeviceResources.c)
 *     HalpDmaGetReservedRegionsForHybridPassthroughDomain @ 0x140550E60 (HalpDmaGetReservedRegionsForHybridPassthroughDomain.c)
 *     HalpDmaGetReservedRegionsForTranslateDomain @ 0x140550EE8 (HalpDmaGetReservedRegionsForTranslateDomain.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
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
  char v18; // dl
  int v19; // r8d
  __int64 v20; // rcx
  __int64 v21; // r8
  unsigned int v22; // r15d
  __int64 ReservedRegionsForTranslateDomain; // rax
  __int64 ReservedRegionsForDeviceResources; // rax
  __int64 *v25; // rdx
  __int64 *v26; // rax
  __int64 *v27; // r8
  unsigned __int64 v28; // rdx
  __int64 *v29; // r9
  __int64 v30; // rcx
  unsigned __int64 v32; // [rsp+30h] [rbp-10h]
  __int64 v33; // [rsp+38h] [rbp-8h]
  __int16 v34; // [rsp+80h] [rbp+40h] BYREF
  char v35; // [rsp+82h] [rbp+42h]
  int v36; // [rsp+88h] [rbp+48h] BYREF
  unsigned int v37; // [rsp+90h] [rbp+50h]
  __int64 v38; // [rsp+98h] [rbp+58h] BYREF

  v36 = 0;
  v38 = 0LL;
  v2 = *(_DWORD *)(a1 + 520);
  v3 = 0LL;
  v4 = *(_QWORD *)(a1 + 144);
  v5 = 0LL;
  v34 = 0;
  v35 = 0;
  v6 = (void *)HalpMmAllocCtxAlloc(a1, 120LL);
  v7 = (__int64)v6;
  if ( !v6 )
    return v7;
  memset_0(v6, 0, 0x78uLL);
  v8 = KeAcquireSpinLockRaiseToDpc(&HalpDmaDomainListLock);
  v9 = (__int64 *)qword_140FC0AB8;
  if ( *(__int64 **)qword_140FC0AB8 != &HalpDmaDomainList )
    __fastfail(3u);
  *(_QWORD *)v7 = &HalpDmaDomainList;
  *(_QWORD *)(v7 + 8) = v9;
  *v9 = v7;
  qword_140FC0AB8 = v7;
  KeReleaseSpinLock(&HalpDmaDomainListLock, v8);
  HalpDmaReferenceDomainObject(v7);
  v10 = HalpIommuDomainMaxInputBitWidth;
  *(_BYTE *)(v7 + 32) = *(_BYTE *)(a1 + 445);
  v33 = (-(__int64)(*(_BYTE *)(a1 + 153) != 0) & 0xFFFF0000LL) + 0x10000;
  if ( v2 == 2 )
  {
    v11 = v10;
    goto LABEL_16;
  }
  v37 = 0;
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
  v37 = 0;
  v12 = !_BitScanReverse64((unsigned __int64 *)&v17, v4);
  v32 = v4;
  if ( !v12 )
    v16 = v17;
  v18 = 0;
  v19 = v16;
  v20 = *(_QWORD *)(a1 + 544);
  v21 = (unsigned int)(v19 + 1);
  v37 = v21;
  if ( v20 )
  {
    if ( (int)guard_dispatch_icall_no_overrides(v20, 3LL, &v36, &v34) < 0 )
    {
LABEL_50:
      HalpDmaDereferenceDomainObject((__int64 *)v7);
      v7 = 0LL;
      goto LABEL_51;
    }
    v18 = v34;
    v21 = v37;
  }
  if ( !v2 )
  {
    v22 = 1;
    v29 = 0LL;
    v27 = 0LL;
    v28 = 0LL;
    goto LABEL_48;
  }
  if ( v2 == 1 || v2 == 2 )
  {
    v22 = 0;
LABEL_33:
    if ( v2 == 1 )
      goto LABEL_39;
    goto LABEL_34;
  }
  if ( v2 != 3 )
  {
    v22 = 4;
    goto LABEL_33;
  }
  v22 = v18 != 0 ? 3 : 0;
LABEL_34:
  LODWORD(v38) = 1;
  HIDWORD(v38) = v21;
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
  ReservedRegionsForDeviceResources = HalpDmaGetReservedRegionsForDeviceResources(*(_QWORD *)(a1 + 528), v2, v21);
  v3 = ReservedRegionsForDeviceResources;
  if ( v5 )
  {
    v25 = (__int64 *)*v5;
    v26 = v5;
    if ( *v5 )
    {
      do
      {
        v26 = v25;
        v25 = (__int64 *)*v25;
      }
      while ( v25 );
    }
    *v26 = v3;
  }
  else
  {
    v5 = (__int64 *)ReservedRegionsForDeviceResources;
    v3 = 0LL;
  }
  v27 = &v38;
  v28 = 0x8000000000000000uLL;
  if ( v2 == 2 )
    v28 = 0xC000000000000000uLL;
  v29 = v5;
LABEL_48:
  if ( (int)guard_dispatch_icall_no_overrides(v22, v28, v27, v29) < 0 )
    goto LABEL_50;
  **(_QWORD **)(v7 + 40) = v7;
  *(_QWORD *)(v7 + 80) = 0LL;
  *(_QWORD *)(v7 + 16) = v32;
  *(_QWORD *)(v7 + 24) = v33;
  *(_DWORD *)(v7 + 48) = v2;
  *(_QWORD *)(v7 + 64) = 0LL;
  *(_QWORD *)(v7 + 72) = 0LL;
  *(_QWORD *)(v7 + 104) = 0LL;
  *(_QWORD *)(v7 + 96) = v7 + 88;
  *(_QWORD *)(v7 + 88) = v7 + 88;
LABEL_51:
  if ( v5 )
    HalpMmAllocCtxFree(v30, (__int64)v5);
  if ( v3 )
    HalpMmAllocCtxFree(v30, v3);
  return v7;
}
