/*
 * XREFs of NtUserSetActiveWindow @ 0x1C0091280
 * Callers:
 *     <none>
 * Callees:
 *     ?xxxSetActiveWindow@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C0091324 (-xxxSetActiveWindow@@YAPEAUtagWND@@PEAU1@@Z.c)
 */

__int64 __fastcall NtUserSetActiveWindow(__int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // rdx
  __int64 v4; // rcx
  struct tagWND *v5; // rdi
  __int64 v6; // r8
  __int64 v7; // r9
  struct tagWND *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int128 v13; // [rsp+20h] [rbp-28h] BYREF
  __int64 v14; // [rsp+30h] [rbp-18h]

  v14 = 0LL;
  v13 = 0LL;
  EnterCrit(0LL, 0LL);
  v2 = 0LL;
  if ( a1 )
  {
    v5 = (struct tagWND *)ValidateHwnd(a1);
    if ( !v5 )
      goto LABEL_6;
  }
  else
  {
    v5 = 0LL;
  }
  ThreadLock(v5, &v13);
  v8 = xxxSetActiveWindow(v5);
  if ( v8 )
    v2 = *(_QWORD *)v8;
  ThreadUnlock1(v10, v9, v11);
LABEL_6:
  UserSessionSwitchLeaveCrit(v4, v3, v6, v7);
  return v2;
}
