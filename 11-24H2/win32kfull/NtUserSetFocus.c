/*
 * XREFs of NtUserSetFocus @ 0x140183290
 * Callers:
 *     <none>
 * Callees:
 *     ??$Win32HM_UnlockFromThread@$00@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z @ 0x1400416B0 (--$Win32HM_UnlockFromThread@$00@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ?xxxSetFocus@@YAPEAUtagWND@@PEAU1@@Z @ 0x140183378 (-xxxSetFocus@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     W32GetCurrentThreadNonPaged @ 0x14026E814 (W32GetCurrentThreadNonPaged.c)
 */

__int64 __fastcall NtUserSetFocus(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  ULONG_PTR v4; // rbx
  struct tagWND *v5; // rdi
  __int64 *CurrentThreadNonPaged; // rax
  __int64 v7; // rcx
  struct tagWND *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdi
  ULONG_PTR *v12; // rax
  ULONG_PTR BugCheckParameter3[3]; // [rsp+20h] [rbp-18h] BYREF

  EnterCrit(0LL, 0LL);
  v4 = 0LL;
  if ( a1 )
  {
    v5 = (struct tagWND *)ValidateHwnd(a1);
    if ( !v5 )
    {
      v11 = 0LL;
      goto LABEL_12;
    }
  }
  else
  {
    v5 = 0LL;
  }
  CurrentThreadNonPaged = (__int64 *)W32GetCurrentThreadNonPaged(v3, v2);
  if ( CurrentThreadNonPaged )
    v7 = *CurrentThreadNonPaged;
  else
    v7 = 0LL;
  BugCheckParameter3[0] = *(_QWORD *)(v7 + 456);
  *(_QWORD *)(v7 + 456) = BugCheckParameter3;
  BugCheckParameter3[1] = (ULONG_PTR)v5;
  if ( v5 )
    HMLockObject(v5);
  v8 = xxxSetFocus(v5);
  v11 = 0LL;
  if ( v8 )
    v11 = *(_QWORD *)v8;
  v12 = (ULONG_PTR *)W32GetCurrentThreadNonPaged(v10, v9);
  if ( v12 )
    v4 = *v12;
  Win32HM_UnlockFromThread<1>(v4, BugCheckParameter3);
LABEL_12:
  UserSessionSwitchLeaveCrit(v3);
  return v11;
}
