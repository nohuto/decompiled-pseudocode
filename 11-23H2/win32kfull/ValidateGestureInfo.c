/*
 * XREFs of ValidateGestureInfo @ 0x1C02042A0
 * Callers:
 *     NtUserInjectGesture @ 0x1C01D49F0 (NtUserInjectGesture.c)
 *     SendGestureMessage @ 0x1C0203FA4 (SendGestureMessage.c)
 * Callees:
 *     UserSetLastError @ 0x1C00EDA4C (UserSetLastError.c)
 */

__int64 __fastcall ValidateGestureInfo(_DWORD *a1)
{
  if ( *a1 == 56 && a1[7] && a1[12] <= 0x400u )
    return 1LL;
  UserSetLastError(87);
  return 0LL;
}
