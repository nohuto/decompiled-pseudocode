/*
 * XREFs of EmonAllocateResources @ 0x1405589BC
 * Callers:
 *     EmonReserveProfileResourcesEnhanced @ 0x14055B970 (EmonReserveProfileResourcesEnhanced.c)
 *     EmonReserveProfileResourcesOriginal @ 0x14055BB30 (EmonReserveProfileResourcesOriginal.c)
 * Callees:
 *     HalpMmAllocCtxAlloc @ 0x14027C378 (HalpMmAllocCtxAlloc.c)
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 *     HalpMmAllocCtxFree @ 0x1402EA1C8 (HalpMmAllocCtxFree.c)
 *     HalpQueryMaximumRegisteredProcessorCount @ 0x14053F86C (HalpQueryMaximumRegisteredProcessorCount.c)
 *     HalpPmuReservedResourcesProcessorCallback @ 0x140543798 (HalpPmuReservedResourcesProcessorCallback.c)
 *     EmonReleaseProfileResourcesInternal @ 0x14055B504 (EmonReleaseProfileResourcesInternal.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall EmonAllocateResources(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, _QWORD *a6)
{
  __int32 v10; // esi
  int v11; // edi
  int v12; // eax
  size_t v13; // rdi
  _QWORD *v14; // rax
  _QWORD *v15; // rbx
  KIRQL v16; // al
  _QWORD *v17; // rcx
  __int64 v18; // rcx
  int v20; // [rsp+20h] [rbp-48h] BYREF
  int v21; // [rsp+24h] [rbp-44h]
  _QWORD *v22; // [rsp+28h] [rbp-40h]
  __int64 v23; // [rsp+30h] [rbp-38h]
  __int64 v24; // [rsp+38h] [rbp-30h]

  v21 = 0;
  *a6 = -1LL;
  v10 = 1;
  if ( a4 )
  {
    v10 = _InterlockedExchange(&EmonPebsInUse, 1);
    if ( v10 )
      return (unsigned int)-1073741670;
    v12 = EmonPebsEntrySize;
    if ( *(_DWORD *)(a4 + 8) )
      v12 = *(_DWORD *)(a4 + 8);
    EmonPebsEntrySizeInUse = v12;
  }
  v13 = 80 * (unsigned int)HalpQueryMaximumRegisteredProcessorCount() + 112;
  v14 = (_QWORD *)HalpMmAllocCtxAlloc(v13, v13);
  v15 = v14;
  if ( !v14 )
  {
    v11 = -1073741801;
LABEL_16:
    if ( a4 && !v10 )
    {
      EmonPebsEntrySizeInUse = 0;
      EmonPebsInUse = 0;
    }
    return (unsigned int)v11;
  }
  memset_0(v14, 0, v13);
  v15[2] = a2;
  if ( a4 )
    v15[3] = *(_QWORD *)a4;
  v21 = 0;
  v20 = a5;
  v22 = v15;
  v23 = a1;
  v24 = a4;
  v11 = HalpPmuReservedResourcesProcessorCallback(a3, (__int64)EmonMarkCountersReserved, (__int64)&v20, (__int64)v15);
  if ( v11 < 0 )
  {
    EmonReleaseProfileResourcesInternal(v15);
    HalpMmAllocCtxFree(v18, (__int64)v15);
    goto LABEL_16;
  }
  v16 = KeAcquireSpinLockRaiseToDpc(&EmonReservedResourcesLock);
  v17 = (_QWORD *)qword_140F8F228;
  if ( *(__int64 **)qword_140F8F228 != &EmonReservedResourcesList )
    __fastfail(3u);
  *v15 = &EmonReservedResourcesList;
  v15[1] = v17;
  *v17 = v15;
  qword_140F8F228 = (__int64)v15;
  KeReleaseSpinLock(&EmonReservedResourcesLock, v16);
  *a6 = v15;
  return (unsigned int)v11;
}
