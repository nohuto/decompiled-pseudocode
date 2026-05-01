/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_5a89b6450af0da03016498a5e0f8799e___::Run @ 0x18030A8B0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_67b2f18edae7de11733e212eb4a2dec4_::operator() @ 0x180309AEC (_lambda_67b2f18edae7de11733e212eb4a2dec4_--operator().c)
 */

void __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_5a89b6450af0da03016498a5e0f8799e___::Run(
        __int64 a1)
{
  int v2; // ebx
  RTL_SRWLOCK *v3; // rcx

  AcquireSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  v2 = *(_DWORD *)(*(_QWORD *)(a1 + 24) + 56LL);
  ReleaseSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  if ( v2 != 2 )
    lambda_67b2f18edae7de11733e212eb4a2dec4_::operator()((__int64 *)(a1 + 32));
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v3 = CApplicationManagerUtility::g_pIAMGlobals;
  --*(_DWORD *)(*(_QWORD *)(a1 + 24) + 208LL);
  ReleaseSRWLockExclusive(v3);
}
