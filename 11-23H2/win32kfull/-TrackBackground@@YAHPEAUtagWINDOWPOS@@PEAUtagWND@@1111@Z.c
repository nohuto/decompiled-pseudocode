/*
 * XREFs of ?TrackBackground@@YAHPEAUtagWINDOWPOS@@PEAUtagWND@@1111@Z @ 0x1C00ADEC0
 * Callers:
 *     ?ZOrderByOwner@@YAPEAUtagSMWP@@PEAU1@@Z @ 0x1C00ADA1C (-ZOrderByOwner@@YAPEAUtagSMWP@@PEAU1@@Z.c)
 * Callees:
 *     ?IsLastTopMostWindow@@YAHPEBUtagWND@@@Z @ 0x1C009EED4 (-IsLastTopMostWindow@@YAHPEBUtagWND@@@Z.c)
 *     ?GetRootOwner@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C00A68B8 (-GetRootOwner@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     CalcForegroundInsertAfter @ 0x1C00E96C0 (CalcForegroundInsertAfter.c)
 *     GetLastTopMostWindow @ 0x1C00EA300 (GetLastTopMostWindow.c)
 */

__int64 __fastcall TrackBackground(
        struct tagWINDOWPOS *a1,
        struct tagWND *a2,
        struct tagWND *a3,
        struct tagWND *a4,
        struct tagWND *a5,
        struct tagWND *a6)
{
  __int64 v6; // rbx
  __int64 *LastTopMostWindow; // r9
  __int64 v10; // rdx

  v6 = 0LL;
  if ( a3
    && *((_QWORD *)a2 + 2) != gptiForeground
    && ((*(_BYTE *)(*((_QWORD *)a3 + 5) + 19LL) & 4 ^ (*(unsigned __int8 *)(*((_QWORD *)a3 + 5) + 24LL) >> 1) & 4) & 0xFFFFFFFC) != 0
    && (*(_BYTE *)(*((_QWORD *)a2 + 5) + 24LL) & 8) == 0 )
  {
    if ( !a4 )
    {
      a4 = (struct tagWND *)CalcForegroundInsertAfter(a2);
      if ( !a4 )
      {
LABEL_17:
        *((_QWORD *)a1 + 1) = v6;
        return 1LL;
      }
    }
    if ( !a6 || *(_QWORD *)(*((_QWORD *)a2 + 2) + 432LL) != gpqForeground || !(unsigned int)IsLastTopMostWindow(a4) )
    {
      if ( (unsigned int)IsLastTopMostWindow(a4)
        || a5 != GetRootOwner(a2)
        || (v10 = *((_QWORD *)a5 + 2), !*(_QWORD *)(v10 + 1432))
        || *(_QWORD *)(v10 + 432) != gpqForeground
        || a5 != *(struct tagWND **)(gpqForeground + 128LL)
        || (LastTopMostWindow = (__int64 *)GetLastTopMostWindow(a2)) != 0LL )
      {
        v6 = *LastTopMostWindow;
      }
      goto LABEL_17;
    }
  }
  return 0LL;
}
