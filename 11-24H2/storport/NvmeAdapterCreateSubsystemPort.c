/*
 * XREFs of NvmeAdapterCreateSubsystemPort @ 0x1400CE150
 * Callers:
 *     NvmeAdapterAddSubsystemPortMiniport @ 0x1400CCA08 (NvmeAdapterAddSubsystemPortMiniport.c)
 *     NvmeAdapterCreateAddSubsystemPort @ 0x1400CDE2C (NvmeAdapterCreateAddSubsystemPort.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000E820 (RaidAllocatePool.c)
 *     memset_0 @ 0x140143A80 (memset_0.c)
 */

__int64 __fastcall NvmeAdapterCreateSubsystemPort(
        __int64 a1,
        _OWORD *a2,
        _OWORD *a3,
        _OWORD *a4,
        __int16 a5,
        unsigned __int8 a6,
        unsigned __int8 a7,
        unsigned __int8 a8,
        unsigned __int8 a9,
        _QWORD *a10)
{
  unsigned int v14; // ebp
  _DWORD *Pool; // rax
  _DWORD *v16; // rbx
  PEX_RUNDOWN_REF_CACHE_AWARE CacheAwareRundownProtection; // rax
  __int64 v18; // rdx
  __int64 v19; // r9
  unsigned __int64 v20; // r10
  __int64 v21; // rcx
  __int64 v22; // rax
  unsigned __int64 v23; // r9
  __int64 v24; // rdx
  unsigned __int64 v25; // r10
  _OWORD *v26; // rax
  __int128 v27; // xmm1
  _OWORD *v28; // rax
  __int128 v29; // xmm1

  v14 = 0;
  Pool = (_DWORD *)RaidAllocatePool(64LL, 736LL, 1179541842LL, *(_QWORD *)(*(_QWORD *)(a1 + 40) + 8LL));
  v16 = Pool;
  if ( !Pool )
    return (unsigned int)-1073741801;
  memset_0(Pool, 0, 0x2E0uLL);
  CacheAwareRundownProtection = ExAllocateCacheAwareRundownProtection(NonPagedPoolNx, 0x464E6152u);
  *((_QWORD *)v16 + 5) = CacheAwareRundownProtection;
  if ( !CacheAwareRundownProtection )
  {
    ExFreePoolWithTag(v16, 0x464E6152u);
    return (unsigned int)-1073741801;
  }
  *((_QWORD *)v16 + 2) = v16 + 2;
  *((_QWORD *)v16 + 1) = v16 + 2;
  *((_WORD *)v16 + 2) = a5;
  *v16 = 1314280272;
  *((_QWORD *)v16 + 3) = a1;
  v18 = 2LL * a7;
  v19 = 4LL * a8;
  v20 = (*((_QWORD *)v16 + 4) ^ a6) & 0xFFFFFFFFFFFFFFF0uLL ^ (a6 ^ (unsigned __int64)v18) & 0xFFFFFFFFFFFFFFF1uLL;
  v21 = 2LL;
  v22 = v19 ^ (8LL * a9);
  v23 = (v18 ^ v19) & 0xFFFFFFFFFFFFFFF3uLL;
  v24 = 2LL;
  v25 = v23 ^ v22 & 0xFFFFFFFFFFFFFFF7uLL ^ v20;
  v26 = v16 + 15;
  *((_WORD *)v16 + 28) = -1;
  *((_QWORD *)v16 + 4) = (8LL * a9) ^ v25;
  do
  {
    *v26 = *a2;
    v26[1] = a2[1];
    v26[2] = a2[2];
    v26[3] = a2[3];
    v26[4] = a2[4];
    v26[5] = a2[5];
    v26[6] = a2[6];
    v26 += 8;
    v27 = a2[7];
    a2 += 8;
    *(v26 - 1) = v27;
    --v24;
  }
  while ( v24 );
  v28 = v16 + 79;
  do
  {
    *v28 = *a3;
    v28[1] = a3[1];
    v28[2] = a3[2];
    v28[3] = a3[3];
    v28[4] = a3[4];
    v28[5] = a3[5];
    v28[6] = a3[6];
    v28 += 8;
    v29 = a3[7];
    a3 += 8;
    *(v28 - 1) = v29;
    --v21;
  }
  while ( v21 );
  *(_OWORD *)(v16 + 143) = *a4;
  *(_OWORD *)(v16 + 147) = a4[1];
  *((_QWORD *)v16 + 77) = v16 + 152;
  *((_QWORD *)v16 + 76) = v16 + 152;
  ExInitializeResourceLite((PERESOURCE)(v16 + 158));
  *a10 = v16;
  return v14;
}
