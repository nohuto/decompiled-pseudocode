/*
 * XREFs of ??_EBamoControllerNavigationManagerPrincipalImpl@BamoImpl@@UEAAPEAXI@Z @ 0x1800C9CA0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@VConnectionIndirector@BamoImpl@Microsoft@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180054D60 (--1-$com_ptr_t@VConnectionIndirector@BamoImpl@Microsoft@@Uerr_returncode_policy@wil@@@wil@@QEAA@.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009D588 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

volatile signed __int32 **__fastcall BamoImpl::BamoControllerNavigationManagerPrincipalImpl::`vector deleting destructor'(
        volatile signed __int32 **this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  char v5; // bl

  v5 = a2;
  wil::com_ptr_t<Microsoft::BamoImpl::ConnectionIndirector,wil::err_returncode_policy>::~com_ptr_t<Microsoft::BamoImpl::ConnectionIndirector,wil::err_returncode_policy>(
    this + 2,
    a2,
    a3,
    a4);
  if ( (v5 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x30);
  return this;
}
