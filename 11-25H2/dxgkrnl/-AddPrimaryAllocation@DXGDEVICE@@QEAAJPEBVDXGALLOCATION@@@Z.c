/*
 * XREFs of ?AddPrimaryAllocation@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@@Z @ 0x1403CCE14
 * Callers:
 *     ?CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEBU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@IPEAU_EPROCESS@@PEAIPEA_K6PEAU_D3DKMT_CREATESTANDARDALLOCATION@@PEAXI@Z @ 0x140361FE0 (-CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEB.c)
 * Callees:
 *     ?InsertPrimaryAllocation@DXGDEVICE@@QEAA_NIPEBVDXGALLOCATION@@AEAH@Z @ 0x1400132CC (-InsertPrimaryAllocation@DXGDEVICE@@QEAA_NIPEBVDXGALLOCATION@@AEAH@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x14002B150 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsCoreResourceSharedOwner@ADAPTER_RENDER@@QEBAEXZ @ 0x14002B720 (-IsCoreResourceSharedOwner@ADAPTER_RENDER@@QEBAEXZ.c)
 *     ?VidMmPinAllocation@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAUVIDMM_MULTI_ALLOC@@PEAUVIDMM_PAGING_QUEUE@@PEAKPEAT_LARGE_INTEGER@@PEA_K@Z @ 0x14004FA7C (-VidMmPinAllocation@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAUVIDMM_MULTI_ALLOC@@PEAUVIDMM_PAGING.c)
 */

__int64 __fastcall DXGDEVICE::AddPrimaryAllocation(ADAPTER_RENDER **this, const struct DXGALLOCATION *a2)
{
  unsigned int v2; // ebx
  unsigned int v5; // ebp
  ADAPTER_RENDER **v6; // rdx
  int v8; // eax
  int v9; // [rsp+60h] [rbp+8h] BYREF

  v2 = 0;
  if ( (*(_DWORD *)(*((_QWORD *)a2 + 6) + 4LL) & 1) == 0 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 3690;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"pAllocation->m_pAllocation->m_Primary",
      3690LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( !ADAPTER_RENDER::IsCoreResourceSharedOwner(this[2]) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 3691;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"GetRenderCore()->IsCoreResourceSharedOwner()",
      3691LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v5 = (*(_DWORD *)(*((_QWORD *)a2 + 6) + 4LL) >> 6) & 0xF;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this[235]) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 3695;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"GetDisplayAdapter(VidPnSourceId)->IsCoreResourceSharedOwner()",
      3695LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( v5 >= *((_DWORD *)this + 472) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 3696;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"VidPnSourceId < GetNumVidPnSources()",
      3696LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v9 = 0;
  if ( DXGDEVICE::InsertPrimaryAllocation((DXGDEVICE *)this, v5, a2, &v9) )
  {
    v6 = (ADAPTER_RENDER **)this[2];
    if ( !v9 || this[235] != v6[2] || *((_DWORD *)this + 116) != 1 || (*((_DWORD *)a2 + 18) & 0x800) != 0 )
      return 0LL;
    v8 = VIDMM_EXPORT::VidMmPinAllocation(v6[95], v6[96], *((struct VIDMM_MULTI_ALLOC **)a2 + 3), 0LL, 0LL, 0LL, 0LL);
    if ( v8 < 0 )
      return (unsigned int)v8;
  }
  else
  {
    v2 = -1073741801;
    WdLogSingleEntry3(3LL, this, a2, -1073741801LL);
    WdLogGlobalForLineNumber = 3731;
  }
  return v2;
}
