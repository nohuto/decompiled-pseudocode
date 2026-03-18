/*
 * XREFs of HalpAcpiCopyBiosTable @ 0x14053A980
 * Callers:
 *     HalpAcpiGetTableWork @ 0x1404131DC (HalpAcpiGetTableWork.c)
 *     HalpAcpiGetRsdt @ 0x140413928 (HalpAcpiGetRsdt.c)
 *     HalpAcpiGetAllTablesWork @ 0x14053AA98 (HalpAcpiGetAllTablesWork.c)
 *     HalpAcpiTableCacheInit @ 0x140C55BD8 (HalpAcpiTableCacheInit.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     RtlCopyDeviceMemory @ 0x14051E79C (RtlCopyDeviceMemory.c)
 *     HalpAcpiAllocateMemory @ 0x14053A890 (HalpAcpiAllocateMemory.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

char *__fastcall HalpAcpiCopyBiosTable(__int64 a1, ULONG_PTR a2, __int64 a3)
{
  unsigned int v4; // esi
  char *Memory; // rax
  char *v7; // rbp
  char *v8; // rbx
  int v9; // edx
  unsigned int v10; // eax

  v4 = *(_DWORD *)(a2 + 4) + 24;
  Memory = (char *)HalpAcpiAllocateMemory(a1, v4);
  v7 = Memory;
  if ( !Memory )
    return 0LL;
  memset_0(Memory, 0, v4);
  *((_QWORD *)v7 + 2) = a3;
  v8 = v7 + 24;
  RtlCopyDeviceMemory(v7 + 24, (char *)a2, *(unsigned int *)(a2 + 4));
  v9 = 0;
  if ( *(_DWORD *)a2 == 1346584902 )
  {
    if ( *(_BYTE *)(a2 + 8) )
    {
      if ( *(_BYTE *)(a2 + 8) == 1 )
      {
        v10 = 116;
      }
      else if ( *(_BYTE *)(a2 + 8) == 2 )
      {
        v10 = 129;
      }
      else
      {
        v10 = 244;
        if ( *(_BYTE *)(a2 + 8) != 3 )
        {
LABEL_12:
          if ( *(_DWORD *)(a2 + 4) < v10 )
            goto LABEL_14;
LABEL_13:
          if ( v9 < 0 )
LABEL_14:
            KeBugCheckEx(0xA5u, 0x1000BuLL, 0x50434146uLL, a2, 0LL);
          return v8;
        }
      }
    }
    else
    {
      v10 = 0;
      v9 = -1072431089;
    }
    if ( *(_DWORD *)(a2 + 4) > v10 )
      goto LABEL_13;
    goto LABEL_12;
  }
  return v8;
}
