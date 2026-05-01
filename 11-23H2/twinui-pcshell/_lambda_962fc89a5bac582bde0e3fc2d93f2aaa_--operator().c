/*
 * XREFs of _lambda_962fc89a5bac582bde0e3fc2d93f2aaa_::operator() @ 0x180397644
 * Callers:
 *     CDelayIAMOperations::CDelayedOperation__lambda_962fc89a5bac582bde0e3fc2d93f2aaa___::operator() @ 0x1803977C0 (CDelayIAMOperations--CDelayedOperation__lambda_962fc89a5bac582bde0e3fc2d93f2aaa___--operator().c)
 *     ?SetForegroundWindowSafe@CApplicationManager@@UEAAXPEAUHWND__@@@Z @ 0x1803A02F0 (-SetForegroundWindowSafe@CApplicationManager@@UEAAXPEAUHWND__@@@Z.c)
 * Callees:
 *     ?SetForegroundWindow@CApplicationManagerUtility@@YAJPEAUHWND__@@@Z @ 0x18000B8A8 (-SetForegroundWindow@CApplicationManagerUtility@@YAJPEAUHWND__@@@Z.c)
 *     ?CanChangeForeground@@YAJXZ @ 0x1800117AC (-CanChangeForeground@@YAJXZ.c)
 */

__int64 __fastcall lambda_962fc89a5bac582bde0e3fc2d93f2aaa_::operator()(CApplicationManagerUtility **a1)
{
  __int64 result; // rax
  HWND v3; // rdx

  result = CanChangeForeground();
  if ( (int)result >= 0 )
    return CApplicationManagerUtility::SetForegroundWindow(*a1, v3);
  return result;
}
