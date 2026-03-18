/*
 * XREFs of NtUserEndDeferWindowPosEx @ 0x1C0086970
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandle @ 0x1C0049CA8 (HMValidateHandle.c)
 *     UserSetLastError @ 0x1C00EDA4C (UserSetLastError.c)
 *     xxxEndDeferWindowPosEx @ 0x1C01236C0 (xxxEndDeferWindowPosEx.c)
 */

__int64 __fastcall NtUserEndDeferWindowPosEx(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  int v7; // ebx
  struct tagSMWP *v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int128 v13; // [rsp+20h] [rbp-28h] BYREF
  __int64 v14; // [rsp+30h] [rbp-18h]

  v14 = 0LL;
  v13 = 0LL;
  EnterCrit(0LL, 0LL);
  v2 = HMValidateHandle(a1, 4u);
  v7 = 0;
  v8 = (struct tagSMWP *)v2;
  if ( v2 )
  {
    if ( (*(_DWORD *)(v2 + 24) & 4) != 0 )
    {
      UserSetLastError(1405LL);
    }
    else
    {
      ThreadLockAlways(v2, &v13);
      v7 = xxxEndDeferWindowPosEx(v8);
      ThreadUnlock1(v10, v9, v11);
    }
  }
  UserSessionSwitchLeaveCrit(v4, v3, v5, v6);
  return v7;
}
