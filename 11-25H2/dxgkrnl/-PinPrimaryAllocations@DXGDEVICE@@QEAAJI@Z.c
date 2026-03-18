/*
 * XREFs of ?PinPrimaryAllocations@DXGDEVICE@@QEAAJI@Z @ 0x140310EFC
 * Callers:
 *     DxgkSetDisplayMode @ 0x14030F550 (DxgkSetDisplayMode.c)
 *     ?RestoreManagedPrimaryState@MANAGEDPRIMARIESTRACKER@@QEAAJH@Z @ 0x140425B64 (-RestoreManagedPrimaryState@MANAGEDPRIMARIESTRACKER@@QEAAJH@Z.c)
 * Callees:
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1400136BC (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140013780 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceExclusiveOwner@ADAPTER_RENDER@@QEBAEXZ @ 0x140026F40 (-IsCoreResourceExclusiveOwner@ADAPTER_RENDER@@QEBAEXZ.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1400294B0 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?VidMmUnpinAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAUVIDMM_MULTI_ALLOC@@@Z @ 0x140056908 (-VidMmUnpinAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAUVIDMM_MULTI_ALLOC@@@Z.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DXGDEVICE::PinPrimaryAllocations(DXGDEVICE *this, unsigned int a2)
{
  __int64 v2; // rdi
  unsigned int i; // esi
  __int64 v5; // rbp
  __int64 v6; // rax
  int v7; // r14d
  __int64 v9; // rsi
  __int64 v10; // r8
  _BYTE v11[24]; // [rsp+50h] [rbp-58h] BYREF
  _BYTE v12[24]; // [rsp+68h] [rbp-40h] BYREF

  v2 = a2;
  if ( a2 >= *((_DWORD *)this + 472) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 3822;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"VidPnSourceId < GetNumVidPnSources()",
      3822LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( !ADAPTER_RENDER::IsCoreResourceExclusiveOwner(*((ADAPTER_RENDER **)this + 2)) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 3823;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"GetRenderCore()->IsCoreResourceExclusiveOwner()",
      3823LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*((PERESOURCE **)this + 235)) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 3824;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"GetDisplayAdapter(VidPnSourceId)->IsCoreResourceExclusiveOwner()",
      3824LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( *((_DWORD *)this + 116) != 1 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 3825;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"DXGDEVICECLIENT_USER == GetClientType()",
      3825LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( (*((_DWORD *)this + v2 + 310) & 0x100) != 0 )
    return 0LL;
  if ( *((_QWORD *)this + 235) != *(_QWORD *)(*((_QWORD *)this + 2) + 16LL) )
  {
LABEL_20:
    DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v12, (struct _KTHREAD **)this + 42);
    *((_DWORD *)this + v2 + 310) |= 0x100u;
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v12);
    return 0LL;
  }
  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v11, (struct _KTHREAD **)this + 42);
  for ( i = 0; ; ++i )
  {
    if ( i >= *((_DWORD *)this + v2 + 246) )
    {
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v11);
      goto LABEL_20;
    }
    v5 = i;
    v6 = *(_QWORD *)(*((_QWORD *)this + v2 + 107) + 8LL * i);
    if ( v6 )
    {
      if ( (*(_DWORD *)(*(_QWORD *)(v6 + 48) + 4LL) & 1) == 0 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 3838;
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          0xFFFFFFFFLL,
          L"m_PrimaryAllocation[VidPnSourceId][Index]->m_pAllocation->m_Primary",
          3838LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      v7 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 760LL)
                                                                                                 + 8LL)
                                                                                     + 200LL))(
             *(_QWORD *)(*((_QWORD *)this + 2) + 768LL),
             *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + v2 + 107) + 8LL * i) + 24LL),
             0LL,
             0LL,
             0LL,
             0LL);
      if ( v7 < 0 )
        break;
    }
  }
  if ( i )
  {
    v9 = 0LL;
    do
    {
      v10 = *(_QWORD *)(v9 + *((_QWORD *)this + v2 + 107));
      if ( v10 )
        VIDMM_EXPORT::VidMmUnpinAllocation(
          *(VIDMM_EXPORT **)(*((_QWORD *)this + 2) + 760LL),
          *(struct VIDMM_GLOBAL **)(*((_QWORD *)this + 2) + 768LL),
          *(struct VIDMM_MULTI_ALLOC **)(v10 + 24));
      v9 += 8LL;
      --v5;
    }
    while ( v5 );
  }
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v11);
  return (unsigned int)v7;
}
