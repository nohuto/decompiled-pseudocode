/*
 * XREFs of ?DelayCreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IPEAI1PEAVCOREDEVICEACCESS@@@Z @ 0x140198374
 * Callers:
 *     DxgkGetSharedPrimaryHandle @ 0x1401AC9A0 (DxgkGetSharedPrimaryHandle.c)
 *     ?PresentCddShadowBuffer@@YAJPEAVDXGCONTEXT@@PEAVDXGHWQUEUE@@I@Z @ 0x1403F49F0 (-PresentCddShadowBuffer@@YAJPEAVDXGCONTEXT@@PEAVDXGHWQUEUE@@I@Z.c)
 *     ?DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z @ 0x14040F280 (-DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@PEBD@Z @ 0x14000F4A0 (-AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@PEBD@Z.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x140029C50 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsCoreResourceSharedOwner@ADAPTER_DISPLAY@@QEBAEXZ @ 0x140031B58 (-IsCoreResourceSharedOwner@ADAPTER_DISPLAY@@QEBAEXZ.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x140034334 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z @ 0x140036924 (-GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z.c)
 *     ?GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA?AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z @ 0x140040288 (-GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA-AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z.c)
 *     ?UsingDelayCreateCddAllocation@DXGADAPTER@@QEBAEXZ @ 0x14005BA48 (-UsingDelayCreateCddAllocation@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsCddPrimaryStale@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x140067388 (-IsCddPrimaryStale@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?CreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IAEBU_D3DKMT_DISPLAYMODE@@PEAVCOREDEVICEACCESS@@@Z @ 0x140197118 (-CreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IAEBU_D3DKMT_DISPLAYMODE@@PEAVCOREDEV.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::DelayCreateCddAllocations(
        ADAPTER_DISPLAY *this,
        struct DXGDEVICE *a2,
        unsigned int a3,
        unsigned int *a4,
        unsigned int *a5,
        struct COREDEVICEACCESS *a6)
{
  __int64 v6; // rsi
  unsigned int *v7; // r14
  __int64 v10; // r12
  __int64 v11; // r15
  int v12; // eax
  __int64 v13; // r14
  ADAPTER_DISPLAY *v15; // rbx
  const struct _D3DKMT_DISPLAYMODE *DisplayModeInfo; // rax
  int CddAllocations; // eax
  __int64 v18; // rsi
  struct COREDEVICEACCESS *v19; // [rsp+20h] [rbp-58h]

  v6 = a3;
  v7 = a4;
  if ( a3 >= *((_DWORD *)this + 24) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1559;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"VidPnSourceId < m_NumVidPnSources",
      1559LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( !ADAPTER_DISPLAY::IsCoreResourceSharedOwner(this) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1560;
    DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"IsCoreResourceSharedOwner()", 1560LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( !DXGADAPTER::UsingDelayCreateCddAllocation(*((DXGADAPTER **)this + 2)) )
    return 3221225659LL;
  v10 = v6;
  v11 = 4024 * v6;
  if ( *(_QWORD *)(*((_QWORD *)this + 16) + 4024 * v6 + 88) )
  {
    if ( !ADAPTER_DISPLAY::IsCddPrimaryStale(this, v6) )
      return 3221225659LL;
  }
  if ( (unsigned int)ADAPTER_DISPLAY::GetVidPnSourceOwnerType(this, v6)
    && (unsigned int)ADAPTER_DISPLAY::GetVidPnSourceOwnerType(this, v6) != 3 )
  {
    return 3221225659LL;
  }
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*((PERESOURCE **)this + 2)) )
  {
    if ( !a6 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 1581;
      DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"pCoreAccess != NULL", 1581LL, 0LL, 0LL, 0LL, 0LL);
    }
    COREDEVICEACCESS::Release(a6);
    v12 = COREDEVICEACCESS::AcquireExclusive((__int64)a6, 1u);
    v13 = v12;
    if ( v12 < 0 )
    {
      WdLogSingleEntry2(2LL, a2, v12);
      WdLogGlobalForLineNumber = 1588;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"Failed to acquire device core access exclusive on device 0x%I64x (Status = 0x%I64x).",
        (__int64)a2,
        v13,
        0LL,
        0LL,
        0LL);
      return (unsigned int)v13;
    }
    v7 = a4;
  }
  v15 = *(ADAPTER_DISPLAY **)(*((_QWORD *)this + 2) + 3120LL);
  DisplayModeInfo = (const struct _D3DKMT_DISPLAYMODE *)ADAPTER_DISPLAY::GetDisplayModeInfo(this, v6);
  CddAllocations = ADAPTER_DISPLAY::CreateCddAllocations(v15, a2, v6, DisplayModeInfo, a6);
  v18 = CddAllocations;
  if ( CddAllocations >= 0 )
  {
    *v7 = *(_DWORD *)(*(_QWORD *)(v11 + *((_QWORD *)this + 16) + 88) + 16LL);
    *a5 = *(_DWORD *)(*(_QWORD *)(v11 + *((_QWORD *)this + 16) + 600) + 16LL);
    return 0LL;
  }
  else
  {
    WdLogSingleEntry3(2LL, *((_QWORD *)this + 2), v10, CddAllocations);
    v19 = (struct COREDEVICEACCESS *)*((_QWORD *)this + 2);
    WdLogGlobalForLineNumber = 1603;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Failed to create CDD primary allocations on Adapter 0x%I64x for VidPnSource 0x%I64x, (Status = 0x%I64x).",
      (__int64)v19,
      v10,
      v18,
      0LL,
      0LL);
    return (unsigned int)v18;
  }
}
