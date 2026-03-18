/*
 * XREFs of ?GetPFFFromId@@YAPEAVPFF@@PEAVPFT@@IPEAPEAPEAV1@@Z @ 0x1401B77CC
 * Callers:
 *     NtGdiGetFontFileInfo @ 0x1400BADF0 (NtGdiGetFontFileInfo.c)
 *     NtGdiGetFontFileData @ 0x1401B7450 (NtGdiGetFontFileData.c)
 *     ?GrepRemoveFontMemResource@@YAHPEAX@Z @ 0x140214100 (-GrepRemoveFontMemResource@@YAHPEAX@Z.c)
 *     ?ChangeGhostFont@PUBLIC_PFTOBJ@@QEAAHPEAXH@Z @ 0x14030DA70 (-ChangeGhostFont@PUBLIC_PFTOBJ@@QEAAHPEAXH@Z.c)
 *     NtGdiAddEmbFontToDC @ 0x140327990 (NtGdiAddEmbFontToDC.c)
 * Callees:
 *     ?pPvtDataMatch@PFFOBJ@@QEAAPEAUtagPvtData@@XZ @ 0x1400FDBA8 (-pPvtDataMatch@PFFOBJ@@QEAAPEAUtagPvtData@@XZ.c)
 *     ?SkipInvalidPff@@YAPEAVPFF@@PEAV1@@Z @ 0x14030DCEC (-SkipInvalidPff@@YAPEAVPFF@@PEAV1@@Z.c)
 */

struct PFF *__fastcall GetPFFFromId(struct PFT *a1, __int64 a2, struct PFF ***a3)
{
  unsigned int v4; // r14d
  __int64 v6; // r9
  struct PFF *v8; // rcx
  struct PFF **v9; // rbp
  struct PFF *v10; // rax
  unsigned int v11; // edx
  __int64 v12; // r8
  int v13; // r9d
  struct PFF *v14; // rbx
  struct PFF *v15; // [rsp+20h] [rbp-18h] BYREF

  v4 = a2;
  W32GetSessionState((_DWORD)a1, a2);
  v6 = HIBYTE(v4);
  if ( (unsigned int)v6 >= *((_DWORD *)a1 + 6) )
    return 0LL;
  do
  {
    v8 = (struct PFF *)*((_QWORD *)a1 + v6 + 5);
    v9 = (struct PFF **)((char *)a1 + 8 * v6 + 40);
    while ( 1 )
    {
      v10 = SkipInvalidPff(v8);
      v14 = v10;
      if ( !v10 || *((_DWORD *)v10 + 37) == v4 )
        break;
      v8 = (struct PFF *)*((_QWORD *)v10 + 1);
    }
    v6 = (unsigned int)(v13 + 256);
  }
  while ( (unsigned int)v6 < v11 );
  if ( v10 )
  {
    if ( a1 != *(struct PFT **)(v12 + 20408) || (v15 = v10, PFFOBJ::pPvtDataMatch((PFFOBJ *)&v15)) )
    {
      if ( a3 )
        *a3 = v9;
    }
    else
    {
      return 0LL;
    }
  }
  return v14;
}
