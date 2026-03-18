/*
 * XREFs of ??1DLODCOBJ@@QEAA@XZ @ 0x140038004
 * Callers:
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x140037E58 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 * Callees:
 *     PopThreadGuardedObject @ 0x1400260C0 (PopThreadGuardedObject.c)
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1401C0EA0 (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 */

void __fastcall DLODCOBJ::~DLODCOBJ(DLODCOBJ *this)
{
  if ( *(_QWORD *)this )
    DLODCOBJ::vUnlock(this);
  PopThreadGuardedObject((_QWORD *)this + 5);
}
