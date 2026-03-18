/*
 * XREFs of HalpAcpiDetectMachineSpecificActions @ 0x140C1511C
 * Callers:
 *     HalpSetupAcpiPhase0 @ 0x140C137FC (HalpSetupAcpiPhase0.c)
 * Callees:
 *     HalpAcpiGetTable @ 0x140478488 (HalpAcpiGetTable.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     memcmp @ 0x1406BFF10 (memcmp.c)
 */

int __fastcall HalpAcpiDetectMachineSpecificActions(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _UNKNOWN **Table; // rax
  int v5; // ebp
  int *v6; // rbx
  _DWORD *v7; // rdi
  int v9; // esi
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  Table = &retaddr;
  v5 = 0;
  v6 = &dword_140C7286C;
  v7 = 0LL;
  do
  {
    v9 = *(v6 - 1);
    if ( v9 != v5 )
    {
      Table = (_UNKNOWN **)HalpAcpiGetTable(a1, v9, 0LL, 0LL);
      v7 = Table;
      v5 = v9;
    }
    if ( v7 )
    {
      if ( *(_BYTE *)v6 != 1
        || (LODWORD(Table) = memcmp((char *)v7 + 10, *(const void **)(v6 + 1), (unsigned int)v6[3]), !(_DWORD)Table)
        && (*((_BYTE *)v6 + 16) != 1
         || (LODWORD(Table) = memcmp(v7 + 4, *(const void **)(v6 + 5), (unsigned int)v6[7]), !(_DWORD)Table)
         && (*((_BYTE *)v6 + 32) != 1 || (LODWORD(Table) = v6[9], v7[6] == (_DWORD)Table))) )
      {
        LODWORD(Table) = guard_dispatch_icall_no_overrides(v6 - 3, v7, a3, a4);
      }
    }
    v6 += 14;
  }
  while ( *(_QWORD *)(v6 - 3) );
  return (int)Table;
}
