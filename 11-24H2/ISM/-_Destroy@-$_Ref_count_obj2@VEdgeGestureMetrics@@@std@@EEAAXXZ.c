/*
 * XREFs of ?_Destroy@?$_Ref_count_obj2@VEdgeGestureMetrics@@@std@@EEAAXXZ @ 0x18009C4A0
 * Callers:
 *     _InputProviderManager::InitializeHelper_::_1_::dtor$1 @ 0x1801D15FB (_InputProviderManager--InitializeHelper_--_1_--dtor$1.c)
 *     _MPCConstantManagerClient::CreateStringVectorPrincipal_::_1_::dtor$4 @ 0x1801D814D (_MPCConstantManagerClient--CreateStringVectorPrincipal_--_1_--dtor$4.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Ref_count_obj2<EdgeGestureMetrics>::_Destroy(__int64 a1)
{
  return Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)(a1 + 16));
}
