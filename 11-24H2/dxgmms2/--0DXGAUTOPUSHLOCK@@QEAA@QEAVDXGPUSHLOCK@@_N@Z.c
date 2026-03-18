/*
 * XREFs of ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1400340C0
 * Callers:
 *     ?AsyncUnpinAllocation@VIDMM_GLOBAL@@QEAAJPEAVDXGALLOCATION@@@Z @ 0x1400C1574 (-AsyncUnpinAllocation@VIDMM_GLOBAL@@QEAAJPEAVDXGALLOCATION@@@Z.c)
 *     ?ReferencePinnedAllocation@VIDMM_DEVICE@@QEAAJPEAUVIDMM_ALLOC@@PEA_N@Z @ 0x1400DAF1C (-ReferencePinnedAllocation@VIDMM_DEVICE@@QEAAJPEAUVIDMM_ALLOC@@PEA_N@Z.c)
 *     ?VidMmCompleteAsyncUnpin@@YAXPEAVVIDMM_GLOBAL@@PEAPEAUVIDMM_ALLOC@@PEAVDXGPUSHLOCKBASE@@@Z @ 0x140100500 (-VidMmCompleteAsyncUnpin@@YAXPEAVVIDMM_GLOBAL@@PEAPEAUVIDMM_ALLOC@@PEAVDXGPUSHLOCKBASE@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140055E60 (_guard_dispatch_icall.c)
 */

DXGAUTOPUSHLOCK *__fastcall DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK(DXGAUTOPUSHLOCK *this, struct _KTHREAD **a2, char a3)
{
  void (__fastcall *v4)(_QWORD, __int64, __int64, const wchar_t *, __int64, _QWORD, _QWORD, _QWORD, _QWORD); // rax

  *((_QWORD *)this + 1) = a2;
  *((_DWORD *)this + 4) = 0;
  if ( !a3 && a2 && a2[1] == KeGetCurrentThread() )
  {
    WdLogSingleEntry0(1LL);
    v4 = (void (__fastcall *)(_QWORD, __int64, __int64, const wchar_t *, __int64, _QWORD, _QWORD, _QWORD, _QWORD))DxgCoreInterface[88];
    WdLogGlobalForLineNumber = 1512;
    v4(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"bAllowAcquireRecursive || pPushLock == NULL || !m_pPushLock->IsExclusiveOwner()",
      1512LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  return this;
}
