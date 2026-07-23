/*
 * XREFs of MiMapArbitraryPage @ 0x1403F0E90
 * Callers:
 *     MiConvertStandbyToProto @ 0x1403F0D74 (MiConvertStandbyToProto.c)
 * Callees:
 *     MiCheckLinearProtectedPteAccessedBit @ 0x140203550 (MiCheckLinearProtectedPteAccessedBit.c)
 *     MiMakeValidPte @ 0x140212550 (MiMakeValidPte.c)
 *     MiUnlockPage @ 0x1402A11F0 (MiUnlockPage.c)
 *     MiSafeLockPage @ 0x140334630 (MiSafeLockPage.c)
 *     MiCombineCandidate @ 0x140344930 (MiCombineCandidate.c)
 *     MiMakeProtectionPfnCompatible @ 0x1403F26B0 (MiMakeProtectionPfnCompatible.c)
 */

__int64 __fastcall MiMapArbitraryPage(_QWORD *a1, _QWORD *a2, char a3, int a4, int a5)
{
  __int64 v5; // rsi
  ULONG_PTR *v7; // r14
  char v11; // r12
  int v12; // eax
  unsigned int v13; // edi
  int ProtectionPfnCompatible; // eax
  ULONG_PTR ValidPte; // rax
  ULONG_PTR v17; // rbx

  v5 = a2[8];
  v7 = (ULONG_PTR *)a2[9];
  v11 = MiSafeLockPage(0xAAAAAAAAAAAAAAABuLL * ((v5 + 0x220000000000LL) >> 4));
  if ( v11 != 17 )
  {
    v12 = MiCombineCandidate(a1, a3, (_QWORD *)v5);
    if ( a4 )
    {
      if ( v12 != a4 )
        goto LABEL_6;
    }
    else if ( !v12 )
    {
      goto LABEL_6;
    }
    v13 = 1;
    if ( (!a5 || (unsigned __int8)((*(_BYTE *)(v5 + 34) & 7) - 2) <= 1u)
      && (HIWORD(*(_DWORD *)(v5 + 32)) & 0xC0) != 0xC0 )
    {
      ProtectionPfnCompatible = MiMakeProtectionPfnCompatible(1LL, v5);
      ValidPte = MiMakeValidPte(
                   (unsigned __int64)v7,
                   0xAAAAAAAAAAAAAAABuLL * ((v5 + 0x220000000000LL) >> 4),
                   ProtectionPfnCompatible | 0x20000000u);
      a2[7] = v7;
      v17 = ValidPte;
      a2[6] = v5;
      if ( _bittest64(&MiFlags, 0x24u) && (ValidPte & 0x20) == 0 && (unsigned __int64)v7 >= 0xFFFFF6C000000000uLL )
        MiCheckLinearProtectedPteAccessedBit((ULONG_PTR)v7, ValidPte, 128LL);
      *v7 = v17;
      goto LABEL_7;
    }
LABEL_6:
    v13 = 0;
LABEL_7:
    MiUnlockPage(v5, v11);
    return v13;
  }
  return 0LL;
}
