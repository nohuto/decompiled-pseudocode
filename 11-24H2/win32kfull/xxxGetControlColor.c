/*
 * XREFs of xxxGetControlColor @ 0x1400385D0
 * Callers:
 *     xxxPaintRect @ 0x140036CDC (xxxPaintRect.c)
 *     xxxGetControlBrush @ 0x14003A374 (xxxGetControlBrush.c)
 *     NtUserGetControlColor @ 0x1401FFEC0 (NtUserGetControlColor.c)
 * Callees:
 *     xxxSendMessage @ 0x140042030 (xxxSendMessage.c)
 *     xxxDefWindowProc @ 0x14007E7C0 (xxxDefWindowProc.c)
 */

__int64 __fastcall xxxGetControlColor(struct tagWND *a1, struct tagDRAWITEMSTRUCT **a2, HWND a3, unsigned int a4)
{
  __int64 CurrentProcessWin32Process; // rax
  struct tagDRAWITEMSTRUCT *v9; // rbx
  __int64 v10; // rdx
  struct tagDRAWITEMSTRUCT *v11; // r9
  __int64 v12; // rax
  __int64 v13; // rsi

  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process();
  v9 = 0LL;
  v10 = CurrentProcessWin32Process;
  if ( CurrentProcessWin32Process )
    v10 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
  if ( v10 == *(_QWORD *)(*((_QWORD *)a1 + 2) + 464LL) )
  {
    v11 = 0LL;
    if ( a2 )
      v11 = *a2;
    v12 = xxxSendMessage(a1, a4, a3, v11);
    v13 = v12;
    if ( !v12 || !(unsigned int)GreValidateServerHandle(v12, 16LL) )
    {
      if ( a2 )
        v9 = *a2;
      return xxxDefWindowProc(a1, a4, a3, v9);
    }
    return v13;
  }
  else
  {
    if ( a2 )
      v9 = *a2;
    return xxxDefWindowProc(a1, a4, a3, v9);
  }
}
