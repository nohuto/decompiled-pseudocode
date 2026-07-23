/*
 * XREFs of MiMirrorRemoveInactivePages @ 0x14049D2E8
 * Callers:
 *     MiMirrorReduceBlackToActiveAndPrivatePages @ 0x14049D0BC (MiMirrorReduceBlackToActiveAndPrivatePages.c)
 * Callees:
 *     MiGetLeafVa @ 0x140240700 (MiGetLeafVa.c)
 *     MiGetPfnPageSizeIndex @ 0x140310FA0 (MiGetPfnPageSizeIndex.c)
 *     MiMirrorOmitPagesFromCopy @ 0x14041D540 (MiMirrorOmitPagesFromCopy.c)
 *     MiGetBaseResidentPageForBugCheck @ 0x140685390 (MiGetBaseResidentPageForBugCheck.c)
 */

__int64 __fastcall MiMirrorRemoveInactivePages(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  int v4; // ecx
  unsigned __int64 v5; // r12
  __int64 v6; // rbx
  __int64 v7; // rbp
  unsigned __int64 v8; // rdi
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // r14
  __int64 v11; // r14
  unsigned int v12; // r15d
  int PfnPageSizeIndex; // eax
  unsigned __int64 v14; // r8
  __int64 v15; // r9
  unsigned __int64 v16; // r10
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rcx
  char v20; // [rsp+50h] [rbp+8h]

  v4 = *(_DWORD *)(a1 + 8);
  v20 = v4;
  v5 = a3;
  v6 = 48 * a2 - 0x220000000000LL;
  v7 = 0LL;
  v8 = 0LL;
  v9 = -1LL;
  if ( !a3 )
    return v7;
  do
  {
    v10 = 1LL;
    if ( (*(_QWORD *)(v6 + 40) & 0x10000000000LL) != 0 )
    {
      v11 = MiGetBaseResidentPageForBugCheck(v6, a2, 0xFFFFF68000000000uLL);
      v12 = *(_BYTE *)(v11 + 34) & 7;
      PfnPageSizeIndex = MiGetPfnPageSizeIndex(v11);
      v14 = *(_QWORD *)(v11 + 8);
      if ( v14 )
        v14 = *(_QWORD *)(v11 + 8) | 0x8000000000000000uLL;
      v15 = (*(_QWORD *)(v11 + 40) >> 60) & 7LL;
      a2 = MiPageSizes[PfnPageSizeIndex];
      v16 = 0xAAAAAAAAAAAAAAABuLL;
      v10 = a2
          + ((0xAAAAAAAAAAAAAAABuLL * ((v6 + 0x220000000000LL) >> 4)) & ~(a2 - 1))
          - 0xAAAAAAAAAAAAAAABuLL * ((v6 + 0x220000000000LL) >> 4);
      if ( v10 > v5 )
        v10 = v5;
      if ( v12 <= 1 || v12 == 5 || v15 == 1 || (v20 & 0x40) != 0 && v14 && MiGetLeafVa(v14) <= 0x7FFFFFFEFFFFLL )
        goto LABEL_30;
    }
    else
    {
      if ( (*(_BYTE *)(v6 + 34) & 7) != 6 )
        goto LABEL_29;
      if ( *(__int64 *)(v6 + 40) < 0 )
        goto LABEL_29;
      if ( ((*(_QWORD *)(v6 + 40) >> 60) & 7) == 1 )
        goto LABEL_29;
      a2 = 0x3FFFFFFFFFFFFFFFLL;
      if ( (*(_QWORD *)(v6 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 0 && (*(_BYTE *)(v6 + 34) & 7) == 6 )
      {
        a2 = 0x3FFFFFFFFELL;
        if ( (*(_QWORD *)(v6 + 40) & 0xFFFFFFFFFFLL) == 0x3FFFFFFFFELL )
          goto LABEL_29;
      }
      if ( (v4 & 0x40) != 0 )
      {
        v17 = *(_QWORD *)(v6 + 8);
        if ( v17 && ((*(_QWORD *)(v6 + 40) >> 60) & 7) != 1 )
          v17 = *(_QWORD *)(v6 + 8) | 0x8000000000000000uLL;
        if ( v17 >= 0xFFFFF68000000000uLL && v17 <= 0xFFFFF6FFFFFFFFFFuLL )
        {
          v18 = (__int64)(v17 << 25) >> 16;
          if ( (v18 < 0xFFFFF68000000000uLL || v18 > 0xFFFFF6FFFFFFFFFFuLL) && v18 <= 0x7FFFFFFEFFFFLL )
          {
LABEL_29:
            v16 = 0xAAAAAAAAAAAAAAABuLL;
LABEL_30:
            if ( !v8 )
              v9 = v16 * ((v6 + 0x220000000000LL) >> 4);
            v8 += v10;
            goto LABEL_33;
          }
        }
      }
    }
    if ( v8 )
    {
      v7 += v8;
      MiMirrorOmitPagesFromCopy(*(_QWORD *)a1, v9, v8);
      v8 = 0LL;
    }
LABEL_33:
    LOBYTE(v4) = v20;
    v6 += 48 * v10;
    v5 -= v10;
  }
  while ( v5 );
  if ( v8 )
  {
    v7 += v8;
    MiMirrorOmitPagesFromCopy(*(_QWORD *)a1, v9, v8);
  }
  return v7;
}
