/*
 * XREFs of MiFillGapPtes @ 0x140C56F20
 * Callers:
 *     <none>
 * Callees:
 *     MiPteInShadowRange @ 0x140202630 (MiPteInShadowRange.c)
 *     MiCheckLinearProtectedPteAccessedBit @ 0x140203550 (MiCheckLinearProtectedPteAccessedBit.c)
 *     MiSanitizeShadowPxe @ 0x140203820 (MiSanitizeShadowPxe.c)
 *     MiWritePteShadow @ 0x1402038A0 (MiWritePteShadow.c)
 *     MiMakeValidPte @ 0x140212550 (MiMakeValidPte.c)
 *     MiGetContainingPageTable @ 0x14034E470 (MiGetContainingPageTable.c)
 *     MiIncreaseUsedPtesInPfn @ 0x1403916FC (MiIncreaseUsedPtesInPfn.c)
 */

__int64 __fastcall MiFillGapPtes(__int64 a1, unsigned __int64 *a2, int a3)
{
  __int64 v6; // rdx
  unsigned __int64 v7; // rcx
  int v8; // r8d
  unsigned __int64 ValidPte; // rax
  unsigned __int64 v10; // rbx
  int v11; // ebp
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  int v15; // eax
  __int64 ContainingPageTable; // rax
  __int64 v17; // r11
  unsigned __int64 v18; // [rsp+30h] [rbp+8h] BYREF

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
    if ( (MiFlags & 0x2000000) == 0 && ((unsigned __int8)(1 << a3) & (unsigned __int8)byte_140E2DC09) != 0 )
      v10 = ValidPte & 0xFFFFFFFFFFFFFFDFuLL;
    v18 = v10;
    v11 = 0;
    if ( MiPteInShadowRange((unsigned __int64)a2) )
    {
      v15 = MiSanitizeShadowPxe(v12, (__int64)&v18, v13);
      v10 = v18;
      v11 = v15;
    }
    if ( _bittest64(&MiFlags, 0x24u) && (v10 & 0x20) == 0 && (unsigned __int64)a2 >= 0xFFFFF6C000000000uLL )
      MiCheckLinearProtectedPteAccessedBit((ULONG_PTR)a2, v10, 128LL);
    *a2 = v10;
    if ( v11 )
      MiWritePteShadow((__int64)a2, v10, v13, v14);
    ContainingPageTable = MiGetContainingPageTable((unsigned __int64)a2);
    MiIncreaseUsedPtesInPfn(48 * ContainingPageTable - 0x220000000000LL, 1);
    *(_QWORD *)(v17 + 24) = (*(_QWORD *)(v17 + 24) + 1LL) ^ (*(_QWORD *)(v17 + 24) ^ (*(_QWORD *)(v17 + 24) + 1LL)) & 0xC000000000000000uLL;
  }
  return 0LL;
}
