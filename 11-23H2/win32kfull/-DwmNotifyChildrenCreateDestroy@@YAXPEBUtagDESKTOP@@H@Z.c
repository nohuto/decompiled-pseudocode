/*
 * XREFs of ?DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z @ 0x1C00211F4
 * Callers:
 *     DwmNotifyChildrenAddRemove @ 0x1C0020E00 (DwmNotifyChildrenAddRemove.c)
 * Callees:
 *     IsMotherDesktopWindow @ 0x1C002149C (IsMotherDesktopWindow.c)
 *     DwmGetClassStyle @ 0x1C00214C8 (DwmGetClassStyle.c)
 *     DwmAsyncChildCreate @ 0x1C0021540 (DwmAsyncChildCreate.c)
 *     IsMessageParentWindow @ 0x1C0021688 (IsMessageParentWindow.c)
 *     DwmAsyncChildDestroy @ 0x1C00216A8 (DwmAsyncChildDestroy.c)
 *     SendDwmIconChange @ 0x1C003F904 (SendDwmIconChange.c)
 *     DwmAsyncTextChange @ 0x1C00706B0 (DwmAsyncTextChange.c)
 *     IsDesktopWindow @ 0x1C00B3188 (IsDesktopWindow.c)
 *     DirtyVisRgnTrackers @ 0x1C00B699C (DirtyVisRgnTrackers.c)
 *     _GetDesktopWindow @ 0x1C00EA360 (_GetDesktopWindow.c)
 *     DwmChildRectChange @ 0x1C00EB3C0 (DwmChildRectChange.c)
 *     ?CheckForChanges@WindowMargins@@YAXPEAUtagWND@@W4ChangeReason@1@@Z @ 0x1C00EBC94 (-CheckForChanges@WindowMargins@@YAXPEAUtagWND@@W4ChangeReason@1@@Z.c)
 *     ?_GetWindowCompositionInfo@@YAHPEBUtagWND@@PEAUWINDOWCOMPOSITIONINFO@@@Z @ 0x1C00EC894 (-_GetWindowCompositionInfo@@YAHPEBUtagWND@@PEAUWINDOWCOMPOSITIONINFO@@@Z.c)
 *     _IsTopLevelWindow @ 0x1C0122A20 (_IsTopLevelWindow.c)
 *     __security_check_cookie @ 0x1C01381F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1C0140D40 (memset_0.c)
 */

void __fastcall DwmNotifyChildrenCreateDestroy(const struct tagDESKTOP *a1, int a2)
{
  unsigned __int64 v4; // rsi
  unsigned __int64 v5; // rbp
  _QWORD *v6; // r15
  __int64 v7; // rdi
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  struct _KPROCESS *v11; // rbx
  int ClassStyle; // eax
  __int64 v13; // rcx
  void *v14; // rax
  void *v15; // rax
  void *v16; // rax
  int v17; // [rsp+60h] [rbp-A8h]
  int v18; // [rsp+64h] [rbp-A4h]
  int v19; // [rsp+68h] [rbp-A0h]
  __int64 ProcessSequenceNumber; // [rsp+70h] [rbp-98h]
  int ProcessId; // [rsp+78h] [rbp-90h]
  __int64 v22; // [rsp+80h] [rbp-88h]
  __int64 v23; // [rsp+88h] [rbp-80h]
  __int64 v24[8]; // [rsp+90h] [rbp-78h] BYREF

  v4 = gSharedInfo[1];
  v5 = v4 + 32LL * giheLast;
  v6 = (_QWORD *)gpKernelHandleTable;
  while ( v4 <= v5 )
  {
    if ( *(_BYTE *)(v4 + 24) == 1 )
    {
      v7 = *v6;
      if ( *(const struct tagDESKTOP **)(*v6 + 24LL) == a1 && !(unsigned int)IsMotherDesktopWindow(*v6) )
      {
        if ( a2 )
        {
          if ( !(unsigned int)IsDesktopWindow(v8) && (unsigned int)IsMessageParentWindow() )
            GetDesktopWindow(v10, v9);
          memset_0(v24, 0, sizeof(v24));
          _GetWindowCompositionInfo((const struct tagWND *)v7, (struct WINDOWCOMPOSITIONINFO *)v24);
          v11 = *(struct _KPROCESS **)(**(_QWORD **)(v7 + 16) + 544LL);
          ProcessSequenceNumber = PsGetProcessSequenceNumber(v11);
          ProcessId = (unsigned int)PsGetProcessId(v11);
          v22 = *(_QWORD *)(v7 + 40) + 88LL;
          v23 = ***(_QWORD ***)(*(_QWORD *)(v7 + 24) + 8LL);
          ClassStyle = DwmGetClassStyle(v7);
          v13 = *(_QWORD *)(v7 + 40);
          v17 = ClassStyle;
          v18 = *(_DWORD *)(v13 + 232);
          v19 = *(_DWORD *)(v13 + 24);
          v14 = (void *)ReferenceDwmApiPort();
          DwmAsyncChildCreate(v14, v19, v18, v17, (__int64)v24, v23, v22, ProcessId, ProcessSequenceNumber);
          DwmChildRectChange((struct tagWND *)v7);
          DirtyVisRgnTrackers(v7);
          WindowMargins::CheckForChanges(v7, 0LL);
          if ( (*(_BYTE *)(*(_QWORD *)(v7 + 40) + 26LL) & 8) != 0 )
          {
            if ( (unsigned int)IsTopLevelWindow(v7) )
            {
              SendDwmIconChange();
              v15 = (void *)ReferenceDwmApiPort();
              DwmAsyncTextChange(v15);
            }
          }
        }
        else
        {
          v16 = (void *)ReferenceDwmApiPort();
          DwmAsyncChildDestroy(v16);
        }
      }
    }
    v4 += 32LL;
    v6 += 3;
  }
}
