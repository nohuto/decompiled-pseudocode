/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_f2c26bad65fa2b8f49fea49bca5a1348___::Run @ 0x1801F9B80
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_f2c26bad65fa2b8f49fea49bca5a1348_::operator() @ 0x1801F92BC (_lambda_f2c26bad65fa2b8f49fea49bca5a1348_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_f2c26bad65fa2b8f49fea49bca5a1348___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_f2c26bad65fa2b8f49fea49bca5a1348_::operator()((UwpWindowWrapperBase **)(a1 + 16));
  **(_DWORD **)(a1 + 40) = result;
  return result;
}
