/*
 * XREFs of ??1CCustomAudioEndpointResourceManagerCache@@UEAA@XZ @ 0x1800F1904
 * Callers:
 *     ??_GCCustomAudioEndpointResourceManagerCache@@UEAAPEAXI@Z @ 0x1800F1C60 (--_GCCustomAudioEndpointResourceManagerCache@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIMulticastProvider@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800A07F8 (--1-$com_ptr_t@UIMulticastProvider@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 */

void __fastcall CCustomAudioEndpointResourceManagerCache::~CCustomAudioEndpointResourceManagerCache(
        CCustomAudioEndpointResourceManagerCache *this)
{
  wil::com_ptr_t<IMulticastProvider,wil::err_returncode_policy>::~com_ptr_t<IMulticastProvider,wil::err_returncode_policy>((__int64 *)this + 2);
  *((_DWORD *)this + 3) = -1073741823;
}
