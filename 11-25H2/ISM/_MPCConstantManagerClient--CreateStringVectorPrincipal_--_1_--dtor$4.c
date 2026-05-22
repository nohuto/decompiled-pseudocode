/*
 * XREFs of _MPCConstantManagerClient::CreateStringVectorPrincipal_::_1_::dtor$4 @ 0x1801D090D
 * Callers:
 *     <none>
 * Callees:
 *     ?_Destroy@?$_Ref_count_obj2@VEdgeGestureMetrics@@@std@@EEAAXXZ @ 0x18009C2D0 (-_Destroy@-$_Ref_count_obj2@VEdgeGestureMetrics@@@std@@EEAAXXZ.c)
 */

__int64 __fastcall MPCConstantManagerClient::CreateStringVectorPrincipal_::_1_::dtor_4(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 32) & 2;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 32) &= ~2u;
    return std::_Ref_count_obj2<EdgeGestureMetrics>::_Destroy(a2 + 56);
  }
  return result;
}
