/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_0416af504263cdf2899427440ca143d8___::Run @ 0x180423360
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_0416af504263cdf2899427440ca143d8_::operator() @ 0x180418FD8 (_lambda_0416af504263cdf2899427440ca143d8_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_0416af504263cdf2899427440ca143d8___::Run(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  __int64 result; // rax

  result = lambda_0416af504263cdf2899427440ca143d8_::operator()((_QWORD **)(a1 + 16), a2, a3, a4);
  **(_DWORD **)(a1 + 32) = result;
  return result;
}
