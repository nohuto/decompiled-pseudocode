/*
 * XREFs of ?InvalidatePrimaryAllocations@DXGDEVICE@@QEAAXI@Z @ 0x1401B8764
 * Callers:
 *     ?DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@IE@Z @ 0x1402D83A4 (-DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@IE@Z.c)
 *     ?DisablePrimaryAllocation@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@@Z @ 0x140312620 (-DisablePrimaryAllocation@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@@Z.c)
 *     ?DisableAllPrimaries@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x140396F58 (-DisableAllPrimaries@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z.c)
 * Callees:
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1400136BC (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140013780 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceExclusiveOwner@ADAPTER_RENDER@@QEBAEXZ @ 0x140026F40 (-IsCoreResourceExclusiveOwner@ADAPTER_RENDER@@QEBAEXZ.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1400294B0 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?SetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@IE@Z @ 0x140037374 (-SetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@IE@Z.c)
 *     ?VidMmInvalidateAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAUVIDMM_MULTI_GLOBAL_ALLOC@@@Z @ 0x14005C9CC (-VidMmInvalidateAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAUVIDMM_MULTI_GLOBAL_ALLOC@@@Z.c)
 */

void __fastcall DXGDEVICE::InvalidatePrimaryAllocations(DXGDEVICE *this, unsigned int a2)
{
  __int64 v2; // rbp
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  unsigned int i; // esi
  _QWORD *v9; // rax
  __int64 v10; // rax
  _BYTE v11[32]; // [rsp+50h] [rbp-48h] BYREF

  v2 = a2;
  if ( a2 >= *((_DWORD *)this + 472) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 3777;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"VidPnSourceId < GetNumVidPnSources()",
      3777LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( !ADAPTER_RENDER::IsCoreResourceExclusiveOwner(*((ADAPTER_RENDER **)this + 2)) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 3778;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"GetRenderCore()->IsCoreResourceExclusiveOwner()",
      3778LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*((PERESOURCE **)this + 235)) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 3779;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"GetDisplayAdapter(VidPnSourceId)->IsCoreResourceExclusiveOwner()",
      3779LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( *((_DWORD *)this + 116) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 3780;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"DXGDEVICECLIENT_LEGACYUSER == GetClientType()",
      3780LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v11, (struct _KTHREAD **)this + 42);
  *((_DWORD *)this + v2 + 310) &= ~0x200u;
  for ( i = 0; i < *((_DWORD *)this + v2 + 246); ++i )
  {
    if ( *(_QWORD *)(*((_QWORD *)this + v2 + 107) + 8LL * i) )
    {
      v9 = (_QWORD *)WdLogNewEntry5_WdTrace(v5, v4, v6, v7);
      v9[3] = *(_QWORD *)(*((_QWORD *)this + v2 + 107) + 8LL * i);
      v9[4] = i;
      v9[5] = v2;
      v10 = *((_QWORD *)this + v2 + 107);
      WdLogGlobalForLineNumber = 3790;
      if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v10 + 8LL * i) + 48LL) + 4LL) & 0x10) != 0 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 3792;
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          0xFFFFFFFFLL,
          L"!m_PrimaryAllocation[VidPnSourceId][Index]->m_pAllocation->m_Invalidated",
          3792LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      VIDMM_EXPORT::VidMmInvalidateAllocation(
        *(VIDMM_EXPORT **)(*((_QWORD *)this + 2) + 760LL),
        *(struct VIDMM_GLOBAL **)(*((_QWORD *)this + 2) + 768LL),
        *(struct VIDMM_MULTI_GLOBAL_ALLOC **)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + v2 + 107) + 8LL * i) + 48LL)
                                            + 8LL));
      v5 = *(_QWORD *)(*((_QWORD *)this + v2 + 107) + 8LL * i);
      *(_DWORD *)(*(_QWORD *)(v5 + 48) + 4LL) |= 0x10u;
      *(_QWORD *)(*((_QWORD *)this + v2 + 107) + 8LL * i) = 0LL;
      --*((_BYTE *)this + 4 * v2 + 1240);
    }
  }
  DXGDEVICE::SetDisplayedPrimary(this, v2, 0LL, 0, 1u);
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v11);
}
