/*
 * XREFs of ?ReportMoveSizeCompletionToShell@@YAXPEBUMOVESIZEDATA@@@Z @ 0x1402A6618
 * Callers:
 *     ?xxxMoveSize@@YAXPEAUtagWND@@IK@Z @ 0x14024AF80 (-xxxMoveSize@@YAXPEAUtagWND@@IK@Z.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?IsShellParticipatesInSizing@@YA_NPEBUtagWND@@@Z @ 0x140067FA4 (-IsShellParticipatesInSizing@@YA_NPEBUtagWND@@@Z.c)
 *     ?DragSizeInfo@NotifyShell@@YAXPEBUtagWND@@W4DRAG_SIZE_STAGE@@W4tagINPUT_MESSAGE_DEVICE_TYPE@@@Z @ 0x14014861C (-DragSizeInfo@NotifyShell@@YAXPEBUtagWND@@W4DRAG_SIZE_STAGE@@W4tagINPUT_MESSAGE_DEVICE_TYPE@@@Z.c)
 *     ?IsArranged@@YA_NPEBUtagWND@@@Z @ 0x14014EAE0 (-IsArranged@@YA_NPEBUtagWND@@@Z.c)
 *     ?ArrangementCompleted@NotifyShell@@YAXPEBUtagWND@@_JW4ARRANGEMENT_COMPLETED_RESULT@@@Z @ 0x140251FB8 (-ArrangementCompleted@NotifyShell@@YAXPEBUtagWND@@_JW4ARRANGEMENT_COMPLETED_RESULT@@@Z.c)
 *     ?WindowSizingCompleted@NotifyShell@@YAXPEAUtagWND@@KW4ARRANGED_WINDOW_SIZE_RESULT@@@Z @ 0x1402C127C (-WindowSizingCompleted@NotifyShell@@YAXPEAUtagWND@@KW4ARRANGED_WINDOW_SIZE_RESULT@@@Z.c)
 */

void __fastcall ReportMoveSizeCompletionToShell(const struct MOVESIZEDATA *a1, __int64 a2)
{
  int v2; // eax
  char v4; // bp
  unsigned __int8 v5; // si
  unsigned int v6; // edx
  __int64 v7; // r14
  __int64 v8; // rdx

  v2 = *((_DWORD *)a1 + 50);
  if ( (v2 & 0x800000) == 0 )
  {
    v4 = 1;
LABEL_3:
    v5 = 0;
    goto LABEL_4;
  }
  v4 = 0;
  if ( (v2 & 0x8000) != 0 )
    goto LABEL_3;
  v5 = 1;
LABEL_4:
  v7 = *(_QWORD *)(*((_QWORD *)PtiCurrent((__int64)a1, a2) + 62) + 328LL);
  if ( v7 )
  {
    if ( IsShellParticipatesInSizing(*((const struct tagWND **)a1 + 2), v6) )
    {
      if ( (*((_DWORD *)a1 + 95) & 2) != 0 )
        NotifyShell::WindowSizingCompleted(*((_QWORD *)a1 + 2), *((unsigned int *)a1 + 94), v5);
    }
    else if ( !v4 && !v5 )
    {
      if ( IsArranged(*((const struct tagWND **)a1 + 2)) )
      {
        NotifyShell::ArrangementCompleted(*((__int64 **)a1 + 2), *((unsigned int *)a1 + 94), 1);
        LastWokenThread::Set(*(_QWORD *)(v7 + 16), 1LL, 0LL);
      }
      else if ( (*((_DWORD *)a1 + 50) & 0x20000000) != 0 )
      {
        NotifyShell::ArrangementCompleted(*((__int64 **)a1 + 2), *((unsigned int *)a1 + 94), 2);
      }
    }
    v8 = 3LL;
    if ( *((_DWORD *)a1 + 44) != 9 )
      v8 = 1LL;
    NotifyShell::DragSizeInfo(*((_QWORD **)a1 + 2), v8, 0);
  }
}
