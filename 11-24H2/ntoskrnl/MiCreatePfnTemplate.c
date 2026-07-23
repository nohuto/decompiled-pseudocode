/*
 * XREFs of MiCreatePfnTemplate @ 0x14066D6E0
 * Callers:
 *     MiDoGangAssignment @ 0x14026FEE4 (MiDoGangAssignment.c)
 *     MiInitializeDynamicPfns @ 0x14066EA90 (MiInitializeDynamicPfns.c)
 *     MiSwitchToPfns @ 0x140C540A0 (MiSwitchToPfns.c)
 *     MxInsertFreePages @ 0x140C54EE0 (MxInsertFreePages.c)
 * Callees:
 *     MiSetPfnIdentity @ 0x140216B00 (MiSetPfnIdentity.c)
 *     MiSetPfnTbFlushStamp @ 0x140253C90 (MiSetPfnTbFlushStamp.c)
 *     MiUpdatePageFileHighInPte @ 0x1402EACE0 (MiUpdatePageFileHighInPte.c)
 *     MiSetPfnContainingFrame @ 0x140347E40 (MiSetPfnContainingFrame.c)
 *     MiMakeDemandZeroPte @ 0x140392C40 (MiMakeDemandZeroPte.c)
 *     MiSetPageTablePfnBuddy @ 0x140492B70 (MiSetPageTablePfnBuddy.c)
 */

__int64 __fastcall MiCreatePfnTemplate(__int64 a1, __int16 a2, unsigned __int16 a3)
{
  __int64 v3; // rbp
  char v6; // cl
  __int64 result; // rax
  __int64 DemandZeroPte; // rax
  __int64 v9; // r9
  int v10; // [rsp+60h] [rbp+18h]
  int v11; // [rsp+60h] [rbp+18h]
  int v12; // [rsp+60h] [rbp+18h]
  int v13; // [rsp+60h] [rbp+18h]

  v3 = a3;
  *(_OWORD *)a1 = 0LL;
  *(_OWORD *)(a1 + 16) = 0LL;
  *(_OWORD *)(a1 + 32) = 0LL;
  v10 = *(_DWORD *)(a1 + 32);
  BYTE2(v10) = BYTE2(v10) & 0x3F | 0x40;
  *(_DWORD *)(a1 + 32) = v10;
  MiSetPfnTbFlushStamp(a1, 0LL, 0);
  *(_QWORD *)(a1 + 40) |= 0x40000000000000uLL;
  if ( (a2 & 0x100) != 0 )
  {
    MiSetPfnIdentity(a1, 3u);
LABEL_5:
    v6 = 6;
    goto LABEL_11;
  }
  if ( (a2 & 0x80u) != 0 )
  {
    *(_QWORD *)(a1 + 8) = 0xFFFFF68000000000uLL;
    goto LABEL_5;
  }
  if ( (a2 & 2) != 0 )
  {
    *(_QWORD *)(a1 + 40) |= 0x20000000000000uLL;
    if ( (a2 & 4) != 0 )
    {
      HIWORD(v11) = HIWORD(*(_DWORD *)(a1 + 32));
      LOWORD(v11) = 1;
      *(_DWORD *)(a1 + 32) = v11;
      *(_QWORD *)(a1 + 24) = *(_QWORD *)(a1 + 24) & 0xC000000000000000uLL | 1;
      goto LABEL_5;
    }
    v6 = 2;
  }
  else
  {
    v6 = (4 * (a2 & 1)) | 1;
  }
LABEL_11:
  v12 = *(_DWORD *)(a1 + 32);
  BYTE2(v12) = v6 | BYTE2(v12) & 0xF8;
  *(_DWORD *)(a1 + 32) = v12;
  result = 0xFFE007FFFFFFFFFFuLL;
  *(_QWORD *)(a1 + 40) = (v3 << 43) ^ (*(_QWORD *)(a1 + 40) ^ (v3 << 43)) & 0xFFE007FFFFFFFFFFuLL;
  if ( (a2 & 0x180) != 0 )
  {
    *(_QWORD *)(a1 + 24) = *(_QWORD *)(a1 + 24) & 0xC000000000000000uLL | 1;
    DemandZeroPte = MiMakeDemandZeroPte(4);
    *(_QWORD *)(a1 + 16) = DemandZeroPte;
    if ( (a2 & 0x100) != 0 )
      *(_QWORD *)(a1 + 16) = MiUpdatePageFileHighInPte(DemandZeroPte, 1LL);
    MiSetPfnContainingFrame(a1, 0x3FFFFFFFFELL);
    MiSetPageTablePfnBuddy(a1, 0x10000000001LL, 1LL, v9);
    HIWORD(v13) = HIWORD(*(_DWORD *)(a1 + 32));
    LOWORD(v13) = 2;
    *(_DWORD *)(a1 + 32) = v13;
    result = *(_QWORD *)(a1 + 24) | 0x4000000000000000LL;
    *(_QWORD *)(a1 + 24) = result;
  }
  return result;
}
