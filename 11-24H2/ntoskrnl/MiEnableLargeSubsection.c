/*
 * XREFs of MiEnableLargeSubsection @ 0x14067BC54
 * Callers:
 *     MiIncrementLargeSubsections @ 0x1404C2B90 (MiIncrementLargeSubsections.c)
 * Callees:
 *     MiCheckLinearProtectedPteAccessedBit @ 0x140203550 (MiCheckLinearProtectedPteAccessedBit.c)
 *     MiMakeValidPte @ 0x140212550 (MiMakeValidPte.c)
 *     KeShouldYieldProcessor @ 0x14023BA60 (KeShouldYieldProcessor.c)
 *     MiUnlockProtoPoolPage @ 0x14029C7F0 (MiUnlockProtoPoolPage.c)
 *     MiLockProtoPoolPageForce @ 0x140333E20 (MiLockProtoPoolPageForce.c)
 *     MiUnlinkPageFromListEx @ 0x14033B030 (MiUnlinkPageFromListEx.c)
 *     MiLockLeafPage @ 0x140349740 (MiLockLeafPage.c)
 *     MiChargeLargeProtoSubsection @ 0x1407F0364 (MiChargeLargeProtoSubsection.c)
 */

__int64 __fastcall MiEnableLargeSubsection(__int64 a1)
{
  unsigned __int64 v1; // rdi
  __int64 v2; // rsi
  __int64 result; // rax
  unsigned __int64 v5; // r14
  unsigned __int64 ValidPte; // rax
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rsi
  unsigned __int64 v10; // rdx
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
    LOBYTE(v10) = 17;
    v14 = 17;
    v11 = ValidPte;
    if ( v1 < v5 )
    {
      do
      {
        if ( (v1 & 0xFFF) == 0 || (_BYTE)v10 == 17 )
        {
          if ( (_BYTE)v10 != 17 )
            MiUnlockProtoPoolPage(v9, v10, v7, v8);
          v9 = MiLockProtoPoolPageForce(v1, &v14);
        }
        v12 = MiLockLeafPage((unsigned __int64 *)v1, 0);
        v13 = *(_QWORD *)v1;
        if ( (*(_QWORD *)v1 & 1) == 0 )
        {
          if ( qword_140E2DCC0 )
          {
            if ( (v13 & 0x10) != 0 )
              v13 &= ~0x10uLL;
            else
              v13 &= ~qword_140E2DCC0;
          }
          v11 = v13 ^ (v13 ^ v11) & 0xFFF0000000000FFFuLL;
          if ( _bittest64(&MiFlags, 0x24u) && (v11 & 0x20) == 0 && v1 >= 0xFFFFF6C000000000uLL )
            MiCheckLinearProtectedPteAccessedBit(v1, v11, 128LL);
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
        v10 = (*(_QWORD *)(v12 + 24) + 1LL) ^ (*(_QWORD *)(v12 + 24) ^ (*(_QWORD *)(v12 + 24) + 1LL)) & 0xC000000000000000uLL;
        *(_QWORD *)(v12 + 24) = v10;
        _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        v1 += 8LL;
        if ( (v1 & 0x1F8) != 0 || !KeShouldYieldProcessor() )
        {
          LOBYTE(v10) = v14;
        }
        else
        {
          LOBYTE(v10) = v14;
          MiUnlockProtoPoolPage(v9, v10, v7, v8);
          LOBYTE(v10) = 17;
          v14 = 17;
        }
      }
      while ( v1 < v5 );
      if ( (_BYTE)v10 != 17 )
        MiUnlockProtoPoolPage(v9, v10, v7, v8);
    }
    return 1LL;
  }
  return result;
}
