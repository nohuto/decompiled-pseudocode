/*
 * XREFs of XEPATHOBJ_vConstructHPATH @ 0x1400DA988
 * Callers:
 *     XEPATHOBJ_vConstructHPATHWrap @ 0x1400DA970 (XEPATHOBJ_vConstructHPATHWrap.c)
 * Callees:
 *     ?vLock@EPATHOBJ@@QEAAXPEAUHPATH__@@@Z @ 0x1400DA9EC (-vLock@EPATHOBJ@@QEAAXPEAUHPATH__@@@Z.c)
 */

void __fastcall XEPATHOBJ_vConstructHPATH(EPATHOBJ *this, struct HPATH__ *a2)
{
  *((_QWORD *)this + 1) = 0LL;
  if ( !*((_DWORD *)this + 28) )
  {
    PushThreadGuardedObject((char *)this + 80, this, XEPATHOBJ_vDestructWrap);
    *((_DWORD *)this + 28) = 1;
  }
  EPATHOBJ::vLock(this, a2);
}
