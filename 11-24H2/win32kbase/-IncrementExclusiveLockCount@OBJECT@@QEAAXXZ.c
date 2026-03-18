/*
 * XREFs of ?IncrementExclusiveLockCount@OBJECT@@QEAAXXZ @ 0x1400311D0
 * Callers:
 *     ?HmgLockEx2@@YAPEAU_BASEOBJECT@@AEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@EW4HandleLockOptions@@@Z @ 0x14002F070 (-HmgLockEx2@@YAPEAU_BASEOBJECT@@AEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@EW4HandleLockOptions@@.c)
 *     HmgLock @ 0x14002FF60 (HmgLock.c)
 * Callees:
 *     ?ReportOverflow@OBJECT@@QEAAXK@Z @ 0x1401C1EE0 (-ReportOverflow@OBJECT@@QEAAXK@Z.c)
 */

void __fastcall OBJECT::IncrementExclusiveLockCount(OBJECT *this)
{
  if ( *((_WORD *)this + 6) == 0xFFFF )
  {
    OBJECT::ReportOverflow(this, 1u);
    ++*((_WORD *)this + 6);
  }
  else
  {
    ++*((_WORD *)this + 6);
  }
}
