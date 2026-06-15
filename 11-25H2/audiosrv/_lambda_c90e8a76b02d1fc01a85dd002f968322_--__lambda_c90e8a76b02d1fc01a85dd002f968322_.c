/*
 * XREFs of _lambda_c90e8a76b02d1fc01a85dd002f968322_::__lambda_c90e8a76b02d1fc01a85dd002f968322_ @ 0x1800A6E74
 * Callers:
 *     ?OnMfxDiscoveryEffectsChanged@CAudioResourceManager@@UEAAJPEBGU_GUID@@@Z @ 0x1800BF3B0 (-OnMfxDiscoveryEffectsChanged@CAudioResourceManager@@UEAAJPEBGU_GUID@@@Z.c)
 *     _CPowerReferenceManager::AcquirePowerReferenceForStream_::_1_::dtor$8 @ 0x18015F170 (_CPowerReferenceManager--AcquirePowerReferenceForStream_--_1_--dtor$8.c)
 *     _CAudioResourceManager::OnMfxDiscoveryEffectsChanged_::_1_::dtor$1 @ 0x1801645ED (_CAudioResourceManager--OnMfxDiscoveryEffectsChanged_--_1_--dtor$1.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180017580 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

void __fastcall lambda_c90e8a76b02d1fc01a85dd002f968322_::__lambda_c90e8a76b02d1fc01a85dd002f968322_(__int64 a1)
{
  std::_Ref_count_base *v1; // rcx

  v1 = *(std::_Ref_count_base **)(a1 + 16);
  if ( v1 )
    std::_Ref_count_base::_Decref(v1);
}
