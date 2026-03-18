/*
 * XREFs of MiMakeHyperPteDemandZero @ 0x14045B0C0
 * Callers:
 *     MiFillHyperPtes @ 0x14045AF48 (MiFillHyperPtes.c)
 * Callees:
 *     MiIncreaseUsedPtes @ 0x14028A180 (MiIncreaseUsedPtes.c)
 *     MiMakeDemandZeroPte @ 0x1402E3CC0 (MiMakeDemandZeroPte.c)
 */

void __fastcall MiMakeHyperPteDemandZero(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rcx
  __int64 DemandZeroPte; // rbx
  int v8; // r8d

  if ( *(_DWORD *)a4 )
  {
    DemandZeroPte = MiMakeDemandZeroPte(4);
    if ( v8 != 3 )
      MiIncreaseUsedPtes(v6, (((unsigned __int64)a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, 1u, 0);
    *a1 = DemandZeroPte;
  }
  ++*(_QWORD *)(a4 + 8);
}
