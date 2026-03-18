/*
 * XREFs of NtUserSetWindowPlacement @ 0x1C00D8660
 * Callers:
 *     <none>
 * Callees:
 *     xxxSetWindowPlacement @ 0x1C00D87B8 (xxxSetWindowPlacement.c)
 *     UserSetLastError @ 0x1C00EDA4C (UserSetLastError.c)
 */

__int64 __fastcall NtUserSetWindowPlacement(__int64 a1, ULONG64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  struct tagWND *v9; // rdi
  int v10; // ebx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int128 v15; // [rsp+38h] [rbp-50h] BYREF
  __int64 v16; // [rsp+48h] [rbp-40h]
  __int128 v17; // [rsp+50h] [rbp-38h]
  __int128 v18; // [rsp+60h] [rbp-28h]
  __int64 v19; // [rsp+70h] [rbp-18h]
  int v20; // [rsp+78h] [rbp-10h]

  v17 = 0LL;
  v18 = 0LL;
  v19 = 0LL;
  v20 = 0;
  v15 = 0LL;
  v16 = 0LL;
  EnterCrit(0LL, 0LL);
  v4 = ValidateHwnd(a1);
  v9 = (struct tagWND *)v4;
  v10 = 0;
  if ( v4 )
  {
    v6 = (*(_WORD *)(*(_QWORD *)(v4 + 40) + 42LL) & 0x2FFFu) - 669;
    if ( (v6 & 0xFFFFFFFD) != 0 )
    {
      *(_QWORD *)&v15 = *(_QWORD *)(gptiCurrent + 416LL);
      *(_QWORD *)(gptiCurrent + 416LL) = &v15;
      *((_QWORD *)&v15 + 1) = v4;
      HMLockObject(v4);
      if ( a2 >= MmUserProbeAddress )
        a2 = MmUserProbeAddress;
      v17 = *(_OWORD *)a2;
      v18 = *(_OWORD *)(a2 + 16);
      v19 = *(_QWORD *)(a2 + 32);
      v20 = *(_DWORD *)(a2 + 40);
      if ( (_DWORD)v17 == 44 || *(_WORD *)(gptiCurrent + 632LL) < 0x400u )
        v10 = xxxSetWindowPlacement(v9);
      else
        UserSetLastError(87LL);
      ThreadUnlock1(v12, v11, v13);
    }
  }
  UserSessionSwitchLeaveCrit(v6, v5, v7, v8);
  return v10;
}
