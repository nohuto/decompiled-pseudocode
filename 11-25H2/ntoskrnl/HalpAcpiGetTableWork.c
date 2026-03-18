/*
 * XREFs of HalpAcpiGetTableWork @ 0x1404131DC
 * Callers:
 *     HalMatchAcpiOemId @ 0x140412F90 (HalMatchAcpiOemId.c)
 *     HalpAcpiGetTable @ 0x1404130F8 (HalpAcpiGetTable.c)
 *     HalAcpiGetTableDispatch @ 0x140413180 (HalAcpiGetTableDispatch.c)
 *     HalpAcpiGetTableFromBios @ 0x140413440 (HalpAcpiGetTableFromBios.c)
 *     HalpAcpiGetAllTablesWork @ 0x14053AA98 (HalpAcpiGetAllTablesWork.c)
 *     HalpAcpiGetFacsMapping @ 0x14053ACA0 (HalpAcpiGetFacsMapping.c)
 * Callees:
 *     MiUnmapContiguousMemory @ 0x1402AA7B8 (MiUnmapContiguousMemory.c)
 *     HalpUnmapVirtualAddress @ 0x140411990 (HalpUnmapVirtualAddress.c)
 *     HalpAcpiGetCachedTable @ 0x1404132D4 (HalpAcpiGetCachedTable.c)
 *     HalpAcpiIsCachedTableCompromised @ 0x140413378 (HalpAcpiIsCachedTableCompromised.c)
 *     HalpAcpiGetTableFromBios @ 0x140413440 (HalpAcpiGetTableFromBios.c)
 *     HalpAcpiCacheTable @ 0x14053A914 (HalpAcpiCacheTable.c)
 *     HalpAcpiCopyBiosTable @ 0x14053A980 (HalpAcpiCopyBiosTable.c)
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
        HalpUnmapVirtualAddress(v9, ((v9 & 0xFFF) + v13 + 4095LL) >> 12, 0);
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
