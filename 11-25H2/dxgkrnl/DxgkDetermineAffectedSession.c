/*
 * XREFs of DxgkDetermineAffectedSession @ 0x140400A60
 * Callers:
 *     DpiFdoDetermineAffectedSession @ 0x140243560 (DpiFdoDetermineAffectedSession.c)
 *     ?CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAXPEAU_DXGK_ADAPTER_CAPS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14040C830 (-CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAXPEAU_DXGK_ADAPTER_CAPS.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall DxgkDetermineAffectedSession(char a1, char a2, char a3, char a4, __int64 a5)
{
  if ( a1 )
    return a5;
  if ( a2 )
    return 0x100000000LL;
  if ( a3 )
    return (-(__int64)(a4 != 0) & 0xFFFFFFFF00000000uLL) + 0x200000000LL;
  return 0x300000000LL;
}
