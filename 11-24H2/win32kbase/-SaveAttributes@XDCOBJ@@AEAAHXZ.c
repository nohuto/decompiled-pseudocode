/*
 * XREFs of ?SaveAttributes@XDCOBJ@@AEAAHXZ @ 0x140034840
 * Callers:
 *     ?bValid@OPTAPIDCOBJ@@QEAA_NXZ @ 0x14000E5A8 (-bValid@OPTAPIDCOBJ@@QEAA_NXZ.c)
 * Callees:
 *     ?GetUserAttr@XDCOBJ@@AEAAPEAU_DC_ATTR@@XZ @ 0x140034BE0 (-GetUserAttr@XDCOBJ@@AEAAPEAU_DC_ATTR@@XZ.c)
 *     ?SaveAttributes@DC@@QEAAHPEAU_DC_ATTR@@@Z @ 0x1400350A0 (-SaveAttributes@DC@@QEAAHPEAU_DC_ATTR@@@Z.c)
 */

__int64 __fastcall XDCOBJ::SaveAttributes(XDCOBJ *this)
{
  struct _DC_ATTR *UserAttr; // rax
  __int64 result; // rax

  if ( (*(_DWORD *)(*(_QWORD *)this + 44LL) & 2) != 0 )
    return 1LL;
  if ( (*((_DWORD *)this + 8) & 2) != 0
    || (UserAttr = XDCOBJ::GetUserAttr(this)) == 0LL
    || (result = DC::SaveAttributes(*(DC **)this, UserAttr), (_DWORD)result) )
  {
    *(_DWORD *)(*(_QWORD *)this + 44LL) |= 2u;
    *((_DWORD *)this + 2) = 1;
    return 1LL;
  }
  return result;
}
