/*
 * XREFs of ?CheckOnTop@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@I@Z @ 0x14027A2C0
 * Callers:
 *     ?xxxMouseActivate@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@PEBUtagQMSG@@H@Z @ 0x140237020 (-xxxMouseActivate@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@PEBUtagQMSG@@H@Z.c)
 * Callees:
 *     xxxSetWindowPos @ 0x140076C44 (xxxSetWindowPos.c)
 *     CalcForegroundInsertAfter @ 0x1400F6C44 (CalcForegroundInsertAfter.c)
 *     ?GetWindowWorker@@YAPEAUtagWND@@PEAU1@IH@Z @ 0x1400F8428 (-GetWindowWorker@@YAPEAUtagWND@@PEAU1@IH@Z.c)
 */

__int64 __fastcall CheckOnTop(struct tagTHREADINFO *a1, struct tagWND *a2, int a3)
{
  int v5; // r8d
  int v6; // r8d
  int v7; // r8d
  struct tagWND *WindowWorker; // rbx
  __int64 v9; // rdx

  if ( a2 != *(struct tagWND **)(*((_QWORD *)a1 + 59) + 128LL) )
    return 0LL;
  v5 = a3 - 513;
  if ( v5 )
  {
    v6 = v5 - 3;
    if ( v6 )
    {
      v7 = v6 - 3;
      if ( v7 )
      {
        if ( v7 != 4 )
          return 0LL;
      }
    }
  }
  if ( (*(_BYTE *)(*((_QWORD *)a2 + 5) + 24LL) & 8) == 0
    && (WindowWorker = GetWindowWorker(a2, 3LL), WindowWorker == CalcForegroundInsertAfter((__int64)a2, v9)) )
  {
    return 0LL;
  }
  else
  {
    return xxxSetWindowPos(a2, 0LL, 0LL, 0LL, 0, 0, 19);
  }
}
