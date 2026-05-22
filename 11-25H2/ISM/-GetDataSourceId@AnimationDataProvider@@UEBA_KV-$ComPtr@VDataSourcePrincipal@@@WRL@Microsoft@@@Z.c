/*
 * XREFs of ?GetDataSourceId@AnimationDataProvider@@UEBA_KV?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@@Z @ 0x180100AE0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@VDataProviderRegistrarProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x180058DC8 (-InternalRelease@-$ComPtr@VDataProviderRegistrarProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall AnimationDataProvider::GetDataSourceId(__int64 a1, __int64 *a2)
{
  __int64 v3; // rdi

  v3 = 0LL;
  if ( *a2 )
    v3 = *(_QWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*a2 + 8) + 96LL))(*a2 + 8);
  Microsoft::WRL::ComPtr<DataProviderRegistrarProxy>::InternalRelease(a2);
  return v3;
}
