/*
 * XREFs of ?GetMaximumAdapterCountInSession@DXGGLOBAL@@QEBAKXZ @ 0x140349488
 * Callers:
 *     ?CopyTopology@CCD_TOPOLOGY@@AEAAJPEBV1@@Z @ 0x140267DDC (-CopyTopology@CCD_TOPOLOGY@@AEAAJPEBV1@@Z.c)
 *     ?ApplyTopologyWorker@CCD_TOPOLOGY@@AEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1403478E4 (-ApplyTopologyWorker@CCD_TOPOLOGY@@AEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?DxgkEnumAdapters3Impl@@YAJPEAU_D3DKMT_ENUMADAPTERS3@@DEW4_KWAIT_REASON@@@Z @ 0x140348E00 (-DxgkEnumAdapters3Impl@@YAJPEAU_D3DKMT_ENUMADAPTERS3@@DEW4_KWAIT_REASON@@@Z.c)
 *     ?DxgkEnumAdapters2Impl@@YAJPEAU_D3DKMT_ENUMADAPTERS2@@DEW4_KWAIT_REASON@@@Z @ 0x140349F80 (-DxgkEnumAdapters2Impl@@YAJPEAU_D3DKMT_ENUMADAPTERS2@@DEW4_KWAIT_REASON@@@Z.c)
 *     ?DxgkGetMaximumAdapterCountInSession@@YAKXZ @ 0x14034A6C0 (-DxgkGetMaximumAdapterCountInSession@@YAKXZ.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 */

__int64 __fastcall DXGGLOBAL::GetMaximumAdapterCountInSession(DXGGLOBAL *this)
{
  unsigned int v2; // ecx

  if ( !*((_DWORD *)this + 341) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2942;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"m_MaximumGlobalAdapterCount > 0",
      2942LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v2 = 1024;
  if ( (unsigned int)(*((_DWORD *)this + 341) + 2) < 0x400 )
    return (unsigned int)(*((_DWORD *)this + 341) + 2);
  return v2;
}
