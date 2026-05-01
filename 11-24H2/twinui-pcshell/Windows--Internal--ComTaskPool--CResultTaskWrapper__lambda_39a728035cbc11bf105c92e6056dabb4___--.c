/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_39a728035cbc11bf105c92e6056dabb4___::Run @ 0x18001FB00
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_39a728035cbc11bf105c92e6056dabb4_::operator() @ 0x18001FB28 (_lambda_39a728035cbc11bf105c92e6056dabb4_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_39a728035cbc11bf105c92e6056dabb4___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_39a728035cbc11bf105c92e6056dabb4_::operator()(a1 + 16);
  **(_DWORD **)(a1 + 40) = result;
  return result;
}
