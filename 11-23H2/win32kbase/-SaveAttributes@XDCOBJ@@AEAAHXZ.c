/*
 * XREFs of ?SaveAttributes@XDCOBJ@@AEAAHXZ @ 0x1C0096410
 * Callers:
 *     ?vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z @ 0x1C0003064 (-vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z.c)
 *     ?bCleanDC@XDCOBJ@@QEAAHH@Z @ 0x1C00408D0 (-bCleanDC@XDCOBJ@@QEAAHH@Z.c)
 * Callees:
 *     ?SaveAttributes@DC@@QEAAHPEAU_DC_ATTR@@@Z @ 0x1C003BE90 (-SaveAttributes@DC@@QEAAHPEAU_DC_ATTR@@@Z.c)
 *     ?GetUserAttr@XDCOBJ@@AEAAPEAU_DC_ATTR@@XZ @ 0x1C0043180 (-GetUserAttr@XDCOBJ@@AEAAPEAU_DC_ATTR@@XZ.c)
 */

__int64 __fastcall XDCOBJ::SaveAttributes(XDCOBJ *this)
{
  struct _DC_ATTR *UserAttr; // rax

  if ( (*(_DWORD *)(*(_QWORD *)this + 44LL) & 2) != 0 )
    return 1LL;
  if ( *((_DWORD *)this + 3)
    || (UserAttr = XDCOBJ::GetUserAttr(this)) == 0LL
    || (unsigned int)DC::SaveAttributes(*(DC **)this, UserAttr) )
  {
    *(_DWORD *)(*(_QWORD *)this + 44LL) |= 2u;
    *((_DWORD *)this + 2) = 1;
    return 1LL;
  }
  return 0LL;
}
