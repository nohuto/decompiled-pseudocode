/*
 * XREFs of VidSchFlushDevice @ 0x1400ACF70
 * Callers:
 *     ?WaitOnAllocationDmaReferences@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_MULTI_ALLOC@@IK@Z @ 0x1400ACDBC (-WaitOnAllocationDmaReferences@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_MULTI_ALLOC@@IK@Z.c)
 *     ?WaitOnAllocForceSync@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1400ACF00 (-WaitOnAllocForceSync@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?WaitOnAllDMAReferencesExceptThis@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1400AD6EC (-WaitOnAllDMAReferencesExceptThis@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     VidSchTerminateDevice @ 0x1400D8C80 (VidSchTerminateDevice.c)
 *     VidSchSuspendAdapter @ 0x1400E4A30 (VidSchSuspendAdapter.c)
 *     ?OfferOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_D3DKMT_OFFER_PRIORITY@@U_D3DKMT_OFFER_FLAGS@@@Z @ 0x1400FCE00 (-OfferOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_D3DKMT_OFFER_PRIORITY@@U_D3DKMT_OFFER.c)
 *     ?TerminateOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@IU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAVDXGTERMINATIONTRACKER@@@Z @ 0x1400FDAF8 (-TerminateOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@IU_D3DDDICB_DESTROYALLOCATION2FLAGS@.c)
 *     ?FlushPendingAllocationAccess@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@PEAUVIDMM_ALLOC@@E@Z @ 0x14010C6C8 (-FlushPendingAllocationAccess@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@PEAUVIDMM_ALLOC@@E@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     VidSchiClearFlipDevice @ 0x140028164 (VidSchiClearFlipDevice.c)
 *     VidSchMarkDeviceAsError @ 0x14002BEA0 (VidSchMarkDeviceAsError.c)
 *     VidSchiInterlockedRemoveEntryList @ 0x140036160 (VidSchiInterlockedRemoveEntryList.c)
 *     ?VidMmEnsureDeviceSchedulable@@YAXPEAVVIDMM_DEVICE@@_N@Z @ 0x14003939C (-VidMmEnsureDeviceSchedulable@@YAXPEAVVIDMM_DEVICE@@_N@Z.c)
 *     ??$VidSchRundownUnorderedWaiter@U_VIDSCH_DEVICE@@@@YAJPEAU_VIDSCH_DEVICE@@PEAU_VIDSCH_GLOBAL@@W4_VIDSCH_FLUSH_STAGE@@_NP6AXPEAVHwQueueStagingList@@0@Z@Z @ 0x14003CAE0 (--$VidSchRundownUnorderedWaiter@U_VIDSCH_DEVICE@@@@YAJPEAU_VIDSCH_DEVICE@@PEAU_VIDSCH_GLOBAL@@W4.c)
 *     VidSchiInterlockedReadUlong @ 0x14003FFE4 (VidSchiInterlockedReadUlong.c)
 *     memset @ 0x140056780 (memset.c)
 *     VidSchiWaitFlushCompletion @ 0x1400ACD5C (VidSchiWaitFlushCompletion.c)
 *     VidSchWaitForCompletionEvent @ 0x1400AD1D4 (VidSchWaitForCompletionEvent.c)
 *     VidSchRegisterCompletionEvent @ 0x1400AD5C4 (VidSchRegisterCompletionEvent.c)
 */

__int64 __fastcall VidSchFlushDevice(__int64 a1, int *a2, unsigned int a3, __int64 a4)
{
  int v4; // ebx
  __int64 v5; // r15
  int v8; // r14d
  __int64 v9; // rsi
  __int64 v10; // rax
  struct VIDMM_DEVICE *v11; // rcx
  _DWORD *v12; // rcx
  __int64 result; // rax
  __int64 v14; // rcx
  union _LARGE_INTEGER v15; // [rsp+28h] [rbp-99h]
  _QWORD v16[20]; // [rsp+58h] [rbp-69h] BYREF
  char v17; // [rsp+140h] [rbp+7Fh]

  v17 = a4;
  v4 = 0;
  v5 = a3;
  if ( a1 && a2 )
  {
    v8 = *a2;
    if ( *a2 == 13 )
    {
      *(_DWORD *)(a1 + 1960) = 1;
      VidSchMarkDeviceAsError(a1, 14);
    }
    v9 = *(_QWORD *)(a1 + 32);
    VidSchRundownUnorderedWaiter<_VIDSCH_DEVICE>(a1, v9, *a2, a4, v15);
    if ( (v8 & 1) != 0 )
    {
      v10 = *(_QWORD *)(a1 + 8);
      if ( v10 )
      {
        v11 = *(struct VIDMM_DEVICE **)(v10 + 792);
        if ( v11 )
          VidMmEnsureDeviceSchedulable(v11, 0);
      }
      memset(v16, 0, sizeof(v16));
      v12 = (_DWORD *)((-(__int64)(((*a2 - 3) & 0xFFFFFFFD) != 0) & 0xFFFFFFFFFFFFFFFCuLL) + a1 + 1840);
      if ( *v12 )
      {
        LODWORD(v16[4]) |= 0x10u;
        v16[5] = v12;
        LODWORD(v16[2]) = 1;
        LOBYTE(v16[19]) = v8 == 7;
        VidSchRegisterCompletionEvent(v9, v16);
        if ( *(_DWORD *)v16[5] )
          VidSchWaitForCompletionEvent(v9, v16, 24LL);
        VidSchiInterlockedRemoveEntryList((KSPIN_LOCK *)(v9 + 2000), v16, 0LL);
      }
      if ( *(_DWORD *)(a1 + 1828) )
      {
        memset(v16, 0, sizeof(v16));
        LODWORD(v16[4]) |= 0x10u;
        LODWORD(v16[2]) = 3;
        v16[5] = a1 + 1828;
        LOBYTE(v16[19]) = v8 == 7;
        VidSchiWaitFlushCompletion(v9, (__int64)v16, 0x17u);
      }
      if ( v8 != 5 )
      {
        if ( (_DWORD)v5 != -3 && (unsigned int)v5 >= *(_DWORD *)(v9 + 40) )
        {
          WdLogSingleEntry1(3LL, v5);
          WdLogGlobalForLineNumber = 4527;
          LODWORD(v5) = -3;
        }
        VidSchiClearFlipDevice((struct _VIDSCH_GLOBAL *)v9, a1, 9, v5, v17);
        VidSchiInterlockedReadUlong((KSPIN_LOCK *)(v9 + 1984), (_DWORD *)(a1 + 1828));
      }
    }
    LOBYTE(v4) = v8 >= 11;
    result = 0LL;
    *(_DWORD *)(a1 + 1956) = v4;
  }
  else
  {
    WdLogSingleEntry1(1LL, -1073741811LL);
    WdLogGlobalForLineNumber = 4395;
    DxgkLogInternalTriageEvent(v14, 0x40000LL);
    return 3221225485LL;
  }
  return result;
}
