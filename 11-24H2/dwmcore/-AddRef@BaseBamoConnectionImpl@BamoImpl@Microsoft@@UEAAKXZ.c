/*
 * XREFs of ?AddRef@BaseBamoConnectionImpl@BamoImpl@Microsoft@@UEAAKXZ @ 0x18026DE70
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$com_ptr_t@VConnectionIndirector@BamoImpl@Microsoft@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVConnectionIndirector@BamoImpl@Microsoft@@@Z @ 0x1801A7E3C (--4-$com_ptr_t@VConnectionIndirector@BamoImpl@Microsoft@@Uerr_returncode_policy@wil@@@wil@@QEAAA.c)
 */

__int64 __fastcall Microsoft::BamoImpl::BaseBamoConnectionImpl::AddRef(
        Microsoft::BamoImpl::BaseBamoConnectionImpl *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  Microsoft::BamoImpl::BamoImplObject **v5; // rcx

  v5 = (Microsoft::BamoImpl::BamoImplObject **)((char *)this + 104);
  if ( !*v5 )
    wil::com_ptr_t<Microsoft::BamoImpl::ConnectionIndirector,wil::err_returncode_policy>::operator=(
      v5,
      *((_QWORD *)this + 12),
      a3,
      a4);
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this + 2);
}
