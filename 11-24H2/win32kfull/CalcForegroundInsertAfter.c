/*
 * XREFs of CalcForegroundInsertAfter @ 0x1400F6C44
 * Callers:
 *     xxxCreateWindowEx @ 0x14004B6FC (xxxCreateWindowEx.c)
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x140088950 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     ?TrackBackground@@YAHPEAUtagWINDOWPOS@@PEAUtagWND@@1111@Z @ 0x14018D3F4 (-TrackBackground@@YAHPEAUtagWINDOWPOS@@PEAUtagWND@@1111@Z.c)
 *     ?CheckTopmost@@YAHPEAUtagCVR@@@Z @ 0x14022AA20 (-CheckTopmost@@YAHPEAUtagCVR@@@Z.c)
 *     ?CheckOnTop@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@I@Z @ 0x14027A2C0 (-CheckOnTop@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@I@Z.c)
 * Callees:
 *     GetLastTopMostWindow @ 0x14008D348 (GetLastTopMostWindow.c)
 *     ?GetLastNonBottomMostWindow@@YAPEAUtagWND@@PEAU1@H@Z @ 0x140196E1C (-GetLastNonBottomMostWindow@@YAPEAUtagWND@@PEAU1@H@Z.c)
 */

struct tagWND *__fastcall CalcForegroundInsertAfter(__int64 a1, __int64 a2)
{
  struct tagWND *LastNonBottomMostWindow; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  struct tagWND *v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 UserSessionState; // rax
  _BYTE *v10; // rdx
  __int64 v11; // r9
  struct tagWND *v12; // rdi
  struct tagWND *v13; // rcx
  __int64 v14; // rsi
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rcx

  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 20LL) & 0x20) != 0 )
    LastNonBottomMostWindow = GetLastNonBottomMostWindow((struct tagWND *)a1, 1);
  else
    LastNonBottomMostWindow = (struct tagWND *)GetLastTopMostWindow(a1, a2);
  v6 = LastNonBottomMostWindow;
  LOBYTE(v5) = *(_BYTE *)(*(_QWORD *)(a1 + 40) + 31LL) & 0xC0;
  if ( (_BYTE)v5 != 64 )
  {
    if ( tagTHREADINFO::ComputeAndTestForegroundActivate(*(tagTHREADINFO **)(a1 + 16)) )
      return v6;
    v5 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 464LL);
    if ( (*(_DWORD *)(v5 + 12) & 0x80100) != 0 )
      return v6;
  }
  if ( !*(_QWORD *)(W32GetUserSessionState(v5, v4) + 18944) )
    return v6;
  UserSessionState = W32GetUserSessionState(v8, v7);
  v11 = *(_QWORD *)(a1 + 16);
  if ( *(_QWORD *)(v11 + 472) == *(_QWORD *)(UserSessionState + 18944) )
    return v6;
  v12 = v6;
  if ( v6 )
  {
    v13 = v6;
    goto LABEL_13;
  }
  v13 = *(struct tagWND **)(*(_QWORD *)(a1 + 104) + 112LL);
  if ( !v13 )
    goto LABEL_22;
LABEL_13:
  while ( v13 != (struct tagWND *)a1 )
  {
    v10 = (_BYTE *)*((_QWORD *)v13 + 5);
    if ( (v10[20] & 0x20) == 0
      && (*((_QWORD *)v13 + 2) != v11 || (v10[24] & 8) != 0 || (v10[31] & 0xC0) != 0x40 && (v10[31] & 0x10) == 0) )
    {
      v6 = v13;
      v13 = (struct tagWND *)*((_QWORD *)v13 + 11);
      if ( v13 )
        continue;
    }
    if ( !v13 )
      goto LABEL_22;
    break;
  }
  if ( (*(_BYTE *)(*((_QWORD *)v13 + 5) + 20LL) & 0x20) != 0 )
  {
LABEL_22:
    v6 = v12;
    if ( !v12 )
      v12 = *(struct tagWND **)(*(_QWORD *)(a1 + 104) + 112LL);
    v14 = 0LL;
    v16 = *(_QWORD *)(W32GetUserSessionState(v13, v10) + 18944);
    if ( *(_QWORD *)(v16 + 128) )
      v14 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v16, v15) + 18944) + 128LL) + 16LL);
    while ( v12 )
    {
      v17 = *((_QWORD *)v12 + 5);
      if ( (*(_BYTE *)(v17 + 20) & 0x20) != 0 )
        break;
      if ( *((_QWORD *)v12 + 2) == v14 )
      {
        if ( *((_QWORD *)v12 + 15) )
        {
          v6 = v12;
        }
        else if ( (*(_BYTE *)(v17 + 31) & 0x10) != 0 )
        {
          v6 = v12;
        }
      }
      v12 = (struct tagWND *)*((_QWORD *)v12 + 11);
    }
  }
  return v6;
}
