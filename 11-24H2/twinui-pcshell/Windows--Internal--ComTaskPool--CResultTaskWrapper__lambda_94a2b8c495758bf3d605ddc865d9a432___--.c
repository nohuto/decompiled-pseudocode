/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_94a2b8c495758bf3d605ddc865d9a432___::Run @ 0x1804421C0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_94a2b8c495758bf3d605ddc865d9a432_::operator() @ 0x18043E1B0 (_lambda_94a2b8c495758bf3d605ddc865d9a432_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_94a2b8c495758bf3d605ddc865d9a432___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_94a2b8c495758bf3d605ddc865d9a432_::operator()((HSTRING **)(a1 + 16));
  **(_DWORD **)(a1 + 40) = result;
  return result;
}
