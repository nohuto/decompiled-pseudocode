/*
 * XREFs of ?xxxSetConsoleCaretInfo@@YAHPEAU_CONSOLE_CARET_INFO@@@Z @ 0x1401EFBD8
 * Callers:
 *     xxxConsoleControl @ 0x14015D510 (xxxConsoleControl.c)
 * Callees:
 *     ??0?$Win32HMThreadLockBase@UtagWND@@$00$0A@@@QEAA@PEAUtagWND@@@Z @ 0x14003F108 (--0-$Win32HMThreadLockBase@UtagWND@@$00$0A@@@QEAA@PEAUtagWND@@@Z.c)
 *     xxxWindowEvent @ 0x1400408B0 (xxxWindowEvent.c)
 *     ??$Win32HM_UnlockFromThread@$00@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z @ 0x1400416B0 (--$Win32HM_UnlockFromThread@$00@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     UserSetLastError @ 0x14005FE74 (UserSetLastError.c)
 */

__int64 __fastcall xxxSetConsoleCaretInfo(struct _CONSOLE_CARET_INFO *a1)
{
  __int64 v2; // rax
  struct tagWND *v3; // rbx
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  struct tagTHREADINFO *v8; // rax
  ULONG_PTR BugCheckParameter3[3]; // [rsp+30h] [rbp-18h] BYREF

  v2 = ValidateHwnd(*(_QWORD *)a1);
  v3 = (struct tagWND *)v2;
  if ( v2 && (v5 = *(_QWORD *)(v2 + 24)) != 0 )
  {
    *(_OWORD *)(v5 + 152) = *(_OWORD *)a1;
    *(_QWORD *)(v5 + 168) = *((_QWORD *)a1 + 2);
    Win32HMThreadLockBase<tagWND,1,0>::Win32HMThreadLockBase<tagWND,1,0>(BugCheckParameter3, (__int64)v3);
    xxxWindowEvent(0x800Bu, v3, -8, 0, 4);
    v8 = PtiCurrent(v7, v6);
    Win32HM_UnlockFromThread<1>((ULONG_PTR)v8, BugCheckParameter3);
    return 1LL;
  }
  else
  {
    UserSetLastError(87);
    return 0LL;
  }
}
