/*
 * XREFs of ?GreFillFontDir@@YAKQEAU_IFIMETRICS@@KPEAE@Z @ 0x14021D388
 * Callers:
 *     ?GreMakeFontDir@@YAKKPEAEPEAG@Z @ 0x14019EECC (-GreMakeFontDir@@YAKKPEAEPEAG@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GreFillFontDir(struct _IFIMETRICS *const a1, int a2, unsigned __int8 *a3)
{
  unsigned int CurrentThreadId; // eax
  char v7; // al
  unsigned __int8 v8; // cl
  __int16 v9; // cx
  unsigned __int8 *v10; // r8
  __int16 fwdAveCharWidth; // ax
  __int16 v12; // ax
  CHAR *v13; // rdi
  BYTE *v14; // r8
  const WCHAR *v15; // r9
  __int64 v16; // rsi
  __int64 v17; // rax
  __int64 v18; // r14
  __int64 v19; // r14
  CHAR *v20; // rdi
  __int64 v21; // rax
  const WCHAR *v22; // r9
  __int64 v23; // rbp
  __int64 v24; // rbp
  CHAR *v25; // rdi
  __int64 v26; // rax
  const WCHAR *v27; // r9

  *(_QWORD *)a3 = 0x95020000000001LL;
  *((_WORD *)a3 + 4) = 0;
  strcpy((char *)a3 + 10, "Windows! Windows! Windows!");
  if ( a2 )
  {
    if ( a2 == 2 )
      CurrentThreadId = (unsigned int)PsGetCurrentThreadId();
    else
      CurrentThreadId = (unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC;
    *(_DWORD *)(a3 + 10) = CurrentThreadId;
  }
  *(_OWORD *)(a3 + 37) = 0LL;
  *(_OWORD *)(a3 + 53) = 0LL;
  a3[69] = 0;
  *(_DWORD *)(a3 + 37) = 16843536;
  v7 = 67;
  if ( a2 != 2 )
    v7 = 3;
  a3[70] = v7 | (a2 != 0 ? 0x80 : 0);
  a3[71] = a1->fsSelection;
  a3[72] = a1->fwdUnitsPerEm;
  a3[73] = HIBYTE(a1->fwdUnitsPerEm);
  *((_WORD *)a3 + 37) = 72;
  *((_WORD *)a3 + 38) = 72;
  a3[78] = a1->fwdWinAscender;
  a3[79] = HIBYTE(a1->fwdWinAscender);
  *((_WORD *)a3 + 40) = a1->fwdWinDescender + a1->fwdWinAscender - a1->fwdUnitsPerEm;
  v8 = LOBYTE(a1->fwdMacAscender)
     + LOBYTE(a1->fwdMacLineGap)
     - LOBYTE(a1->fwdWinAscender)
     - LOBYTE(a1->fwdMacDescender)
     - LOBYTE(a1->fwdWinDescender);
  if ( (__int16)(a1->fwdMacAscender + a1->fwdMacLineGap - a1->fwdWinAscender - a1->fwdMacDescender - a1->fwdWinDescender) <= 0 )
    v8 = 0;
  a3[82] = v8;
  v9 = a1->fwdMacAscender + a1->fwdMacLineGap - a1->fwdWinAscender - a1->fwdMacDescender - a1->fwdWinDescender;
  if ( v9 <= 0 )
    HIBYTE(v9) = 0;
  a3[83] = HIBYTE(v9);
  a3[84] = -((a1->fsSelection & 1) != 0);
  a3[85] = -((a1->fsSelection & 2) != 0);
  a3[86] = -((a1->fsSelection & 0x10) != 0);
  a3[87] = a1->usWinWeight;
  a3[88] = HIBYTE(a1->usWinWeight);
  a3[89] = a1->jWinCharSet;
  *((_WORD *)a3 + 45) = 0;
  *((_WORD *)a3 + 46) = a1->fwdWinDescender + a1->fwdWinAscender;
  a3[94] = a1->jWinPitchAndFamily & 0xF0 | (a1->flInfo >> 1) & 2 | ((a1->flInfo & 1) != 0 ? 6 : 0) | ((a1->flInfo & 0x401000) == 0);
  v10 = a3 + 95;
  fwdAveCharWidth = a1->fwdAveCharWidth;
  if ( !fwdAveCharWidth )
    fwdAveCharWidth = a1->fwdMaxCharInc / 2;
  *v10 = fwdAveCharWidth;
  v12 = a1->fwdAveCharWidth;
  if ( !v12 )
    v12 = a1->fwdMaxCharInc / 2;
  v13 = (CHAR *)(a3 + 118);
  v10[1] = HIBYTE(v12);
  v14 = v10 + 2;
  *v14 = a1->fwdMaxCharInc;
  v14[1] = HIBYTE(a1->fwdMaxCharInc);
  v14 += 2;
  *v14++ = a1->chFirstChar;
  *v14++ = a1->chLastChar;
  *(_WORD *)v14 = 513;
  v14 += 2;
  *v14++ = 0;
  *v14++ = 0;
  *v14++ = 0;
  *v14++ = 0;
  *v14++ = 0;
  *v14++ = 0;
  *(_DWORD *)v14 = 118;
  v14[4] = a1->fwdLowestPPEm;
  v14[5] = HIBYTE(a1->fwdLowestPPEm);
  v14[6] = a1->lCharBias;
  v14[7] = BYTE1(a1->lCharBias);
  v15 = (const WCHAR *)((char *)a1 + a1->dpwszFamilyName);
  v16 = -1LL;
  v17 = -1LL;
  do
    ++v17;
  while ( v15[v17] );
  RtlUnicodeToMultiByteN(v13, 0x20u, 0LL, v15, 2 * v17 + 2);
  v13[31] = 0;
  v18 = -1LL;
  do
    ++v18;
  while ( v13[v18] );
  v19 = v18 + 1;
  v20 = &v13[v19];
  v21 = -1LL;
  v22 = (const WCHAR *)((char *)a1 + a1->dpwszFaceName);
  do
    ++v21;
  while ( v22[v21] );
  RtlUnicodeToMultiByteN(v20, 0x40u, 0LL, v22, 2 * v21 + 2);
  v20[63] = 0;
  v23 = -1LL;
  do
    ++v23;
  while ( v20[v23] );
  v24 = v23 + 1;
  v25 = &v20[v24];
  v26 = -1LL;
  v27 = (const WCHAR *)((char *)a1 + a1->dpwszStyleName);
  do
    ++v26;
  while ( v27[v26] );
  RtlUnicodeToMultiByteN(v25, 0x20u, 0LL, v27, 2 * v26 + 2);
  v25[31] = 0;
  do
    ++v16;
  while ( v25[v16] );
  return (unsigned int)(v19 + 119 + v16 + v24);
}
