/*
 * XREFs of ??A?$DynArray@PEAVCDWMDisplay@@$0A@@@QEBAAEAPEAVCDWMDisplay@@I@Z @ 0x18002AB0C
 * Callers:
 *     ?CreateMonitorRenderTargets@CDesktopManager@@AEAAJXZ @ 0x180029FFC (-CreateMonitorRenderTargets@CDesktopManager@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DynArray<CDWMDisplay *,0>::operator[](_QWORD *a1, unsigned int a2)
{
  return *a1 + 8LL * a2;
}
