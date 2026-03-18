/*
 * XREFs of NtUserSetCapture @ 0x140089770
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$Win32HMThreadLockBase@UtagWND@@$00$0A@@@QEAA@PEAUtagWND@@@Z @ 0x14003F108 (--0-$Win32HMThreadLockBase@UtagWND@@$00$0A@@@QEAA@PEAUtagWND@@@Z.c)
 *     ??$Win32HM_UnlockFromThread@$00@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z @ 0x1400416B0 (--$Win32HM_UnlockFromThread@$00@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     xxxSetCapture @ 0x140089F18 (xxxSetCapture.c)
 */

__int64 __fastcall NtUserSetCapture(__int64 a1)
{
  __int64 v2; // rbx
  struct tagWND *v3; // rdi
  __int64 *v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  struct tagTHREADINFO *v7; // rax
  ULONG_PTR BugCheckParameter3[3]; // [rsp+20h] [rbp-18h] BYREF

  EnterCrit(0LL, 0LL);
  v2 = 0LL;
  if ( a1 )
  {
    v3 = (struct tagWND *)ValidateHwnd(a1);
    if ( !v3 )
      goto LABEL_6;
  }
  else
  {
    v3 = 0LL;
  }
  Win32HMThreadLockBase<tagWND,1,0>::Win32HMThreadLockBase<tagWND,1,0>(BugCheckParameter3, (__int64)v3);
  v4 = (__int64 *)xxxSetCapture(v3);
  if ( v4 )
    v2 = *v4;
  v7 = PtiCurrent(v6, v5);
  Win32HM_UnlockFromThread<1>((ULONG_PTR)v7, BugCheckParameter3);
LABEL_6:
  UserSessionSwitchLeaveCrit();
  return v2;
}
