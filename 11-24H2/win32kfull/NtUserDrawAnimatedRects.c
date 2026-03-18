/*
 * XREFs of NtUserDrawAnimatedRects @ 0x140293ED0
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$Win32HMThreadLockBase@UtagWND@@$00$0A@@@QEAA@PEAUtagWND@@@Z @ 0x14003F108 (--0-$Win32HMThreadLockBase@UtagWND@@$00$0A@@@QEAA@PEAUtagWND@@@Z.c)
 *     ??1?$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ @ 0x140040874 (--1-$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ.c)
 *     SetLastNtError @ 0x1401067E0 (SetLastNtError.c)
 *     xxxDrawAnimatedRects @ 0x1402DE074 (xxxDrawAnimatedRects.c)
 */

__int64 __fastcall NtUserDrawAnimatedRects(__int64 a1)
{
  int v2; // ebx
  __int64 v3; // rcx
  struct tagWND *v4; // rdi
  __int64 v5; // rdx
  ULONG_PTR BugCheckParameter3[3]; // [rsp+58h] [rbp-20h] BYREF

  EnterCrit(0LL, 0LL);
  v2 = 0;
  if ( a1 )
  {
    v4 = (struct tagWND *)ValidateHwnd(a1);
    if ( !v4 )
      goto LABEL_6;
  }
  else
  {
    v4 = 0LL;
  }
  Win32HMThreadLockBase<tagWND,1,0>::Win32HMThreadLockBase<tagWND,1,0>(BugCheckParameter3, (__int64)v4);
  v2 = xxxDrawAnimatedRects(v4);
  Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((ULONG_PTR)BugCheckParameter3, v5);
LABEL_6:
  UserSessionSwitchLeaveCrit(v3);
  return v2;
}
