/*
 * XREFs of ?InitializePowerManagement@ADAPTER_DISPLAY@@QEAAJXZ @ 0x14019965C
 * Callers:
 *     ?InitializePowerManagement@DXGADAPTER@@AEAAJXZ @ 0x14035B368 (-InitializePowerManagement@DXGADAPTER@@AEAAJXZ.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x140024690 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x140030E28 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?DmmAreAllVidpnTargetsPowerComponents@@YAEPEAVVIDPN_MGR@@@Z @ 0x1402579F8 (-DmmAreAllVidpnTargetsPowerComponents@@YAEPEAVVIDPN_MGR@@@Z.c)
 *     ?SetTargetPowerComponentIndex@VIDPN_MGR@@QEAAJII@Z @ 0x14025C148 (-SetTargetPowerComponentIndex@VIDPN_MGR@@QEAAJII@Z.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::InitializePowerManagement(ADAPTER_DISPLAY *this)
{
  __int64 v1; // r13
  int v2; // ebx
  unsigned int v3; // ebp
  unsigned int v5; // r15d
  __int64 v6; // r14
  __int64 v7; // rax
  VIDPN_MGR *v8; // rdi
  unsigned int v9; // ebx
  __int64 v11; // [rsp+80h] [rbp+8h] BYREF

  v1 = *((_QWORD *)this + 2);
  v2 = 0;
  v3 = 0;
  v5 = *(_DWORD *)(v1 + 3368);
  if ( v5 )
  {
    v6 = 0LL;
    do
    {
      v7 = *(_QWORD *)(v1 + 3224);
      if ( *(_DWORD *)(v6 + v7 + 208) == 1 )
      {
        v8 = (VIDPN_MGR *)*((_QWORD *)this + 13);
        v9 = *(_DWORD *)(v6 + v7 + 212);
        EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v11, (__int64)v8);
        v2 = VIDPN_MGR::SetTargetPowerComponentIndex(v8, v9, v3);
        DXGFASTMUTEX::Release((struct _KTHREAD **)(v11 + 40));
        if ( v2 < 0 )
          break;
      }
      ++v3;
      v6 += 520LL;
    }
    while ( v3 < v5 );
  }
  if ( (*((_DWORD *)this + 6) & 0x40) == 0 || DmmAreAllVidpnTargetsPowerComponents(*((struct VIDPN_MGR **)this + 13)) )
    return (unsigned int)v2;
  WdLogSingleEntry0(2LL);
  WdLogGlobalForLineNumber = 4438;
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000LL,
    0xFFFFFFFFLL,
    L"Driver reported USB4 monitor support but did not expose all targets as PoFx components",
    4438LL,
    0LL,
    0LL,
    0LL,
    0LL);
  return 3221225485LL;
}
