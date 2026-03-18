/*
 * XREFs of ?TryRepinAllDirectFlipAllocations@DXGDEVICE@@QEAAXXZ @ 0x140339500
 * Callers:
 *     ?TryRepinAllDirectFlipAllocations@ADAPTER_RENDER@@QEAAXXZ @ 0x140339434 (-TryRepinAllDirectFlipAllocations@ADAPTER_RENDER@@QEAAXXZ.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x140022B90 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140022E00 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?VidMmIsAllocationPinned@VIDMM_EXPORT@@QEAA_NPEAVVIDMM_GLOBAL@@PEAUVIDMM_MULTI_ALLOC@@@Z @ 0x140047298 (-VidMmIsAllocationPinned@VIDMM_EXPORT@@QEAA_NPEAVVIDMM_GLOBAL@@PEAUVIDMM_MULTI_ALLOC@@@Z.c)
 *     ?VidMmPinAllocation@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAUVIDMM_MULTI_ALLOC@@PEAUVIDMM_PAGING_QUEUE@@PEAKPEAT_LARGE_INTEGER@@PEA_K@Z @ 0x14004F4FC (-VidMmPinAllocation@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAUVIDMM_MULTI_ALLOC@@PEAUVIDMM_PAGING.c)
 *     ?DxgkReferenceDxgAllocation@@YAXPEAVDXGALLOCATION@@@Z @ 0x1402E5A50 (-DxgkReferenceDxgAllocation@@YAXPEAVDXGALLOCATION@@@Z.c)
 *     ?DxgkReferenceDxgResource@@YAXPEAVDXGRESOURCE@@@Z @ 0x1402E5AAC (-DxgkReferenceDxgResource@@YAXPEAVDXGRESOURCE@@@Z.c)
 */

void __fastcall DXGDEVICE::TryRepinAllDirectFlipAllocations(DXGDEVICE *this)
{
  __int64 v2; // rcx
  __int64 v3; // rax
  unsigned int v4; // r15d
  unsigned int v5; // esi
  char v6; // bp
  unsigned int v7; // ecx
  bool v8; // zf
  __int64 v9; // rbx
  int v10; // eax
  _BYTE v11[8]; // [rsp+50h] [rbp-48h] BYREF
  char *v12; // [rsp+58h] [rbp-40h]
  int v13; // [rsp+60h] [rbp-38h]

  v2 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v2 + 184)
    && !ExIsResourceAcquiredExclusiveLite(*(PERESOURCE *)(v2 + 168)) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 7508;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"GetRenderCore()->IsCoreResourceExclusiveOwner()",
      7508LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v3 = *((_QWORD *)this + 237);
  if ( v3 )
  {
    v4 = 0;
    if ( *(_DWORD *)(*(_QWORD *)(v3 + 3120) + 96LL) )
    {
      do
      {
        v5 = 0;
        v6 = 0;
        do
        {
          v12 = (char *)this + 368;
          if ( this != (DXGDEVICE *)-368LL && *((struct _KTHREAD **)this + 47) == KeGetCurrentThread() )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 1512;
            DxgkLogInternalTriageEvent(
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
          DXGPUSHLOCK::AcquireExclusive((DXGDEVICE *)((char *)this + 368));
          v13 = 2;
          v7 = *((_DWORD *)this + v4 + 362);
          v8 = v5 == v7;
          if ( v5 >= v7 )
          {
LABEL_13:
            if ( v8 )
            {
              v6 = 1;
              v9 = 0LL;
              goto LABEL_26;
            }
          }
          else
          {
            while ( !*(_QWORD *)(*((_QWORD *)this + v4 + 165) + 8LL * v5) )
            {
              v8 = ++v5 == v7;
              if ( v5 >= v7 )
                goto LABEL_13;
            }
          }
          v9 = *(_QWORD *)(*((_QWORD *)this + v4 + 165) + 8LL * v5);
          if ( !v9 )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 9727;
            DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"NULL != pAllocation", 9727LL, 0LL, 0LL, 0LL, 0LL);
          }
          if ( v5 != ((*(_DWORD *)(v9 + 72) >> 1) & 0x3FF) )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 9728;
            DxgkLogInternalTriageEvent(
              0LL,
              262146LL,
              0xFFFFFFFFLL,
              L"*Iterator == pAllocation->m_DirectFlipIndex",
              9728LL,
              0LL,
              0LL,
              0LL,
              0LL);
          }
          if ( !*((_DWORD *)this + v4 + 378) )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 9729;
            DxgkLogInternalTriageEvent(
              0LL,
              262146LL,
              0xFFFFFFFFLL,
              L"0 != m_DirectFlipAllocationCount[VidPnSourceId]",
              9729LL,
              0LL,
              0LL,
              0LL,
              0LL);
          }
          if ( *((_DWORD *)this + v4 + 362) == ++v5 )
            v6 = 1;
          if ( !*(_QWORD *)(v9 + 40) )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 9744;
            DxgkLogInternalTriageEvent(
              0LL,
              262146LL,
              0xFFFFFFFFLL,
              L"NULL != pAllocation->m_pOwningResource",
              9744LL,
              0LL,
              0LL,
              0LL,
              0LL);
          }
          DxgkReferenceDxgAllocation((struct _EX_RUNDOWN_REF *)v9);
          DxgkReferenceDxgResource(*(struct _EX_RUNDOWN_REF **)(v9 + 40));
LABEL_26:
          DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v11);
          if ( v9 )
          {
            if ( !(unsigned __int8)VIDMM_EXPORT::VidMmIsAllocationPinned(
                                     *(VIDMM_EXPORT **)(*((_QWORD *)this + 2) + 760LL),
                                     *(struct VIDMM_GLOBAL **)(*((_QWORD *)this + 2) + 768LL),
                                     *(struct VIDMM_MULTI_ALLOC **)(v9 + 24)) )
            {
              v10 = VIDMM_EXPORT::VidMmPinAllocation(
                      *(VIDMM_EXPORT **)(*((_QWORD *)this + 2) + 760LL),
                      *(struct VIDMM_GLOBAL **)(*((_QWORD *)this + 2) + 768LL),
                      *(struct VIDMM_MULTI_ALLOC **)(v9 + 24),
                      0LL,
                      0LL,
                      0LL,
                      0LL);
              if ( v10 < 0 )
              {
                WdLogSingleEntry3(3LL, *(_QWORD *)(v9 + 24), *(_QWORD *)(v9 + 48), v10);
                WdLogGlobalForLineNumber = 7541;
              }
            }
            ExReleaseRundownProtection((PEX_RUNDOWN_REF)(*(_QWORD *)(v9 + 40) + 72LL));
            ExReleaseRundownProtection((PEX_RUNDOWN_REF)(v9 + 88));
          }
        }
        while ( !v6 );
        ++v4;
      }
      while ( v4 < *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 237) + 3120LL) + 96LL) );
    }
  }
}
