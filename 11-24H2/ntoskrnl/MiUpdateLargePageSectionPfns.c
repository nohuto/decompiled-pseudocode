/*
 * XREFs of MiUpdateLargePageSectionPfns @ 0x140673088
 * Callers:
 *     MiCreatePagingFileMap @ 0x140942908 (MiCreatePagingFileMap.c)
 * Callees:
 *     MiCheckLinearProtectedPteAccessedBit @ 0x140232A20 (MiCheckLinearProtectedPteAccessedBit.c)
 *     MiMakeValidPte @ 0x1402383C0 (MiMakeValidPte.c)
 *     MiLockPageInline @ 0x140291550 (MiLockPageInline.c)
 *     MiUnlockPage @ 0x1402915F0 (MiUnlockPage.c)
 *     MiMakeDemandZeroPte @ 0x1402E3CC0 (MiMakeDemandZeroPte.c)
 *     MiSetPfnContainingFrame @ 0x1402E6800 (MiSetPfnContainingFrame.c)
 *     MiSetPfnTbFlushStamp @ 0x1402FBDB0 (MiSetPfnTbFlushStamp.c)
 *     MiGetPfnPageSizeIndex @ 0x1403070C0 (MiGetPfnPageSizeIndex.c)
 *     MiSetPfnNodeBlinkLow @ 0x1403EF8A0 (MiSetPfnNodeBlinkLow.c)
 *     MiConvertActiveLargePageToSmall @ 0x14041F5E8 (MiConvertActiveLargePageToSmall.c)
 */

__int64 __fastcall MiUpdateLargePageSectionPfns(__int64 a1, ULONG_PTR a2, int a3)
{
  char v3; // di
  ULONG_PTR v4; // rsi
  __int64 v6; // r12
  ULONG_PTR ValidPte; // rbx
  __int64 DemandZeroPte; // rdi
  __int64 v9; // r14
  __int64 result; // rax
  ULONG_PTR v11; // r15
  __int64 v12; // r13
  unsigned __int8 v13; // si
  int v14; // eax
  ULONG_PTR v15; // [rsp+60h] [rbp+8h]
  int v17; // [rsp+70h] [rbp+18h]

  v3 = a3;
  v4 = a2;
  v6 = 0xAAAAAAAAAAAAAAABuLL * ((a1 + 0x220000000000LL) >> 4);
  ValidPte = MiMakeValidPte(0LL, v6, a3 | 0x80000000);
  DemandZeroPte = MiMakeDemandZeroPte(v3);
  v9 = -1LL;
  v15 = v4 + 8 * MiPageSizes[(unsigned int)MiGetPfnPageSizeIndex(a1)];
  result = MiConvertActiveLargePageToSmall(a1, 1);
  v11 = v4;
  if ( v4 < v15 )
  {
    v12 = a1 + 24;
    do
    {
      if ( v9 == -1 || (v11 & 0xFFF) == 0 )
        v9 = (*(_QWORD *)(((v4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) >> 12) & 0xFFFFFFFFFFLL;
      ValidPte = (v6 << 12) ^ ((v6 << 12) ^ ValidPte) & 0xFFF0000000000FFFuLL;
      if ( _bittest64(&MiFlags, 0x24u) && (ValidPte & 0x20) == 0 && v11 >= 0xFFFFF6C000000000uLL )
        MiCheckLinearProtectedPteAccessedBit(v11, ValidPte, 128);
      *(_QWORD *)v11 = ValidPte;
      v13 = MiLockPageInline(v12 - 24);
      MiSetPfnTbFlushStamp(v12 - 24, 0LL, 1);
      MiSetPfnNodeBlinkLow(v12 - 24, 0LL);
      *(_QWORD *)v12 = *(_QWORD *)v12 & 0xC000000000000000uLL | 1;
      v14 = *(_DWORD *)(v12 + 8);
      LOWORD(v14) = 2;
      *(_DWORD *)(v12 + 8) = v14;
      *(_QWORD *)(v12 - 8) = DemandZeroPte;
      *(_QWORD *)(v12 - 24) = 0LL;
      *(_QWORD *)(v12 + 16) |= 0x8000000000000000uLL;
      MiSetPfnContainingFrame(v12 - 24, v9);
      *(_QWORD *)(v12 - 16) = v11;
      v17 = *(_DWORD *)(v12 + 8);
      BYTE2(v17) = BYTE2(v17) & 0xF8 | 6;
      *(_DWORD *)(v12 + 8) = v17;
      result = MiUnlockPage(v12 - 24, v13);
      v4 = a2;
      ++v6;
      v12 += 48LL;
      v11 += 8LL;
    }
    while ( v11 < v15 );
  }
  return result;
}
