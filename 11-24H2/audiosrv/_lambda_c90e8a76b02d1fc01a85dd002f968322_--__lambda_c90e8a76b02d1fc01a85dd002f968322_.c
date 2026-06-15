/*
 * XREFs of _lambda_c90e8a76b02d1fc01a85dd002f968322_::__lambda_c90e8a76b02d1fc01a85dd002f968322_ @ 0x1800A3230
 * Callers:
 *     ?OnMfxDiscoveryEffectsChanged@CAudioResourceManager@@UEAAJPEBGU_GUID@@@Z @ 0x1800BE4C0 (-OnMfxDiscoveryEffectsChanged@CAudioResourceManager@@UEAAJPEBGU_GUID@@@Z.c)
 *     _CPowerReferenceManager::AcquirePowerReferenceForStream_::_1_::dtor$8 @ 0x18016890B (_CPowerReferenceManager--AcquirePowerReferenceForStream_--_1_--dtor$8.c)
 *     _CAudioResourceManager::OnMfxDiscoveryEffectsChanged_::_1_::dtor$1 @ 0x18016DAF7 (_CAudioResourceManager--OnMfxDiscoveryEffectsChanged_--_1_--dtor$1.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180011640 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

void __fastcall lambda_c90e8a76b02d1fc01a85dd002f968322_::__lambda_c90e8a76b02d1fc01a85dd002f968322_(__int64 a1)
{
  std::_Ref_count_base *v1; // rcx

  v1 = *(std::_Ref_count_base **)(a1 + 16);
  if ( v1 )
    std::_Ref_count_base::_Decref(v1);
}
