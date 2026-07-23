/*
 * XREFs of MiMakeHyperPteDemandZero @ 0x140450460
 * Callers:
 *     MiFillHyperPtes @ 0x1404502E8 (MiFillHyperPtes.c)
 * Callees:
 *     MiIncreaseUsedPtes @ 0x140299D80 (MiIncreaseUsedPtes.c)
 *     MiMakeDemandZeroPte @ 0x140392C40 (MiMakeDemandZeroPte.c)
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
      MiIncreaseUsedPtes(v6, (((unsigned __int64)a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, 1LL, 0LL);
    *a1 = DemandZeroPte;
  }
  ++*(_QWORD *)(a4 + 8);
}
