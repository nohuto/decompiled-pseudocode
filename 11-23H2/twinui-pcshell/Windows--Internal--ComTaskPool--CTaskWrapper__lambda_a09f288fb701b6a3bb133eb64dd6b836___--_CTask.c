/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_a09f288fb701b6a3bb133eb64dd6b836___::_CTaskWrapper__lambda_a09f288fb701b6a3bb133eb64dd6b836___ @ 0x180206960
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_a09f288fb701b6a3bb133eb64dd6b836___::_scalar_deleting_destructor_ @ 0x1802091D0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_a09f288fb701b6a3bb133eb64dd6b836___--_scala.c)
 * Callees:
 *     _lambda_a09f288fb701b6a3bb133eb64dd6b836_::__lambda_a09f288fb701b6a3bb133eb64dd6b836_ @ 0x18020678C (_lambda_a09f288fb701b6a3bb133eb64dd6b836_--__lambda_a09f288fb701b6a3bb133eb64dd6b836_.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_a09f288fb701b6a3bb133eb64dd6b836___::_CTaskWrapper__lambda_a09f288fb701b6a3bb133eb64dd6b836___(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax

  result = lambda_a09f288fb701b6a3bb133eb64dd6b836_::__lambda_a09f288fb701b6a3bb133eb64dd6b836_(
             (__int64 *)(a1 + 16),
             a2);
  *(_DWORD *)(a1 + 12) = -1073741823;
  return result;
}
