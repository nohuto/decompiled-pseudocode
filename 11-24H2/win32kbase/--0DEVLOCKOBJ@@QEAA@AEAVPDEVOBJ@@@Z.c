/*
 * XREFs of ??0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z @ 0x14014A5C0
 * Callers:
 *     GreIntersectVisRect @ 0x140179B90 (GreIntersectVisRect.c)
 *     ??0PDEVOBJ@@QEAA@PEAUHDEV__@@K@Z @ 0x14019BA3C (--0PDEVOBJ@@QEAA@PEAUHDEV__@@K@Z.c)
 *     ?vClearSurface@PDEVOBJ@@QEAAXXZ @ 0x1401C0DB4 (-vClearSurface@PDEVOBJ@@QEAAXXZ.c)
 * Callees:
 *     ?vLock@DEVLOCKOBJ@@QEAAXAEAVPDEVOBJ@@@Z @ 0x140013C30 (-vLock@DEVLOCKOBJ@@QEAAXAEAVPDEVOBJ@@@Z.c)
 *     ??0DLODCOBJ@@QEAA@XZ @ 0x140038274 (--0DLODCOBJ@@QEAA@XZ.c)
 */

DEVLOCKOBJ *__fastcall DEVLOCKOBJ::DEVLOCKOBJ(DEVLOCKOBJ *this, struct PDEVOBJ *a2)
{
  DLODCOBJ::DLODCOBJ((DEVLOCKOBJ *)((char *)this + 32));
  DEVLOCKOBJ::vLock(this, a2);
  return this;
}
