/*
 * XREFs of ?AtlThrowLastWin32@ATL@@YAXXZ @ 0x180049398
 * Callers:
 *     ?SetDacl@CSecurityDesc@ATL@@QEAAXAEBVCDacl@2@_N@Z @ 0x180010960 (-SetDacl@CSecurityDesc@ATL@@QEAAXAEBVCDacl@2@_N@Z.c)
 *     ?MakeSelfRelative@CSecurityDesc@ATL@@QEAAXXZ @ 0x180016320 (-MakeSelfRelative@CSecurityDesc@ATL@@QEAAXXZ.c)
 *     ??0CSid@ATL@@QEAA@AEBU_SID_IDENTIFIER_AUTHORITY@@EZZ @ 0x18001B240 (--0CSid@ATL@@QEAA@AEBU_SID_IDENTIFIER_AUTHORITY@@EZZ.c)
 *     ?Copy@CDacl@ATL@@AEAAXAEBU_ACL@@@Z @ 0x18001C71C (-Copy@CDacl@ATL@@AEAAXAEBU_ACL@@@Z.c)
 *     ?GetLength@CAcl@ATL@@QEBAIXZ @ 0x18001E644 (-GetLength@CAcl@ATL@@QEBAIXZ.c)
 *     ?MakeAbsolute@CSecurityDesc@ATL@@QEAAXXZ @ 0x18004978C (-MakeAbsolute@CSecurityDesc@ATL@@QEAAXXZ.c)
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18001B800 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

void __noreturn ATL::AtlThrowLastWin32(void)
{
  signed int LastError; // eax

  LastError = GetLastError();
  if ( LastError > 0 )
    LastError = (unsigned __int16)LastError | 0x80070000;
  ATL::AtlThrowImpl(LastError);
}
