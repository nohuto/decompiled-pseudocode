/*
 * XREFs of ??4?$ComPtr@UIPackagedUnifiedTileIdentifierFactory@UnifiedTile@Shell@WindowsInternal@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18004CAA0
 * Callers:
 *     ?GetLocalTilePropertiesForApp@ContentManagementService@ContentManagement@@AEAAJPEAUHSTRING__@@PEAPEAUICDSLocalTileProperties@CDSProperties@Shell@WindowsInternal@@@Z @ 0x180052060 (-GetLocalTilePropertiesForApp@ContentManagementService@ContentManagement@@AEAAJPEAUHSTRING__@@PE.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E10 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800BE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall Microsoft::WRL::ComPtr<WindowsInternal::Shell::UnifiedTile::IPackagedUnifiedTileIdentifierFactory>::operator=(
        __int64 *a1,
        __int64 *a2)
{
  __int64 v3; // rbx
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  v3 = *a2;
  if ( *a1 != *a2 )
  {
    if ( v3 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(*a2);
    v5 = *a1;
    *a1 = v3;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v5);
  }
  return a1;
}
