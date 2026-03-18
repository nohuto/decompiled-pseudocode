/*
 * XREFs of ?UpdatePointerCapture@CInputManager@@SAJII@Z @ 0x14006C7C0
 * Callers:
 *     NtDCompositionUpdatePointerCapture @ 0x14006CCC0 (NtDCompositionUpdatePointerCapture.c)
 * Callees:
 *     ?W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x14006B060 (-W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x14006B0F4 (-W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     _anonymous_namespace_::SGCINPUTMGRg_pInputManager_CInputManager___::operator_bool @ 0x14006C0AC (_anonymous_namespace_--SGCINPUTMGRg_pInputManager_CInputManager___--operator_bool.c)
 *     ?RemoveAt@?$CStructDynamicArray@UPointerCaptureInfo@CInputManager@@@@QEAAXI@Z @ 0x14006CD18 (-RemoveAt@-$CStructDynamicArray@UPointerCaptureInfo@CInputManager@@@@QEAAXI@Z.c)
 *     ?InsertAt@?$CStructDynamicArray@UPointerCaptureInfo@CInputManager@@@@QEAAJAEBUPointerCaptureInfo@CInputManager@@I@Z @ 0x14014F1FC (-InsertAt@-$CStructDynamicArray@UPointerCaptureInfo@CInputManager@@@@QEAAJAEBUPointerCaptureInfo.c)
 */

__int64 __fastcall CInputManager::UpdatePointerCapture(int a1, int a2)
{
  unsigned int v2; // edi
  unsigned int v4; // esi
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v9; // rdi
  __int64 UserInputMgrSessionState; // rax
  int v11; // [rsp+50h] [rbp+18h] BYREF
  int v12; // [rsp+54h] [rbp+1Ch]

  v2 = 0;
  v4 = 0;
  if ( anonymous_namespace_::SGCINPUTMGRg_pInputManager_CInputManager___::operator_bool() )
  {
    v6 = *(_QWORD *)W32GetUserInputMgrSessionState();
    W32AcquirePushLockExclusiveEx((struct W32_PUSH_LOCK *)(v6 + 32), 0);
    if ( *(_DWORD *)(*(_QWORD *)W32GetUserInputMgrSessionState() + 24LL) )
    {
      do
      {
        if ( **(_DWORD **)(*(_QWORD *)(*(_QWORD *)W32GetUserInputMgrSessionState() + 16LL) + 8LL * v4) == a2 )
          break;
        ++v4;
      }
      while ( v4 < *(_DWORD *)(*(_QWORD *)W32GetUserInputMgrSessionState() + 24LL) );
    }
    if ( v4 >= *(_DWORD *)(*(_QWORD *)W32GetUserInputMgrSessionState() + 24LL) )
    {
      if ( a1 )
      {
        v9 = *(_QWORD *)W32GetUserInputMgrSessionState();
        UserInputMgrSessionState = W32GetUserInputMgrSessionState();
        v11 = a2;
        v12 = a1;
        v2 = CStructDynamicArray<CInputManager::PointerCaptureInfo>::InsertAt(
               v9 + 16,
               &v11,
               *(unsigned int *)(*(_QWORD *)UserInputMgrSessionState + 24LL));
      }
    }
    else
    {
      v7 = W32GetUserInputMgrSessionState();
      if ( a1 )
        *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v7 + 16LL) + 8LL * v4) + 4LL) = a1;
      else
        CStructDynamicArray<CInputManager::PointerCaptureInfo>::RemoveAt(*(_QWORD *)v7 + 16LL, v4);
    }
    W32ReleasePushLockExclusiveEx((struct W32_PUSH_LOCK *)(v6 + 32), 0LL);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v2;
}
