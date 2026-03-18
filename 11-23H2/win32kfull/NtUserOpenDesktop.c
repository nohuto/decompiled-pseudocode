/*
 * XREFs of NtUserOpenDesktop @ 0x1C0027F70
 * Callers:
 *     <none>
 * Callees:
 *     _OpenDesktop @ 0x1C0028374 (_OpenDesktop.c)
 *     UserSetLastError @ 0x1C00EDA4C (UserSetLastError.c)
 */

__int64 __fastcall NtUserOpenDesktop(struct _OBJECT_ATTRIBUTES *a1)
{
  __int64 v2; // rbp
  NTSTATUS v3; // eax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  ULONG v9; // eax
  __int64 v10; // [rsp+58h] [rbp+20h] BYREF

  v2 = 0LL;
  v10 = 0LL;
  EnterCrit(0LL, 0LL);
  v3 = OpenDesktop(a1, (__int64)&v10);
  if ( v3 < 0 )
  {
    v9 = RtlNtStatusToDosError(v3);
    UserSetLastError(v9);
  }
  else
  {
    v2 = v10;
  }
  UserSessionSwitchLeaveCrit(v5, v4, v6, v7);
  return v2;
}
