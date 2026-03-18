/*
 * XREFs of ?GetMaximumGlobalAdapterCount@DXGGLOBAL@@QEBAKXZ @ 0x140348EA0
 * Callers:
 *     ?GetRenderAdapterInfo@DXGPROCESS@@QEBAPEAUDXGPROCESS_RENDER_ADAPTER_INFO@@I@Z @ 0x14002EF80 (-GetRenderAdapterInfo@DXGPROCESS@@QEBAPEAUDXGPROCESS_RENDER_ADAPTER_INFO@@I@Z.c)
 *     DXGGLOBAL_GetMaximumGlobalAdapterCount @ 0x140036950 (DXGGLOBAL_GetMaximumGlobalAdapterCount.c)
 *     ?GetKmdProcessHandle@DXGPROCESS@@QEBAPEAXI@Z @ 0x14004FE40 (-GetKmdProcessHandle@DXGPROCESS@@QEBAPEAXI@Z.c)
 *     ??1DXGGLOBAL@@EEAA@XZ @ 0x1401CD6B4 (--1DXGGLOBAL@@EEAA@XZ.c)
 *     ?AcquireAdapterOrdinal@DXGGLOBAL@@QEAAKE@Z @ 0x1401CDE10 (-AcquireAdapterOrdinal@DXGGLOBAL@@QEAAKE@Z.c)
 *     ?ReleaseAdapterOrdinal@DXGGLOBAL@@QEAAXK@Z @ 0x1401D14A4 (-ReleaseAdapterOrdinal@DXGGLOBAL@@QEAAXK@Z.c)
 *     ?Initialize@DXGPROCESS@@QEAAJPEAX@Z @ 0x140348958 (-Initialize@DXGPROCESS@@QEAAJPEAX@Z.c)
 *     ?Initialize@DXGDEVICE@@QEAAJEE@Z @ 0x1403A0D64 (-Initialize@DXGDEVICE@@QEAAJEE@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 */

__int64 __fastcall DXGGLOBAL::GetMaximumGlobalAdapterCount(DXGGLOBAL *this)
{
  if ( *((_DWORD *)this + 333) )
    return *((unsigned int *)this + 333);
  WdLogSingleEntry0(1LL);
  WdLogGlobalForLineNumber = 2915;
  DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"m_MaximumGlobalAdapterCount > 0", 2915LL, 0LL, 0LL, 0LL, 0LL);
  return *((unsigned int *)this + 333);
}
