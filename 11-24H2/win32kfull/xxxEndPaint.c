/*
 * XREFs of xxxEndPaint @ 0x140035878
 * Callers:
 *     ?xxxDWP_Paint@@YAXPEAUtagWND@@@Z @ 0x140032E88 (-xxxDWP_Paint@@YAXPEAUtagWND@@@Z.c)
 *     NtUserEndPaint @ 0x140034A40 (NtUserEndPaint.c)
 *     NtUserBeginPaint @ 0x140034B50 (NtUserBeginPaint.c)
 *     ?xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z @ 0x14023BD28 (-xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z.c)
 *     ?xxxHandleMenuPainting@@YAXPEAUtagWND@@AEBV?$SmartObjStackRef@UtagMENU@@@@@Z @ 0x1402BD38C (-xxxHandleMenuPainting@@YAXPEAUtagWND@@AEBV-$SmartObjStackRef@UtagMENU@@@@@Z.c)
 * Callees:
 *     DwmAsyncChildStyleChange @ 0x140032044 (DwmAsyncChildStyleChange.c)
 *     zzzInternalShowCaret @ 0x140035B94 (zzzInternalShowCaret.c)
 *     InternalInvalidate3 @ 0x140044BB8 (InternalInvalidate3.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     SetOrClrWF @ 0x140049160 (SetOrClrWF.c)
 *     ?CheckForChanges@WindowMargins@@YAXPEAUtagWND@@W4ChangeReason@1@@Z @ 0x140049338 (-CheckForChanges@WindowMargins@@YAXPEAUtagWND@@W4ChangeReason@1@@Z.c)
 *     DirtyVisRgnTrackers @ 0x1400497E8 (DirtyVisRgnTrackers.c)
 */

__int64 __fastcall xxxEndPaint(struct tagWND *a1, _QWORD *a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rax
  int v6; // ebx
  int v7; // esi
  int v8; // r13d
  int v9; // r15d
  _DWORD *v10; // rax
  int v11; // r14d
  int v12; // ecx
  int v13; // edx
  int v14; // ebp
  int v15; // eax
  int v16; // r12d
  __int64 v17; // rax
  int v18; // ebx
  int v19; // r12d
  int v20; // r13d
  _DWORD *v21; // rax
  int v22; // esi
  int v23; // ecx
  int v24; // edx
  int v25; // ebp
  int v26; // eax
  int v27; // r14d
  int v29; // esi
  __int64 v30; // rbx
  __int64 v31; // rdx
  __int64 v32; // rcx
  void *v33; // rax
  __int64 v34; // rbx
  __int64 v35; // rdx
  __int64 v36; // rcx
  void *v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 UserSessionState; // rax
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v48; // rax
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // rdx
  __int64 v52; // rcx

  ReleaseCacheDC(*a2, 1LL);
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 20LL) & 2) != 0 )
  {
    if ( *(_QWORD *)(W32GetUserSessionState(v4, v3) + 43112) )
    {
      W32GetUserSessionState(v39, v38);
      W32GetUserSessionState(v41, v40);
      InternalInvalidate3(a1);
      UserSessionState = W32GetUserSessionState(v43, v42);
      if ( (*(_DWORD *)(UserSessionState + 43308))-- == 1 )
      {
        v48 = W32GetUserSessionState(v46, v45);
        GreDeleteObject(*(_QWORD *)(v48 + 43112));
        *(_QWORD *)(W32GetUserSessionState(v50, v49) + 43112) = 0LL;
        *(_DWORD *)(W32GetUserSessionState(v52, v51) + 63460) = 0;
      }
    }
    SetOrClrWF(0LL, a1, 1026LL, 1LL);
  }
  v5 = *((_QWORD *)a1 + 5);
  v6 = *(_DWORD *)(v5 + 28);
  v7 = *(_DWORD *)(v5 + 24);
  v8 = *(_DWORD *)(v5 + 232);
  *(_BYTE *)(v5 + 20) &= ~1u;
  v9 = -16;
  if ( (unsigned int)IsWindowDesktopComposed(a1) )
  {
    v10 = (_DWORD *)*((_QWORD *)a1 + 5);
    v11 = v10[7];
    v12 = v10[6];
    v13 = v10[58];
    v14 = v7 ^ v12;
    v15 = v8 ^ v13;
    v16 = v6 ^ v11;
    if ( v6 == v11 )
    {
      if ( v14 )
        goto LABEL_14;
      if ( !v15 )
        goto LABEL_6;
    }
    if ( (v16 & 0xB9CF0000) != 0 )
    {
      v29 = -16;
      goto LABEL_25;
    }
LABEL_14:
    if ( (v14 & 0x4E27A9) != 0 )
    {
      v29 = -20;
      v11 = v12;
    }
    else
    {
      if ( (v15 & 0x3F2C0) == 0 )
      {
LABEL_26:
        if ( (v16 & 0x1C40000) != 0 || (v14 & 0x200A0381) != 0 )
          WindowMargins::CheckForChanges(a1, 1LL);
        goto LABEL_6;
      }
      v29 = -268435456;
      v11 = v13;
    }
LABEL_25:
    DirtyVisRgnTrackers(a1);
    v34 = *(_QWORD *)a1;
    v37 = (void *)ReferenceDwmApiPort(v36, v35);
    DwmAsyncChildStyleChange(v37, v34, v29, v11);
    goto LABEL_26;
  }
LABEL_6:
  v17 = *((_QWORD *)a1 + 5);
  v18 = *(_DWORD *)(v17 + 28);
  v19 = *(_DWORD *)(v17 + 24);
  v20 = *(_DWORD *)(v17 + 232);
  *(_BYTE *)(v17 + 20) &= ~4u;
  if ( !(unsigned int)IsWindowDesktopComposed(a1) )
    goto LABEL_10;
  v21 = (_DWORD *)*((_QWORD *)a1 + 5);
  v22 = v21[7];
  v23 = v21[6];
  v24 = v21[58];
  v25 = v19 ^ v23;
  v26 = v20 ^ v24;
  v27 = v18 ^ v22;
  if ( v18 == v22 )
  {
    if ( v25 )
      goto LABEL_18;
    if ( !v26 )
      goto LABEL_10;
  }
  if ( (v27 & 0xB9CF0000) != 0 )
  {
LABEL_21:
    DirtyVisRgnTrackers(a1);
    v30 = *(_QWORD *)a1;
    v33 = (void *)ReferenceDwmApiPort(v32, v31);
    DwmAsyncChildStyleChange(v33, v30, v9, v22);
    goto LABEL_22;
  }
LABEL_18:
  if ( (v25 & 0x4E27A9) != 0 )
  {
    v9 = -20;
    v22 = v23;
    goto LABEL_21;
  }
  if ( (v26 & 0x3F2C0) != 0 )
  {
    v9 = -268435456;
    v22 = v24;
    goto LABEL_21;
  }
LABEL_22:
  if ( (v27 & 0x1C40000) != 0 || (v25 & 0x200A0381) != 0 )
    WindowMargins::CheckForChanges(a1, 1LL);
LABEL_10:
  if ( a1 == *(struct tagWND **)(*((_QWORD *)PtiCurrent() + 59) + 344LL) )
    zzzInternalShowCaret();
  return 1LL;
}
