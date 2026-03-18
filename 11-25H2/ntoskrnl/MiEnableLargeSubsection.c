/*
 * XREFs of MiEnableLargeSubsection @ 0x14066F2B4
 * Callers:
 *     MiIncrementLargeSubsections @ 0x1404C92E4 (MiIncrementLargeSubsections.c)
 * Callees:
 *     MiMakeValidPte @ 0x14020EF10 (MiMakeValidPte.c)
 *     MiUnlinkPageFromListEx @ 0x14021A1F0 (MiUnlinkPageFromListEx.c)
 *     MiLockProtoPoolPageForce @ 0x140231620 (MiLockProtoPoolPageForce.c)
 *     MiUnlockProtoPoolPage @ 0x1402353A0 (MiUnlockProtoPoolPage.c)
 *     KeShouldYieldProcessor @ 0x1402B0440 (KeShouldYieldProcessor.c)
 *     MiLockLeafPage @ 0x14033B770 (MiLockLeafPage.c)
 *     MiCheckLinearProtectedPteAccessedBit @ 0x14037CB60 (MiCheckLinearProtectedPteAccessedBit.c)
 *     MiChargeLargeProtoSubsection @ 0x1407DFEF4 (MiChargeLargeProtoSubsection.c)
 */

__int64 __fastcall MiEnableLargeSubsection(__int64 a1)
{
  unsigned __int64 v1; // rdi
  __int64 v2; // rsi
  __int64 result; // rax
  unsigned __int64 v5; // r14
  unsigned __int64 ValidPte; // rax
  __int64 v7; // r8
  unsigned __int64 v8; // r9
  ULONG_PTR v9; // rsi
  unsigned __int8 v10; // dl
  ULONG_PTR v11; // rbx
  ULONG_PTR v12; // rbp
  unsigned __int64 v13; // rax
  unsigned __int8 v14; // [rsp+50h] [rbp+8h] BYREF
  int v15; // [rsp+58h] [rbp+10h]

  v1 = *(_QWORD *)(a1 + 8);
  v2 = *(unsigned int *)(a1 + 44);
  result = MiChargeLargeProtoSubsection(a1, 1LL);
  if ( (_DWORD)result )
  {
    v5 = v1 + 8 * v2;
    ValidPte = MiMakeValidPte(v1, -1LL, (*(_DWORD *)(a1 + 32) >> 1) & 0x1F);
    v9 = 0LL;
    v10 = 17;
    v14 = 17;
    v11 = ValidPte;
    if ( v1 < v5 )
    {
      do
      {
        if ( (v1 & 0xFFF) == 0 || v10 == 17 )
        {
          if ( v10 != 17 )
            MiUnlockProtoPoolPage(v9, v10, v7, v8);
          v9 = MiLockProtoPoolPageForce(v1, &v14);
        }
        v12 = MiLockLeafPage((unsigned __int64 *)v1, 0);
        v13 = *(_QWORD *)v1;
        if ( (*(_QWORD *)v1 & 1) == 0 )
        {
          if ( qword_140E2D940 )
          {
            if ( (v13 & 0x10) != 0 )
              v13 &= ~0x10uLL;
            else
              v13 &= ~qword_140E2D940;
          }
          v11 = v13 ^ (v13 ^ v11) & 0xFFF0000000000FFFuLL;
          if ( _bittest64(&MiFlags, 0x24u) && (v11 & 0x20) == 0 && v1 >= 0xFFFFF6C000000000uLL )
            MiCheckLinearProtectedPteAccessedBit(v1, v11, 128);
          *(_QWORD *)v1 = v11;
          *(_QWORD *)(v12 + 24) &= 0xC000000000000000uLL;
          MiUnlinkPageFromListEx(v12, 0);
          v15 = *(_DWORD *)(v12 + 32);
          BYTE2(v15) = BYTE2(v15) & 0xF8 | 6;
          *(_DWORD *)(v12 + 32) = v15;
          v15 = *(_DWORD *)(v12 + 32);
          LOWORD(v15) = v15 + 1;
          *(_DWORD *)(v12 + 32) = v15;
        }
        v7 = v12;
        *(_QWORD *)(v12 + 24) = (*(_QWORD *)(v12 + 24) + 1LL) ^ (*(_QWORD *)(v12 + 24) ^ (*(_QWORD *)(v12 + 24) + 1LL)) & 0xC000000000000000uLL;
        _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        v1 += 8LL;
        if ( (v1 & 0x1F8) != 0 || !KeShouldYieldProcessor() )
        {
          v10 = v14;
        }
        else
        {
          MiUnlockProtoPoolPage(v9, v14, v7, v8);
          v10 = 17;
          v14 = 17;
        }
      }
      while ( v1 < v5 );
      if ( v10 != 17 )
        MiUnlockProtoPoolPage(v9, v10, v7, v8);
    }
    return 1LL;
  }
  return result;
}
