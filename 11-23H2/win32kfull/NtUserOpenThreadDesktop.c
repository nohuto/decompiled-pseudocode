/*
 * XREFs of NtUserOpenThreadDesktop @ 0x1C0091AA0
 * Callers:
 *     <none>
 * Callees:
 *     _OpenThreadDesktop @ 0x1C0091B34 (_OpenThreadDesktop.c)
 *     UserSetLastError @ 0x1C00EDA4C (UserSetLastError.c)
 */

__int64 __fastcall NtUserOpenThreadDesktop(int a1, int a2, int a3, int a4)
{
  __int64 v6; // r14
  NTSTATUS v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  ULONG v15; // eax
  _QWORD v16[3]; // [rsp+30h] [rbp-18h] BYREF

  v6 = 0LL;
  v16[0] = 0LL;
  EnterCrit(0LL, 0LL);
  v9 = OpenThreadDesktop(a1, a2, a3, a4, v16);
  if ( v9 < 0 )
  {
    v15 = RtlNtStatusToDosError(v9);
    UserSetLastError(v15);
  }
  else
  {
    v6 = v16[0];
  }
  UserSessionSwitchLeaveCrit(v11, v10, v12, v13);
  return v6;
}
