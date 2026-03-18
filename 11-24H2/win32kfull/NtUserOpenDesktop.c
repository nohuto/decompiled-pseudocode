/*
 * XREFs of NtUserOpenDesktop @ 0x1401CE070
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x14005FE74 (UserSetLastError.c)
 *     _OpenDesktop @ 0x1401CE108 (_OpenDesktop.c)
 */

__int64 __fastcall NtUserOpenDesktop(struct _OBJECT_ATTRIBUTES *a1)
{
  __int64 v2; // rbp
  NTSTATUS v3; // eax
  __int64 v4; // rcx
  ULONG v6; // eax
  __int64 v7; // [rsp+58h] [rbp+20h] BYREF

  v2 = 0LL;
  v7 = 0LL;
  EnterCrit(0LL, 0LL);
  v3 = OpenDesktop(a1, (__int64)&v7);
  if ( v3 < 0 )
  {
    v6 = RtlNtStatusToDosError(v3);
    UserSetLastError(v6);
  }
  else
  {
    v2 = v7;
  }
  UserSessionSwitchLeaveCrit(v4);
  return v2;
}
