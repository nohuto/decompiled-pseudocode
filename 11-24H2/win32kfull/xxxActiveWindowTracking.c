/*
 * XREFs of xxxActiveWindowTracking @ 0x140187404
 * Callers:
 *     ?xxxMouseActivate@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@PEBUtagQMSG@@H@Z @ 0x140237020 (-xxxMouseActivate@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@PEBUtagQMSG@@H@Z.c)
 *     ?xxxDWP_SetCursor@@YAHPEAUtagWND@@PEAUHWND__@@HI@Z @ 0x140252880 (-xxxDWP_SetCursor@@YAHPEAUtagWND@@PEAUHWND__@@HI@Z.c)
 * Callees:
 *     xxxSendMessage @ 0x140042030 (xxxSendMessage.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??1?$Win32HMOptionalThreadLockAlways@UtagMENU@@@@QEAA@XZ @ 0x140061700 (--1-$Win32HMOptionalThreadLockAlways@UtagMENU@@@@QEAA@XZ.c)
 *     ??$Win32HM_UnlockFromThread@$0A@@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z @ 0x140061734 (--$Win32HM_UnlockFromThread@$0A@@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ??$ManualLock@X@?$Win32HMThreadLockBase@UtagWND@@$0A@$00@@QEAAXPEAUtagWND@@@Z @ 0x140183E08 (--$ManualLock@X@-$Win32HMThreadLockBase@UtagWND@@$0A@$00@@QEAAXPEAUtagWND@@@Z.c)
 *     IsForegroundLocked @ 0x1401886A0 (IsForegroundLocked.c)
 *     ?xxxTrackingActivateWindow@@YA_NPEAUtagWND@@@Z @ 0x14027774C (-xxxTrackingActivateWindow@@YA_NPEAUtagWND@@@Z.c)
 *     GetActiveTrackPwnd @ 0x14027F30C (GetActiveTrackPwnd.c)
 */

__int64 __fastcall xxxActiveWindowTracking(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 v3; // rcx
  int v4; // eax
  __int64 v5; // rdx
  __int64 ActiveTrackPwnd; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  struct tagWND *v9; // rdi
  struct tagTHREADINFO *v10; // rax
  __int64 v12; // rdx
  int v13; // esi
  ULONG_PTR BugCheckParameter3[3]; // [rsp+20h] [rbp-18h] BYREF

  BugCheckParameter3[0] = -1LL;
  v1 = 0;
  BugCheckParameter3[1] = 0LL;
  v3 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 472LL);
  v4 = *(_DWORD *)(v3 + 436);
  if ( (v4 & 0x200000) == 0 )
    return 0LL;
  *(_DWORD *)(v3 + 436) = v4 & 0xFFDFFFFF;
  if ( (unsigned int)IsForegroundLocked() )
  {
    Win32HMOptionalThreadLockAlways<tagMENU>::~Win32HMOptionalThreadLockAlways<tagMENU>(BugCheckParameter3, v5);
    return 0LL;
  }
  ActiveTrackPwnd = GetActiveTrackPwnd(a1);
  v9 = (struct tagWND *)ActiveTrackPwnd;
  if ( !ActiveTrackPwnd )
  {
    if ( BugCheckParameter3[0] != -1LL )
    {
      v10 = PtiCurrent(v8, v7);
      Win32HM_UnlockFromThread<0>((ULONG_PTR)v10, BugCheckParameter3);
    }
    return 0LL;
  }
  if ( a1 != ActiveTrackPwnd )
    Win32HMThreadLockBase<tagWND,0,1>::ManualLock<void>(BugCheckParameter3, ActiveTrackPwnd);
  v13 = xxxSendMessage(v9, 0x21u);
  if ( v13 == 1 || v13 == 2 )
  {
    v1 = 1;
    if ( xxxTrackingActivateWindow(v9) )
    {
      if ( v13 == 2 )
        v13 = 1;
      v1 = v13;
    }
  }
  else if ( v13 == 4 )
  {
    v1 = 1;
  }
  Win32HMOptionalThreadLockAlways<tagMENU>::~Win32HMOptionalThreadLockAlways<tagMENU>(BugCheckParameter3, v12);
  return v1;
}
