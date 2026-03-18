/*
 * XREFs of MiCheckVerifierFunctionsCfgState @ 0x1407FB5E8
 * Callers:
 *     MiReapplyImportOptimizationForDriverVerifier @ 0x14067C118 (MiReapplyImportOptimizationForDriverVerifier.c)
 * Callees:
 *     MmFindDataTableEntryByAddress @ 0x1402C724C (MmFindDataTableEntryByAddress.c)
 *     MiImageContainsVa @ 0x1402C9B38 (MiImageContainsVa.c)
 *     CfgAddressToBitState @ 0x1404AEDF4 (CfgAddressToBitState.c)
 */

__int64 __fastcall MiCheckVerifierFunctionsCfgState(__int64 a1, unsigned int a2)
{
  unsigned int v2; // ebx
  __int64 *DataTableEntryByAddress; // rsi
  unsigned int i; // edi
  __int64 v7; // r9
  __int64 v8; // r11

  v2 = 0;
  DataTableEntryByAddress = 0LL;
  for ( i = 0; i < a2; ++i )
  {
    v7 = a1 + 24LL * i;
    if ( !DataTableEntryByAddress || !MiImageContainsVa((__int64)DataTableEntryByAddress, *(_QWORD *)(v7 + 8)) )
    {
      DataTableEntryByAddress = MmFindDataTableEntryByAddress(*(_QWORD *)(v7 + 8));
      if ( !DataTableEntryByAddress )
        return (unsigned int)-1073741811;
    }
    if ( (DataTableEntryByAddress[13] & 0x2000) != 0
      && (CfgAddressToBitState(v8 + 0x800000000000LL, (const signed __int64 *)qword_140E2D718) & 0xFFFFFFFD) == 0 )
    {
      return (unsigned int)-1073741436;
    }
  }
  return v2;
}
