/*
 * XREFs of NtUserMoveWindow @ 0x140076690
 * Callers:
 *     <none>
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??$Win32HM_UnlockFromThread@$0A@@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z @ 0x140061734 (--$Win32HM_UnlockFromThread@$0A@@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ??$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x140076C10 (--$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     xxxSetWindowPos @ 0x140076C44 (xxxSetWindowPos.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

__int64 __fastcall NtUserMoveWindow(__int64 a1, int a2, int a3, int a4, int a5, int a6)
{
  __int64 v10; // rbx
  __int64 v11; // rax
  int v12; // edi
  struct tagWND *v13; // r13
  int v14; // ebx
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  struct tagTHREADINFO *v18; // rax
  ULONG_PTR BugCheckParameter3[2]; // [rsp+40h] [rbp-30h] BYREF
  int v21; // [rsp+50h] [rbp-20h] BYREF
  int v22; // [rsp+54h] [rbp-1Ch]
  int v23; // [rsp+58h] [rbp-18h]
  int v24; // [rsp+5Ch] [rbp-14h]

  v10 = EnterCrit(0LL, 0LL);
  v11 = ValidateHwnd(a1);
  v12 = 0;
  v13 = (struct tagWND *)v11;
  if ( v11 && (((*(_WORD *)(*(_QWORD *)(v11 + 40) + 42LL) & 0x2FFF) - 669) & 0xFFFFFFFD) != 0 )
  {
    Win32HM_LockIntoThread<0>(v10, v11, BugCheckParameter3);
    if ( a2 > 0x7FFF )
    {
      a2 = 0x7FFF;
    }
    else if ( a2 < -32768 )
    {
      a2 = -32768;
    }
    if ( a3 > 0x7FFF )
    {
      a3 = 0x7FFF;
    }
    else if ( a3 < -32768 )
    {
      a3 = -32768;
    }
    if ( a4 < 0 )
    {
      a4 = 0;
    }
    else if ( a4 > 0x7FFF )
    {
      a4 = 0x7FFF;
    }
    v14 = a5;
    if ( a5 < 0 )
    {
      v14 = 0;
    }
    else if ( a5 > 0x7FFF )
    {
      v14 = 0x7FFF;
    }
    CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(4294934528LL);
    if ( (unsigned __int8)ShouldVirtualizeWindowRect(v13, CurrentThreadDpiAwarenessContext) )
    {
      v21 = a2;
      v23 = a4 + a2;
      v22 = a3;
      v24 = a3 + v14;
      TransformRectBetweenCoordinateSpaces(&v21, &v21, v13, 0LL);
      a4 = v23 - v21;
      v14 = v24 - v22;
    }
    v12 = xxxSetWindowPos(v13, a4, v14, a6 != 0 ? 20 : 28);
    v18 = PtiCurrent(v17, v16);
    Win32HM_UnlockFromThread<0>((ULONG_PTR)v18, BugCheckParameter3);
  }
  UserSessionSwitchLeaveCrit();
  return v12;
}
