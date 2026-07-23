/*
 * XREFs of ExInitializePagedLookasideListInternal @ 0x1404541E0
 * Callers:
 *     FsRtlInitExtraCreateParameterLookasideList @ 0x140707DD0 (FsRtlInitExtraCreateParameterLookasideList.c)
 *     AlpcpInitSystem @ 0x14073FD1C (AlpcpInitSystem.c)
 *     ExInitializePagedLookasideList @ 0x140A914C0 (ExInitializePagedLookasideList.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 *     InitializeSListHead @ 0x140454D40 (InitializeSListHead.c)
 */

void __fastcall ExInitializePagedLookasideListInternal(
        __int64 a1,
        PVOID (__fastcall *a2)(int a1, SIZE_T a2, ULONG a3),
        void (__stdcall *a3)(PVOID P),
        int a4,
        int a5,
        int a6,
        __int16 a7,
        int a8)
{
  int v12; // ebx
  PVOID (__fastcall *v13)(int, SIZE_T, ULONG); // rax
  void (__stdcall *v14)(PVOID); // rax
  KIRQL v15; // dl
  _QWORD *v16; // rax
  _QWORD *v17; // rbp

  InitializeSListHead((PSLIST_HEADER)a1);
  *(_WORD *)(a1 + 16) = ExMinimumLookasideDepth;
  v12 = a4 | 1;
  *(_DWORD *)(a1 + 40) = a6;
  *(_DWORD *)(a1 + 44) = a5;
  v13 = ExAllocatePoolZero;
  if ( a2 )
    v13 = a2;
  *(_WORD *)(a1 + 18) = 256;
  *(_QWORD *)(a1 + 20) = 0LL;
  *(_QWORD *)(a1 + 28) = 0LL;
  *(_DWORD *)(a1 + 36) = v12;
  *(_QWORD *)(a1 + 48) = v13;
  v14 = ExFreePool;
  if ( a3 )
    v14 = a3;
  *(_QWORD *)(a1 + 56) = v14;
  *(_QWORD *)(a1 + 80) = 0LL;
  v15 = KeAcquireSpinLockRaiseToDpc(&ExPagedLookasideLock);
  if ( a8 )
  {
    *(_WORD *)(a1 + 16) = a7;
LABEL_7:
    *(_WORD *)(a1 + 18) = -1;
    goto LABEL_8;
  }
  if ( !ExMinimumLookasideDepth )
  {
    *(_WORD *)(a1 + 16) = 0;
    goto LABEL_7;
  }
LABEL_8:
  v16 = (_QWORD *)qword_140EFA9A8;
  v17 = (_QWORD *)(a1 + 64);
  if ( *(__int64 **)qword_140EFA9A8 != &ExPagedLookasideListHead )
    __fastfail(3u);
  *v17 = &ExPagedLookasideListHead;
  v17[1] = v16;
  *v16 = v17;
  qword_140EFA9A8 = (__int64)v17;
  KeReleaseSpinLock(&ExPagedLookasideLock, v15);
}
