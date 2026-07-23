/*
 * XREFs of MiUpdateLargePageSectionPfns @ 0x140674258
 * Callers:
 *     MiCreatePagingFileMap @ 0x14098CB78 (MiCreatePagingFileMap.c)
 * Callees:
 *     MiCheckLinearProtectedPteAccessedBit @ 0x140203550 (MiCheckLinearProtectedPteAccessedBit.c)
 *     MiMakeValidPte @ 0x140212550 (MiMakeValidPte.c)
 *     MiSetPfnTbFlushStamp @ 0x140253C90 (MiSetPfnTbFlushStamp.c)
 *     MiLockPageInline @ 0x1402A1150 (MiLockPageInline.c)
 *     MiUnlockPage @ 0x1402A11F0 (MiUnlockPage.c)
 *     MiConvertActiveLargePageToSmall @ 0x1402EDFDC (MiConvertActiveLargePageToSmall.c)
 *     MiGetPfnPageSizeIndex @ 0x140310FA0 (MiGetPfnPageSizeIndex.c)
 *     MiSetPfnContainingFrame @ 0x140347E40 (MiSetPfnContainingFrame.c)
 *     MiMakeDemandZeroPte @ 0x140392C40 (MiMakeDemandZeroPte.c)
 *     MiSetPfnNodeBlinkLow @ 0x1403E2820 (MiSetPfnNodeBlinkLow.c)
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
  __int64 v11; // r9
  ULONG_PTR v12; // r15
  __int64 v13; // r13
  __int64 v14; // r8
  __int64 v15; // rdx
  unsigned __int8 v16; // si
  int v17; // eax
  ULONG_PTR v18; // [rsp+60h] [rbp+8h]
  int v20; // [rsp+70h] [rbp+18h]

  v3 = a3;
  v4 = a2;
  v6 = 0xAAAAAAAAAAAAAAABuLL * ((a1 + 0x220000000000LL) >> 4);
  ValidPte = MiMakeValidPte(0LL, v6, a3 | 0x80000000);
  DemandZeroPte = MiMakeDemandZeroPte(v3);
  v9 = -1LL;
  v18 = v4 + 8 * MiPageSizes[(unsigned int)MiGetPfnPageSizeIndex(a1)];
  result = MiConvertActiveLargePageToSmall(a1, 1);
  v12 = v4;
  if ( v4 < v18 )
  {
    v13 = a1 + 24;
    v14 = 0xFFFFF68000000000uLL;
    do
    {
      if ( v9 == -1 || (v12 & 0xFFF) == 0 )
        v9 = (*(_QWORD *)(((v4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) >> 12) & 0xFFFFFFFFFFLL;
      v15 = 0xFFF0000000000FFFuLL;
      ValidPte = (v6 << 12) ^ ((v6 << 12) ^ ValidPte) & 0xFFF0000000000FFFuLL;
      if ( _bittest64(&MiFlags, 0x24u) && (ValidPte & 0x20) == 0 && v12 >= 0xFFFFF6C000000000uLL )
        MiCheckLinearProtectedPteAccessedBit(v12, ValidPte, 128LL);
      *(_QWORD *)v12 = ValidPte;
      v16 = MiLockPageInline(v13 - 24, v15, v14, v11);
      MiSetPfnTbFlushStamp(v13 - 24, 0LL, 1);
      MiSetPfnNodeBlinkLow(v13 - 24, 0LL);
      *(_QWORD *)v13 = *(_QWORD *)v13 & 0xC000000000000000uLL | 1;
      v17 = *(_DWORD *)(v13 + 8);
      LOWORD(v17) = 2;
      *(_DWORD *)(v13 + 8) = v17;
      *(_QWORD *)(v13 - 8) = DemandZeroPte;
      *(_QWORD *)(v13 - 24) = 0LL;
      *(_QWORD *)(v13 + 16) |= 0x8000000000000000uLL;
      MiSetPfnContainingFrame(v13 - 24, v9);
      *(_QWORD *)(v13 - 16) = v12;
      v20 = *(_DWORD *)(v13 + 8);
      BYTE2(v20) = BYTE2(v20) & 0xF8 | 6;
      *(_DWORD *)(v13 + 8) = v20;
      result = MiUnlockPage(v13 - 24, v16);
      v4 = a2;
      ++v6;
      v13 += 48LL;
      v14 = 0xFFFFF68000000000uLL;
      v12 += 8LL;
    }
    while ( v12 < v18 );
  }
  return result;
}
