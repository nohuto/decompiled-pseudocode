/*
 * XREFs of ?ClearPointerListEntries@CInputManager@@SAXI@Z @ 0x14006B3D4
 * Callers:
 *     ?Shutdown@CApplicationChannel@DirectComposition@@MEAAXXZ @ 0x14006CA40 (-Shutdown@CApplicationChannel@DirectComposition@@MEAAXXZ.c)
 * Callees:
 *     ?W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x14006B060 (-W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x14006B0F4 (-W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     _anonymous_namespace_::SGCINPUTMGRg_pInputManager_CInputManager___::operator_bool @ 0x14006C0AC (_anonymous_namespace_--SGCINPUTMGRg_pInputManager_CInputManager___--operator_bool.c)
 *     ?RemoveAt@?$CStructDynamicArray@UPointerCaptureInfo@CInputManager@@@@QEAAXI@Z @ 0x14006CD18 (-RemoveAt@-$CStructDynamicArray@UPointerCaptureInfo@CInputManager@@@@QEAAXI@Z.c)
 */

void __fastcall CInputManager::ClearPointerListEntries(int a1)
{
  __int64 v2; // rdi
  __int64 v3; // rbx
  _QWORD *UserInputMgrSessionState; // rax

  v2 = 0LL;
  if ( (unsigned __int8)anonymous_namespace_::SGCINPUTMGRg_pInputManager_CInputManager___::operator_bool() )
  {
    v3 = *(_QWORD *)W32GetUserInputMgrSessionState();
    W32AcquirePushLockExclusiveEx((struct W32_PUSH_LOCK *)(v3 + 32), 0);
    if ( *(_DWORD *)(*(_QWORD *)W32GetUserInputMgrSessionState() + 24LL) )
    {
      do
      {
        if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)W32GetUserInputMgrSessionState() + 16LL) + 8 * v2) + 4LL) == a1 )
        {
          UserInputMgrSessionState = (_QWORD *)W32GetUserInputMgrSessionState();
          CStructDynamicArray<CInputManager::PointerCaptureInfo>::RemoveAt(
            *UserInputMgrSessionState + 16LL,
            (unsigned int)v2);
        }
        else
        {
          v2 = (unsigned int)(v2 + 1);
        }
      }
      while ( (unsigned int)v2 < *(_DWORD *)(*(_QWORD *)W32GetUserInputMgrSessionState() + 24LL) );
    }
    W32ReleasePushLockExclusiveEx((struct W32_PUSH_LOCK *)(v3 + 32), 0LL);
  }
}
