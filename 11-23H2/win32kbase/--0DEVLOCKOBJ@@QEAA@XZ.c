/*
 * XREFs of ??0DEVLOCKOBJ@@QEAA@XZ @ 0x1C005FE28
 * Callers:
 *     GreGetNearestColor @ 0x1C005FC20 (GreGetNearestColor.c)
 * Callees:
 *     ??0DLODCOBJ@@QEAA@XZ @ 0x1C0049D88 (--0DLODCOBJ@@QEAA@XZ.c)
 *     ?vInit@DEVLOCKOBJ@@QEAAXXZ @ 0x1C005FE54 (-vInit@DEVLOCKOBJ@@QEAAXXZ.c)
 */

DEVLOCKOBJ *__fastcall DEVLOCKOBJ::DEVLOCKOBJ(DEVLOCKOBJ *this)
{
  DLODCOBJ::DLODCOBJ((DEVLOCKOBJ *)((char *)this + 32));
  DEVLOCKOBJ::vInit(this);
  return this;
}
