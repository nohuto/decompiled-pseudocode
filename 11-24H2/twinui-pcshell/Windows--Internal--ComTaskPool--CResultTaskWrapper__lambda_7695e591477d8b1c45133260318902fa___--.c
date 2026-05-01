/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_7695e591477d8b1c45133260318902fa___::Run @ 0x1800A9B20
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_7695e591477d8b1c45133260318902fa_::operator() @ 0x1800A9DEC (_lambda_7695e591477d8b1c45133260318902fa_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_7695e591477d8b1c45133260318902fa___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_7695e591477d8b1c45133260318902fa_::operator()(a1 + 16);
  **(_DWORD **)(a1 + 32) = result;
  return result;
}
