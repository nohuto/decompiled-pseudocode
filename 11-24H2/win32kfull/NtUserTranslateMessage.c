/*
 * XREFs of NtUserTranslateMessage @ 0x140067380
 * Callers:
 *     <none>
 * Callees:
 *     xxxTranslateMessage @ 0x14006742C (xxxTranslateMessage.c)
 *     SetLastNtError @ 0x1401067E0 (SetLastNtError.c)
 */

__int64 __fastcall NtUserTranslateMessage(__int128 *a1, unsigned int a2)
{
  int v4; // ebx
  __int128 v6; // [rsp+38h] [rbp-40h] BYREF
  __int128 v7; // [rsp+48h] [rbp-30h]
  __int128 v8; // [rsp+58h] [rbp-20h]

  v6 = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  EnterCrit(0LL, 0LL);
  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    a1 = (__int128 *)MmUserProbeAddress;
  v6 = *a1;
  v7 = a1[1];
  v8 = a1[2];
  v4 = 0;
  if ( ValidateHwnd(v6) )
    v4 = xxxTranslateMessage(&v6, a2);
  UserSessionSwitchLeaveCrit();
  return v4;
}
