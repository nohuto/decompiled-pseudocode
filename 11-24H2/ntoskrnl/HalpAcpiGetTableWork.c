/*
 * XREFs of HalpAcpiGetTableWork @ 0x14047856C
 * Callers:
 *     HalMatchAcpiOemId @ 0x140478320 (HalMatchAcpiOemId.c)
 *     HalpAcpiGetTable @ 0x140478488 (HalpAcpiGetTable.c)
 *     HalAcpiGetTableDispatch @ 0x140478510 (HalAcpiGetTableDispatch.c)
 *     HalpAcpiGetTableFromBios @ 0x1404787D0 (HalpAcpiGetTableFromBios.c)
 *     HalpAcpiGetAllTablesWork @ 0x14053D2C8 (HalpAcpiGetAllTablesWork.c)
 *     HalpAcpiGetFacsMapping @ 0x14053D4D0 (HalpAcpiGetFacsMapping.c)
 * Callees:
 *     MiUnmapContiguousMemory @ 0x140263178 (MiUnmapContiguousMemory.c)
 *     HalpAcpiGetCachedTable @ 0x140478664 (HalpAcpiGetCachedTable.c)
 *     HalpAcpiIsCachedTableCompromised @ 0x140478708 (HalpAcpiIsCachedTableCompromised.c)
 *     HalpAcpiGetTableFromBios @ 0x1404787D0 (HalpAcpiGetTableFromBios.c)
 *     HalpUnmapVirtualAddress @ 0x140478B90 (HalpUnmapVirtualAddress.c)
 *     HalpAcpiCacheTable @ 0x14053D144 (HalpAcpiCacheTable.c)
 *     HalpAcpiCopyBiosTable @ 0x14053D1B0 (HalpAcpiCopyBiosTable.c)
 */

unsigned __int64 __fastcall HalpAcpiGetTableWork(__int64 a1, unsigned int a2, char *Str1, char *a4)
{
  void *Buf2; // rax
  unsigned __int64 v9; // rbx
  __int64 TableFromBios; // rax
  __int64 v12; // rdi
  __int64 v13; // [rsp+30h] [rbp-18h] BYREF
  __int64 v14; // [rsp+38h] [rbp-10h] BYREF

  v14 = 0LL;
  LODWORD(v13) = 0;
  Buf2 = (void *)HalpAcpiGetCachedTable(a2, Str1, a4);
  v9 = (unsigned __int64)Buf2;
  if ( !Buf2 || (unsigned __int8)HalpAcpiIsCachedTableCompromised(a1, a2, (int)Str1, (int)a4, Buf2) )
  {
    TableFromBios = HalpAcpiGetTableFromBios(a1, a2, Str1, a4, (__int64)&v13, (__int64)&v14);
    v9 = TableFromBios;
    if ( TableFromBios )
    {
      v12 = HalpAcpiCopyBiosTable(a1, TableFromBios, v14);
      if ( a1 )
        HalpUnmapVirtualAddress(v9, ((v9 & 0xFFF) + (unsigned int)v13 + 4095LL) >> 12, 0LL);
      else
        MiUnmapContiguousMemory(v9, (unsigned int)v13, 1);
      if ( v12 )
      {
        HalpAcpiCacheTable(a1, v12);
        return v12;
      }
      else
      {
        return 0LL;
      }
    }
  }
  return v9;
}
