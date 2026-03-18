/*
 * XREFs of ?PresentCddPrimary@ADAPTER_DISPLAY@@QEAAJPEAVDXGCONTEXT@@IPEAVCOREDEVICEACCESS@@@Z @ 0x140199FC4
 * Callers:
 *     DxgkGetSharedPrimaryHandle @ 0x1401AC9A0 (DxgkGetSharedPrimaryHandle.c)
 *     ?DxgkpDelayPresentCddPrimary@@YAXPEAU_DEVICE_OBJECT@@PEAXPEAU_IO_WORKITEM@@@Z @ 0x1403C29C0 (-DxgkpDelayPresentCddPrimary@@YAXPEAU_DEVICE_OBJECT@@PEAXPEAU_IO_WORKITEM@@@Z.c)
 *     ?PresentCddShadowBuffer@@YAJPEAVDXGCONTEXT@@PEAVDXGHWQUEUE@@I@Z @ 0x1403F49F0 (-PresentCddShadowBuffer@@YAJPEAVDXGCONTEXT@@PEAVDXGHWQUEUE@@I@Z.c)
 *     ?DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z @ 0x14040F280 (-DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@PEBD@Z @ 0x14000F4A0 (-AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@PEBD@Z.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x140029C50 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x14002FD80 (-IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x140034334 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?VidMmGetPinnedAllocationInfo@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAUVIDMM_MULTI_GLOBAL_ALLOC@@PEAIPEAT_LARGE_INTEGER@@PEA_K@Z @ 0x14004EF94 (-VidMmGetPinnedAllocationInfo@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAUVIDMM_MULTI_GLOBAL_ALLOC@.c)
 *     ?IsFullWDDMAdapter@DXGADAPTER@@QEBAEXZ @ 0x140054D34 (-IsFullWDDMAdapter@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetCddDisplayMode@ADAPTER_DISPLAY@@QEBAAEBU_D3DKMT_DISPLAYMODE@@I@Z @ 0x14006302C (-GetCddDisplayMode@ADAPTER_DISPLAY@@QEBAAEBU_D3DKMT_DISPLAYMODE@@I@Z.c)
 *     ?VidSchSetVidPnSourceAddressWithMultiPlaneOverlay3@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_GLOBAL@@PEAU_DXGKARG_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY3@@@Z @ 0x1400678C8 (-VidSchSetVidPnSourceAddressWithMultiPlaneOverlay3@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_GLOBAL@@PEAU_.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     memset @ 0x1400A2000 (memset.c)
 *     ?SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z @ 0x140290CEC (-SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z.c)
 *     ?FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@I_N@Z @ 0x140376424 (-FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@I_N@Z.c)
 *     ?GetCddPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@IE@Z @ 0x140380550 (-GetCddPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@IE@Z.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::PresentCddPrimary(
        PERESOURCE **this,
        struct DXGCONTEXT *a2,
        unsigned int a3,
        struct COREDEVICEACCESS *a4)
{
  __int64 v5; // rdi
  int v8; // eax
  __int64 v9; // r14
  struct DXGADAPTERALLOCATION *CddPrimaryAllocation; // r14
  struct VIDMM_MULTI_GLOBAL_ALLOC *v12; // r8
  PERESOURCE *v13; // rax
  VIDSCH_EXPORT **v14; // rbx
  const struct _D3DKMT_DISPLAYMODE *CddDisplayMode; // rax
  int v16; // eax
  const wchar_t *v17; // r9
  int v18; // eax
  union _LARGE_INTEGER *v19; // [rsp+20h] [rbp-E0h]
  unsigned __int64 *v20; // [rsp+28h] [rbp-D8h]
  _QWORD *v21; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD *v22; // [rsp+58h] [rbp-A8h] BYREF
  _QWORD v23[2]; // [rsp+60h] [rbp-A0h] BYREF
  union _LARGE_INTEGER v24[2]; // [rsp+70h] [rbp-90h] BYREF
  _DXGKARG_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY3 v25; // [rsp+80h] [rbp-80h] BYREF
  __int64 v26; // [rsp+B0h] [rbp-50h]
  _QWORD v27[18]; // [rsp+C0h] [rbp-40h] BYREF

  v5 = a3;
  if ( DXGADAPTER::IsCoreResourceExclusiveOwner(this[2]) )
    goto LABEL_19;
  if ( !a4 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1652;
    DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"pCoreAccess != NULL", 1652LL, 0LL, 0LL, 0LL, 0LL);
  }
  COREDEVICEACCESS::Release(a4);
  v8 = COREDEVICEACCESS::AcquireExclusive((__int64)a4, 1u);
  v9 = v8;
  if ( v8 >= 0 )
  {
LABEL_19:
    if ( !(unsigned __int8)ADAPTER_DISPLAY::IsVidPnSourceActive((ADAPTER_DISPLAY *)this, v5) )
    {
      WdLogSingleEntry3(2LL, v5, this[2], -1071775738LL);
      v20 = (unsigned __int64 *)this[2];
      WdLogGlobalForLineNumber = 1670;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"Cannot present CDD primary on an inactive source 0x%I64x on adapter 0x%I64x (status = 0x%I64x)",
        v5,
        (__int64)v20,
        -1071775738LL,
        0LL,
        0LL);
      return 3223191558LL;
    }
    CddPrimaryAllocation = ADAPTER_DISPLAY::GetCddPrimaryAllocation((ADAPTER_DISPLAY *)this, v5, 0);
    if ( CddPrimaryAllocation )
    {
      if ( !DXGADAPTER::IsFullWDDMAdapter((DXGADAPTER *)this[2]) )
        goto LABEL_13;
      DXGDEVICE::FlushScheduler(*((_QWORD *)a2 + 2), 1LL, 4294967293LL, 0LL);
      v12 = (struct VIDMM_MULTI_GLOBAL_ALLOC *)*((_QWORD *)CddPrimaryAllocation + 1);
      v21 = v23;
      v23[0] = *((_QWORD *)a2 + 23);
      v23[1] = *((_QWORD *)CddPrimaryAllocation + 2);
      v13 = this[2];
      *(_OWORD *)&v24[0].LowPart = 0LL;
      v14 = (VIDSCH_EXPORT **)v13[391];
      VIDMM_EXPORT::VidMmGetPinnedAllocationInfo(v14[95], v14[96], v12, (unsigned int *)v24, &v24[1], 0LL);
      memset(v27, 0, sizeof(v27));
      LODWORD(v27[2]) = 3;
      v22 = v27;
      HIDWORD(v27[3]) = 1;
      v27[4] = &v21;
      CddDisplayMode = ADAPTER_DISPLAY::GetCddDisplayMode((ADAPTER_DISPLAY *)this, v5);
      *(_QWORD *)((char *)&v27[7] + 4) = 0LL;
      *(_QWORD *)((char *)&v27[8] + 4) = *(_QWORD *)&CddDisplayMode->Width;
      v26 = 0LL;
      *(_OWORD *)&v25.VidPnSourceId = 0LL;
      HIDWORD(v27[13]) = 1;
      memset(&v25.pPostComposition, 0, 24);
      v25.ppPlanes = (DXGK_MULTIPLANE_OVERLAY_PLANE3 **)&v22;
      *(_OWORD *)((char *)&v27[11] + 4) = *(_OWORD *)((char *)&v27[7] + 4);
      v25.VidPnSourceId = v5;
      *(_OWORD *)((char *)&v27[9] + 4) = *(_OWORD *)((char *)&v27[7] + 4);
      v25.PlaneCount = 1;
      v16 = VIDSCH_EXPORT::VidSchSetVidPnSourceAddressWithMultiPlaneOverlay3(v14[92], v14[93], &v25);
      v9 = v16;
      if ( v16 < 0 )
      {
        WdLogSingleEntry3(2LL, v5, this[2], v16);
        v17 = L"Failed to set CDD primary on source 0x%I64x on adapter 0x%I64x via MPO3 (status = 0x%I64x)";
        WdLogGlobalForLineNumber = 1725;
      }
      else
      {
LABEL_13:
        v18 = ADAPTER_DISPLAY::SetVidPnSourceVisibility((ADAPTER_DISPLAY *)this, v5, 1u, 0x20u, 1u);
        v9 = v18;
        if ( v18 >= 0 )
          return (unsigned int)v9;
        WdLogSingleEntry3(2LL, v5, this[2], v18);
        v17 = L"Failed to turn visibility on source 0x%I64x on adapter 0x%I64x via MPO3 (status = 0x%I64x)";
        WdLogGlobalForLineNumber = 1739;
      }
      DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, v17, v5, (__int64)this[2], v9, 0LL, 0LL);
      return (unsigned int)v9;
    }
    LODWORD(v9) = -1073741811;
  }
  else
  {
    WdLogSingleEntry2(2LL, this[2], v8);
    v19 = (union _LARGE_INTEGER *)this[2];
    WdLogGlobalForLineNumber = 1659;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Failed to acquire device core access exclusive on adapter 0x%I64x (Status = 0x%I64x).",
      (__int64)v19,
      v9,
      0LL,
      0LL,
      0LL);
  }
  return (unsigned int)v9;
}
