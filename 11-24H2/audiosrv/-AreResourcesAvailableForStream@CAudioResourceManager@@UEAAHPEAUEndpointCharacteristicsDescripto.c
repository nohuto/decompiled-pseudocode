/*
 * XREFs of ?AreResourcesAvailableForStream@CAudioResourceManager@@UEAAHPEAUEndpointCharacteristicsDescriptor@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@K@Z @ 0x1800B7A50
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CAudioResourceManager::AreResourcesAvailableForStream(
        CAudioResourceManager *this,
        struct EndpointCharacteristicsDescriptor *a2,
        struct _GUID *a3,
        __int64 a4,
        unsigned int a5)
{
  __int64 v5; // rcx
  __int128 v7; // [rsp+30h] [rbp-18h] BYREF

  v5 = *((_QWORD *)this + 6);
  v7 = (__int128)*a3;
  return (*(__int64 (__fastcall **)(__int64, struct EndpointCharacteristicsDescriptor *, __int128 *, __int64, unsigned int))(*(_QWORD *)v5 + 48LL))(
           v5,
           a2,
           &v7,
           a4,
           a5);
}
