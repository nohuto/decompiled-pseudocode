/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_6df05c95eefd3a852cd1630e41907728___::Run @ 0x18030A9D0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_ffa95d5ea910b6ca98d895ec7ec1025e_::operator() @ 0x18030A098 (_lambda_ffa95d5ea910b6ca98d895ec7ec1025e_--operator().c)
 */

void __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_6df05c95eefd3a852cd1630e41907728___::Run(
        __int64 a1)
{
  int v2; // ebx
  RTL_SRWLOCK *v3; // rcx

  AcquireSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  v2 = *(_DWORD *)(*(_QWORD *)(a1 + 24) + 56LL);
  ReleaseSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  if ( v2 != 2 )
    lambda_ffa95d5ea910b6ca98d895ec7ec1025e_::operator()((_QWORD *)(a1 + 32));
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v3 = CApplicationManagerUtility::g_pIAMGlobals;
  --*(_DWORD *)(*(_QWORD *)(a1 + 24) + 208LL);
  ReleaseSRWLockExclusive(v3);
}
