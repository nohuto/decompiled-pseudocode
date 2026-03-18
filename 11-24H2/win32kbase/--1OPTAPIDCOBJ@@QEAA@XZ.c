/*
 * XREFs of ??1OPTAPIDCOBJ@@QEAA@XZ @ 0x14000E570
 * Callers:
 *     GreCreateCompatibleDC @ 0x14000E310 (GreCreateCompatibleDC.c)
 * Callees:
 *     PopThreadGuardedObject @ 0x1400260C0 (PopThreadGuardedObject.c)
 *     ?vUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1400349F0 (-vUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x140035194 (--1DCOBJ@@QEAA@XZ.c)
 */

void __fastcall OPTAPIDCOBJ::~OPTAPIDCOBJ(OPTAPIDCOBJ *this)
{
  if ( *((_BYTE *)this + 112) )
    XDCOBJ::vUnlockNoNullSet(this);
  *(_QWORD *)this = 0LL;
  PopThreadGuardedObject((char *)this + 72);
  DCOBJ::~DCOBJ(this);
}
