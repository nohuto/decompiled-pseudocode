/*
 * XREFs of ?xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C01F4E00
 * Callers:
 *     ?xxxRegisterGhostWindow@@YAHPEAUHWND__@@0@Z @ 0x1C01F4878 (-xxxRegisterGhostWindow@@YAHPEAUHWND__@@0@Z.c)
 *     ?xxxRegisterSiblingFrostWindow@@YAHPEAUHWND__@@0@Z @ 0x1C01F4B48 (-xxxRegisterSiblingFrostWindow@@YAHPEAUHWND__@@0@Z.c)
 * Callees:
 *     DwmAsyncNotifyAnimationChange @ 0x1C0016ADC (DwmAsyncNotifyAnimationChange.c)
 *     xxxSetWindowPos @ 0x1C0045448 (xxxSetWindowPos.c)
 *     ?xxxMinMaximize@@YAXPEAUtagWND@@IW4MinMaxOptions@@@Z @ 0x1C005E948 (-xxxMinMaximize@@YAXPEAUtagWND@@IW4MinMaxOptions@@@Z.c)
 *     ?xxxEnableChildWindowDpiMessageX@@YA_NPEAUtagWND@@H@Z @ 0x1C00A4AD4 (-xxxEnableChildWindowDpiMessageX@@YA_NPEAUtagWND@@H@Z.c)
 *     SetOrClrWF @ 0x1C00B5D8C (SetOrClrWF.c)
 *     SetVisible @ 0x1C00EDEE8 (SetVisible.c)
 *     xxxWindowEvent @ 0x1C00F0BC0 (xxxWindowEvent.c)
 *     __security_check_cookie @ 0x1C01381F0 (__security_check_cookie.c)
 *     ?_CopyWindowCheckpoint@@YAHPEAUtagWND@@0@Z @ 0x1C01F3604 (-_CopyWindowCheckpoint@@YAHPEAUtagWND@@0@Z.c)
 *     ?xxxNotifyShellOfWindowSwap@@YAXPEAUtagWND@@0@Z @ 0x1C01F4804 (-xxxNotifyShellOfWindowSwap@@YAXPEAUtagWND@@0@Z.c)
 *     DwmAsyncGhostChange @ 0x1C026BEE4 (DwmAsyncGhostChange.c)
 */

void __fastcall xxxShowGhostWindow(struct tagWND *a1, struct tagWND *a2)
{
  BOOL v2; // ebx
  char v5; // cl
  int v6; // r12d
  __int64 v7; // rax
  __int64 v8; // rcx
  int v9; // edi
  __int64 v10; // rcx
  int v11; // r13d
  __int64 v12; // r8
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rdx
  __int64 v17; // rcx
  int v18; // edi
  void *v19; // rax
  __int64 v20; // rbx
  __int64 v21; // rdx
  __int64 v22; // rcx
  void *v23; // rax
  __int64 v24; // rbx
  __int64 v25; // rdx
  __int64 v26; // rcx
  void *v27; // rax
  __int64 v28; // rbx
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rbx
  void *v32; // rax
  int v33; // [rsp+40h] [rbp-30h]
  int v34; // [rsp+40h] [rbp-30h]
  __int64 v35; // [rsp+48h] [rbp-28h] BYREF
  __int128 v36; // [rsp+50h] [rbp-20h] BYREF

  v2 = 0;
  v33 = 0;
  v5 = *(_BYTE *)(*((_QWORD *)a2 + 5) + 31LL);
  v6 = 99;
  if ( (v5 & 0x20) != 0 )
    v33 = 1;
  else
    v2 = (v5 & 1) != 0;
  v7 = *((_QWORD *)a2 + 2);
  if ( v7 && (v8 = *(_QWORD *)(v7 + 432), v8 == gpqForeground) && *(struct tagWND **)(v8 + 128) == a2 )
  {
    v9 = 96;
    *(_DWORD *)(*((_QWORD *)a1 + 2) + 488LL) |= 0x20u;
  }
  else
  {
    v9 = 112;
    v6 = 115;
  }
  if ( *(char *)(*((_QWORD *)a2 + 5) + 26LL) < 0 )
    SetOrClrWF(1, (__int64 *)a1, 0xA80u, 1);
  v36 = *(_OWORD *)(*((_QWORD *)a2 + 5) + 88LL);
  xxxEnableChildWindowDpiMessageX(a1);
  v10 = *((_QWORD *)a2 + 5);
  if ( (*(_DWORD *)(v10 + 288) & 0xF) != 2 )
  {
    v35 = ValidateHmonitor(*(_QWORD *)(v10 + 256));
    LogicalToPhysicalDPIRect(&v36, &v36, *(unsigned int *)(*((_QWORD *)a2 + 5) + 288LL), &v35);
    if ( v2 )
      xxxSetWindowPos(a1, 0LL, (unsigned int)v36, DWORD1(v36), DWORD2(v36) - v36, HIDWORD(v36) - DWORD1(v36), 20);
    else
      v6 = v9;
  }
  v11 = 3;
  if ( v33 )
  {
    v12 = 1LL;
    v13 = 7LL;
  }
  else
  {
    if ( !v2 )
      goto LABEL_20;
    v12 = 17LL;
    v13 = 3LL;
  }
  xxxMinMaximize((__int64)a1, v13, v12);
  _CopyWindowCheckpoint(a2, a1, v14, v15);
  v6 |= 2u;
LABEL_20:
  v34 = IsWindowDesktopComposed(a2);
  v18 = v34;
  if ( v34 )
  {
    v19 = (void *)ReferenceDwmApiPort(v17, v16);
    DwmAsyncGhostChange(v19);
    v20 = *(_QWORD *)a2;
    v23 = (void *)ReferenceDwmApiPort(v22, v21);
    DwmAsyncNotifyAnimationChange(v23, 0, v20);
    v24 = *(_QWORD *)a1;
    v27 = (void *)ReferenceDwmApiPort(v26, v25);
    DwmAsyncNotifyAnimationChange(v27, 0, v24);
    v18 = v34;
  }
  SetOrClrWF(0, (__int64 *)a1, 0xE01u, 1);
  if ( (*(_BYTE *)(*((_QWORD *)a2 + 5) + 20LL) & 0x20) != 0 )
  {
    SetOrClrWF(0, (__int64 *)a2, 0x420u, 1);
    SetOrClrWF(1, (__int64 *)a1, 0x420u, 1);
    v28 = 1LL;
  }
  else
  {
    v28 = (__int64)a2;
  }
  SetVisible(a2, 0x10u);
  if ( !gdwDeferWinEvent )
    v11 = 1;
  xxxWindowEvent(0x8003u, a2, 0, 0, v11);
  xxxSetWindowPos(a1, v28, (unsigned int)v36, DWORD1(v36), DWORD2(v36) - v36, HIDWORD(v36) - DWORD1(v36), v6);
  xxxNotifyShellOfWindowSwap(a2, a1);
  if ( v18 )
  {
    v31 = *(_QWORD *)a1;
    v32 = (void *)ReferenceDwmApiPort(v30, v29);
    DwmAsyncNotifyAnimationChange(v32, 1, v31);
  }
}
