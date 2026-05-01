/*
 * XREFs of ?ResourceSetFactory@ResourceSet@ExecutionModel@@CAJ_KPEAVBaseResourceSet@2@PEAU_RM_ACTIVITY_HOST@@PEAXPEAPEAV12@@Z @ 0x18000E528
 * Callers:
 *     ?AcquireResourceSet@ResourceManager@ExecutionModel@@QEAAJPEBU_ResourceSetInfo@2@PEAU_RM_ACTIVITY_HOST@@PEAXPEAUIResourceSetCallback@2@_KPEAPEAVResourceSet@2@@Z @ 0x18000E1F4 (-AcquireResourceSet@ResourceManager@ExecutionModel@@QEAAJPEBU_ResourceSetInfo@2@PEAU_RM_ACTIVITY.c)
 * Callees:
 *     ?RmpObjectTableAddObjectWithLock@@YAXPEAU_RM_OBJECT_TABLE@@PEAU_RM_OBJECT_HEADER@@@Z @ 0x18000E7AC (-RmpObjectTableAddObjectWithLock@@YAXPEAU_RM_OBJECT_TABLE@@PEAU_RM_OBJECT_HEADER@@@Z.c)
 *     ?HampAllocateHeap@@YAPEAX_K@Z @ 0x18000EF00 (-HampAllocateHeap@@YAPEAX_K@Z.c)
 *     ??0ResourceSet@ExecutionModel@@AEAA@XZ @ 0x180010364 (--0ResourceSet@ExecutionModel@@AEAA@XZ.c)
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x180027680 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     ?RmpSystemDuplicateHandle@@YAJPEAXKPEAPEAX@Z @ 0x18003D02C (-RmpSystemDuplicateHandle@@YAJPEAXKPEAPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180073848 (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800A9010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall ExecutionModel::ResourceSet::ResourceSetFactory(
        void *a1,
        struct ExecutionModel::BaseResourceSet *a2,
        struct _RM_ACTIVITY_HOST *a3,
        void *a4,
        struct ExecutionModel::ResourceSet **a5)
{
  void **Heap; // rax
  volatile signed __int64 *v10; // rsi
  ExecutionModel::ResourceSet *v11; // rax
  __int64 v12; // rax
  struct ExecutionModel::ResourceSet *v13; // r14
  __int64 v14; // rdi
  int v15; // ebx

  Heap = (void **)HampAllocateHeap(0x50uLL);
  v10 = (volatile signed __int64 *)Heap;
  if ( !Heap )
  {
    v15 = -1073741801;
    return v15 | 0x10000000u;
  }
  Heap[6] = 0LL;
  Heap[7] = 0LL;
  Heap[8] = 0LL;
  Heap[9] = 0LL;
  *Heap = 0LL;
  Heap[3] = 0LL;
  *((_DWORD *)Heap + 11) = 0;
  Heap[4] = a1;
  Heap[2] = (void *)1;
  *((_DWORD *)Heap + 10) = 1;
  Heap[1] = (void *)(HIBYTE(a1)
                   + 37
                   * (BYTE6(a1)
                    + 37
                    * (BYTE5(a1)
                     + 37
                     * (BYTE4(a1)
                      + 37 * (BYTE3(a1) + 37 * (BYTE2(a1) + 37 * (BYTE1(a1) + 37 * ((unsigned __int8)a1 + 11623883LL))))))));
  if ( a4 )
  {
    v15 = RmpSystemDuplicateHandle(a4, 1u, Heap + 7);
    if ( v15 < 0 )
      goto LABEL_10;
  }
  v11 = (ExecutionModel::ResourceSet *)operator new(0x6D0uLL);
  if ( !v11
    || (v12 = ExecutionModel::ResourceSet::ResourceSet(v11), (v13 = (struct ExecutionModel::ResourceSet *)v12) == 0LL) )
  {
    v15 = -1073741801;
LABEL_10:
    RmpObjectRelease((PVOID)v10);
    return v15 | 0x10000000u;
  }
  *(_QWORD *)(v12 + 64) = a2;
  *(_DWORD *)(v12 + 16) = *((_DWORD *)a2 + 4);
  *(_QWORD *)(v12 + 24) = *((_QWORD *)a2 + 3);
  *(_QWORD *)(v12 + 1272) = *((_QWORD *)a2 + 159);
  if ( _InterlockedIncrement64((volatile signed __int64 *)a3 + 2) <= 1 )
    __fastfail(0xEu);
  *(_QWORD *)(v12 + 1320) = a3;
  if ( _InterlockedIncrement64(v10 + 2) <= 1 )
    __fastfail(0xEu);
  *(_QWORD *)(v12 + 1312) = v10;
  *(_QWORD *)(v12 + 1720) = *((_QWORD *)v10 + 4);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
  *((_QWORD *)v10 + 6) = v13;
  v14 = *(_QWORD *)(*((_QWORD *)v13 + 3) + 128LL);
  RtlAcquireSRWLockExclusive(v14 + 552);
  RmpObjectTableAddObjectWithLock((struct _RM_OBJECT_TABLE *)(v14 + 536), (struct _RM_OBJECT_HEADER *)v10);
  RtlReleaseSRWLockExclusive(v14 + 552);
  v15 = 0;
  *a5 = v13;
  return v15 | 0x10000000u;
}
