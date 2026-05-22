/*
 * XREFs of ??1MPCConstantManagerClientPrincipal@@UEAA@XZ @ 0x180174968
 * Callers:
 *     ??_EMPCConstantManagerClientPrincipal@@UEAAPEAXI@Z @ 0x180174990 (--_EMPCConstantManagerClientPrincipal@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VMPCConstantManagerClient@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180174948 (--1-$com_ptr_t@VMPCConstantManagerClient@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 */

void __fastcall MPCConstantManagerClientPrincipal::~MPCConstantManagerClientPrincipal(
        MPCConstantManagerClientPrincipal *this)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  const char *v4; // r9

  wil::com_ptr_t<MPCConstantManagerClient,wil::err_exception_policy>::~com_ptr_t<MPCConstantManagerClient,wil::err_exception_policy>((__int64 *)this + 7);
  wil::com_ptr_t<Microsoft::BamoImpl::ConnectionIndirector,wil::err_returncode_policy>::~com_ptr_t<Microsoft::BamoImpl::ConnectionIndirector,wil::err_returncode_policy>(
    (volatile signed __int32 **)this + 4,
    v2,
    v3,
    v4);
}
