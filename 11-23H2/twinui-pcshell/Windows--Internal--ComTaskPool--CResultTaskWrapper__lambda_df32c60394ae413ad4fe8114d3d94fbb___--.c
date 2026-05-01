/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_df32c60394ae413ad4fe8114d3d94fbb___::Run @ 0x1804EC050
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_df32c60394ae413ad4fe8114d3d94fbb_::operator() @ 0x1804E8684 (_lambda_df32c60394ae413ad4fe8114d3d94fbb_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_df32c60394ae413ad4fe8114d3d94fbb___::Run(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  __int64 result; // rax

  result = lambda_df32c60394ae413ad4fe8114d3d94fbb_::operator()((_BYTE **)(a1 + 16), a2, a3, a4);
  **(_DWORD **)(a1 + 32) = result;
  return result;
}
