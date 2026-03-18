/*
 * XREFs of ?ImeSetTopmost@@YAXPEAUtagWND@@H0@Z @ 0x140170D90
 * Callers:
 *     ?ImeCheckTopmost@@YAXPEAUtagWND@@@Z @ 0x140170D18 (-ImeCheckTopmost@@YAXPEAUtagWND@@@Z.c)
 * Callees:
 *     SetOrClrWF @ 0x140049160 (SetOrClrWF.c)
 *     UnlinkWindow @ 0x140075240 (UnlinkWindow.c)
 *     ?GetLastTopMostWindowNoIME@@YAPEAUtagWND@@PEAU1@@Z @ 0x140170F7C (-GetLastTopMostWindowNoIME@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     LinkWindow @ 0x1402B47A8 (LinkWindow.c)
 */

void __fastcall ImeSetTopmost(struct tagWND *j, struct tagWND *a2, struct tagWND *a3)
{
  __int64 *v3; // r15
  struct tagWND *LastTopMostWindowNoIME; // rbx
  int v6; // r13d
  struct tagWND *v7; // rbp
  struct tagWND *v8; // rdi
  struct tagWND *v9; // r12
  struct tagWND *v10; // rsi
  char v11; // al
  struct tagWND **v12; // rcx
  bool v13; // zf
  __int64 v14; // r14
  __int64 v15; // rax
  struct tagWND *i; // rsi
  __int64 v17; // r14
  __int64 UserSessionState; // rax

  v3 = (__int64 *)*((_QWORD *)j + 13);
  LastTopMostWindowNoIME = 0LL;
  v6 = (int)a2;
  v7 = j;
  if ( !v3 )
    return;
  v8 = (struct tagWND *)v3[14];
  if ( (_DWORD)a2 )
    goto LABEL_5;
  LastTopMostWindowNoIME = GetLastTopMostWindowNoIME(j);
  if ( !a3 )
    goto LABEL_4;
  v11 = 0;
  v12 = (struct tagWND **)LastTopMostWindowNoIME;
  if ( LastTopMostWindowNoIME )
  {
    while ( 1 )
    {
      a2 = v12[11];
      LastTopMostWindowNoIME = (struct tagWND *)v12;
      if ( a2 == a3 )
        break;
      v13 = v12 == (struct tagWND **)v7;
      v12 = (struct tagWND **)v12[11];
      if ( v13 )
        v11 = 1;
      if ( !a2 )
        return;
    }
    if ( !v11 )
    {
LABEL_4:
      j = *(struct tagWND **)(*((_QWORD *)v7 + 15) + 40LL);
      if ( (*((_BYTE *)j + 20) & 0x20) != 0 )
      {
        for ( i = LastTopMostWindowNoIME; i; i = (struct tagWND *)*((_QWORD *)i + 11) )
        {
          if ( i == *((struct tagWND **)v7 + 15) )
            break;
          v17 = *((_QWORD *)i + 17);
          if ( (*(_BYTE *)(*(_QWORD *)(v17 + 8) + 10LL) & 1) == 0 )
          {
            UserSessionState = W32GetUserSessionState(j, a2);
            j = *(struct tagWND **)(v17 + 8);
            if ( *(_WORD *)j != *(_WORD *)(*(_QWORD *)(UserSessionState + 19928) + 898LL) )
              LastTopMostWindowNoIME = i;
          }
        }
      }
LABEL_5:
      v9 = LastTopMostWindowNoIME;
LABEL_6:
      if ( v8 )
      {
        while ( 1 )
        {
          v10 = (struct tagWND *)*((_QWORD *)v8 + 11);
          if ( *((_QWORD *)v8 + 2) == *((_QWORD *)v7 + 2) )
          {
            v14 = *((_QWORD *)v8 + 17);
            if ( (*(_BYTE *)(*(_QWORD *)(v14 + 8) + 10LL) & 1) != 0
              || (v15 = W32GetUserSessionState(j, a2),
                  j = *(struct tagWND **)(v14 + 8),
                  *(_WORD *)j == *(_WORD *)(*(_QWORD *)(v15 + 19928) + 898LL)) )
            {
              if ( v8 != LastTopMostWindowNoIME )
              {
                for ( j = v8; j; j = (struct tagWND *)*((_QWORD *)j + 15) )
                {
                  if ( j == v7
                    && (!LastTopMostWindowNoIME || *((_QWORD *)LastTopMostWindowNoIME + 13) == *((_QWORD *)v8 + 13))
                    && *((__int64 **)v8 + 13) == v3 )
                  {
                    UnlinkWindow(v8, v3);
                    SetOrClrWF(v6 != 0, v8, 0x808u, 1);
                    LinkWindow(v8);
                    LastTopMostWindowNoIME = v8;
                    break;
                  }
                }
              }
            }
          }
          v8 = v10;
          if ( !v10 )
            break;
          if ( v10 == v9 )
          {
            v8 = (struct tagWND *)*((_QWORD *)LastTopMostWindowNoIME + 11);
            goto LABEL_6;
          }
        }
      }
    }
  }
}
