/*
 * XREFs of ?ClearVisual@CCursorState@@QEAAXXZ @ 0x1802BBDD8
 * Callers:
 *     ??1CCursorVisual@@MEAA@XZ @ 0x180299C10 (--1CCursorVisual@@MEAA@XZ.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180041FB8 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??$_Destroy_range@V?$allocator@UMonitorData@CCursorState@@@std@@@std@@YAXPEAUMonitorData@CCursorState@@QEAU12@AEAV?$allocator@UMonitorData@CCursorState@@@0@@Z @ 0x1802BA428 (--$_Destroy_range@V-$allocator@UMonitorData@CCursorState@@@std@@@std@@YAXPEAUMonitorData@CCursor.c)
 *     ?EnsureHardwareOverlayCleared@CCursorState@@AEAAXPEAUMonitorData@1@@Z @ 0x1802BC558 (-EnsureHardwareOverlayCleared@CCursorState@@AEAAXPEAUMonitorData@1@@Z.c)
 */

void __fastcall CCursorState::ClearVisual(CCursorState *this)
{
  CCursorState *v2; // rcx
  struct CCursorState::MonitorData *v3; // rsi
  struct CCursorState::MonitorData *i; // rdi
  __int64 v5; // rcx
  __int64 v6; // rdx

  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)this + 15);
  *((_BYTE *)this + 115) = 0;
  EnterCriticalSection(&g_CursorManager);
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_BYTE *)this + 82) = 0;
  v3 = (struct CCursorState::MonitorData *)*((_QWORD *)this + 12);
  for ( i = (struct CCursorState::MonitorData *)*((_QWORD *)this + 11);
        i != v3;
        i = (struct CCursorState::MonitorData *)((char *)i + 128) )
  {
    CCursorState::EnsureHardwareOverlayCleared(v2, i);
  }
  v5 = *((_QWORD *)this + 11);
  v6 = *((_QWORD *)this + 12);
  if ( v5 != v6 )
  {
    std::_Destroy_range<std::allocator<CCursorState::MonitorData>>(v5, v6);
    *((_QWORD *)this + 12) = *((_QWORD *)this + 11);
  }
  LeaveCriticalSection(&g_CursorManager);
}
