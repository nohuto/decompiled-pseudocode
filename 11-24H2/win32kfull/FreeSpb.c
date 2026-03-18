/*
 * XREFs of FreeSpb @ 0x1400979B0
 * Callers:
 *     ?FreeWindow_Phase3@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@PEAU?$Win32HMOptionalThreadLockAlways@UtagWND@@@@@Z @ 0x14002E8AC (-FreeWindow_Phase3@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@PEAU-$Win32HMOptionalThreadLockAlways@Utag.c)
 *     ?SpbCheckRect2@@YAHPEAUtagSPB@@PEAUtagWND@@PEAUtagRECT@@K@Z @ 0x14009776C (-SpbCheckRect2@@YAHPEAUtagSPB@@PEAUtagWND@@PEAUtagRECT@@K@Z.c)
 *     FreeAllSpbs @ 0x140097C40 (FreeAllSpbs.c)
 *     zzzLockWindowUpdate2 @ 0x140097CA0 (zzzLockWindowUpdate2.c)
 *     SpbCheckPwnd @ 0x140098004 (SpbCheckPwnd.c)
 *     ?xxxDrawDragRectEx@@YAXPEAUMOVESIZEDATA@@PEAUtagRECT@@I1@Z @ 0x140211840 (-xxxDrawDragRectEx@@YAXPEAUMOVESIZEDATA@@PEAUtagRECT@@I1@Z.c)
 *     ?zzzBltValidBits@@YA?AW4BltBitsResult@@PEAUtagSMWP@@@Z @ 0x14022C6A8 (-zzzBltValidBits@@YA-AW4BltBitsResult@@PEAUtagSMWP@@@Z.c)
 *     RestoreSpb @ 0x1402AF460 (RestoreSpb.c)
 * Callees:
 *     SetOrClrWF @ 0x140049160 (SetOrClrWF.c)
 *     ?IS_USERCRIT_OWNED_SHAREDONLY@@YA_NXZ @ 0x140063B70 (-IS_USERCRIT_OWNED_SHAREDONLY@@YA_NXZ.c)
 *     ?PostSpbApc@@YAXPEAU_KAPC@@PEAUtagWND@@_K@Z @ 0x1402AF308 (-PostSpbApc@@YAXPEAU_KAPC@@PEAUtagWND@@_K@Z.c)
 *     GreSaveScreenBits @ 0x1403308B4 (GreSaveScreenBits.c)
 */

void __fastcall FreeSpb(char *a1, __int64 a2)
{
  char v2; // bp
  char v3; // si
  __int64 v5; // rcx
  __int64 v6; // rcx
  char **v7; // rcx
  char *i; // rdx
  struct tagWND **v9; // rbx
  struct tagWND *v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  void *v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rcx
  _QWORD *j; // rbx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rax
  __int64 UserSessionState; // rax
  __int64 v29; // rcx
  __int64 v30; // rbx
  __int64 v31; // rax
  unsigned __int64 v32; // r8
  struct tagWND *v33; // rdx

  if ( !a1 )
    return;
  v2 = 0;
  v3 = 0;
  if ( (*((_DWORD *)a1 + 12) & 1) != 0 )
  {
    UserSessionState = W32GetUserSessionState(a1, a2);
    if ( (unsigned int)GreIsVisRgnPublishLocked(*(_QWORD *)(*(_QWORD *)(UserSessionState + 57008) + 48LL)) )
    {
      v2 = 1;
    }
    else
    {
      v30 = *((_QWORD *)a1 + 7);
      v31 = W32GetUserSessionState(v29, a2);
      GreSaveScreenBits(*(_QWORD *)(*(_QWORD *)(v31 + 57008) + 48LL), 2LL, v30);
    }
  }
  else
  {
    v5 = *((_QWORD *)a1 + 2);
    if ( v5 )
      GreDeleteObject(v5);
  }
  v6 = *((_QWORD *)a1 + 5);
  if ( v6 )
    GreDeleteObject(v6);
  v7 = (char **)(*(_QWORD *)(W32GetUserSessionState(v6, a2) + 57008) + 40LL);
  for ( i = *v7; i != a1; i = *(char **)i )
    v7 = (char **)i;
  v9 = (struct tagWND **)(a1 + 8);
  *v7 = *(char **)a1;
  v10 = (struct tagWND *)*((_QWORD *)a1 + 1);
  if ( v10 )
  {
    SetOrClrWF(0, v10, 0x80u, 1);
    if ( IS_USERCRIT_OWNED_SHAREDONLY(v12, v11, v13) )
      v3 = 1;
    else
      HMAssignmentUnlock(a1 + 8);
  }
  if ( v2 )
  {
    v32 = *((_QWORD *)a1 + 7);
    if ( !v3 )
    {
      v33 = 0LL;
      goto LABEL_29;
    }
LABEL_28:
    v33 = *v9;
LABEL_29:
    PostSpbApc(*((struct _KAPC **)a1 + 8), v33, v32);
    if ( v3 )
      *v9 = 0LL;
    *((_QWORD *)a1 + 8) = 0LL;
    goto LABEL_13;
  }
  if ( v3 )
  {
    v32 = 0LL;
    goto LABEL_28;
  }
LABEL_13:
  v14 = (void *)*((_QWORD *)a1 + 8);
  if ( v14 )
    Win32FreePool(v14);
  Win32FreePool(a1);
  v18 = *(_QWORD *)(W32GetUserSessionState(v16, v15) + 57008);
  if ( !*(_QWORD *)(v18 + 40) )
  {
    v19 = W32GetUserSessionState(v18, v17);
    GreLockVisRgn(*(_QWORD *)(*(_QWORD *)(v19 + 57008) + 48LL));
    v23 = *(_QWORD *)(W32GetUserSessionState(v21, v20) + 57008);
    for ( j = *(_QWORD **)(v23 + 24); ; j = (_QWORD *)*j )
    {
      v26 = *(_QWORD *)(W32GetUserSessionState(v23, v22) + 57008) + 24LL;
      if ( j == (_QWORD *)v26 )
        break;
      GreGetBounds(j[2], 0LL, 2LL);
    }
    v27 = W32GetUserSessionState(v26, v25);
    GreUnlockVisRgn(*(_QWORD *)(*(_QWORD *)(v27 + 57008) + 48LL));
  }
}
