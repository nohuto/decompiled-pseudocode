/*
 * XREFs of HalpAcpiIsCachedTableCompromised @ 0x140478708
 * Callers:
 *     HalpAcpiGetTableWork @ 0x14047856C (HalpAcpiGetTableWork.c)
 * Callees:
 *     MiUnmapContiguousMemory @ 0x140263178 (MiUnmapContiguousMemory.c)
 *     HalpAcpiGetTableFromBios @ 0x1404787D0 (HalpAcpiGetTableFromBios.c)
 *     HalpUnmapVirtualAddress @ 0x140478B90 (HalpUnmapVirtualAddress.c)
 *     memcmp @ 0x1406BFF10 (memcmp.c)
 */

char __fastcall HalpAcpiIsCachedTableCompromised(__int64 a1, int a2, char *a3, char *a4, void *Buf2)
{
  const char *v5; // r10
  int v7; // eax
  bool v8; // bl
  unsigned int *TableFromBios; // rax
  unsigned __int64 v11; // rdi
  __int64 v12; // [rsp+30h] [rbp-18h] BYREF
  __int64 v13; // [rsp+38h] [rbp-10h] BYREF

  v13 = 0LL;
  v5 = "SLIC";
  LODWORD(v12) = 0;
  v7 = 0;
  while ( a2 != *(_DWORD *)v5 )
  {
    ++v7;
    v5 += 4;
    if ( v7 )
    {
      if ( v7 == 1 )
        return 0;
      break;
    }
  }
  TableFromBios = (unsigned int *)HalpAcpiGetTableFromBios(a1, a2, a3, a4, (__int64)&v12, (__int64)&v13);
  v11 = (unsigned __int64)TableFromBios;
  if ( !TableFromBios )
    return 1;
  v8 = memcmp(TableFromBios, Buf2, TableFromBios[1]) != 0;
  if ( a1 )
    HalpUnmapVirtualAddress(v11, ((v11 & 0xFFF) + (unsigned int)v12 + 4095LL) >> 12, 0LL);
  else
    MiUnmapContiguousMemory(v11, (unsigned int)v12, 1);
  return v8;
}
