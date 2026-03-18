/*
 * XREFs of xxxDestroyWindow @ 0x14015EF90
 * Callers:
 *     ?xxxCreateDefaultImeWindow@@YAPEAUtagWND@@PEAU1@GPEAX@Z @ 0x14003EBCC (-xxxCreateDefaultImeWindow@@YAPEAUtagWND@@PEAU1@GPEAX@Z.c)
 *     xxxCreateWindowEx @ 0x14004B6FC (xxxCreateWindowEx.c)
 *     xxxTrackPopupMenuEx @ 0x140099644 (xxxTrackPopupMenuEx.c)
 *     xxxMNOpenHierarchy @ 0x14009BE5C (xxxMNOpenHierarchy.c)
 *     xxxMNCancel @ 0x14009D784 (xxxMNCancel.c)
 *     xxxMNCloseHierarchy @ 0x14009E0A0 (xxxMNCloseHierarchy.c)
 *     xxxAddShadow @ 0x14015CF84 (xxxAddShadow.c)
 *     xxxDW_DestroyOwnedWindows @ 0x14015ED20 (xxxDW_DestroyOwnedWindows.c)
 *     xxxRemoveShadow @ 0x14015EE80 (xxxRemoveShadow.c)
 *     NtUserDestroyWindow @ 0x14015EF30 (NtUserDestroyWindow.c)
 *     xxxCsDdeInitialize @ 0x14015F1B4 (xxxCsDdeInitialize.c)
 *     xxxDestroyThreadDDEObject @ 0x14015FCB0 (xxxDestroyThreadDDEObject.c)
 *     xxxCreateDesktopEx @ 0x14016470C (xxxCreateDesktopEx.c)
 *     ?UserDisableImeForThread@@YAXPEAUtagTHREADINFO@@_N@Z @ 0x1401FE2A4 (-UserDisableImeForThread@@YAXPEAUtagTHREADINFO@@_N@Z.c)
 *     ?xxxCleanupMotherDesktopWindow@@YAXPEAUtagTERMINAL@@@Z @ 0x14021B070 (-xxxCleanupMotherDesktopWindow@@YAXPEAUtagTERMINAL@@@Z.c)
 *     ?DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x14023AFEC (-DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z.c)
 *     xxxProcessEventMessage @ 0x14023DDAC (xxxProcessEventMessage.c)
 *     xxxRealDefWindowProc @ 0x140252B3C (xxxRealDefWindowProc.c)
 *     ?xxxFW_DestroyIMEWindowIfRequired@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@@Z @ 0x1402B452C (-xxxFW_DestroyIMEWindowIfRequired@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@@Z.c)
 *     xxxEndMenu @ 0x1402E8608 (xxxEndMenu.c)
 * Callees:
 *     ?xxxFreeWindow@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@PEAU?$Win32HMOptionalThreadLockAlways@UtagWND@@@@@Z @ 0x14002E024 (-xxxFreeWindow@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@PEAU-$Win32HMOptionalThreadLockAlways@UtagWND@.c)
 *     ??0?$Win32HMThreadLockAlways@UtagHOOK@@@@QEAA@PEAUtagTHREADINFO@@PEAUtagHOOK@@@Z @ 0x140034C70 (--0-$Win32HMThreadLockAlways@UtagHOOK@@@@QEAA@PEAUtagTHREADINFO@@PEAUtagHOOK@@@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??1?$Win32HMOptionalThreadLockAlways@UtagMENU@@@@QEAA@XZ @ 0x140061700 (--1-$Win32HMOptionalThreadLockAlways@UtagMENU@@@@QEAA@XZ.c)
 *     xxxDW_DestroyOwnedWindows @ 0x14015ED20 (xxxDW_DestroyOwnedWindows.c)
 *     ??$ManualUnlock@X@?$Win32HMThreadLockBase@UtagMENU@@$0A@$00@@QEAAPEAUtagMENU@@XZ @ 0x140183234 (--$ManualUnlock@X@-$Win32HMThreadLockBase@UtagMENU@@$0A@$00@@QEAAPEAUtagMENU@@XZ.c)
 *     ??_4INTERLOCKEDTIFLAGS@@QEAAXW4_TIFLAGS@@@Z @ 0x1401A6C98 (--_4INTERLOCKEDTIFLAGS@@QEAAXW4_TIFLAGS@@@Z.c)
 *     ??S@YA?AW4_TIFLAGS@@W40@@Z @ 0x140203530 (--S@YA-AW4_TIFLAGS@@W40@@Z.c)
 *     ?xxxDestroyWindow_Phase1@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@H@Z @ 0x14024F6E8 (-xxxDestroyWindow_Phase1@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@H@Z.c)
 *     ?xxxDestroyWindow_Phase2@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@H@Z @ 0x14024FA00 (-xxxDestroyWindow_Phase2@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@H@Z.c)
 *     ?xxxDestroyWindow_Prologue@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@PEAHPEA_N@Z @ 0x14024FDE0 (-xxxDestroyWindow_Prologue@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@PEAHPEA_N@Z.c)
 *     ?xxxDestroyWindow_Phase3@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@H@Z @ 0x1402B4438 (-xxxDestroyWindow_Phase3@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@H@Z.c)
 */

__int64 __fastcall xxxDestroyWindow(struct tagWND *a1, __int64 a2)
{
  struct tagTHREADINFO *v3; // rax
  unsigned int v4; // ebx
  struct tagTHREADINFO *v5; // rsi
  unsigned int v6; // eax
  __int64 v7; // rdx
  __int64 v9; // rdx
  __int64 v10; // rdx
  unsigned int v11; // eax
  ULONG_PTR BugCheckParameter3[2]; // [rsp+20h] [rbp-10h] BYREF
  bool v13; // [rsp+58h] [rbp+28h] BYREF
  int v14; // [rsp+60h] [rbp+30h] BYREF

  v3 = PtiCurrent((__int64)a1, a2);
  v4 = 0;
  v14 = 0;
  v13 = 0;
  v5 = v3;
  Win32HMThreadLockAlways<tagHOOK>::Win32HMThreadLockAlways<tagHOOK>(BugCheckParameter3, (__int64)v3, (__int64)a1);
  if ( (unsigned int)xxxDestroyWindow_Prologue(a1, v5, &v14, &v13) )
  {
    xxxDestroyWindow_Phase1(a1, v5, v14);
    if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x40) == 0 )
      xxxDW_DestroyOwnedWindows((__int64)a1, v9);
    xxxDestroyWindow_Phase2(a1, v5, v14);
    xxxDestroyWindow_Phase3(a1, v5, v14);
    xxxFreeWindow(v5, a1, (ULONG_PTR)BugCheckParameter3);
    if ( v14 && v13 )
    {
      v11 = operator~(0x10000000LL);
      INTERLOCKEDTIFLAGS::operator&=((char *)v5 + 528, v11);
    }
    Win32HMOptionalThreadLockAlways<tagMENU>::~Win32HMOptionalThreadLockAlways<tagMENU>(BugCheckParameter3, v10);
    return 1LL;
  }
  else
  {
    if ( v14 )
    {
      if ( v13 )
      {
        v6 = operator~(0x10000000LL);
        INTERLOCKEDTIFLAGS::operator&=((char *)v5 + 528, v6);
      }
    }
    LOBYTE(v4) = Win32HMThreadLockBase<tagMENU,0,1>::ManualUnlock<void>((ULONG_PTR)BugCheckParameter3) == 0;
    Win32HMOptionalThreadLockAlways<tagMENU>::~Win32HMOptionalThreadLockAlways<tagMENU>(BugCheckParameter3, v7);
    return v4;
  }
}
