/*
 * XREFs of ?UnLock@CEResourceLock@@QEAAXXZ @ 0x14027156C
 * Callers:
 *     ?zzzUpdateGlobalCursorSize@CCursorSizes@@QEAAXPEBUtagPOINT@@_N@Z @ 0x140094048 (-zzzUpdateGlobalCursorSize@CCursorSizes@@QEAAXPEBUtagPOINT@@_N@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CEResourceLock::UnLock(PERESOURCE *this)
{
  ExReleaseResourceAndLeaveCriticalRegion(*this);
}
