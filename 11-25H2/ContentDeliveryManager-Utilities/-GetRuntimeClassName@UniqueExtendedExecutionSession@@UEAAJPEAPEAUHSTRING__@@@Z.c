/*
 * XREFs of ?GetRuntimeClassName@UniqueExtendedExecutionSession@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x18008DBF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HRESULT __fastcall UniqueExtendedExecutionSession::GetRuntimeClassName(
        UniqueExtendedExecutionSession *this,
        HSTRING *a2)
{
  *a2 = 0LL;
  return WindowsCreateString(L"UnlockHelper.UniqueExtendedExecutionSession", 0x2Bu, a2);
}
