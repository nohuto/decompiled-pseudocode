/*
 * XREFs of CDCompBatchAnimationCallback__lambda_83894a20d7676cc7370719a196cbc3a9___::_CDCompBatchAnimationCallback__lambda_83894a20d7676cc7370719a196cbc3a9___ @ 0x180529DB4
 * Callers:
 *     CDCompBatchAnimationCallback__lambda_83894a20d7676cc7370719a196cbc3a9___::_scalar_deleting_destructor_ @ 0x18052A1C0 (CDCompBatchAnimationCallback__lambda_83894a20d7676cc7370719a196cbc3a9___--_scalar_deleting_destr.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VWindowArrangementView@@@WRL@Microsoft@@IEAAKXZ @ 0x18052BF74 (-InternalRelease@-$ComPtr@VWindowArrangementView@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall CDCompBatchAnimationCallback__lambda_83894a20d7676cc7370719a196cbc3a9___::_CDCompBatchAnimationCallback__lambda_83894a20d7676cc7370719a196cbc3a9___(
        __int64 a1)
{
  __int64 result; // rax

  *(_QWORD *)a1 = &off_1807501C8;
  result = Microsoft::WRL::ComPtr<WindowArrangementView>::InternalRelease(a1 + 16);
  *(_DWORD *)(a1 + 12) = -1073741823;
  return result;
}
