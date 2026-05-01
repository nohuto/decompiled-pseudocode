/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_7324f344b2cabb269f7e3da98a9a310f___::Run @ 0x1801F9830
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_7324f344b2cabb269f7e3da98a9a310f_::operator() @ 0x1801F7D44 (_lambda_7324f344b2cabb269f7e3da98a9a310f_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_7324f344b2cabb269f7e3da98a9a310f___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_7324f344b2cabb269f7e3da98a9a310f_::operator()((_DWORD **)(a1 + 16));
  **(_DWORD **)(a1 + 32) = result;
  return result;
}
