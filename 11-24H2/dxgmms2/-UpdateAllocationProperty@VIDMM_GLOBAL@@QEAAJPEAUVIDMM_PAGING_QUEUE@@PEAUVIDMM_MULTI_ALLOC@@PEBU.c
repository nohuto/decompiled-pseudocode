/*
 * XREFs of ?UpdateAllocationProperty@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_PAGING_QUEUE@@PEAUVIDMM_MULTI_ALLOC@@PEBUVIDMM_UPDATEALLOCPROPERTY@@PEA_K@Z @ 0x14010CD74
 * Callers:
 *     VidMmUpdateAllocationProperty @ 0x140044530 (VidMmUpdateAllocationProperty.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     memset @ 0x140056340 (memset.c)
 *     ?QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAUVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_NPEA_K@Z @ 0x1400DB060 (-QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAUVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_N.c)
 *     ?VerifySupportedSegmentSetAndAdjustFlags@VIDMM_GLOBAL@@QEAAEKKPEAU_DXGK_ALLOCATIONINFOFLAGS_WDDM2_0@@_K1_NPEAU_VIDMM_VERIFY_SUPPORTED_SEGMENT@@@Z @ 0x1400EBA34 (-VerifySupportedSegmentSetAndAdjustFlags@VIDMM_GLOBAL@@QEAAEKKPEAU_DXGK_ALLOCATIONINFOFLAGS_WDDM.c)
 *     ?VerifyBudgetGroups@VIDMM_GLOBAL@@QEAAEKKPEAVVIDMM_SEGMENT@@PEAU_VIDMM_VERIFY_BUDGET_GROUPS@@@Z @ 0x1400F022C (-VerifyBudgetGroups@VIDMM_GLOBAL@@QEAAEKKPEAVVIDMM_SEGMENT@@PEAU_VIDMM_VERIFY_BUDGET_GROUPS@@@Z.c)
 *     ?VerifyPreferredSegmentIsSubset@VIDMM_GLOBAL@@QEAAEU_D3DDDI_SEGMENTPREFERENCE@@K@Z @ 0x1400F3EF4 (-VerifyPreferredSegmentIsSubset@VIDMM_GLOBAL@@QEAAEU_D3DDDI_SEGMENTPREFERENCE@@K@Z.c)
 *     ?GetMostPreferredSegment@VIDMM_GLOBAL@@QEAAPEAVVIDMM_SEGMENT@@KU_D3DDDI_SEGMENTPREFERENCE@@PEA_N@Z @ 0x1400F9BC0 (-GetMostPreferredSegment@VIDMM_GLOBAL@@QEAAPEAVVIDMM_SEGMENT@@KU_D3DDDI_SEGMENTPREFERENCE@@PEA_N.c)
 */

__int64 __fastcall VIDMM_GLOBAL::UpdateAllocationProperty(
        VIDMM_GLOBAL *this,
        struct VIDMM_PAGING_QUEUE *a2,
        struct VIDMM_MULTI_ALLOC *a3,
        const struct VIDMM_UPDATEALLOCPROPERTY *a4,
        unsigned __int64 *a5)
{
  VIDMM_GLOBAL *v8; // rcx
  __int64 v9; // r13
  __int64 *v10; // r12
  __int64 v11; // rdx
  unsigned int v12; // r15d
  struct _D3DDDI_SEGMENTPREFERENCE v13; // ebx
  unsigned int v14; // esi
  __int64 v15; // rcx
  int v17; // eax
  struct _DXGK_ALLOCATIONINFOFLAGS_WDDM2_0 *v18; // r9
  char v19; // si
  struct VIDMM_SEGMENT *MostPreferredSegment; // rax
  VIDMM_GLOBAL *v21; // [rsp+58h] [rbp-51h]
  _QWORD v22[18]; // [rsp+68h] [rbp-41h] BYREF
  struct VIDMM_MULTI_ALLOC *v24; // [rsp+118h] [rbp+6Fh] BYREF
  int v25; // [rsp+120h] [rbp+77h] BYREF

  v24 = a3;
  memset(v22, 0, 0x58uLL);
  v8 = (VIDMM_GLOBAL *)HIDWORD(*(_QWORD *)a4);
  v9 = (*((_DWORD *)a3 + 8) >> 2) & 0x3F;
  v10 = **(__int64 ***)a3;
  *(_OWORD *)((char *)&v22[4] + 4) = *(_OWORD *)a4;
  v22[2] = a3;
  v11 = *v10;
  LODWORD(v22[0]) = 214;
  v21 = v8;
  v12 = *(_DWORD *)(v11 + 40);
  v13.0 = *(struct _D3DDDI_SEGMENTPREFERENCE::$F972DAF4C5B61B4C701096F96A6C826A::$59FADADC9B5649AD99C3978E94186D1F *)(v11 + 44);
  if ( (_mm_srli_si128(*(__m128i *)(v22 + 36), 8).m128i_i8[4] & 2) != 0 )
  {
    v14 = HIDWORD(v22[4]);
    if ( !HIDWORD(v22[4]) )
    {
      WdLogSingleEntry1(1LL, -1073741811LL);
      WdLogGlobalForLineNumber = 5524;
LABEL_4:
      DxgkLogInternalTriageEvent(v15, 0x40000LL);
      return 3221225485LL;
    }
    if ( _bittest((const int *)&v14, *(unsigned __int8 *)(*(_QWORD *)(*((_QWORD *)this + 5029) + 8 * v9) + 68LL)) )
    {
      WdLogSingleEntry1(1LL, -1073741811LL);
      WdLogGlobalForLineNumber = 5536;
      goto LABEL_4;
    }
    if ( (~v12 & HIDWORD(v22[4])) != 0 && (*((_BYTE *)v24 + 28) & 8) != 0 )
    {
      WdLogSingleEntry1(1LL, -1073741811LL);
      WdLogGlobalForLineNumber = 5546;
      goto LABEL_4;
    }
    v17 = *((_DWORD *)v10 + 6);
    v18 = (struct _DXGK_ALLOCATIONINFOFLAGS_WDDM2_0 *)v10[49];
    v25 = 0;
    if ( !VIDMM_GLOBAL::VerifySupportedSegmentSetAndAdjustFlags(
            this,
            v9,
            HIDWORD(v22[4]),
            v18,
            *(_QWORD *)(v11 + 16),
            *(_QWORD *)(v11 + 24),
            (v17 & 0x10000000) != 0,
            (struct _VIDMM_VERIFY_SUPPORTED_SEGMENT *)&v25) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 5555;
      DxgkLogInternalTriageEvent(0LL, 0x40000LL);
      return -1073741811LL;
    }
    BYTE4(v22[6]) = v25 & 1;
    BYTE5(v22[6]) = (v25 & 2) != 0;
    if ( v14 == v12 )
    {
      WdLogSingleEntry0(3LL);
      WdLogGlobalForLineNumber = 5564;
    }
    v8 = v21;
    v12 = v14;
  }
  v19 = v22[6];
  if ( (v22[6] & 4) != 0 )
  {
    if ( (_DWORD)v8 == v13.0 )
    {
      WdLogSingleEntry0(3LL);
      v8 = v21;
      WdLogGlobalForLineNumber = 5575;
    }
    v13.0 = (struct _D3DDDI_SEGMENTPREFERENCE::$F972DAF4C5B61B4C701096F96A6C826A::$59FADADC9B5649AD99C3978E94186D1F)v8;
  }
  if ( (v19 & 2) != 0 || (v19 & 4) != 0 )
  {
    if ( !VIDMM_GLOBAL::VerifyPreferredSegmentIsSubset(v8, v13, v12) )
    {
      WdLogSingleEntry1(1LL, -1073741811LL);
      WdLogGlobalForLineNumber = 5587;
      goto LABEL_4;
    }
    LOBYTE(v24) = 0;
    MostPreferredSegment = VIDMM_GLOBAL::GetMostPreferredSegment(this, v9, v13, (bool *)&v24);
    if ( !VIDMM_GLOBAL::VerifyBudgetGroups(
            this,
            v9,
            v12,
            MostPreferredSegment,
            (struct _VIDMM_VERIFY_BUDGET_GROUPS *)&v22[4]) )
    {
      WdLogSingleEntry1(1LL, -1073741811LL);
      WdLogGlobalForLineNumber = 5597;
      goto LABEL_4;
    }
    v19 = v22[6];
  }
  if ( (v19 & 1) != 0 && (*(_DWORD *)v10[49] & 0x8000) != 0 )
  {
    if ( (v22[5] & 0x100000000LL) == 0 )
    {
      WdLogSingleEntry1(1LL, -1073741811LL);
      WdLogGlobalForLineNumber = 5609;
      goto LABEL_4;
    }
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 5616;
  }
  if ( (v19 & 8) != 0 )
  {
    if ( (*(_DWORD *)(*((_QWORD *)this + 3) + 444LL) & 0x200) == 0 )
    {
      WdLogSingleEntry1(1LL, -1073741811LL);
      WdLogGlobalForLineNumber = 5626;
      goto LABEL_4;
    }
    if ( (*((_DWORD *)v10 + 7) & 0x400000) != 0 )
    {
      WdLogSingleEntry0(3LL);
      WdLogGlobalForLineNumber = 5633;
    }
  }
  return VIDMM_GLOBAL::QueueDeferredCommand(
           (struct VIDMM_WORKER_THREAD **)this,
           a2,
           (struct _VIDMM_DEFERRED_COMMAND *)v22,
           0,
           a5);
}
