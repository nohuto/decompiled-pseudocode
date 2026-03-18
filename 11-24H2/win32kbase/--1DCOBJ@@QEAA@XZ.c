/*
 * XREFs of ??1DCOBJ@@QEAA@XZ @ 0x140035194
 * Callers:
 *     ??1OPTAPIDCOBJ@@QEAA@XZ @ 0x14000E570 (--1OPTAPIDCOBJ@@QEAA@XZ.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x14001E1AC (--1APIDCOBJ@@QEAA@XZ.c)
 *     GrepDeleteDC @ 0x140034C20 (GrepDeleteDC.c)
 *     ?GrepRestoreDCOBJ@@YAHAEAVXDCOBJ@@H@Z @ 0x1401211B0 (-GrepRestoreDCOBJ@@YAHAEAVXDCOBJ@@H@Z.c)
 *     ??1DCMEMOBJ@@QEAA@XZ @ 0x140175590 (--1DCMEMOBJ@@QEAA@XZ.c)
 * Callees:
 *     PopThreadGuardedObject @ 0x1400260C0 (PopThreadGuardedObject.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x140034798 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 */

void __fastcall DCOBJ::~DCOBJ(DCOBJ *this)
{
  if ( *(_QWORD *)this )
    XDCOBJ::vUnlockFast(this);
  PopThreadGuardedObject((_QWORD *)this + 5);
}
