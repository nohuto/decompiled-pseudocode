/*
 * XREFs of ??1DEVLOCKOBJ@@QEAA@XZ @ 0x1C0155B08
 * Callers:
 *     GreIntersectVisRect @ 0x1C016AF30 (GreIntersectVisRect.c)
 * Callees:
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C003881C (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ??1DLODCOBJ@@QEAA@XZ @ 0x1C0049DDC (--1DLODCOBJ@@QEAA@XZ.c)
 */

void __fastcall DEVLOCKOBJ::~DEVLOCKOBJ(struct _ERESOURCE *this)
{
  DEVLOCKOBJ::vDestructor(this);
  DLODCOBJ::~DLODCOBJ((DLODCOBJ *)&this->SharedWaiters);
}
