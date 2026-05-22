/*
 * XREFs of ??1MPCManagerClientConnection@@UEAA@XZ @ 0x180160530
 * Callers:
 *     ??_GMPCManagerClientConnection@@UEAAPEAXI@Z @ 0x180160960 (--_GMPCManagerClientConnection@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18006934C (--1-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@VMPCManagerClient@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180160444 (--1-$com_ptr_t@VMPCManagerClient@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 */

void __fastcall MPCManagerClientConnection::~MPCManagerClientConnection(MPCManagerClientConnection *this)
{
  wil::com_ptr_t<MPCManagerClient,wil::err_exception_policy>::~com_ptr_t<MPCManagerClient,wil::err_exception_policy>((__int64 *)this + 32);
  wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>((__int64 *)this + 31);
  Microsoft::BamoImpl::BaseBamoConnectionImpl::~BaseBamoConnectionImpl((MPCManagerClientConnection *)((char *)this + 8));
}
