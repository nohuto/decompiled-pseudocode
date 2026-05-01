/*
 * XREFs of ??$replace@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@Z$0A@@tlx@@YAPEAPEAUHKEY__@@AEAV?$auto_xxx@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@Z$0A@@0@@Z @ 0x180086628
 * Callers:
 *     ?InitResourcesFromRegisteredDlls@ResourceManager@ExecutionModel@@QEAAJXZ @ 0x180086AC8 (-InitResourcesFromRegisteredDlls@ResourceManager@ExecutionModel@@QEAAJXZ.c)
 * Callees:
 *     ?_Delete@?$auto_xxx@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@Z$0A@@tlx@@AEAAXXZ @ 0x1800873D4 (-_Delete@-$auto_xxx@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@@YAJ0@Z$0A@@tlx@@AEAAXXZ.c)
 */

_QWORD *__fastcall tlx::replace<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),0>(_QWORD *a1)
{
  tlx::auto_xxx<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),0>::_Delete();
  *a1 = 0LL;
  return a1;
}
