/*
 * XREFs of ?AtlHresultFromLastError@ATL@@YAJXZ @ 0x18001F930
 * Callers:
 *     ?SetDacl@CSecurityDesc@ATL@@QEAAXAEBVCDacl@2@_N@Z @ 0x1800106C0 (-SetDacl@CSecurityDesc@ATL@@QEAAXAEBVCDacl@2@_N@Z.c)
 *     ?GetPACL@CAcl@ATL@@QEBAPEBU_ACL@@XZ @ 0x180010850 (-GetPACL@CAcl@ATL@@QEBAPEBU_ACL@@XZ.c)
 *     ?MakeSelfRelative@CSecurityDesc@ATL@@QEAAXXZ @ 0x180016540 (-MakeSelfRelative@CSecurityDesc@ATL@@QEAAXXZ.c)
 *     ?Init@CSecurityDesc@ATL@@IEAAXAEBU_SECURITY_DESCRIPTOR@@@Z @ 0x1800191C0 (-Init@CSecurityDesc@ATL@@IEAAXAEBU_SECURITY_DESCRIPTOR@@@Z.c)
 *     ??0CAccessAce@CDacl@ATL@@QEAA@AEBVCSid@2@KE_N@Z @ 0x18001B4B4 (--0CAccessAce@CDacl@ATL@@QEAA@AEBVCSid@2@KE_N@Z.c)
 *     ?Copy@CSid@ATL@@AEAAXAEBU_SID@@@Z @ 0x18001B61C (-Copy@CSid@ATL@@AEAAXAEBU_SID@@@Z.c)
 *     ?AllocateAndInitializeSecurityDescriptor@CSecurityDesc@ATL@@IEAAXXZ @ 0x18001E5DC (-AllocateAndInitializeSecurityDescriptor@CSecurityDesc@ATL@@IEAAXXZ.c)
 *     ?MakeAbsolute@CSecurityDesc@ATL@@QEAAXXZ @ 0x180046F6C (-MakeAbsolute@CSecurityDesc@ATL@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

signed int ATL::AtlHresultFromLastError(void)
{
  signed int result; // eax

  result = GetLastError();
  if ( result > 0 )
    return (unsigned __int16)result | 0x80070000;
  return result;
}
