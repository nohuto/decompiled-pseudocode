/*
 * XREFs of NtUserSetMirrorRendering @ 0x14029DFE0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x1400616D0 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     ??$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x140076C10 (--$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     GreDisableMirrorRendering @ 0x14032EB98 (GreDisableMirrorRendering.c)
 *     GreEnableMirrorRendering @ 0x14032ECBC (GreEnableMirrorRendering.c)
 */

__int64 __fastcall NtUserSetMirrorRendering(__int64 a1, int a2)
{
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rcx
  int v7; // edi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rcx
  int v11; // eax
  __int64 v12; // rdx
  ULONG_PTR BugCheckParameter3[3]; // [rsp+20h] [rbp-18h] BYREF

  v4 = EnterCrit(0LL, 0LL);
  v5 = ValidateHwnd(a1);
  v7 = 0;
  if ( v5 && (((*(_WORD *)(*(_QWORD *)(v5 + 40) + 42LL) & 0x2FFF) - 669) & 0xFFFFFFFD) != 0 )
  {
    Win32HM_LockIntoThread<0>(v4, v5, BugCheckParameter3);
    v10 = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v9, v8) + 57008) + 48LL);
    if ( a2 )
      v11 = GreEnableMirrorRendering(v10, a1);
    else
      v11 = GreDisableMirrorRendering(v10, a1);
    v7 = v11;
    Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>((ULONG_PTR)BugCheckParameter3, v12);
  }
  UserSessionSwitchLeaveCrit(v6);
  return v7;
}
