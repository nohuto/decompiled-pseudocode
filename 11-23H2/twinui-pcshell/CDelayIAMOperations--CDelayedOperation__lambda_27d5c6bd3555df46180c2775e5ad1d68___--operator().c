/*
 * XREFs of CDelayIAMOperations::CDelayedOperation__lambda_27d5c6bd3555df46180c2775e5ad1d68___::operator() @ 0x180060F10
 * Callers:
 *     <none>
 * Callees:
 *     ?OnShellHookMessage@CApplicationManager@@UEAAJ_K_J@Z @ 0x1800C6BA0 (-OnShellHookMessage@CApplicationManager@@UEAAJ_K_J@Z.c)
 */

int __fastcall CDelayIAMOperations::CDelayedOperation__lambda_27d5c6bd3555df46180c2775e5ad1d68___::operator()(
        __int64 a1)
{
  __int64 v1; // rdi
  HWND ForegroundWindow; // rax

  v1 = *(_QWORD *)(a1 + 24);
  ForegroundWindow = GetForegroundWindow();
  if ( ForegroundWindow == (HWND)v1 )
    LODWORD(ForegroundWindow) = CApplicationManager::OnShellHookMessage(
                                  (CApplicationManager *)(*(_QWORD *)(a1 + 16) + 160LL),
                                  0x13uLL,
                                  v1);
  return (int)ForegroundWindow;
}
