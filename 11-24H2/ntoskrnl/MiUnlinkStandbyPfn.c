/*
 * XREFs of MiUnlinkStandbyPfn @ 0x1402363D0
 * Callers:
 *     MmCopyToCachedPage @ 0x1402EDA94 (MmCopyToCachedPage.c)
 * Callees:
 *     MiUnlinkPageFromListEx @ 0x140211CD0 (MiUnlinkPageFromListEx.c)
 *     MiGetPfnPriority @ 0x1402141E0 (MiGetPfnPriority.c)
 *     MiCheckLinearProtectedPteAccessedBit @ 0x140232A20 (MiCheckLinearProtectedPteAccessedBit.c)
 *     MiMakeValidPte @ 0x1402383C0 (MiMakeValidPte.c)
 *     MiCanPfnOriginalPteBeLost @ 0x14039E1D0 (MiCanPfnOriginalPteBeLost.c)
 *     MiDiscardTransitionPteEx @ 0x1403A1C98 (MiDiscardTransitionPteEx.c)
 */

__int64 __fastcall MiUnlinkStandbyPfn(ULONG_PTR *BugCheckParameter2, char a2)
{
  ULONG_PTR v2; // rbx
  __int64 v5; // rbx
  __int64 v6; // rdi
  __int64 v7; // r8
  int v8; // ecx
  ULONG_PTR ValidPte; // rbx
  int v11; // [rsp+40h] [rbp+8h]
  int v12; // [rsp+40h] [rbp+8h]
  int v13; // [rsp+40h] [rbp+8h]
  int v14; // [rsp+40h] [rbp+8h]

  v2 = *BugCheckParameter2;
  if ( qword_140E2DB80 )
  {
    if ( (v2 & 0x10) != 0 )
      v2 &= ~0x10uLL;
    else
      v2 &= ~qword_140E2DB80;
  }
  v5 = (v2 >> 12) & 0xFFFFFFFFFFLL;
  v6 = 48 * v5 - 0x220000000000LL;
  if ( (*(_BYTE *)(v6 + 35) & 0x10) != 0 )
    return 3LL;
  if ( (*(_BYTE *)(v6 + 34) & 0x20) != 0 )
    return 2LL;
  if ( (MiUnlinkPageFromListEx(48 * v5 - 0x220000000000LL, 0) & 3) != 0 )
  {
    MiDiscardTransitionPteEx(48 * v5 - 0x220000000000LL, 0LL);
    return 1LL;
  }
  else
  {
    v11 = *(_DWORD *)(v6 + 32);
    LOWORD(v11) = v11 + 1;
    *(_DWORD *)(v6 + 32) = v11;
    v12 = *(_DWORD *)(v6 + 32);
    BYTE2(v12) = BYTE2(v12) & 0xF8 | 6;
    *(_DWORD *)(v6 + 32) = v12;
    *(_QWORD *)(v6 + 24) = *(_QWORD *)(v6 + 24) & 0xC000000000000000uLL | 1;
    if ( (a2 & 2) != 0 && (unsigned int)MiGetPfnPriority(48 * v5 - 0x220000000000LL) > 2 )
    {
      v14 = *(_DWORD *)(v6 + 32);
      HIBYTE(v14) = HIBYTE(v14) & 0xF8 | 2;
      *(_DWORD *)(v6 + 32) = v14;
    }
    v7 = (*(_DWORD *)(v6 + 16) >> 5) & 7;
    v8 = (unsigned __int8)BYTE2(*(_DWORD *)(v6 + 32)) >> 6;
    if ( v8 )
    {
      if ( v8 == 2 )
        v7 = (unsigned int)v7 | 0x18;
    }
    else
    {
      v7 = (unsigned int)v7 | 8;
    }
    ValidPte = MiMakeValidPte(0LL, v5, v7);
    if ( (a2 & 4) == 0 || !_bittest64((const signed __int64 *)(v6 + 40), 0x35u) )
    {
      v13 = *(_DWORD *)(v6 + 32);
      if ( (v13 & 0x80000) != 0
        && (unsigned int)MiCanPfnOriginalPteBeLost(v6)
        && (*(_BYTE *)(v6 + 34) & 0x10) == 0
        && (*(_DWORD *)(v6 + 16) & 4) != 0 )
      {
        *(_QWORD *)(v6 + 16) &= ~4uLL;
      }
      BYTE2(v13) |= 0x10u;
      ValidPte |= 0x42uLL;
      *(_DWORD *)(v6 + 32) = v13;
    }
    if ( _bittest64(&MiFlags, 0x24u)
      && (ValidPte & 0x20) == 0
      && (unsigned __int64)BugCheckParameter2 >= 0xFFFFF6C000000000uLL )
    {
      MiCheckLinearProtectedPteAccessedBit((ULONG_PTR)BugCheckParameter2, ValidPte, 128);
    }
    *BugCheckParameter2 = ValidPte;
    return 0LL;
  }
}
