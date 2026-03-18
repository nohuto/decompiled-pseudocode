/*
 * XREFs of CmpSortedValueEnumStackEntryCleanup @ 0x140977B44
 * Callers:
 *     CmpSortedValueEnumStackCleanup @ 0x140977AE0 (CmpSortedValueEnumStackCleanup.c)
 * Callees:
 *     CmSiFreeMemory @ 0x14046F140 (CmSiFreeMemory.c)
 *     HvpReleaseCellPaged @ 0x140878FD0 (HvpReleaseCellPaged.c)
 *     HvpReleaseCellFlat @ 0x14088B670 (HvpReleaseCellFlat.c)
 */

void __fastcall CmpSortedValueEnumStackEntryCleanup(__int64 a1)
{
  unsigned int v2; // ebx
  struct _PRIVILEGE_SET *v3; // rcx
  unsigned int *v4; // rdx
  __int64 v5; // rcx

  v2 = 0;
  v3 = *(struct _PRIVILEGE_SET **)(a1 + 8);
  if ( v3 )
    CmSiFreeMemory(v3);
  if ( *(_QWORD *)(a1 + 16) )
  {
    if ( *(_DWORD *)(a1 + 24) )
    {
      do
      {
        v4 = (unsigned int *)(*(_QWORD *)(a1 + 16) + 8LL * v2);
        v5 = *(_QWORD *)a1;
        if ( (*(_BYTE *)(*(_QWORD *)a1 + 140LL) & 1) != 0 )
          HvpReleaseCellFlat(v5, v4);
        else
          HvpReleaseCellPaged(v5, v4);
        ++v2;
      }
      while ( v2 < *(_DWORD *)(a1 + 24) );
    }
    CmSiFreeMemory(*(PPRIVILEGE_SET *)(a1 + 16));
  }
}
