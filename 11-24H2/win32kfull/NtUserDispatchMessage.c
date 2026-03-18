/*
 * XREFs of NtUserDispatchMessage @ 0x140293B90
 * Callers:
 *     <none>
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     UserSetLastError @ 0x14005FE74 (UserSetLastError.c)
 *     SetLastNtError @ 0x1401067E0 (SetLastNtError.c)
 *     xxxDispatchMessage @ 0x1401095B8 (xxxDispatchMessage.c)
 */

__int64 __fastcall NtUserDispatchMessage(__int128 *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rbx
  int v4; // ecx
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rcx
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
  v3 = 0LL;
  if ( (DWORD2(v10) & 0xFFFE0000) != 0 )
  {
    v4 = 87;
  }
  else
  {
    if ( (!(_QWORD)v10
       || (v6 = ValidateHwnd(v10)) == 0
       || (*(_BYTE *)(*(_QWORD *)(v6 + 40) + 18LL) & 4) == 0
       || *(_QWORD *)(*(_QWORD *)(v6 + 16) + 464LL) == *((_QWORD *)PtiCurrent(v7, v2) + 58))
      && (DWORD2(v10) >= 0x400 || !(((unsigned __int16)MessageTable[DWORD2(v10)] >> 13) & 1)) )
    {
      v3 = xxxDispatchMessage((struct tagMSG *)&v10, v2);
      goto LABEL_16;
    }
    v4 = 5;
  }
  UserSetLastError(v4);
LABEL_16:
  UserSessionSwitchLeaveCrit(v5);
  return v3;
}
