/*
 * XREFs of CDelayIAMOperations::CDelayedOperation__lambda_e4f903151686668c7d98589c7fa057c5___::_CDelayedOperation__lambda_e4f903151686668c7d98589c7fa057c5___ @ 0x1801F7BCC
 * Callers:
 *     CDelayIAMOperations::CDelayedOperation__lambda_e4f903151686668c7d98589c7fa057c5___::_scalar_deleting_destructor_ @ 0x1801F7B90 (CDelayIAMOperations--CDelayedOperation__lambda_e4f903151686668c7d98589c7fa057c5___--_scalar_dele.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 */

void **__fastcall CDelayIAMOperations::CDelayedOperation__lambda_e4f903151686668c7d98589c7fa057c5___::_CDelayedOperation__lambda_e4f903151686668c7d98589c7fa057c5___(
        _QWORD *a1)
{
  void **result; // rax

  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(a1 + 2);
  result = &CDelayIAMOperations::COperation::`vftable';
  *a1 = &CDelayIAMOperations::COperation::`vftable';
  return result;
}
