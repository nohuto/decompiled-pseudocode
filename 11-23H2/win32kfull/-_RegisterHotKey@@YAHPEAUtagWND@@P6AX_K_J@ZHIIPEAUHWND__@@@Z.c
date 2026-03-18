/*
 * XREFs of ?_RegisterHotKey@@YAHPEAUtagWND@@P6AX_K_J@ZHIIPEAUHWND__@@@Z @ 0x1C0040AF8
 * Callers:
 *     NtUserRegisterHotKey @ 0x1C0041410 (NtUserRegisterHotKey.c)
 *     ?_RegisterWindowArrangementCallout@@YA_JPEAUtagWND@@H@Z @ 0x1C0072BD4 (-_RegisterWindowArrangementCallout@@YA_JPEAUtagWND@@H@Z.c)
 *     ?SetWinlogonHotKeys@@YAXXZ @ 0x1C0098A94 (-SetWinlogonHotKeys@@YAXXZ.c)
 *     ?SetWindowArrangementHotKeys@@YAXXZ @ 0x1C009AD24 (-SetWindowArrangementHotKeys@@YAXXZ.c)
 *     ?SetPenHotKeys@@YAXXZ @ 0x1C009E770 (-SetPenHotKeys@@YAXXZ.c)
 *     SetDebugHotKeys @ 0x1C009E840 (SetDebugHotKeys.c)
 *     NtUserShellRegisterHotKey @ 0x1C00A3E90 (NtUserShellRegisterHotKey.c)
 *     RawInputThread @ 0x1C00D6580 (RawInputThread.c)
 * Callees:
 *     ?FindHotKey@@YAPEAUtagHOTKEY@@PEAUtagTHREADINFO@@PEAUtagWND@@HIIPEAPEAU1@@Z @ 0x1C0040F5C (-FindHotKey@@YAPEAUtagHOTKEY@@PEAUtagTHREADINFO@@PEAUtagWND@@HIIPEAPEAU1@@Z.c)
 *     ?HKInsertHashElement@@YAXPEAUtagHOTKEY@@@Z @ 0x1C004101C (-HKInsertHashElement@@YAXPEAUtagHOTKEY@@@Z.c)
 *     ?NotifyHotKeyRegistrationChanged@@YAXQEAUtagHOTKEY@@QEAUtagCHILDHOTKEY@@_N@Z @ 0x1C0041070 (-NotifyHotKeyRegistrationChanged@@YAXQEAUtagHOTKEY@@QEAUtagCHILDHOTKEY@@_N@Z.c)
 *     CheckWinstaAttributeAccess @ 0x1C0041160 (CheckWinstaAttributeAccess.c)
 *     ?HKAddChildHotkey@@YA_NPEAUtagTHREADINFO@@PEAUtagHOTKEY@@PEAUtagWND@@HGPEAUHWND__@@@Z @ 0x1C0097748 (-HKAddChildHotkey@@YA_NPEAUtagTHREADINFO@@PEAUtagHOTKEY@@PEAUtagWND@@HGPEAUHWND__@@@Z.c)
 *     ?AddSasKey@@YAHII@Z @ 0x1C009E4C4 (-AddSasKey@@YAHII@Z.c)
 *     IsShellProcess @ 0x1C00A688C (IsShellProcess.c)
 *     UserSetLastError @ 0x1C00EDA4C (UserSetLastError.c)
 *     ?HKRemoveMatchingChildHotkeys@@YA_NPEAUtagHOTKEY@@PEAUtagTHREADINFO@@PEAUtagWND@@HW4HotkeyQueryType@@@Z @ 0x1C013A774 (-HKRemoveMatchingChildHotkeys@@YA_NPEAUtagHOTKEY@@PEAUtagTHREADINFO@@PEAUtagWND@@HW4HotkeyQueryT.c)
 */

__int64 __fastcall _RegisterHotKey(
        struct tagWND *a1,
        void (*a2)(unsigned __int64, __int64),
        __int64 a3,
        __int16 a4,
        unsigned int BugCheckParameter2,
        HWND a6)
{
  int v7; // ebx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  char v12; // r12
  void (*v13)(unsigned __int64, __int64); // r8
  __int64 v14; // rcx
  __int16 v15; // di
  unsigned int v16; // r14d
  unsigned __int16 v17; // di
  __int64 v18; // rcx
  __int64 result; // rax
  struct tagHOTKEY *HotKey; // rax
  __int64 v21; // rcx
  struct tagHOTKEY *v22; // rbx
  __int16 v23; // ax
  struct tagHOTKEY *v24; // r14
  struct tagHOTKEY *v25; // rbx
  _QWORD *v26; // rbx
  __int64 v27; // rcx
  __int16 v28; // [rsp+30h] [rbp-20h]
  struct tagHOTKEY *v29; // [rsp+40h] [rbp-10h] BYREF
  struct tagWND *v30; // [rsp+48h] [rbp-8h]
  int v32; // [rsp+A0h] [rbp+50h]

  v32 = a3;
  v7 = a3;
  if ( PsGetCurrentProcess(a1, a2, a3) != gpepCSRSS && grpWinStaList && !(unsigned int)CheckWinstaAttributeAccess(0x10u)
    || BugCheckParameter2 == 231 )
  {
    return 0LL;
  }
  if ( a4 < 0 && PsGetCurrentProcess(v10, v9, v11) == gpepCSRSS )
  {
    v12 = 1;
    v13 = 0LL;
  }
  else
  {
    v13 = 0LL;
    v12 = 0;
  }
  v14 = *(_QWORD *)(gptiCurrent + 424LL);
  v15 = a4;
  v16 = a4 & 0xF;
  v17 = v15 & 0x7A80;
  if ( *(int *)(v14 + 12) >= 0 )
  {
    if ( (v17 & 0x2000) != 0 && !(unsigned int)IsShellProcess(v14) && a2 == v13 )
    {
      v18 = 5LL;
      goto LABEL_18;
    }
  }
  else
  {
    v17 |= 0x2000u;
  }
  if ( (unsigned __int64)a1 >= 2 && *((_QWORD *)a1 + 2) != gptiCurrent )
  {
    v18 = 1408LL;
LABEL_18:
    UserSetLastError(v18);
    return 0LL;
  }
  v28 = v17 & 0x200;
  if ( (v17 & 0x200) != 0 && (v12 || a1 == (struct tagWND *)1) )
    return 0LL;
  v29 = (struct tagHOTKEY *)v13;
  HotKey = FindHotKey(gptiCurrent, a1, v7, v16, BugCheckParameter2, &v29);
  v22 = HotKey;
  if ( HotKey )
  {
    if ( a2 || v12 || a1 == (struct tagWND *)1 )
      return 0LL;
    if ( v29 )
    {
      if ( (v17 & 0x80u) != 0 && (*((_WORD *)v29 + 17) & 0xA00) == 0 )
      {
        *((_QWORD *)v29 + 3) = a6;
        return 1LL;
      }
LABEL_45:
      v18 = 1409LL;
      goto LABEL_18;
    }
    v23 = *((_WORD *)HotKey + 17);
    if ( (v23 & 0x1000) != 0 && (v17 & 0x80u) != 0 )
    {
      v24 = (struct tagHOTKEY *)*((_QWORD *)v22 + 7);
      if ( v24 != (struct tagHOTKEY *)((char *)v22 + 56) )
      {
        *((_QWORD *)v24 - 4) = gptiCurrent;
        v29 = (struct tagHOTKEY *)((char *)v24 - 24);
        v30 = a1;
        HMAssignmentLock(&v29, 0LL);
        *((_QWORD *)v24 - 1) = a6;
        *((_DWORD *)v24 - 3) = v32;
        *((_WORD *)v24 - 8) = v17;
        return 1LL;
      }
      LOBYTE(result) = HKAddChildHotkey(gptiCurrent, v22, a1, v32, v17, a6);
    }
    else
    {
      if ( (v23 & 0x200) == 0 )
        goto LABEL_45;
      if ( v28 )
      {
        if ( (v23 & 0x100) == 0 )
          return 0LL;
        *((_QWORD *)v22 + 2) = 0LL;
        if ( a1 )
        {
          v29 = (struct tagHOTKEY *)((char *)v22 + 16);
          v30 = a1;
          HMAssignmentLock(&v29, 0LL);
        }
        *((_WORD *)v22 + 17) = v17;
        *(_QWORD *)v22 = gptiCurrent;
        *((_QWORD *)v22 + 1) = 0LL;
        *((_DWORD *)v22 + 10) = v32;
        NotifyHotKeyRegistrationChanged(v22, 0LL, 1);
        return 1LL;
      }
      LOBYTE(result) = HKAddChildHotkey(gptiCurrent, v22, a1, v32, v17, 0LL);
    }
    return (unsigned __int8)result;
  }
  else
  {
    v25 = v29;
    if ( v29 )
    {
      if ( *((__int16 *)v29 + 17) < 0 || v12 )
        KeBugCheckEx(
          0x164u,
          0x10uLL,
          *((unsigned int *)v29 + 9) | 0x80000000LL,
          *((unsigned __int16 *)v29 + 16),
          *((unsigned __int16 *)v29 + 17));
      *((_WORD *)v29 + 17) = v17;
      if ( *((_WORD *)v25 + 16) != (_WORD)v16 || *((_DWORD *)v25 + 9) != BugCheckParameter2 || !v28 )
        HKRemoveMatchingChildHotkeys(v25, 0LL, 0LL, 0LL, 4);
      *((_WORD *)v25 + 16) = v16;
      *((_DWORD *)v25 + 9) = BugCheckParameter2;
      *((_QWORD *)v25 + 3) = a6;
    }
    else
    {
      v26 = (_QWORD *)Win32AllocPoolZInit(72LL, 1802007381LL);
      if ( !v26 )
        return 0LL;
      if ( v12 && !(unsigned int)AddSasKey(BugCheckParameter2, v16) )
      {
        Win32FreePool(v26);
        KeBugCheckEx(0x164u, 0x10uLL, BugCheckParameter2, v16, v17);
      }
      *v26 = gptiCurrent;
      if ( (unsigned __int64)a1 < 2 )
      {
        v26[2] = a1;
      }
      else
      {
        v30 = a1;
        v26[2] = 0LL;
        v29 = (struct tagHOTKEY *)(v26 + 2);
        HMAssignmentLock(&v29, 0LL);
      }
      *((_DWORD *)v26 + 10) = v32;
      if ( v12 )
        *((_WORD *)v26 + 17) = 0x8000;
      else
        *((_WORD *)v26 + 17) = 0;
      *((_WORD *)v26 + 17) |= v17;
      *((_WORD *)v26 + 16) = v16;
      *((_DWORD *)v26 + 9) = BugCheckParameter2;
      v26[1] = a2;
      v26[3] = a6;
      v26[8] = v26 + 7;
      v26[7] = v26 + 7;
      HKInsertHashElement((struct tagHOTKEY *)v26);
      NotifyHotKeyRegistrationChanged((struct tagHOTKEY *const)v26, 0LL, 1);
    }
    if ( *(_QWORD *)(SGDGetUserSessionState(v21) + 13784) )
      *(_QWORD *)(SGDGetUserSessionState(v27) + 13784) = 0LL;
    return 1LL;
  }
}
