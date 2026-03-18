/*
 * XREFs of ?_CheckPortraitFirstMonitorFromEDID@DXGMONITOR@@AEAAJXZ @ 0x140275B54
 * Callers:
 *     ?OnDescriptorUpdated@DXGMONITOR@@QEAAJAEAVIMonitorDeferredEventSource@DxgMonitor@@_N@Z @ 0x1403CD4E8 (-OnDescriptorUpdated@DXGMONITOR@@QEAAJAEAVIMonitorDeferredEventSource@DxgMonitor@@_N@Z.c)
 *     ?_InitializeMonitorWithDriver@DXGMONITOR@@QEAAJAEBVMONITOR_REF_ACCESSOR@@AEAVIMonitorDeferredEventSource@DxgMonitor@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x140405254 (-_InitializeMonitorWithDriver@DXGMONITOR@@QEAAJAEBVMONITOR_REF_ACCESSOR@@AEAVIMonitorDeferredEve.c)
 * Callees:
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DXGMONITOR::_CheckPortraitFirstMonitorFromEDID(DXGMONITOR *this)
{
  __int64 v2; // rcx
  unsigned int v3; // ecx
  char v4; // al
  char v5; // al
  __int64 v7; // [rsp+20h] [rbp-28h] BYREF
  int v8; // [rsp+28h] [rbp-20h]

  v7 = 0LL;
  v8 = 0;
  v2 = *(_QWORD *)(*((_QWORD *)this + 27) + 160LL);
  if ( !v2 || (*(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v2 + 184LL))(v2, &v7) < 0 )
    return 3221226021LL;
  v3 = v7;
  v4 = *((_BYTE *)this + 176);
  if ( (unsigned int)v7 >= HIDWORD(v7) )
  {
    v3 = HIDWORD(v7);
    v5 = v4 & 0x7F;
  }
  else
  {
    v5 = v4 | 0x80;
  }
  *((_BYTE *)this + 176) = v5;
  *((_BYTE *)this + 177) = *((_BYTE *)this + 177) & 0xFE | (v3 < 0x400);
  return 0LL;
}
