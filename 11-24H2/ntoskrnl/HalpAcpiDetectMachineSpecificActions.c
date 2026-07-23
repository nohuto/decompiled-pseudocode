/*
 * XREFs of HalpAcpiDetectMachineSpecificActions @ 0x140C1711C
 * Callers:
 *     HalpSetupAcpiPhase0 @ 0x140C157FC (HalpSetupAcpiPhase0.c)
 * Callees:
 *     HalpAcpiGetTable @ 0x14045F918 (HalpAcpiGetTable.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memcmp @ 0x1406C0E10 (memcmp.c)
 */

int __fastcall HalpAcpiDetectMachineSpecificActions(__int64 a1)
{
  _UNKNOWN **Table; // rax
  int v2; // ebp
  int *v3; // rbx
  _DWORD *v4; // rdi
  int v6; // esi
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  Table = &retaddr;
  v2 = 0;
  v3 = &dword_140C749CC;
  v4 = 0LL;
  do
  {
    v6 = *(v3 - 1);
    if ( v6 != v2 )
    {
      Table = (_UNKNOWN **)HalpAcpiGetTable(a1, v6, 0, 0);
      v4 = Table;
      v2 = v6;
    }
    if ( v4 )
    {
      if ( *(_BYTE *)v3 != 1
        || (LODWORD(Table) = memcmp((char *)v4 + 10, *(const void **)(v3 + 1), (unsigned int)v3[3]), !(_DWORD)Table)
        && (*((_BYTE *)v3 + 16) != 1
         || (LODWORD(Table) = memcmp(v4 + 4, *(const void **)(v3 + 5), (unsigned int)v3[7]), !(_DWORD)Table)
         && (*((_BYTE *)v3 + 32) != 1 || (LODWORD(Table) = v3[9], v4[6] == (_DWORD)Table))) )
      {
        LODWORD(Table) = guard_dispatch_icall_no_overrides(v3 - 3, v4);
      }
    }
    v3 += 14;
  }
  while ( *(_QWORD *)(v3 - 3) );
  return (int)Table;
}
