/*
 * XREFs of NtUserPaintDesktop @ 0x1C01D76A0
 * Callers:
 *     <none>
 * Callees:
 *     xxxInternalPaintDesktop @ 0x1C0095728 (xxxInternalPaintDesktop.c)
 *     UserSetLastError @ 0x1C00EDA4C (UserSetLastError.c)
 */

__int64 __fastcall NtUserPaintDesktop(HDC a1)
{
  int v2; // ebx
  __int64 v3; // rax
  __int64 v4; // rdi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  _QWORD v13[5]; // [rsp+20h] [rbp-28h] BYREF

  EnterCrit(0LL, 0LL);
  v2 = 0;
  v3 = *(_QWORD *)(gptiCurrent + 456LL);
  if ( v3 )
  {
    v4 = *(_QWORD *)(*(_QWORD *)(v3 + 8) + 24LL);
    v13[0] = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = v13;
    v13[2] = 0LL;
    v13[1] = v4;
    if ( v4 )
      HMLockObject(v4);
    v2 = xxxInternalPaintDesktop(v4, a1, 1);
    ThreadUnlock1(v6, v5, v7);
  }
  else
  {
    UserSetLastError(0);
  }
  UserSessionSwitchLeaveCrit(v9, v8, v10, v11);
  return v2;
}
