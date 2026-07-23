/*
 * XREFs of HalpAcpiGetTableWork @ 0x14045F9FC
 * Callers:
 *     HalMatchAcpiOemId @ 0x14045F7B0 (HalMatchAcpiOemId.c)
 *     HalpAcpiGetTable @ 0x14045F918 (HalpAcpiGetTable.c)
 *     HalAcpiGetTableDispatch @ 0x14045F9A0 (HalAcpiGetTableDispatch.c)
 *     HalpAcpiGetTableFromBios @ 0x14045FC60 (HalpAcpiGetTableFromBios.c)
 *     HalpAcpiGetAllTablesWork @ 0x14053ABC8 (HalpAcpiGetAllTablesWork.c)
 *     HalpAcpiGetFacsMapping @ 0x14053ADD0 (HalpAcpiGetFacsMapping.c)
 * Callees:
 *     MiUnmapContiguousMemory @ 0x1402929E8 (MiUnmapContiguousMemory.c)
 *     HalpAcpiGetCachedTable @ 0x14045FAF4 (HalpAcpiGetCachedTable.c)
 *     HalpAcpiIsCachedTableCompromised @ 0x14045FB98 (HalpAcpiIsCachedTableCompromised.c)
 *     HalpAcpiGetTableFromBios @ 0x14045FC60 (HalpAcpiGetTableFromBios.c)
 *     HalpUnmapVirtualAddress @ 0x1404605A0 (HalpUnmapVirtualAddress.c)
 *     HalpAcpiCacheTable @ 0x14053AA44 (HalpAcpiCacheTable.c)
 *     HalpAcpiCopyBiosTable @ 0x14053AAB0 (HalpAcpiCopyBiosTable.c)
 */

unsigned __int64 __fastcall HalpAcpiGetTableWork(__int64 a1, unsigned int a2, char *a3, char *a4)
{
  void *Buf2; // rax
  unsigned __int64 v9; // rbx
  __int64 TableFromBios; // rax
  __int64 v12; // rdi
  unsigned int v13; // [rsp+30h] [rbp-18h] BYREF
  __int64 v14; // [rsp+38h] [rbp-10h] BYREF

  v14 = 0LL;
  v13 = 0;
  Buf2 = (void *)HalpAcpiGetCachedTable(a2, a3, a4);
  v9 = (unsigned __int64)Buf2;
  if ( !Buf2 || (unsigned __int8)HalpAcpiIsCachedTableCompromised(a1, a2, (int)a3, (int)a4, Buf2) )
  {
    TableFromBios = HalpAcpiGetTableFromBios(a1, a2, a3, a4, (__int64)&v13, (__int64)&v14);
    v9 = TableFromBios;
    if ( TableFromBios )
    {
      v12 = HalpAcpiCopyBiosTable(a1, TableFromBios, v14);
      if ( a1 )
        HalpUnmapVirtualAddress(v9, ((v9 & 0xFFF) + v13 + 4095LL) >> 12, 0LL);
      else
        MiUnmapContiguousMemory(v9, v13, 1);
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
