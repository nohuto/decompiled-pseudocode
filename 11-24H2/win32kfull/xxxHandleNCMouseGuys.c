/*
 * XREFs of xxxHandleNCMouseGuys @ 0x1401AF278
 * Callers:
 *     ?xxxDWP_NCMouse@@YAXPEAUtagWND@@II_J@Z @ 0x1401AF128 (-xxxDWP_NCMouse@@YAXPEAUtagWND@@II_J@Z.c)
 * Callees:
 *     ??0?$Win32HMThreadLockBase@UtagWND@@$00$0A@@@QEAA@PEAUtagWND@@@Z @ 0x14003F108 (--0-$Win32HMThreadLockBase@UtagWND@@$00$0A@@@QEAA@PEAUtagWND@@@Z.c)
 *     ??$Win32HM_UnlockFromThread@$00@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z @ 0x1400416B0 (--$Win32HM_UnlockFromThread@$00@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     xxxSendTransformableMessageTimeout @ 0x140042064 (xxxSendTransformableMessageTimeout.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?WindowSubjectToBehavior@ShellWindowManagement@@YA_NPEBUtagWND@@KW4ShellWindowManagementStates@@W4AdditionalWindowCheck@1@@Z @ 0x140068010 (-WindowSubjectToBehavior@ShellWindowManagement@@YA_NPEBUtagWND@@KW4ShellWindowManagementStates@@.c)
 *     xxxSetSysMenu @ 0x14006F958 (xxxSetSysMenu.c)
 *     xxxGetSysMenuPtr @ 0x140070C28 (xxxGetSysMenuPtr.c)
 *     GetNonChildAncestor @ 0x140091F0C (GetNonChildAncestor.c)
 *     ?DragOperationFromMaximizedAllowed@WindowArrangement@@YA_NPEBUtagWND@@@Z @ 0x140148ED4 (-DragOperationFromMaximizedAllowed@WindowArrangement@@YA_NPEBUtagWND@@@Z.c)
 *     ?SizeWithSnapAllowed@WindowArrangement@@YA_NPEBUtagWND@@@Z @ 0x140148F14 (-SizeWithSnapAllowed@WindowArrangement@@YA_NPEBUtagWND@@@Z.c)
 *     ?MoveWithArrangementAllowed@WindowArrangement@@YA_NPEBUtagWND@@@Z @ 0x140148F54 (-MoveWithArrangementAllowed@WindowArrangement@@YA_NPEBUtagWND@@@Z.c)
 *     ?IsArranged@@YA_NPEBUtagWND@@@Z @ 0x14014EAE0 (-IsArranged@@YA_NPEBUtagWND@@@Z.c)
 *     ?xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateStrategy@@W4WindowActivateReason@@W4LocalActivationOptions@@@Z @ 0x1401AF538 (-xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateSt.c)
 *     _GetMenuState @ 0x1401B02A8 (_GetMenuState.c)
 *     ?IsWindowVerticallyMaximized@@YA_NPEBUtagWND@@@Z @ 0x1402A6054 (-IsWindowVerticallyMaximized@@YA_NPEBUtagWND@@@Z.c)
 *     ?xxxArrangeWindow@@YAXPEAUtagWND@@W4_WINDOW_ARRANGEMENT_COMMAND@@@Z @ 0x1402A7510 (-xxxArrangeWindow@@YAXPEAUtagWND@@W4_WINDOW_ARRANGEMENT_COMMAND@@@Z.c)
 */

void __fastcall xxxHandleNCMouseGuys(
        struct tagWND *a1,
        const struct tagWND *a2,
        unsigned int a3,
        struct tagDRAWITEMSTRUCT *a4)
{
  __int64 v5; // r14
  unsigned int v7; // ebp
  unsigned int v8; // esi
  const struct tagWND *v9; // rdx
  __int64 NonChildAncestor; // rbx
  __int64 v11; // rdx
  __int64 v12; // rcx
  struct tagTHREADINFO *v13; // rax
  __int64 SysMenuPtr; // rax
  const struct tagWND *v15; // rdx
  __int64 v16; // rcx
  ULONG_PTR BugCheckParameter3[2]; // [rsp+50h] [rbp-28h] BYREF

  v5 = a3;
  if ( a3 == 2 )
  {
    v9 = (const struct tagWND *)(unsigned int)((_DWORD)a2 - 161);
    if ( (_DWORD)v9 )
    {
      if ( (_DWORD)v9 != 2 )
        return;
      if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x21) != 0
        || WindowArrangement::MoveWithArrangementAllowed(a1, v9) && IsArranged(a1) )
      {
        v8 = 61728;
        goto LABEL_33;
      }
      if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 30LL) & 1) == 0 )
        return;
      v8 = 61488;
    }
    else
    {
      if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0xC0) == 0x40 && (*((_DWORD *)a1 + 95) & 0x2000) != 0 )
        return;
      NonChildAncestor = GetNonChildAncestor((__int64)a1);
      Win32HMThreadLockBase<tagWND,1,0>::Win32HMThreadLockBase<tagWND,1,0>(BugCheckParameter3, NonChildAncestor);
      xxxActivateWindowWithOptions(NonChildAncestor, 0LL, 0LL, 0LL, 0);
      v8 = 61456;
      v13 = PtiCurrent(v12, v11);
      Win32HM_UnlockFromThread<1>((ULONG_PTR)v13, BugCheckParameter3);
    }
    goto LABEL_37;
  }
  if ( a3 == 3 || a3 == 5 || a3 == 6 || a3 == 7 )
  {
    if ( (((_DWORD)a2 - 161) & 0xFFFFFFFD) != 0 )
      return;
    if ( a3 != 3 )
    {
      if ( a3 != 5 )
      {
        if ( a3 == 6 )
          v8 = 61568;
        else
          v8 = 61552;
        goto LABEL_33;
      }
      goto LABEL_24;
    }
    if ( (_DWORD)a2 != 163 )
    {
LABEL_24:
      v8 = 61584;
      goto LABEL_33;
    }
    v8 = 61536;
LABEL_37:
    if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 30LL) & 8) != 0 )
    {
      xxxSetSysMenu(a1);
      SysMenuPtr = xxxGetSysMenuPtr(a1);
      if ( (GetMenuState(SysMenuPtr, (unsigned __int16)v8 & 0xFFF0) & 3) != 0 )
      {
        if ( v8 != 61456 )
          return;
        v16 = *((_QWORD *)a1 + 5);
        if ( (*(_BYTE *)(v16 + 30) & 4) == 0
          || (*(_BYTE *)(v16 + 31) & 1) == 0
          || !WindowArrangement::DragOperationFromMaximizedAllowed(a1, v15)
          && !ShellWindowManagement::WindowSubjectToBehavior((__int64)a1, 4u, 0, 1) )
        {
          return;
        }
      }
    }
LABEL_33:
    xxxSendTransformableMessageTimeout((struct tagTHREADINFO **)a1, 274LL, v5 | v8, a4, 0, 0, 0LL, 1, 1);
    return;
  }
  if ( (a3 == 12 || a3 == 15)
    && (_DWORD)a2 == 163
    && WindowArrangement::SizeWithSnapAllowed(a1, a2)
    && (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x21) == 0 )
  {
    if ( IsWindowVerticallyMaximized((struct tagRECT *)a1) )
      v7 = 19;
    else
      v7 = 18;
    xxxArrangeWindow(a1, v7);
  }
}
