/*
 * XREFs of NtUserRedrawFrameAndHook @ 0x1C01D86A0
 * Callers:
 *     <none>
 * Callees:
 *     xxxRedrawFrameAndHook @ 0x1C022716C (xxxRedrawFrameAndHook.c)
 */

__int64 __fastcall NtUserRedrawFrameAndHook(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  int v7; // ebx
  __int64 v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int128 v13; // [rsp+20h] [rbp-28h] BYREF
  __int64 v14; // [rsp+30h] [rbp-18h]

  v14 = 0LL;
  v13 = 0LL;
  EnterCrit(0LL, 0LL);
  v2 = ValidateHwnd(a1);
  v7 = 0;
  v8 = v2;
  if ( v2 )
  {
    *(_QWORD *)&v13 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v13;
    *((_QWORD *)&v13 + 1) = v2;
    HMLockObject(v2);
    v7 = xxxRedrawFrameAndHook(v8);
    ThreadUnlock1(v10, v9, v11);
  }
  UserSessionSwitchLeaveCrit(v4, v3, v5, v6);
  return v7;
}
