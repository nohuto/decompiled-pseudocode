/*
 * XREFs of ??0RGNMEMOBJTMP@@QEAA@K@Z @ 0x1C007D90C
 * Callers:
 *     GreIntersectVisRect @ 0x1C016AF30 (GreIntersectVisRect.c)
 * Callees:
 *     ?vInitialize@RGNMEMOBJ@@QEAAXK@Z @ 0x1C003E0F4 (-vInitialize@RGNMEMOBJ@@QEAAXK@Z.c)
 *     ?vPushThreadGuardedObject@RGNMEMOBJ@@QEAAXXZ @ 0x1C004C7D0 (-vPushThreadGuardedObject@RGNMEMOBJ@@QEAAXXZ.c)
 */

RGNMEMOBJTMP *__fastcall RGNMEMOBJTMP::RGNMEMOBJTMP(RGNMEMOBJTMP *this, unsigned int a2)
{
  *(_QWORD *)this = 0LL;
  RGNMEMOBJ::vInitialize(this, a2);
  RGNMEMOBJ::vPushThreadGuardedObject(this);
  return this;
}
