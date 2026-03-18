/*
 * XREFs of ?AllocateCrossAdapterDataDpc@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_CROSSADAPTER_ALLOC@@PEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x14001BE40
 * Callers:
 *     ?CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKU_D3DDDI_SEGMENTPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@U_DXGK_ALLOCATIONINFOFLAGS2@@PEBVDXGADAPTERALLOCATION@@PEAX6KE6PEAVVIDMM_PAGE_TABLE_BASE@@PEAPEAUVIDMM_CROSSADAPTER_ALLOC@@PEAPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x1400DCBA4 (-CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKU_D3DDDI_SEGMENTPREFERENCE@@U_D.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14001C724 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::AllocateCrossAdapterDataDpc(
        VIDMM_GLOBAL *this,
        struct VIDMM_CROSSADAPTER_ALLOC *a2,
        struct VIDMM_GLOBAL_ALLOC *a3)
{
  _QWORD *v6; // rax
  _QWORD *v7; // rbx
  struct VIDMM_CROSSADAPTER_ALLOC **v8; // rdx
  struct VIDMM_CROSSADAPTER_ALLOC *v9; // rax
  __int64 v11; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-28h] BYREF

  v6 = (_QWORD *)operator new(32LL, 808872278LL, 64LL);
  v7 = v6;
  if ( v6 )
  {
    *v6 = a3;
    v6[3] = *(_QWORD *)(*((_QWORD *)this + 2) + 744LL) + 1448LL;
    memset(&LockHandle, 0, sizeof(LockHandle));
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)a2 + 4, &LockHandle);
    v8 = (struct VIDMM_CROSSADAPTER_ALLOC **)*((_QWORD *)a2 + 3);
    v9 = (struct VIDMM_CROSSADAPTER_ALLOC *)(v7 + 1);
    if ( *v8 != (struct VIDMM_CROSSADAPTER_ALLOC *)((char *)a2 + 16) )
      __fastfail(3u);
    *(_QWORD *)v9 = (char *)a2 + 16;
    v7[2] = v8;
    *v8 = v9;
    *((_QWORD *)a2 + 3) = v9;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    return 0LL;
  }
  else
  {
    _InterlockedIncrement(&dword_14008181C);
    WdLogSingleEntry0(6LL);
    WdLogGlobalForLineNumber = 31043;
    DxgkLogInternalTriageEvent(v11, 262145LL);
    return 3221225495LL;
  }
}
