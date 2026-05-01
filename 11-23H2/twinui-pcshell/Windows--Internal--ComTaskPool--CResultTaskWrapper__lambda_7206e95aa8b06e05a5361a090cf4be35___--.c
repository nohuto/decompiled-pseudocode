/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_7206e95aa8b06e05a5361a090cf4be35___::Run @ 0x1801F3EB0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_7206e95aa8b06e05a5361a090cf4be35_::operator() @ 0x1801F3AFC (_lambda_7206e95aa8b06e05a5361a090cf4be35_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_7206e95aa8b06e05a5361a090cf4be35___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_7206e95aa8b06e05a5361a090cf4be35_::operator()(a1 + 16);
  **(_DWORD **)(a1 + 24) = result;
  return result;
}
