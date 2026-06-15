/*
 * XREFs of ?Copy@CSid@ATL@@AEAAXAEBU_SID@@@Z @ 0x18001B4EC
 * Callers:
 *     ??4CSid@ATL@@QEAAAEAV01@AEBU_SID@@@Z @ 0x180018810 (--4CSid@ATL@@QEAAAEAV01@AEBU_SID@@@Z.c)
 *     ??0CSid@ATL@@QEAA@AEBU_SID_IDENTIFIER_AUTHORITY@@EZZ @ 0x18001B240 (--0CSid@ATL@@QEAA@AEBU_SID_IDENTIFIER_AUTHORITY@@EZZ.c)
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18001B800 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?AtlHresultFromLastError@ATL@@YAJXZ @ 0x18001F9D8 (-AtlHresultFromLastError@ATL@@YAJXZ.c)
 */

void __fastcall ATL::CSid::Copy(ATL::CSid *this, struct _SID *a2)
{
  DWORD LengthSid; // eax
  int Error; // eax

  if ( !IsValidSid(a2) || (LengthSid = GetLengthSid(a2), LengthSid > 0x44) )
    ATL::AtlThrowImpl(-2147024809);
  *((_BYTE *)this + 76) = 1;
  if ( !CopySid(LengthSid, (char *)this + 8, a2) )
  {
    Error = ATL::AtlHresultFromLastError();
    *((_BYTE *)this + 76) = 0;
    ATL::AtlThrowImpl(Error);
  }
}
