/*
 * XREFs of ?OpenAdapter@VIDMM_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@@Z @ 0x1400B1DBC
 * Callers:
 *     ?CreateSchLog@VIDMM_SCH_LOG@@SAJPEAVVIDMM_GLOBAL@@I_KPEAPEAV1@PEAPEAXPEA_KPEAVVIDMM_PROCESS@@W4VIDMM_SCH_LOG_TYPE@@@Z @ 0x140033230 (-CreateSchLog@VIDMM_SCH_LOG@@SAJPEAVVIDMM_GLOBAL@@I_KPEAPEAV1@PEAPEAXPEA_KPEAVVIDMM_PROCESS@@W4V.c)
 *     VidMmOpenAdapter @ 0x140043CE0 (VidMmOpenAdapter.c)
 *     ?Init@VIDMM_DEVICE@@QEAAJ_NPEAVVIDMM_PROCESS@@@Z @ 0x1400B1854 (-Init@VIDMM_DEVICE@@QEAAJ_NPEAVVIDMM_PROCESS@@@Z.c)
 *     ?InitPagingProcess@VIDMM_PAGING_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@@Z @ 0x1400D79EC (-InitPagingProcess@VIDMM_PAGING_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@@Z.c)
 *     ?MapGpuVA@VIDMM_FENCE_STORAGE_PAGE@@QEAAJPEAVVIDMM_GLOBAL@@PEAVVIDMM_DEVICE@@PEAVVIDMM_PROCESS@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@PEA_KI_N@Z @ 0x1400FA518 (-MapGpuVA@VIDMM_FENCE_STORAGE_PAGE@@QEAAJPEAVVIDMM_GLOBAL@@PEAVVIDMM_DEVICE@@PEAVVIDMM_PROCESS@@.c)
 *     ?VidMmReserveGpuVirtualAddressRangeCb@VIDMM_GLOBAL@@QEAAJPEAU_DXGKARGCB_RESERVEGPUVIRTUALADDRESSRANGE@@@Z @ 0x140105A3C (-VidMmReserveGpuVirtualAddressRangeCb@VIDMM_GLOBAL@@QEAAJPEAU_DXGKARGCB_RESERVEGPUVIRTUALADDRESS.c)
 * Callees:
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1400338D0 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x140033D04 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?InitializeProcessAdapterInfo@VIDMM_PROCESS@@IEAAPEAUVIDMM_PROCESS_ADAPTER_INFO@@PEAVVIDMM_GLOBAL@@@Z @ 0x1400B1FC4 (-InitializeProcessAdapterInfo@VIDMM_PROCESS@@IEAAPEAUVIDMM_PROCESS_ADAPTER_INFO@@PEAVVIDMM_GLOBA.c)
 *     ?ReportProcessAdapterBudget@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_PROCESS_ADAPTER_INFO@@@Z @ 0x1400B25D0 (-ReportProcessAdapterBudget@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_PROCESS_ADAPTER_INFO@@@Z.c)
 *     ?UpdateWorkingSets@VIDMM_PHYSICAL_ADAPTER@@QEAAXJ@Z @ 0x1400B284C (-UpdateWorkingSets@VIDMM_PHYSICAL_ADAPTER@@QEAAXJ@Z.c)
 */

__int64 __fastcall VIDMM_PROCESS::OpenAdapter(struct _KTHREAD **this, struct VIDMM_GLOBAL *a2)
{
  unsigned int v2; // ebx
  __int64 v5; // rbp
  __int64 v6; // rax
  __int64 v7; // r14
  __int64 v8; // rcx
  struct VIDMM_PROCESS_ADAPTER_INFO *v10; // rax
  struct VIDMM_PROCESS_ADAPTER_INFO *v11; // rbp
  unsigned __int16 i; // si
  __int16 v13; // r9
  _BYTE v14[40]; // [rsp+20h] [rbp-28h] BYREF

  v2 = 0;
  v5 = *(unsigned int *)(*((_QWORD *)a2 + 3) + 240LL);
  if ( g_IsInternalReleaseOrDbg )
  {
    v6 = WdLogNewEntry5_WdTrace(this);
    *(_QWORD *)(v6 + 24) = a2;
    *(_QWORD *)(v6 + 32) = this;
    WdLogGlobalForLineNumber = 361;
  }
  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v14, this + 33);
  v7 = v5;
  v8 = *((_QWORD *)this[2] + v5);
  if ( v8 )
  {
    _InterlockedAdd((volatile signed __int32 *)(v8 + 8), 1u);
  }
  else
  {
    v10 = VIDMM_PROCESS::InitializeProcessAdapterInfo((VIDMM_PROCESS *)this, a2);
    v11 = v10;
    if ( v10 )
    {
      *((_QWORD *)this[2] + v7) = v10;
      _InterlockedAdd((volatile signed __int32 *)VIDMM_PROCESS::_pDxProcessPerAdapterCount + v7, 1u);
      for ( i = 0; (unsigned int)i < *((_DWORD *)a2 + 1736); i += v13 )
        VIDMM_PHYSICAL_ADAPTER::UpdateWorkingSets(
          *(VIDMM_PHYSICAL_ADAPTER **)(*((_QWORD *)a2 + 5029) + 8LL * i),
          *((_DWORD *)VIDMM_PROCESS::_pDxProcessPerAdapterCount + v7));
      VIDMM_GLOBAL::ReportProcessAdapterBudget(a2, v11);
    }
    else
    {
      v2 = -1073741801;
    }
  }
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v14);
  return v2;
}
