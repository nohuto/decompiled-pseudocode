/*
 * XREFs of ?xxxSwitchToThisWindow@@YAXPEAUtagWND@@W4SwitchToThisWindowOptions@@@Z @ 0x140277614
 * Callers:
 *     NtUserSwitchToThisWindow @ 0x1402479B0 (NtUserSwitchToThisWindow.c)
 *     ?xxxNextWindow@@YAXPEAUtagQ@@K@Z @ 0x1402DB524 (-xxxNextWindow@@YAXPEAUtagQ@@K@Z.c)
 * Callees:
 *     ??0?$Win32HMThreadLockBase@UtagWND@@$00$0A@@@QEAA@PEAUtagWND@@@Z @ 0x14003F108 (--0-$Win32HMThreadLockBase@UtagWND@@$00$0A@@@QEAA@PEAUtagWND@@@Z.c)
 *     ??1?$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ @ 0x140040874 (--1-$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ.c)
 *     xxxSetWindowPos @ 0x140076C44 (xxxSetWindowPos.c)
 *     ?_GetNextQueueWindow@@YAPEAUtagWND@@PEAU1@HH@Z @ 0x1400F829C (-_GetNextQueueWindow@@YAPEAUtagWND@@PEAU1@HH@Z.c)
 *     ?PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x140118D30 (-PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOUR.c)
 *     ?IsThreadHung@@YA_NPEBUtagTHREADINFO@@@Z @ 0x140148A70 (-IsThreadHung@@YA_NPEBUtagTHREADINFO@@@Z.c)
 *     ?xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroundBehaviors@@W4SetForegroundEffects@@@Z @ 0x140276AB0 (-xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegrou.c)
 */

char __fastcall xxxSwitchToThisWindow(__int64 a1, __int64 a2)
{
  char v2; // si
  __int64 v4; // rdx
  __int64 v5; // rcx
  struct tagWND *v6; // rdi
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rdx
  ULONG_PTR BugCheckParameter3[3]; // [rsp+40h] [rbp-18h] BYREF

  v2 = a2;
  if ( *(_QWORD *)(W32GetUserSessionState(a1, a2) + 18944) )
  {
    if ( (v2 & 1) != 0 )
    {
      v6 = *(struct tagWND **)(*(_QWORD *)(W32GetUserSessionState(v5, v4) + 18944) + 128LL);
      if ( v6 )
      {
        v7 = *((_QWORD *)v6 + 5);
        if ( (*(_BYTE *)(v7 + 24) & 8) == 0 && (*(_BYTE *)(v7 + 20) & 0x20) == 0 && _GetNextQueueWindow(v6, 0LL, 1) )
        {
          Win32HMThreadLockBase<tagWND,1,0>::Win32HMThreadLockBase<tagWND,1,0>(BugCheckParameter3, (__int64)v6);
          xxxSetWindowPos(v6, 1LL, 0LL, 0LL, 0, 0, 16403);
          Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((ULONG_PTR)BugCheckParameter3, v8);
        }
      }
    }
  }
  LOBYTE(v9) = xxxSetForegroundWindowWithOptions(a1, 2LL, 0, (v2 & 4) != 0);
  if ( (v2 & 2) != 0 )
  {
    v9 = *(_QWORD *)(a1 + 40);
    if ( (*(_BYTE *)(v9 + 31) & 0x20) != 0 )
    {
      LOBYTE(v9) = IsThreadHung(*(const struct tagTHREADINFO **)(a1 + 16), v10);
      if ( !(_BYTE)v9 )
        LOBYTE(v9) = PostEventMessageEx(
                       *(struct tagTHREADINFO **)(a1 + 16),
                       *(struct tagQ **)(*(_QWORD *)(a1 + 16) + 472LL),
                       7u,
                       (LARGE_INTEGER *)a1,
                       0x112u,
                       (LARGE_INTEGER)61728LL,
                       0LL,
                       0LL);
    }
  }
  return v9;
}
