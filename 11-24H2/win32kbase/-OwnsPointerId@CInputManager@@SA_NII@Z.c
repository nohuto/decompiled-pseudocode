/*
 * XREFs of ?OwnsPointerId@CInputManager@@SA_NII@Z @ 0x140146B50
 * Callers:
 *     ?ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z @ 0x14009C810 (-ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z.c)
 * Callees:
 *     ?W32AcquirePushLockSharedEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x140069000 (-W32AcquirePushLockSharedEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     _anonymous_namespace_::SGCINPUTMGRg_pInputManager_CInputManager___::operator_bool @ 0x14006C0AC (_anonymous_namespace_--SGCINPUTMGRg_pInputManager_CInputManager___--operator_bool.c)
 */

bool __fastcall CInputManager::OwnsPointerId(int a1, int a2)
{
  bool v4; // di
  __int64 v5; // rbx
  unsigned int i; // esi

  v4 = 0;
  if ( anonymous_namespace_::SGCINPUTMGRg_pInputManager_CInputManager___::operator_bool() )
  {
    v5 = *(_QWORD *)W32GetUserInputMgrSessionState();
    W32AcquirePushLockSharedEx((struct W32_PUSH_LOCK *)(v5 + 32), 0);
    for ( i = 0; i < *(_DWORD *)(*(_QWORD *)W32GetUserInputMgrSessionState() + 24LL); ++i )
    {
      if ( **(_DWORD **)(*(_QWORD *)(*(_QWORD *)W32GetUserInputMgrSessionState() + 16LL) + 8LL * i) == a2 )
      {
        _mm_lfence();
        v4 = a1 == *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)W32GetUserInputMgrSessionState() + 16LL) + 8LL * i)
                             + 4LL);
        break;
      }
    }
    ExReleasePushLockSharedEx(v5 + 32, 0LL);
    KeLeaveCriticalRegion();
  }
  return v4;
}
