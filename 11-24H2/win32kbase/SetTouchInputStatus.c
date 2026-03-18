/*
 * XREFs of SetTouchInputStatus @ 0x1401B6AB0
 * Callers:
 *     WritePointerDeviceSettings @ 0x1401B6B80 (WritePointerDeviceSettings.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SetTouchInputStatus(__int64 a1)
{
  bool v1; // bl
  __int64 result; // rax

  v1 = (_DWORD)a1 != 0;
  result = W32GetUserSessionState(a1);
  *(_BYTE *)(result + 184) = v1;
  return result;
}
