/*
 * XREFs of ?DecommitGlobalAllocation@VIDMM_GLOBAL@@QEAA_NPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x1400D7B70
 * Callers:
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1400E11C8 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 *     ?TrimOfferCommitmentInternal@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@PEAUDXGDECOMMITITERATOR@@T_D3DKMT_TRIMPROCESSCOMMITMENT_FLAGS@@_KPEA_K@Z @ 0x14010A030 (-TrimOfferCommitmentInternal@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@PEAUDXGDECOMMITITERATOR@@T_D3.c)
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x140031B80 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x140031D70 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x140055E20 (__security_check_cookie.c)
 *     ?EvictResources@VIDMM_PHYSICAL_ADAPTER@@QEAAXPEAUVIDMM_PHYSICAL_ALLOC@@EEEPEAUVIDMM_LOCAL_ALLOC@@@Z @ 0x1400AD020 (-EvictResources@VIDMM_PHYSICAL_ADAPTER@@QEAAXPEAUVIDMM_PHYSICAL_ALLOC@@EEEPEAUVIDMM_LOCAL_ALLOC@.c)
 *     ?DiscardOfferedAllocation@VIDMM_GLOBAL@@QEAAHPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x1400B1B5C (-DiscardOfferedAllocation@VIDMM_GLOBAL@@QEAAHPEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x1400B3F08 (-WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?UncommitGlobalBackingStore@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@_N@Z @ 0x1400C10B0 (-UncommitGlobalBackingStore@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@_N@Z.c)
 *     ?FlushTemporaryResourcesForAllocation@VIDMM_PHYSICAL_ADAPTER@@QEAAXPEAUVIDMM_PHYSICAL_ALLOC@@@Z @ 0x1400D76AC (-FlushTemporaryResourcesForAllocation@VIDMM_PHYSICAL_ADAPTER@@QEAAXPEAUVIDMM_PHYSICAL_ALLOC@@@Z.c)
 *     ?UncommitLocalBackingStore@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_LOCAL_ALLOC@@_N@Z @ 0x1400D8E2C (-UncommitLocalBackingStore@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_LOCAL_ALLOC@@_N@Z.c)
 *     ?IsPagingOperationPending@VIDMM_GLOBAL@@QEBAEPEAUVIDMM_GLOBAL_ALLOC@@_N@Z @ 0x1400FDE94 (-IsPagingOperationPending@VIDMM_GLOBAL@@QEBAEPEAUVIDMM_GLOBAL_ALLOC@@_N@Z.c)
 *     ?MarkGlobalAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x140100B80 (-MarkGlobalAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
 */

char __fastcall VIDMM_GLOBAL::DecommitGlobalAllocation(VIDMM_GLOBAL *this, struct VIDMM_GLOBAL_ALLOC *a2)
{
  __int64 v2; // r13
  __int64 v4; // rcx
  VIDMM_PHYSICAL_ADAPTER *v6; // r15
  char v7; // bl
  char v8; // r14
  char result; // al
  struct VIDMM_GLOBAL_ALLOC *i; // r15
  PRKPROCESS *v11; // rcx
  struct _KAPC_STATE ApcState; // [rsp+30h] [rbp-78h] BYREF

  v2 = *(_QWORD *)a2;
  v4 = *((_DWORD *)a2 + 6) & 0x3F;
  v6 = *(VIDMM_PHYSICAL_ADAPTER **)(*((_QWORD *)this + 5029) + 8 * v4);
  if ( g_IsInternalReleaseOrDbg )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v4) + 24) = a2;
    WdLogGlobalForLineNumber = 27154;
  }
  v7 = 0;
  DXGFASTMUTEX::Acquire((struct VIDMM_GLOBAL_ALLOC *)((char *)a2 + 136));
  v8 = 1;
  if ( *(_WORD *)(*((_QWORD *)a2 + 49) + 8LL) == 2 && (*((_DWORD *)a2 + 8) & 0x40) != 0 )
  {
    *((_DWORD *)a2 + 7) |= 0x40u;
    v7 = 1;
  }
  DXGFASTMUTEX::Release((struct _KTHREAD **)a2 + 17);
  if ( v7 )
  {
    if ( *(_QWORD *)(v2 + 64) )
    {
      VIDMM_GLOBAL::MarkGlobalAllocation(this, a2);
      VIDMM_PHYSICAL_ADAPTER::EvictResources(v6, (struct VIDMM_PHYSICAL_ALLOC *)v2, 0, 0, 0, 0LL);
    }
    else if ( !(unsigned int)VIDMM_GLOBAL::DiscardOfferedAllocation(this, a2) )
    {
      WdLogSingleEntry1(3LL, a2);
      result = 0;
      WdLogGlobalForLineNumber = 27200;
      return result;
    }
  }
  if ( VIDMM_GLOBAL::IsPagingOperationPending(this, a2, 0) )
    VIDMM_GLOBAL::WaitForAllPagingEngines(this, a2);
  DXGFASTMUTEX::Acquire((struct VIDMM_GLOBAL_ALLOC *)((char *)a2 + 136));
  if ( *(_WORD *)(*((_QWORD *)a2 + 49) + 8LL) == 3 )
  {
    VIDMM_PHYSICAL_ADAPTER::FlushTemporaryResourcesForAllocation(v6, (struct VIDMM_PHYSICAL_ALLOC *)v2);
    for ( i = (struct VIDMM_GLOBAL_ALLOC *)*((_QWORD *)a2 + 14);
          i != (struct VIDMM_GLOBAL_ALLOC *)((char *)a2 + 112);
          i = *(struct VIDMM_GLOBAL_ALLOC **)i )
    {
      v11 = (PRKPROCESS *)*((_QWORD *)i - 5);
      memset(&ApcState, 0, sizeof(ApcState));
      KeStackAttachProcess(*v11, &ApcState);
      VIDMM_GLOBAL::UncommitLocalBackingStore(this, (struct VIDMM_GLOBAL_ALLOC *)((char *)i - 48), 1);
      KeUnstackDetachProcess(&ApcState);
    }
    VIDMM_GLOBAL::UncommitGlobalBackingStore(this, a2, 0);
    _InterlockedAdd64(
      (volatile signed __int64 *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 6) + 8LL) + 32LL) + 440LL),
      -*(_QWORD *)(v2 + 16));
  }
  else
  {
    v8 = 0;
    WdLogSingleEntry1(3LL, a2);
    WdLogGlobalForLineNumber = 27287;
  }
  DXGFASTMUTEX::Release((struct _KTHREAD **)a2 + 17);
  return v8;
}
