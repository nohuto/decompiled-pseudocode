/*
 * XREFs of ?UnpinOneAllocation@VIDMM_GLOBAL@@QEAA_NPEAUVIDMM_ALLOC@@W4VIDMM_UNPIN_ACTION@@_N@Z @ 0x1400CE3B8
 * Callers:
 *     ?VidMmCompleteAsyncUnpin@@YAXPEAVVIDMM_GLOBAL@@PEAPEAUVIDMM_ALLOC@@PEAVDXGPUSHLOCKBASE@@@Z @ 0x1400CE1FC (-VidMmCompleteAsyncUnpin@@YAXPEAVVIDMM_GLOBAL@@PEAPEAUVIDMM_ALLOC@@PEAVDXGPUSHLOCKBASE@@@Z.c)
 *     ?UnpinAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_MULTI_ALLOC@@@Z @ 0x1400CE9B8 (-UnpinAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_MULTI_ALLOC@@@Z.c)
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1400DD034 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 *     ?PurgeContent@VIDMM_SEGMENT@@QEAAXUVIDMM_PURGE_FLAGS@@PEBVVIDMM_PROCESS@@PEA_K@Z @ 0x1400E119C (-PurgeContent@VIDMM_SEGMENT@@QEAAXUVIDMM_PURGE_FLAGS@@PEBVVIDMM_PROCESS@@PEA_K@Z.c)
 * Callees:
 *     ?HasAnyResidencyReferences@VIDMM_ALLOC@@QEBA_NXZ @ 0x14003822C (-HasAnyResidencyReferences@VIDMM_ALLOC@@QEBA_NXZ.c)
 *     ?DdiStopCapture@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_STOPCAPTURE@@@Z @ 0x140046018 (-DdiStopCapture@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_STOPCAPTURE@@@Z.c)
 *     memset @ 0x140056780 (memset.c)
 *     ?QueueSystemCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z @ 0x1400B4BE4 (-QueueSystemCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z.c)
 *     ?EvictOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_N@Z @ 0x1400B9DF0 (-EvictOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_N@Z.c)
 *     ?UnreferencePinnedAllocation@VIDMM_DEVICE@@QEAA_NPEAUVIDMM_ALLOC@@_N@Z @ 0x1400CE558 (-UnreferencePinnedAllocation@VIDMM_DEVICE@@QEAA_NPEAUVIDMM_ALLOC@@_N@Z.c)
 */

bool __fastcall VIDMM_GLOBAL::UnpinOneAllocation(VIDMM_GLOBAL *a1, __int64 a2, int a3, char a4)
{
  __int64 v5; // rbp
  bool v8; // di
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rcx
  bool result; // al
  void *v13; // rax
  ADAPTER_RENDER *v14; // rcx
  _DXGKARG_STOPCAPTURE v15; // [rsp+20h] [rbp-88h] BYREF
  _QWORD v16[12]; // [rsp+30h] [rbp-78h] BYREF

  v5 = a3;
  if ( (**(_DWORD **)(**(_QWORD **)a2 + 376LL) & 0x40000000) != 0 )
  {
    WdLogSingleEntry0(3LL);
    result = 0;
    WdLogGlobalForLineNumber = 7357;
  }
  else
  {
    v8 = 1;
    if ( (a3 & 1) != 0 )
    {
      if ( g_IsInternalReleaseOrDbg )
      {
        *(_QWORD *)(WdLogNewEntry5_WdTrace(a1) + 24) = a2;
        WdLogGlobalForLineNumber = 7365;
      }
      v8 = VIDMM_DEVICE::UnreferencePinnedAllocation(*(VIDMM_DEVICE **)(a2 + 8), (struct VIDMM_ALLOC *)a2, a4 != 1);
    }
    if ( (v5 & 2) != 0 && v8 )
    {
      if ( g_IsInternalReleaseOrDbg )
      {
        v9 = WdLogNewEntry5_WdTrace(*(_QWORD *)&g_IsInternalReleaseOrDbg);
        *(_QWORD *)(v9 + 24) = a2;
        *(_QWORD *)(v9 + 32) = v5;
        WdLogGlobalForLineNumber = 7380;
      }
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*(_QWORD *)(a2 + 96) + 16LL), 0xFFFFFFFF) == 1 )
      {
        v10 = *(_QWORD *)(a2 + 16);
        if ( v10 )
        {
          v11 = *(_QWORD *)(v10 + 48);
          if ( (*(_DWORD *)(v11 + 4) & 0x20) != 0 )
          {
            v13 = *(void **)(v11 + 16);
            v14 = (ADAPTER_RENDER *)*((_QWORD *)a1 + 2);
            v15.hAllocation = v13;
            ADAPTER_RENDER::DdiStopCapture(v14, &v15);
          }
        }
      }
      if ( !VIDMM_ALLOC::HasAnyResidencyReferences((VIDMM_ALLOC *)a2) )
      {
        if ( KeGetCurrentThread() == *(struct _KTHREAD **)(*(_QWORD *)a1 + 8LL) )
        {
          VIDMM_GLOBAL::EvictOneAllocation(a1, (__int64 **)a2, 1);
        }
        else
        {
          _InterlockedIncrement((volatile signed __int32 *)(a2 + 164));
          memset(v16, 0, 0x58uLL);
          LODWORD(v16[0]) = 205;
          v16[2] = a2;
          VIDMM_GLOBAL::QueueSystemCommandAndWait(a1, (struct _VIDMM_SYSTEM_COMMAND *)v16, 1);
        }
      }
    }
    return v8;
  }
  return result;
}
