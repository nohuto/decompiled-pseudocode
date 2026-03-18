/*
 * XREFs of ?xxxForceUpdateWindowTreeDpiAwarenessContext@@YAXPEAUtagWND@@KH@Z @ 0x14020890C
 * Callers:
 *     ?xxxForceUpdateWindowTreeDpiAwarenessContext@@YAXPEAUtagWND@@KH@Z @ 0x14020890C (-xxxForceUpdateWindowTreeDpiAwarenessContext@@YAXPEAUtagWND@@KH@Z.c)
 *     ?xxxForceUpdateProcessDpiAwarenessContext@@YAXPEAUtagWND@@K@Z @ 0x1402524E0 (-xxxForceUpdateProcessDpiAwarenessContext@@YAXPEAUtagWND@@K@Z.c)
 * Callees:
 *     GetMonitorRectForDpi @ 0x140026844 (GetMonitorRectForDpi.c)
 *     ?GetWindowCompositedDpiContext@@YAKPEBUtagWND@@@Z @ 0x140026B70 (-GetWindowCompositedDpiContext@@YAKPEBUtagWND@@@Z.c)
 *     ??0?$Win32HMThreadLockBase@UtagWND@@$00$0A@@@QEAA@PEAUtagWND@@@Z @ 0x14003F108 (--0-$Win32HMThreadLockBase@UtagWND@@$00$0A@@@QEAA@PEAUtagWND@@@Z.c)
 *     ??1?$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ @ 0x140040874 (--1-$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ.c)
 *     UpdateWindowMonitor @ 0x140045CB0 (UpdateWindowMonitor.c)
 *     _PostMessage @ 0x140066460 (_PostMessage.c)
 *     xxxSetWindowPos @ 0x140076C44 (xxxSetWindowPos.c)
 *     ?PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x140118D30 (-PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOUR.c)
 *     ?xxxForceUpdateWindowTreeDpiAwarenessContext@@YAXPEAUtagWND@@KH@Z @ 0x14020890C (-xxxForceUpdateWindowTreeDpiAwarenessContext@@YAXPEAUtagWND@@KH@Z.c)
 */

void __fastcall xxxForceUpdateWindowTreeDpiAwarenessContext(struct tagWND *a1, unsigned int a2, int a3)
{
  __int64 v3; // rax
  LARGE_INTEGER v5; // rbp
  unsigned int v7; // r14d
  struct tagMONITOR *v8; // rax
  struct tagWND *v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // rcx
  unsigned int WindowCompositedDpiContext; // eax
  __int64 v13; // r9
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 UserSessionState; // rax
  __int64 v17; // rdx
  __m128i *i; // rcx
  __m128i v19; // [rsp+40h] [rbp-28h] BYREF
  ULONG_PTR BugCheckParameter3[2]; // [rsp+50h] [rbp-18h] BYREF

  v3 = *((_QWORD *)a1 + 5);
  v5.QuadPart = a2;
  v7 = *(_DWORD *)(v3 + 288);
  *(_DWORD *)(v3 + 288) = a2;
  v8 = (struct tagMONITOR *)ValidateHmonitorNoRip(*(_QWORD *)(*((_QWORD *)a1 + 5) + 256LL));
  UpdateWindowMonitor(a1, v8);
  v9 = (struct tagWND *)*((_QWORD *)a1 + 14);
  if ( !a3 )
    goto LABEL_8;
  PostEventMessageEx(
    *((struct tagTHREADINFO **)a1 + 2),
    *(struct tagQ **)(*((_QWORD *)a1 + 2) + 472LL),
    0x18u,
    0LL,
    0,
    v5,
    0LL,
    0LL);
  GetDispInfo(v11, v10);
  WindowCompositedDpiContext = GetWindowCompositedDpiContext(a1);
  GetMonitorRectForDpi(&v19, v13, (WindowCompositedDpiContext >> 8) & 0x1FF);
  UserSessionState = W32GetUserSessionState(v15, v14);
  PostMessage(
    (int)a1,
    126,
    *(unsigned __int16 *)(*(_QWORD *)(UserSessionState + 19928) + 6996LL),
    (unsigned __int16)(v19.m128i_i16[4] - v19.m128i_i16[0]) | ((unsigned __int16)(v19.m128i_i16[6] - v19.m128i_i16[2]) << 16));
  if ( (((unsigned __int16)(v5.LowPart >> 8) ^ (unsigned __int16)(v7 >> 8)) & 0x1FF) != 0 )
  {
    PostEventMessageEx(
      *((struct tagTHREADINFO **)a1 + 2),
      *(struct tagQ **)(*((_QWORD *)a1 + 2) + 472LL),
      9u,
      (LARGE_INTEGER *)a1,
      0x1Au,
      (LARGE_INTEGER)42LL,
      -1LL,
      0LL);
    PostEventMessageEx(
      *((struct tagTHREADINFO **)a1 + 2),
      *(struct tagQ **)(*((_QWORD *)a1 + 2) + 472LL),
      9u,
      (LARGE_INTEGER *)a1,
      0x1Au,
      (LARGE_INTEGER)46LL,
      -1LL,
      0LL);
  }
  if ( *(_QWORD *)(*((_QWORD *)a1 + 5) + 240LL) )
    goto LABEL_8;
  Win32HMThreadLockBase<tagWND,1,0>::Win32HMThreadLockBase<tagWND,1,0>(&v19, (__int64)a1);
  xxxSetWindowPos(a1, 0LL, 0LL, 0LL, 0, 0, 55);
  v9 = (struct tagWND *)*((_QWORD *)a1 + 14);
  for ( i = &v19; ; i = (__m128i *)BugCheckParameter3 )
  {
    Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((ULONG_PTR)i, v17);
LABEL_8:
    if ( !v9 )
      break;
    Win32HMThreadLockBase<tagWND,1,0>::Win32HMThreadLockBase<tagWND,1,0>(BugCheckParameter3, (__int64)v9);
    xxxForceUpdateWindowTreeDpiAwarenessContext(v9, v5.LowPart, 0);
    v9 = (struct tagWND *)*((_QWORD *)v9 + 11);
  }
}
