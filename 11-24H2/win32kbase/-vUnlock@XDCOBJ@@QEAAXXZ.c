/*
 * XREFs of ?vUnlock@XDCOBJ@@QEAAXXZ @ 0x140034820
 * Callers:
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1401C0EA0 (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 * Callees:
 *     ?vUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1400349F0 (-vUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 */

void __fastcall XDCOBJ::vUnlock(XDCOBJ *this)
{
  XDCOBJ::vUnlockNoNullSet(this);
  *(_QWORD *)this = 0LL;
}
