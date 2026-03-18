/*
 * XREFs of MiFillGapPtes @ 0x140C43B10
 * Callers:
 *     <none>
 * Callees:
 *     MiMakeValidPte @ 0x14020EF10 (MiMakeValidPte.c)
 *     MiPteInShadowRange @ 0x1402480C0 (MiPteInShadowRange.c)
 *     MiGetContainingPageTable @ 0x1402C3750 (MiGetContainingPageTable.c)
 *     MiIncreaseUsedPtesInPfn @ 0x1402D1090 (MiIncreaseUsedPtesInPfn.c)
 *     MiCheckLinearProtectedPteAccessedBit @ 0x14037CB60 (MiCheckLinearProtectedPteAccessedBit.c)
 *     MiSanitizeShadowPxe @ 0x1403FDBDC (MiSanitizeShadowPxe.c)
 *     MiWritePteShadow @ 0x1403FDC5C (MiWritePteShadow.c)
 */

__int64 __fastcall MiFillGapPtes(__int64 a1, ULONG_PTR *a2, int a3)
{
  __int64 v6; // rdx
  unsigned __int64 v7; // rcx
  int v8; // r8d
  unsigned __int64 ValidPte; // rax
  ULONG_PTR v10; // rbx
  int v11; // ebp
  __int64 ContainingPageTable; // rax
  __int64 v13; // r11

  if ( (*a2 & 1) != 0 )
  {
    if ( a3 )
      return (*a2 >> 7) & 1;
  }
  else
  {
    v6 = *(_QWORD *)(*(_QWORD *)(a1 + 184) + 8LL * a3);
    v7 = (unsigned __int64)a2;
    v8 = a3 != 0 ? -1476395004 : 536870913;
    if ( a3 )
      v7 = 0LL;
    ValidPte = MiMakeValidPte(v7, v6, v8);
    v10 = ValidPte;
    if ( (MiFlags & 0x2000000) == 0 && ((unsigned __int8)(1 << a3) & (unsigned __int8)byte_140E2D889) != 0 )
      v10 = ValidPte & 0xFFFFFFFFFFFFFFDFuLL;
    v11 = 0;
    if ( MiPteInShadowRange((unsigned __int64)a2) )
      v11 = MiSanitizeShadowPxe();
    if ( _bittest64(&MiFlags, 0x24u) && (v10 & 0x20) == 0 && (unsigned __int64)a2 >= 0xFFFFF6C000000000uLL )
      MiCheckLinearProtectedPteAccessedBit((ULONG_PTR)a2, v10, 128);
    *a2 = v10;
    if ( v11 )
      MiWritePteShadow();
    ContainingPageTable = MiGetContainingPageTable((unsigned __int64)a2);
    MiIncreaseUsedPtesInPfn(48 * ContainingPageTable - 0x220000000000LL, 1);
    *(_QWORD *)(v13 + 24) = (*(_QWORD *)(v13 + 24) + 1LL) ^ (*(_QWORD *)(v13 + 24) ^ (*(_QWORD *)(v13 + 24) + 1LL)) & 0xC000000000000000uLL;
  }
  return 0LL;
}
