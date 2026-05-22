/*
 * XREFs of ?SetDefaultCursorPos@DWMCursorBroker@@UEAAJJJ@Z @ 0x1801C7EF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DWMCursorBroker::SetDefaultCursorPos(DWMCursorBroker *this, int a2, int a3)
{
  __int64 result; // rax

  *((_DWORD *)this + 115) = a2;
  result = 0LL;
  *((_DWORD *)this + 116) = a3;
  return result;
}
