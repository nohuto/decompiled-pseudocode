/*
 * XREFs of ?GetMaximumGlobalAdapterCount@DXGGLOBAL@@QEBAKXZ @ 0x1403369A0
 * Callers:
 *     ?GetRenderAdapterInfo@DXGPROCESS@@QEBAPEAUDXGPROCESS_RENDER_ADAPTER_INFO@@I@Z @ 0x14002F5C0 (-GetRenderAdapterInfo@DXGPROCESS@@QEBAPEAUDXGPROCESS_RENDER_ADAPTER_INFO@@I@Z.c)
 *     DXGGLOBAL_GetMaximumGlobalAdapterCount @ 0x1400368A0 (DXGGLOBAL_GetMaximumGlobalAdapterCount.c)
 *     ?GetKmdProcessHandle@DXGPROCESS@@QEBAPEAXI@Z @ 0x14004F8C0 (-GetKmdProcessHandle@DXGPROCESS@@QEBAPEAXI@Z.c)
 *     ??1DXGGLOBAL@@EEAA@XZ @ 0x1401D29F4 (--1DXGGLOBAL@@EEAA@XZ.c)
 *     ?AcquireAdapterOrdinal@DXGGLOBAL@@QEAAKE@Z @ 0x1401D315C (-AcquireAdapterOrdinal@DXGGLOBAL@@QEAAKE@Z.c)
 *     ?ReleaseAdapterOrdinal@DXGGLOBAL@@QEAAXK@Z @ 0x1401D67D4 (-ReleaseAdapterOrdinal@DXGGLOBAL@@QEAAXK@Z.c)
 *     ?Initialize@DXGPROCESS@@QEAAJPEAX@Z @ 0x140336450 (-Initialize@DXGPROCESS@@QEAAJPEAX@Z.c)
 *     ?Initialize@DXGDEVICE@@QEAAJEE@Z @ 0x1403973B4 (-Initialize@DXGDEVICE@@QEAAJEE@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 */

__int64 __fastcall DXGGLOBAL::GetMaximumGlobalAdapterCount(DXGGLOBAL *this)
{
  if ( *((_DWORD *)this + 341) )
    return *((unsigned int *)this + 341);
  WdLogSingleEntry0(1LL);
  WdLogGlobalForLineNumber = 2916;
  DxgkLogInternalTriageEvent(
    0LL,
    262146LL,
    0xFFFFFFFFLL,
    L"m_MaximumGlobalAdapterCount > 0",
    2916LL,
    0LL,
    0LL,
    0LL,
    0LL);
  return *((unsigned int *)this + 341);
}
