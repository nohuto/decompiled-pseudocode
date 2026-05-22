/*
 * XREFs of ??0TestCommands@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@AEBV?$ComPtr@UISystemInputRouter@@@WRL@Microsoft@@@Z @ 0x1801A2324
 * Callers:
 *     ?Initialize@DWMInputRouter@@IEAAJXZ @ 0x18004F884 (-Initialize@DWMInputRouter@@IEAAJXZ.c)
 * Callees:
 *     ??0BamoPrincipalImpl@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnection@Bamo@2@@Z @ 0x18000E77C (--0BamoPrincipalImpl@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnection@Bamo@2@@Z.c)
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800169B4 (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 */

_QWORD *__fastcall TestCommands::TestCommands(_QWORD *a1, struct Microsoft::Bamo::BaseBamoConnection *a2, _QWORD *a3)
{
  *a1 = &BamoTestCommandsPrincipal::`vftable'{for `Microsoft::Bamo::BamoPrincipal'};
  a1[1] = &BamoTestCommandsPrincipal::`vftable'{for `ITestCommandsPrincipal'};
  Microsoft::BamoImpl::BamoPrincipalImpl::BamoPrincipalImpl((Microsoft::BamoImpl::BamoPrincipalImpl *)(a1 + 2), a2);
  a1[2] = &BamoImpl::BamoTestCommandsPrincipalImpl::`vftable';
  *a1 = &TestCommands::`vftable'{for `Microsoft::Bamo::BamoPrincipal'};
  a1[1] = &BamoTestCommandsPrincipal::`vftable'{for `ITestCommandsPrincipal'};
  a1[7] = *a3;
  wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>(a1 + 7);
  return a1;
}
