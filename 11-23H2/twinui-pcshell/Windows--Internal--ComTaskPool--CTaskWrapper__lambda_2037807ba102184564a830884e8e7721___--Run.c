/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_2037807ba102184564a830884e8e7721___::Run @ 0x18005EFB0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_d2f504444b1331544961ef61763d2cb7_::operator() @ 0x18005F038 (_lambda_d2f504444b1331544961ef61763d2cb7_--operator().c)
 */

void __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_2037807ba102184564a830884e8e7721___::Run(
        __int64 a1)
{
  int v2; // ebx
  RTL_SRWLOCK *v3; // rcx

  AcquireSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  v2 = *(_DWORD *)(*(_QWORD *)(a1 + 24) + 56LL);
  ReleaseSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  if ( v2 != 2 )
    lambda_d2f504444b1331544961ef61763d2cb7_::operator()(a1 + 32);
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v3 = CApplicationManagerUtility::g_pIAMGlobals;
  --*(_DWORD *)(*(_QWORD *)(a1 + 24) + 212LL);
  ReleaseSRWLockExclusive(v3);
}
