/*
 * XREFs of ?TryRepinAllDirectFlipAllocations@DXGDEVICE@@QEAAXXZ @ 0x14034B5A8
 * Callers:
 *     ?TryRepinAllDirectFlipAllocations@ADAPTER_RENDER@@QEAAXXZ @ 0x14034B4DC (-TryRepinAllDirectFlipAllocations@ADAPTER_RENDER@@QEAAXXZ.c)
 * Callees:
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140013780 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x140013A20 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?VidMmIsAllocationPinned@VIDMM_EXPORT@@QEAA_NPEAVVIDMM_GLOBAL@@PEAUVIDMM_MULTI_ALLOC@@@Z @ 0x140047878 (-VidMmIsAllocationPinned@VIDMM_EXPORT@@QEAA_NPEAVVIDMM_GLOBAL@@PEAUVIDMM_MULTI_ALLOC@@@Z.c)
 *     ?VidMmPinAllocation@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAUVIDMM_MULTI_ALLOC@@PEAUVIDMM_PAGING_QUEUE@@PEAKPEAT_LARGE_INTEGER@@PEA_K@Z @ 0x14004FA7C (-VidMmPinAllocation@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAUVIDMM_MULTI_ALLOC@@PEAUVIDMM_PAGING.c)
 *     Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline @ 0x14006681C (Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline.c)
 *     ?DxgkReferenceDxgAllocation@@YAXPEAVDXGALLOCATION@@@Z @ 0x1402E1770 (-DxgkReferenceDxgAllocation@@YAXPEAVDXGALLOCATION@@@Z.c)
 *     ?DxgkReferenceDxgResource@@YAXPEAVDXGRESOURCE@@@Z @ 0x1402E17CC (-DxgkReferenceDxgResource@@YAXPEAVDXGRESOURCE@@@Z.c)
 */

void __fastcall DXGDEVICE::TryRepinAllDirectFlipAllocations(DXGDEVICE *this)
{
  __int64 v2; // rcx
  __int64 v3; // rax
  unsigned int v4; // r12d
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
    WdLogGlobalForLineNumber = 7269;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"GetRenderCore()->IsCoreResourceExclusiveOwner()",
      7269LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v3 = *((_QWORD *)this + 235);
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
          if ( this != (DXGDEVICE *)-368LL )
          {
            Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
            if ( *((struct _KTHREAD **)this + 47) == KeGetCurrentThread() )
            {
              WdLogSingleEntry0(1LL);
              WdLogGlobalForLineNumber = 1575;
              DxgkLogInternalTriageEvent(
                0LL,
                262146,
                0xFFFFFFFFLL,
                L"bAllowAcquireRecursive || pPushLock == NULL || !m_pPushLock->IsExclusiveOwner()",
                1575LL,
                0LL,
                0LL,
                0LL,
                0LL);
            }
          }
          DXGPUSHLOCK::AcquireExclusive((DXGDEVICE *)((char *)this + 368));
          v13 = 2;
          v7 = *((_DWORD *)this + v4 + 358);
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
            while ( !*(_QWORD *)(*((_QWORD *)this + v4 + 163) + 8LL * v5) )
            {
              v8 = ++v5 == v7;
              if ( v5 >= v7 )
                goto LABEL_13;
            }
          }
          v9 = *(_QWORD *)(*((_QWORD *)this + v4 + 163) + 8LL * v5);
          if ( !v9 )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 9461;
            DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"NULL != pAllocation", 9461LL, 0LL, 0LL, 0LL, 0LL);
          }
          if ( v5 != ((*(_DWORD *)(v9 + 72) >> 1) & 0x3FF) )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 9462;
            DxgkLogInternalTriageEvent(
              0LL,
              262146,
              0xFFFFFFFFLL,
              L"*Iterator == pAllocation->m_DirectFlipIndex",
              9462LL,
              0LL,
              0LL,
              0LL,
              0LL);
          }
          if ( !*((_DWORD *)this + v4 + 374) )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 9463;
            DxgkLogInternalTriageEvent(
              0LL,
              262146,
              0xFFFFFFFFLL,
              L"0 != m_DirectFlipAllocationCount[VidPnSourceId]",
              9463LL,
              0LL,
              0LL,
              0LL,
              0LL);
          }
          if ( *((_DWORD *)this + v4 + 358) == ++v5 )
            v6 = 1;
          if ( !*(_QWORD *)(v9 + 40) )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 9478;
            DxgkLogInternalTriageEvent(
              0LL,
              262146,
              0xFFFFFFFFLL,
              L"NULL != pAllocation->m_pOwningResource",
              9478LL,
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
                WdLogGlobalForLineNumber = 7302;
              }
            }
            ExReleaseRundownProtection((PEX_RUNDOWN_REF)(*(_QWORD *)(v9 + 40) + 72LL));
            ExReleaseRundownProtection((PEX_RUNDOWN_REF)(v9 + 88));
          }
        }
        while ( !v6 );
        ++v4;
      }
      while ( v4 < *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 235) + 3120LL) + 96LL) );
    }
  }
}
