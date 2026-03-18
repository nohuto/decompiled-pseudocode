/*
 * XREFs of ?bInPrivatePFT@PFFOBJ@@QEBAHXZ @ 0x1400FE5A8
 * Callers:
 *     ?bDeleteLoadRef@PFFOBJ@@QEAAHKPEAUtagPvtData@@PEAH@Z @ 0x1400FDF34 (-bDeleteLoadRef@PFFOBJ@@QEAAHKPEAUtagPvtData@@PEAH@Z.c)
 *     ?bAddHash@PFFOBJ@@QEAAHH@Z @ 0x1400FE5E4 (-bAddHash@PFFOBJ@@QEAAHH@Z.c)
 *     ?vRemoveHash@PFFOBJ@@QEAAXXZ @ 0x140145FC8 (-vRemoveHash@PFFOBJ@@QEAAXXZ.c)
 *     PFF_bUnloadWorkhorseForDCOBJ @ 0x14030ECB0 (PFF_bUnloadWorkhorseForDCOBJ.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall PFFOBJ::bInPrivatePFT(PFFOBJ *this, __int64 a2, __int64 a3)
{
  return *(_QWORD *)(*(_QWORD *)this + 136LL) == *(_QWORD *)(*(_QWORD *)(W32GetSessionState(this, a2, a3) + 96) + 20408LL);
}
