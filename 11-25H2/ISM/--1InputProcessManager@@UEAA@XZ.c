/*
 * XREFs of ??1InputProcessManager@@UEAA@XZ @ 0x180193434
 * Callers:
 *     ??_GInputProcessManager@@UEAAPEAXI@Z @ 0x180193460 (--_GInputProcessManager@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VDataProviderRegistrarProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x180058DC8 (-InternalRelease@-$ComPtr@VDataProviderRegistrarProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall InputProcessManager::~InputProcessManager(InputProcessManager *this)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  const char *v4; // r9

  Microsoft::WRL::ComPtr<DataProviderRegistrarProxy>::InternalRelease((__int64 *)this + 7);
  wil::com_ptr_t<Microsoft::BamoImpl::ConnectionIndirector,wil::err_returncode_policy>::~com_ptr_t<Microsoft::BamoImpl::ConnectionIndirector,wil::err_returncode_policy>(
    (volatile signed __int32 **)this + 4,
    v2,
    v3,
    v4);
}
