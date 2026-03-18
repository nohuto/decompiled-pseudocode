/*
 * XREFs of ?CheckTopmost@@YAHPEAUtagWINDOWPOS@@@Z @ 0x1C00AE204
 * Callers:
 *     ?ZOrderByOwner@@YAPEAUtagSMWP@@PEAU1@@Z @ 0x1C00ADA1C (-ZOrderByOwner@@YAPEAUtagSMWP@@PEAU1@@Z.c)
 *     ?xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z @ 0x1C01246F0 (-xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z.c)
 * Callees:
 *     CalcForegroundInsertAfter @ 0x1C00E96C0 (CalcForegroundInsertAfter.c)
 *     GetLastTopMostWindow @ 0x1C00EA300 (GetLastTopMostWindow.c)
 *     GetTopMostInsertAfter @ 0x1C01A5B3C (GetTopMostInsertAfter.c)
 */

__int64 __fastcall CheckTopmost(struct tagWINDOWPOS *a1)
{
  __int64 v2; // rdx
  _QWORD *v3; // rsi
  __int64 v4; // rbx
  int v5; // eax
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 *LastTopMostWindow; // rax
  __int64 v9; // rax
  bool v10; // zf
  __int64 *v11; // rax
  __int64 *TopMostInsertAfter; // rax
  __int64 *v14; // rax
  __int64 *v15; // rax
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rax
  unsigned int v19; // ecx
  _QWORD *v20; // rax

  v3 = (_QWORD *)_HMObjectFromHandle(*(_QWORD *)a1);
  v4 = 0LL;
  v5 = *((_DWORD *)a1 + 8);
  if ( (v5 & 0x14) == 0 && *((_QWORD *)a1 + 1) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    v2 = *(_QWORD *)(v3[2] + 432LL);
    if ( v3 != *(_QWORD **)(v2 + 128) )
      *((_QWORD *)a1 + 1) = 0LL;
  }
  if ( (v5 & 4) != 0 )
    return 0LL;
  v6 = *((_QWORD *)a1 + 1);
  switch ( v6 )
  {
    case 1LL:
      return 2LL;
    case -2LL:
      v7 = v3[5];
      if ( (*(_BYTE *)(v7 + 24) & 8) == 0 )
      {
        v10 = (*(_WORD *)(v7 + 42) & 0x2FFF) == 669;
        goto LABEL_15;
      }
      LastTopMostWindow = (__int64 *)GetLastTopMostWindow(v3);
      if ( LastTopMostWindow )
        v9 = *LastTopMostWindow;
      else
        v9 = 0LL;
      *((_QWORD *)a1 + 1) = v9;
      if ( v9 == *(_QWORD *)a1 )
      {
        v10 = (*(_WORD *)(v3[5] + 42LL) & 0x2FFF) == 669;
LABEL_15:
        if ( !v10 )
        {
          v11 = (__int64 *)v3[12];
          if ( v11 )
            v4 = *v11;
        }
        *((_QWORD *)a1 + 1) = v4;
      }
      return 2LL;
    case -1LL:
      if ( gHardErrorHandler )
      {
        TopMostInsertAfter = (__int64 *)GetTopMostInsertAfter(v3, v2);
        if ( TopMostInsertAfter )
          v4 = *TopMostInsertAfter;
      }
      *((_QWORD *)a1 + 1) = v4;
      return 1LL;
    case 0LL:
      if ( (*(_BYTE *)(v3[5] + 24LL) & 8) == 0 )
      {
        v14 = (__int64 *)CalcForegroundInsertAfter(v3);
        if ( v14 )
          v4 = *v14;
        *((_QWORD *)a1 + 1) = v4;
        return 0LL;
      }
LABEL_38:
      if ( gHardErrorHandler )
      {
        v20 = (_QWORD *)GetTopMostInsertAfter(v3, v2);
        if ( v20 )
          *((_QWORD *)a1 + 1) = *v20;
      }
      return 0LL;
  }
  v15 = (__int64 *)GetLastTopMostWindow(v3);
  if ( v15 )
    v16 = *v15;
  else
    v16 = 0LL;
  v17 = *((_QWORD *)a1 + 1);
  if ( v17 == v16 )
    return 0LL;
  v18 = _HMObjectFromHandle(v17);
  v19 = *(unsigned __int8 *)(v3[5] + 24LL);
  if ( (*(_BYTE *)(*(_QWORD *)(v18 + 40) + 24LL) & 8) != 0 )
  {
    if ( (v19 & 8) == 0 )
      return 1LL;
    goto LABEL_38;
  }
  return (v19 >> 2) & 2;
}
