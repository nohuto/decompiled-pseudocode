/*
 * XREFs of ?xxxSendNCPaint@@YAXPEAUtagWND@@PEAUHRGN__@@@Z @ 0x1C00615B8
 * Callers:
 *     xxxBeginPaint @ 0x1C00606C0 (xxxBeginPaint.c)
 *     xxxInternalDoSyncPaint @ 0x1C0060D80 (xxxInternalDoSyncPaint.c)
 *     xxxSimpleDoSyncPaint @ 0x1C01193C4 (xxxSimpleDoSyncPaint.c)
 * Callees:
 *     DwmAsyncChildStyleChange @ 0x1C0026730 (DwmAsyncChildStyleChange.c)
 *     SetOrClrWF @ 0x1C00B5D8C (SetOrClrWF.c)
 *     DirtyVisRgnTrackers @ 0x1C00B699C (DirtyVisRgnTrackers.c)
 *     ?CheckForChanges@WindowMargins@@YAXPEAUtagWND@@W4ChangeReason@1@@Z @ 0x1C00EBC94 (-CheckForChanges@WindowMargins@@YAXPEAUtagWND@@W4ChangeReason@1@@Z.c)
 *     xxxSendMessage @ 0x1C0127888 (xxxSendMessage.c)
 */

void __fastcall xxxSendNCPaint(struct tagWND *a1, __int64 a2)
{
  __int64 v2; // rax
  int v5; // ecx
  int v6; // ebx
  int v7; // ebp
  __int64 v8; // rsi
  _DWORD *v9; // rax
  int v10; // r15d
  int v11; // ecx
  int v12; // edx
  int v13; // r14d
  int v14; // eax
  int v15; // r13d
  int v16; // ebp
  __int64 v17; // rbx
  __int64 v18; // rdx
  __int64 v19; // rcx
  void *v20; // rax
  int v21; // [rsp+50h] [rbp+8h]

  v2 = *((_QWORD *)a1 + 5);
  v5 = *(_DWORD *)(v2 + 232);
  v6 = *(_DWORD *)(v2 + 28);
  v7 = *(_DWORD *)(v2 + 24);
  *(_BYTE *)(v2 + 17) &= ~8u;
  v21 = v5;
  v8 = 1LL;
  if ( !(unsigned int)IsWindowDesktopComposed(a1) )
    goto LABEL_15;
  v9 = (_DWORD *)*((_QWORD *)a1 + 5);
  v10 = v9[7];
  v11 = v9[6];
  v12 = v9[58];
  v13 = v7 ^ v11;
  v14 = v21 ^ v12;
  v15 = v6 ^ v10;
  if ( v6 == v10 )
  {
    if ( v13 )
      goto LABEL_7;
    if ( !v14 )
      goto LABEL_15;
  }
  if ( (v15 & 0xB1CF0000) != 0 )
  {
    v16 = -16;
LABEL_11:
    DirtyVisRgnTrackers(a1);
    v17 = *(_QWORD *)a1;
    v20 = (void *)ReferenceDwmApiPort(v19, v18);
    DwmAsyncChildStyleChange(v20, v17, v16, v10);
    goto LABEL_12;
  }
LABEL_7:
  if ( (v13 & 0x4E27A9) != 0 )
  {
    v16 = -20;
    v10 = v11;
    goto LABEL_11;
  }
  if ( (v14 & 0x12C0) != 0 )
  {
    v16 = -268435456;
    v10 = v12;
    goto LABEL_11;
  }
LABEL_12:
  if ( (v15 & 0xC40000) != 0 || (v13 & 0x200A0381) != 0 )
    WindowMargins::CheckForChanges(a1, 1LL);
LABEL_15:
  if ( a1 == *(struct tagWND **)(*(_QWORD *)(gptiCurrent + 432LL) + 128LL)
    && (*(_BYTE *)(*((_QWORD *)a1 + 5) + 16LL) & 0x40) == 0 )
  {
    SetOrClrWF(1LL, a1, 64LL, 1LL);
    a2 = 1LL;
    SetOrClrWF(0LL, a1, 257LL, 1LL);
  }
  if ( *(char *)(*((_QWORD *)a1 + 5) + 22LL) >= 0 )
  {
    v8 = a2;
    if ( !a2 )
      return;
  }
  else
  {
    SetOrClrWF(0LL, a1, 1664LL, 1LL);
  }
  xxxSendMessage(a1, 133LL, v8, 0LL);
}
