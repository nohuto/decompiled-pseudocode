/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_048a96d3662c681a0b7978326510b206___::_CTaskWrapper__lambda_048a96d3662c681a0b7978326510b206___ @ 0x1801F769C
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_048a96d3662c681a0b7978326510b206___::_scalar_deleting_destructor_ @ 0x1801F96A0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_048a96d3662c681a0b7978326510b206___--_scala.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_048a96d3662c681a0b7978326510b206___::_CTaskWrapper__lambda_048a96d3662c681a0b7978326510b206___(
        __int64 a1)
{
  HSTRING v2; // rcx
  HRESULT result; // eax

  v2 = *(HSTRING *)(a1 + 16);
  if ( v2 )
    result = WindowsDeleteString(v2);
  *(_DWORD *)(a1 + 12) = -1073741823;
  return result;
}
