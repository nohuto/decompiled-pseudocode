/*
 * XREFs of ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x14002181C
 * Callers:
 *     ??1DLODCOBJ@@QEAA@XZ @ 0x140020570 (--1DLODCOBJ@@QEAA@XZ.c)
 *     ?bDisposeSrcDco@DEVLOCKBLTOBJ@@QEAAHXZ @ 0x1400212B0 (-bDisposeSrcDco@DEVLOCKBLTOBJ@@QEAAHXZ.c)
 *     ?bPrepareSrcDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@HH@Z @ 0x140021474 (-bPrepareSrcDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@HH@Z.c)
 *     ?OnUnexpectedThreadTerminationStatic@?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@SAXPEAX@Z @ 0x1402FC520 (-OnUnexpectedThreadTerminationStatic@-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@SAXPEAX@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DLODCOBJ::vUnlock(DLODCOBJ *this)
{
  struct _DC_ATTR *UserAttr; // rax
  __int64 *v3; // rdx
  __int64 v4; // rdi
  int v5; // [rsp+30h] [rbp+8h] BYREF

  if ( *(_QWORD *)this && *((_BYTE *)this + 72) )
  {
    *(_DWORD *)(*(_QWORD *)this + 40LL) &= ~2u;
    *((_BYTE *)this + 72) = 0;
  }
  if ( *(_QWORD *)this )
  {
    if ( *((_DWORD *)this + 2) && (*(_DWORD *)(*(_QWORD *)this + 44LL) & 2) != 0 )
    {
      if ( (*((_DWORD *)this + 8) & 2) == 0 )
      {
        UserAttr = XDCOBJ::GetUserAttr(this);
        if ( UserAttr )
          DC::RestoreAttributes(*(DC **)this, UserAttr);
      }
      *(_DWORD *)(*(_QWORD *)this + 44LL) &= ~2u;
      *((_DWORD *)this + 2) = 0;
    }
    v3 = *(__int64 **)this;
    v5 = 0;
    v4 = *v3;
    HmgDecrementExclusiveReferenceCountExFastOpt(*((_QWORD *)this + 2), v3, *((unsigned int *)this + 8), &v5);
    if ( v5 )
      GrepDeleteDC(v4, 0x2000000LL);
  }
  *(_QWORD *)this = 0LL;
}
