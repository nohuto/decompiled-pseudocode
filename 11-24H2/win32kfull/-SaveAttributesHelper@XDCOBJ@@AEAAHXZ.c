/*
 * XREFs of ?SaveAttributesHelper@XDCOBJ@@AEAAHXZ @ 0x140150670
 * Callers:
 *     ?vSaveAttributesAlways@XDCOBJ@@AEAAXXZ @ 0x140327818 (-vSaveAttributesAlways@XDCOBJ@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall XDCOBJ::SaveAttributesHelper(XDCOBJ *this)
{
  struct _DC_ATTR *UserAttr; // rax

  if ( (*((_DWORD *)this + 8) & 2) != 0 )
    return 1LL;
  UserAttr = XDCOBJ::GetUserAttr(this);
  return !UserAttr || DC::SaveAttributes(*(DC **)this, UserAttr) != 0;
}
