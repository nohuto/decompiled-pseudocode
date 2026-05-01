/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_bdb274a0361bbe69399ac0e2c4eec277___::Run @ 0x1804EBED0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_bdb274a0361bbe69399ac0e2c4eec277_::operator() @ 0x1804E7DC8 (_lambda_bdb274a0361bbe69399ac0e2c4eec277_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_bdb274a0361bbe69399ac0e2c4eec277___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_bdb274a0361bbe69399ac0e2c4eec277_::operator()((_QWORD **)(a1 + 16));
  **(_DWORD **)(a1 + 40) = result;
  return result;
}
