/*
 * XREFs of MiMapArbitraryPage @ 0x14022492C
 * Callers:
 *     MiConvertStandbyToProto @ 0x140224810 (MiConvertStandbyToProto.c)
 * Callees:
 *     MiMakeValidPte @ 0x14020EF10 (MiMakeValidPte.c)
 *     MiCombineCandidate @ 0x140210C20 (MiCombineCandidate.c)
 *     MiMakeProtectionPfnCompatible @ 0x140224530 (MiMakeProtectionPfnCompatible.c)
 *     MiSafeLockPage @ 0x140231E30 (MiSafeLockPage.c)
 *     MiUnlockPage @ 0x14032B850 (MiUnlockPage.c)
 *     MiCheckLinearProtectedPteAccessedBit @ 0x14037CB60 (MiCheckLinearProtectedPteAccessedBit.c)
 */

__int64 __fastcall MiMapArbitraryPage(_QWORD *a1, _QWORD *a2, __int64 a3, __int64 a4, int a5)
{
  __int64 v5; // rsi
  int v6; // edi
  ULONG_PTR *v7; // r14
  char v8; // bp
  char v11; // r12
  int v12; // eax
  __int64 v13; // rdx
  unsigned int v14; // edi
  int ProtectionPfnCompatible; // eax
  ULONG_PTR ValidPte; // rax
  ULONG_PTR v18; // rbx

  v5 = a2[8];
  v6 = a4;
  v7 = (ULONG_PTR *)a2[9];
  v8 = a3;
  v11 = MiSafeLockPage(0xAAAAAAAAAAAAAAABuLL * ((v5 + 0x220000000000LL) >> 4), a2, a3, a4);
  if ( v11 != 17 )
  {
    v12 = MiCombineCandidate(a1, v8, (_QWORD *)v5);
    if ( v6 )
    {
      if ( v12 != v6 )
        goto LABEL_6;
    }
    else if ( !v12 )
    {
      goto LABEL_6;
    }
    v14 = 1;
    if ( (!a5 || (unsigned __int8)((*(_BYTE *)(v5 + 34) & 7) - 2) <= 1u)
      && (HIWORD(*(_DWORD *)(v5 + 32)) & 0xC0) != 0xC0 )
    {
      ProtectionPfnCompatible = MiMakeProtectionPfnCompatible(1, v5);
      ValidPte = MiMakeValidPte(
                   (unsigned __int64)v7,
                   0xAAAAAAAAAAAAAAABuLL * ((v5 + 0x220000000000LL) >> 4),
                   ProtectionPfnCompatible | 0x20000000u);
      a2[7] = v7;
      v18 = ValidPte;
      a2[6] = v5;
      if ( _bittest64(&MiFlags, 0x24u) && (ValidPte & 0x20) == 0 && (unsigned __int64)v7 >= 0xFFFFF6C000000000uLL )
        MiCheckLinearProtectedPteAccessedBit((ULONG_PTR)v7, ValidPte);
      *v7 = v18;
      goto LABEL_7;
    }
LABEL_6:
    v14 = 0;
LABEL_7:
    LOBYTE(v13) = v11;
    MiUnlockPage(v5, v13);
    return v14;
  }
  return 0LL;
}
