/*
 * XREFs of _lambda_4c487b8ddfbb456201be9b3312a7435d_::operator() @ 0x1802C2A30
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_4c487b8ddfbb456201be9b3312a7435d___::Run @ 0x1802CFC00 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_4c487b8ddfbb456201be9b3312a7435d___--Run.c)
 * Callees:
 *     ?_UpdateMinSizePreferences@CFrameApplicationPresentation@@AEAAJPEAUHWND__@@@Z @ 0x1800C7B48 (-_UpdateMinSizePreferences@CFrameApplicationPresentation@@AEAAJPEAUHWND__@@@Z.c)
 */

void __fastcall lambda_4c487b8ddfbb456201be9b3312a7435d_::operator()(__int64 a1)
{
  int v2; // ebx
  RTL_SRWLOCK *v3; // rcx

  AcquireSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  v2 = *(_DWORD *)(*(_QWORD *)(a1 + 8) + 56LL);
  ReleaseSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  if ( v2 != 2 )
    CFrameApplicationPresentation::_UpdateMinSizePreferences(
      *(CFrameApplicationPresentation **)(a1 + 16),
      *(HWND *)(a1 + 24));
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v3 = CApplicationManagerUtility::g_pIAMGlobals;
  --*(_DWORD *)(*(_QWORD *)(a1 + 8) + 208LL);
  ReleaseSRWLockExclusive(v3);
}
