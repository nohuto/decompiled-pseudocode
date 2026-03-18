/*
 * XREFs of NtUserDispatchMessage @ 0x1C01184E0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00EDA4C (UserSetLastError.c)
 *     xxxDispatchMessage @ 0x1C01185F4 (xxxDispatchMessage.c)
 */

__int64 __fastcall NtUserDispatchMessage(__int128 *a1)
{
  __int64 v2; // rbx
  int v3; // ecx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rax
  __int128 v11; // [rsp+38h] [rbp-40h] BYREF
  __int128 v12; // [rsp+48h] [rbp-30h]
  __int128 v13; // [rsp+58h] [rbp-20h]

  v11 = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  EnterCrit(0LL, 0LL);
  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    a1 = (__int128 *)MmUserProbeAddress;
  v11 = *a1;
  v12 = a1[1];
  v13 = a1[2];
  v2 = 0LL;
  if ( (DWORD2(v11) & 0xFFFE0000) != 0 )
  {
    v3 = 87;
  }
  else
  {
    if ( (!(_QWORD)v11
       || (v8 = ValidateHwnd(v11)) == 0
       || (*(_BYTE *)(*(_QWORD *)(v8 + 40) + 18LL) & 4) == 0
       || *(_QWORD *)(*(_QWORD *)(v8 + 16) + 424LL) == *(_QWORD *)(gptiCurrent + 424LL))
      && (DWORD2(v11) >= 0x400 || !(((unsigned __int16)MessageTable[DWORD2(v11)] >> 13) & 1)) )
    {
      v2 = xxxDispatchMessage(&v11);
      goto LABEL_16;
    }
    v3 = 5;
  }
  UserSetLastError(v3);
LABEL_16:
  UserSessionSwitchLeaveCrit(v5, v4, v6, v7);
  return v2;
}
