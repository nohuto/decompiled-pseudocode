/*
 * XREFs of ?FreeCrossAdapterDataDpc@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_CROSSADAPTER_ALLOC@@PEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x14002720C
 * Callers:
 *     ?DestroyOneAllocation@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAUVIDMM_GLOBAL_ALLOC@@_N@Z @ 0x1400B8AEC (-DestroyOneAllocation@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAUVIDMM_GLOBAL_ALLOC@@_N@Z.c)
 *     ?CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKU_D3DDDI_SEGMENTPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@U_DXGK_ALLOCATIONINFOFLAGS2@@PEBVDXGADAPTERALLOCATION@@PEAX6KE6PEAVVIDMM_PAGE_TABLE_BASE@@PEAPEAUVIDMM_CROSSADAPTER_ALLOC@@PEAPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x1400E8A9C (-CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKU_D3DDDI_SEGMENTPREFERENCE@@U_D.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x140028730 (--3@YAXPEAX@Z.c)
 */

void __fastcall VIDMM_GLOBAL::FreeCrossAdapterDataDpc(
        VIDMM_GLOBAL *this,
        KSPIN_LOCK *a2,
        struct VIDMM_GLOBAL_ALLOC *a3)
{
  _QWORD *v5; // rbx
  _QWORD *v6; // rax
  _QWORD *v7; // r8
  struct VIDMM_GLOBAL_ALLOC **v8; // rcx
  _QWORD *v9; // rdx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock(a2 + 4, &LockHandle);
  v5 = a2 + 2;
  v6 = (_QWORD *)*v5;
  while ( 1 )
  {
    v7 = v6;
    if ( v6 == v5 )
      break;
    v8 = (struct VIDMM_GLOBAL_ALLOC **)(v6 - 1);
    v6 = (_QWORD *)*v6;
    if ( *v8 == a3 )
    {
      if ( (_QWORD *)v6[1] != v7 || (v9 = (_QWORD *)v7[1], (_QWORD *)*v9 != v7) )
        __fastfail(3u);
      *v9 = v6;
      v6[1] = v9;
      operator delete(v8);
      break;
    }
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
