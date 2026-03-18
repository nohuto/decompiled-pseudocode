/*
 * XREFs of MiEnableLargeSubsection @ 0x14067AA74
 * Callers:
 *     MiIncrementLargeSubsections @ 0x1404C96E0 (MiIncrementLargeSubsections.c)
 * Callees:
 *     MiUnlinkPageFromListEx @ 0x140211CD0 (MiUnlinkPageFromListEx.c)
 *     MiLockProtoPoolPageForce @ 0x140215A80 (MiLockProtoPoolPageForce.c)
 *     MiCheckLinearProtectedPteAccessedBit @ 0x140232A20 (MiCheckLinearProtectedPteAccessedBit.c)
 *     MiMakeValidPte @ 0x1402383C0 (MiMakeValidPte.c)
 *     MiUnlockProtoPoolPage @ 0x14028CBF0 (MiUnlockProtoPoolPage.c)
 *     KeShouldYieldProcessor @ 0x1402DA180 (KeShouldYieldProcessor.c)
 *     MiLockLeafPage @ 0x1402E8100 (MiLockLeafPage.c)
 *     MiChargeLargeProtoSubsection @ 0x1407EFD94 (MiChargeLargeProtoSubsection.c)
 */

__int64 __fastcall MiEnableLargeSubsection(__int64 a1)
{
  unsigned __int64 v1; // rdi
  __int64 v2; // rsi
  __int64 result; // rax
  unsigned __int64 v5; // r14
  unsigned __int64 ValidPte; // rax
  __int64 v7; // r8
  ULONG_PTR v8; // rsi
  unsigned __int64 v9; // rdx
  ULONG_PTR v10; // rbx
  ULONG_PTR v11; // rbp
  unsigned __int64 v12; // rax
  unsigned __int8 v13; // [rsp+50h] [rbp+8h] BYREF
  int v14; // [rsp+58h] [rbp+10h]

  v1 = *(_QWORD *)(a1 + 8);
  v2 = *(unsigned int *)(a1 + 44);
  result = MiChargeLargeProtoSubsection(a1, 1LL);
  if ( (_DWORD)result )
  {
    v5 = v1 + 8 * v2;
    ValidPte = MiMakeValidPte(v1, -1LL, (*(_DWORD *)(a1 + 32) >> 1) & 0x1F);
    v8 = 0LL;
    LOBYTE(v9) = 17;
    v13 = 17;
    v10 = ValidPte;
    if ( v1 < v5 )
    {
      do
      {
        if ( (v1 & 0xFFF) == 0 || (_BYTE)v9 == 17 )
        {
          if ( (_BYTE)v9 != 17 )
            MiUnlockProtoPoolPage(v8, v9, v7);
          v8 = MiLockProtoPoolPageForce(v1, &v13);
        }
        v11 = MiLockLeafPage((unsigned __int64 *)v1, 0);
        v12 = *(_QWORD *)v1;
        if ( (*(_QWORD *)v1 & 1) == 0 )
        {
          if ( qword_140E2DB80 )
          {
            if ( (v12 & 0x10) != 0 )
              v12 &= ~0x10uLL;
            else
              v12 &= ~qword_140E2DB80;
          }
          v10 = v12 ^ (v12 ^ v10) & 0xFFF0000000000FFFuLL;
          if ( _bittest64(&MiFlags, 0x24u) && (v10 & 0x20) == 0 && v1 >= 0xFFFFF6C000000000uLL )
            MiCheckLinearProtectedPteAccessedBit(v1, v10, 128);
          *(_QWORD *)v1 = v10;
          *(_QWORD *)(v11 + 24) &= 0xC000000000000000uLL;
          MiUnlinkPageFromListEx(v11, 0);
          v14 = *(_DWORD *)(v11 + 32);
          BYTE2(v14) = BYTE2(v14) & 0xF8 | 6;
          *(_DWORD *)(v11 + 32) = v14;
          v14 = *(_DWORD *)(v11 + 32);
          LOWORD(v14) = v14 + 1;
          *(_DWORD *)(v11 + 32) = v14;
        }
        v7 = v11;
        v9 = (*(_QWORD *)(v11 + 24) + 1LL) ^ (*(_QWORD *)(v11 + 24) ^ (*(_QWORD *)(v11 + 24) + 1LL)) & 0xC000000000000000uLL;
        *(_QWORD *)(v11 + 24) = v9;
        _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        v1 += 8LL;
        if ( (v1 & 0x1F8) != 0 || !KeShouldYieldProcessor() )
        {
          LOBYTE(v9) = v13;
        }
        else
        {
          LOBYTE(v9) = v13;
          MiUnlockProtoPoolPage(v8, v9, v7);
          LOBYTE(v9) = 17;
          v13 = 17;
        }
      }
      while ( v1 < v5 );
      if ( (_BYTE)v9 != 17 )
        MiUnlockProtoPoolPage(v8, v9, v7);
    }
    return 1LL;
  }
  return result;
}
