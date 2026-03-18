/*
 * XREFs of ?RemoveProcessedReadersFromReadyList@DataProviderManager@@AEAAXXZ @ 0x1801CC0CC
 * Callers:
 *     ?RegisterDataProvider@DataProviderManager@@QEAAJPEAVBamoDataProviderRegistrarStub@@PEAVBamoDataProviderProxy@@@Z @ 0x1801CBE4C (-RegisterDataProvider@DataProviderManager@@QEAAJPEAVBamoDataProviderRegistrarStub@@PEAVBamoDataP.c)
 *     ?CheckAndRegisterReadyReaders@DataProviderManager@@QEAAXPEAVBamoDataProviderProxy@@PEAVBamoDataSourceProxy@@@Z @ 0x18026898C (-CheckAndRegisterReadyReaders@DataProviderManager@@QEAAXPEAVBamoDataProviderProxy@@PEAVBamoDataS.c)
 * Callees:
 *     memmove_0 @ 0x1802E8980 (memmove_0.c)
 */

void __fastcall DataProviderManager::RemoveProcessedReadersFromReadyList(DataProviderManager *this)
{
  char *v1; // rdx
  char *v2; // rsi
  char *i; // rdi
  char *j; // rax
  size_t v5; // rbx

  v1 = (char *)*((_QWORD *)this + 14);
  v2 = (char *)this + 104;
  for ( i = (char *)*((_QWORD *)this + 13); i != v1 && (*(_BYTE *)(*(_QWORD *)i + 88LL) & 2) != 0; i += 8 )
    ;
  if ( i != v1 )
  {
    for ( j = i + 8; j != v1; j += 8 )
    {
      if ( (*(_BYTE *)(*(_QWORD *)j + 88LL) & 2) != 0 )
      {
        *(_QWORD *)i = *(_QWORD *)j;
        i += 8;
      }
    }
    if ( i != v1 )
    {
      v5 = *((_QWORD *)this + 14) - (_QWORD)v1;
      memmove_0(i, v1, v5);
      *((_QWORD *)v2 + 1) = &i[v5];
    }
  }
  std::vector<CDataSourceReader *>::shrink_to_fit(v2);
}
