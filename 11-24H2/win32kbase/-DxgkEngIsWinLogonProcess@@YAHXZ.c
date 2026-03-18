/*
 * XREFs of ?DxgkEngIsWinLogonProcess@@YAHXZ @ 0x1401CCF40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall DxgkEngIsWinLogonProcess(__int64 a1)
{
  HANDLE v1; // rbx

  v1 = *(HANDLE *)(W32GetUserSessionState(a1) + 63584);
  return PsGetCurrentProcessId() == v1;
}
