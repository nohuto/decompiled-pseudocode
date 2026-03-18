/*
 * XREFs of HalpAcpiCacheTable @ 0x14053A914
 * Callers:
 *     HalpAcpiGetTableWork @ 0x1404131DC (HalpAcpiGetTableWork.c)
 *     HalpAcpiGetAllTablesWork @ 0x14053AA98 (HalpAcpiGetAllTablesWork.c)
 *     HalpAcpiCacheOverrideTables @ 0x140BFC774 (HalpAcpiCacheOverrideTables.c)
 *     HalpAcpiTableCacheInit @ 0x140C55BD8 (HalpAcpiTableCacheInit.c)
 * Callees:
 *     HalpMmAllocCtxFree @ 0x140337DCC (HalpMmAllocCtxFree.c)
 */

void __fastcall HalpAcpiCacheTable(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  _QWORD *v3; // rdx
  __int64 *i; // rax
  _QWORD *v5; // rax

  v2 = *(_QWORD *)(a2 - 8);
  v3 = (_QWORD *)(a2 - 24);
  if ( v2 )
  {
    for ( i = (__int64 *)HalpAcpiTableCacheList; i != &HalpAcpiTableCacheList; i = (__int64 *)*i )
    {
      if ( v2 == i[2] )
      {
        if ( a1 )
          HalpMmAllocCtxFree(a1, (__int64)v3);
        return;
      }
    }
  }
  v5 = (_QWORD *)qword_140E0F288;
  if ( *(__int64 **)qword_140E0F288 != &HalpAcpiTableCacheList )
    __fastfail(3u);
  *v3 = &HalpAcpiTableCacheList;
  v3[1] = v5;
  *v5 = v3;
  qword_140E0F288 = (__int64)v3;
}
