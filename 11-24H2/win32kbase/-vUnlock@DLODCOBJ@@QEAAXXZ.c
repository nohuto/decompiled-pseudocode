/*
 * XREFs of ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1401C0EA0
 * Callers:
 *     ??1DLODCOBJ@@QEAA@XZ @ 0x140038004 (--1DLODCOBJ@@QEAA@XZ.c)
 *     ?OnUnexpectedThreadTerminationStatic@?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@SAXPEAX@Z @ 0x1401C0CE0 (-OnUnexpectedThreadTerminationStatic@-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@SAXPEAX@Z.c)
 * Callees:
 *     ?vUnlock@XDCOBJ@@QEAAXXZ @ 0x140034820 (-vUnlock@XDCOBJ@@QEAAXXZ.c)
 */

void __fastcall DLODCOBJ::vUnlock(DLODCOBJ *this)
{
  if ( *(_QWORD *)this && *((_BYTE *)this + 72) )
  {
    *(_DWORD *)(*(_QWORD *)this + 40LL) &= ~2u;
    *((_BYTE *)this + 72) = 0;
  }
  XDCOBJ::vUnlock(this);
}
