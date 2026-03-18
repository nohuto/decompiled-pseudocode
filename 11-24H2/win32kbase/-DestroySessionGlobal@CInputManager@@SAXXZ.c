/*
 * XREFs of ?DestroySessionGlobal@CInputManager@@SAXXZ @ 0x140239FA0
 * Callers:
 *     <none>
 * Callees:
 *     ??_GCInputManager@@QEAAPEAXI@Z @ 0x140239F6C (--_GCInputManager@@QEAAPEAXI@Z.c)
 */

void CInputManager::DestroySessionGlobal(void)
{
  char **UserInputMgrSessionState; // rbx

  UserInputMgrSessionState = (char **)W32GetUserInputMgrSessionState();
  if ( *UserInputMgrSessionState )
  {
    CInputManager::`scalar deleting destructor'(*UserInputMgrSessionState);
    *UserInputMgrSessionState = 0LL;
  }
}
