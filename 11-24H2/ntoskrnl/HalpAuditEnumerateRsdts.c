/*
 * XREFs of HalpAuditEnumerateRsdts @ 0x140C15F58
 * Callers:
 *     HalpAuditAcpiTables @ 0x140C15DF4 (HalpAuditAcpiTables.c)
 * Callees:
 *     MiUnmapContiguousMemory @ 0x1402929E8 (MiUnmapContiguousMemory.c)
 *     MmMapIoSpaceEx @ 0x14034B090 (MmMapIoSpaceEx.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 *     HalpAuditAllocateRsdtArrayTable @ 0x140C15EB0 (HalpAuditAllocateRsdtArrayTable.c)
 *     HalpAuditEnumerateRsdtsInRange @ 0x140C1604C (HalpAuditEnumerateRsdtsInRange.c)
 */

__int64 __fastcall HalpAuditEnumerateRsdts(__int64 a1, PVOID *a2)
{
  __int64 v2; // rbx
  unsigned int v4; // esi
  int RsdtArrayTable; // ecx
  unsigned int *v6; // rax
  int v7; // edi
  __int64 v8; // r8
  unsigned int v9; // ebx
  PVOID P; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0LL;
  P = 0LL;
  v4 = 0;
  RsdtArrayTable = HalpAuditAllocateRsdtArrayTable((_DWORD **)&P);
  if ( RsdtArrayTable < 0 )
    goto LABEL_11;
  v6 = (unsigned int *)MmMapIoSpaceEx(1856LL, 8LL, 4LL);
  if ( v6 )
  {
    if ( *v6 || v6[1] )
    {
      v4 = v6[1];
      v2 = *v6;
      v7 = 0;
    }
    else
    {
      v7 = -1073741823;
    }
    MiUnmapContiguousMemory((unsigned __int64)v6, 8uLL, 1);
    if ( v7 >= 0 )
    {
      LOBYTE(v8) = 1;
      RsdtArrayTable = HalpAuditEnumerateRsdtsInRange(v2, v4, v8, &P);
      if ( RsdtArrayTable < 0 )
        goto LABEL_11;
    }
  }
  RsdtArrayTable = HalpAuditEnumerateRsdtsInRange(917504LL, 0x20000LL, 0LL, &P);
  if ( RsdtArrayTable < 0 )
  {
LABEL_11:
    v9 = RsdtArrayTable;
    if ( P )
    {
      ExFreePoolWithTag(P, 0);
      return v9;
    }
  }
  else
  {
    *a2 = P;
  }
  return (unsigned int)RsdtArrayTable;
}
