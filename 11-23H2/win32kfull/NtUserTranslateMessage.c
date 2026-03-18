/*
 * XREFs of NtUserTranslateMessage @ 0x1C008B1C0
 * Callers:
 *     <none>
 * Callees:
 *     xxxTranslateMessage @ 0x1C008B26C (xxxTranslateMessage.c)
 *     UserSetLastError @ 0x1C00EDA4C (UserSetLastError.c)
 */

__int64 __fastcall NtUserTranslateMessage(__int128 *a1, unsigned int a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  int v8; // ebx
  __int128 v10; // [rsp+38h] [rbp-40h] BYREF
  __int128 v11; // [rsp+48h] [rbp-30h]
  __int128 v12; // [rsp+58h] [rbp-20h]

  v10 = 0LL;
  v11 = 0LL;
  v12 = 0LL;
  EnterCrit(0LL, 0LL);
  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    a1 = (__int128 *)MmUserProbeAddress;
  v10 = *a1;
  v11 = a1[1];
  v12 = a1[2];
  v8 = 0;
  if ( ValidateHwnd(v10) )
    v8 = xxxTranslateMessage(&v10, a2);
  UserSessionSwitchLeaveCrit(v5, v4, v6, v7);
  return v8;
}
