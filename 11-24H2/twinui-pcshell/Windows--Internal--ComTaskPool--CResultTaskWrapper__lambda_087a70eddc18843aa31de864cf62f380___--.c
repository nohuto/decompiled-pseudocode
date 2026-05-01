/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_087a70eddc18843aa31de864cf62f380___::Run @ 0x180441E80
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_087a70eddc18843aa31de864cf62f380_::operator() @ 0x18043D1C4 (_lambda_087a70eddc18843aa31de864cf62f380_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_087a70eddc18843aa31de864cf62f380___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_087a70eddc18843aa31de864cf62f380_::operator()((_QWORD *)(a1 + 16));
  **(_DWORD **)(a1 + 32) = result;
  return result;
}
