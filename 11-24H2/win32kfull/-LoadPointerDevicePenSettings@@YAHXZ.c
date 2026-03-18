/*
 * XREFs of ?LoadPointerDevicePenSettings@@YAHXZ @ 0x140212D1C
 * Callers:
 *     ReadPointerDeviceSettingsFull @ 0x14024DD74 (ReadPointerDeviceSettingsFull.c)
 *     GetPenDoubleClickTime @ 0x1402681A4 (GetPenDoubleClickTime.c)
 *     GetPenHoldTime @ 0x1402ACBF0 (GetPenHoldTime.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall LoadPointerDevicePenSettings(__int64 a1, __int64 a2)
{
  __int64 UserSessionState; // rbx
  __int64 result; // rax

  UserSessionState = W32GetUserSessionState(a1, a2);
  result = GetDWORDSettingValues(4LL, *(_QWORD *)(UserSessionState + 18264), 10LL);
  if ( (_DWORD)result )
  {
    result = 1LL;
    *(_DWORD *)(UserSessionState + 18256) = 1;
  }
  return result;
}
