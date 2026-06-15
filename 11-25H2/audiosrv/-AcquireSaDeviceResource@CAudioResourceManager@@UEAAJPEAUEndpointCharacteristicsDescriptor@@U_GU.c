/*
 * XREFs of ?AcquireSaDeviceResource@CAudioResourceManager@@UEAAJPEAUEndpointCharacteristicsDescriptor@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@KPEA_K@Z @ 0x1800B85A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CAudioResourceManager::AcquireSaDeviceResource(
        CAudioResourceManager *this,
        struct EndpointCharacteristicsDescriptor *a2,
        struct _GUID *a3,
        __int64 a4,
        unsigned int a5,
        unsigned __int64 *a6)
{
  __int64 *v6; // rcx
  __int64 v7; // rax
  __int128 v9; // [rsp+40h] [rbp-18h] BYREF

  v6 = (__int64 *)*((_QWORD *)this + 6);
  v7 = *v6;
  v9 = (__int128)*a3;
  return (*(__int64 (__fastcall **)(__int64 *, struct EndpointCharacteristicsDescriptor *, __int128 *, __int64, unsigned int, unsigned __int64 *))(v7 + 40))(
           v6,
           a2,
           &v9,
           a4,
           a5,
           a6);
}
