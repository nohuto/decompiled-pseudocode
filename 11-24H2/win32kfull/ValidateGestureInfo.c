/*
 * XREFs of ValidateGestureInfo @ 0x14026CA44
 * Callers:
 *     SendGestureMessage @ 0x1402186E8 (SendGestureMessage.c)
 *     NtUserInjectGesture @ 0x140298D20 (NtUserInjectGesture.c)
 * Callees:
 *     UserSetLastError @ 0x14005FE74 (UserSetLastError.c)
 */

__int64 __fastcall ValidateGestureInfo(_DWORD *a1)
{
  if ( *a1 == 56 && a1[7] && a1[12] <= 0x400u )
    return 1LL;
  UserSetLastError(87);
  return 0LL;
}
