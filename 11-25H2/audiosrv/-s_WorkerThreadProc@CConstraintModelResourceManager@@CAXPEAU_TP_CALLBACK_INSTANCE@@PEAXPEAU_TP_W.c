/*
 * XREFs of ?s_WorkerThreadProc@CConstraintModelResourceManager@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WAIT@@J@Z @ 0x180059950
 * Callers:
 *     <none>
 * Callees:
 *     ?WorkItemThreadProc@CConstraintModelResourceManager@@AEAAXXZ @ 0x180059DDC (-WorkItemThreadProc@CConstraintModelResourceManager@@AEAAXXZ.c)
 */

void __fastcall CConstraintModelResourceManager::s_WorkerThreadProc(
        PTP_CALLBACK_INSTANCE Instance,
        char *Context,
        PTP_WAIT Wait,
        TP_WAIT_RESULT WaitResult)
{
  HRESULT v6; // ebx

  v6 = CoInitializeEx(0LL, 0);
  CConstraintModelResourceManager::WorkItemThreadProc((CConstraintModelResourceManager *)Context);
  if ( v6 >= 0 )
    CoUninitialize();
  EnterCriticalSection((LPCRITICAL_SECTION)(Context + 192));
  if ( !*((_DWORD *)Context + 70) )
    SetThreadpoolWait(Wait, *((HANDLE *)Context + 23), 0LL);
  LeaveCriticalSection((LPCRITICAL_SECTION)(Context + 192));
}
