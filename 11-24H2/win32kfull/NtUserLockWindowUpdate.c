/*
 * XREFs of NtUserLockWindowUpdate @ 0x14020A3A0
 * Callers:
 *     <none>
 * Callees:
 *     zzzLockWindowUpdate2 @ 0x140097CA0 (zzzLockWindowUpdate2.c)
 */

__int64 __fastcall NtUserLockWindowUpdate(__int64 a1)
{
  int v2; // ebx
  struct tagWND *v3; // rax
  __int64 v4; // rcx

  EnterCrit(0LL, 0LL);
  v2 = 0;
  if ( !a1 )
  {
    v3 = 0LL;
    goto LABEL_4;
  }
  v3 = (struct tagWND *)ValidateHwnd(a1);
  if ( v3 )
LABEL_4:
    v2 = zzzLockWindowUpdate2(v3, 0LL);
  UserSessionSwitchLeaveCrit(v4);
  return v2;
}
