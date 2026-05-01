/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_279b59b1da187398d137b7ca9bd87eac___::_CTaskWrapper__lambda_279b59b1da187398d137b7ca9bd87eac___ @ 0x1802CA1F8
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_279b59b1da187398d137b7ca9bd87eac___::_scalar_deleting_destructor_ @ 0x180235BD0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_279b59b1da187398d137b7ca9bd87eac___--_scala.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180048554 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

void __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_279b59b1da187398d137b7ca9bd87eac___::_CTaskWrapper__lambda_279b59b1da187398d137b7ca9bd87eac___(
        __int64 a1)
{
  std::_Ref_count_base *v2; // rcx

  v2 = *(std::_Ref_count_base **)(a1 + 32);
  if ( v2 )
    std::_Ref_count_base::_Decref(v2);
  *(_DWORD *)(a1 + 12) = -1073741823;
}
