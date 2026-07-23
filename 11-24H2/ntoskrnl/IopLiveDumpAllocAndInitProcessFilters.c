/*
 * XREFs of IopLiveDumpAllocAndInitProcessFilters @ 0x1405951D0
 * Callers:
 *     IopLiveDumpAllocAndInitResources @ 0x140595270 (IopLiveDumpAllocAndInitResources.c)
 * Callees:
 *     IopLiveDumpAddProcessFilter @ 0x140594EC8 (IopLiveDumpAddProcessFilter.c)
 *     PsGetNextProcess @ 0x1408603A0 (PsGetNextProcess.c)
 */

__int64 __fastcall IopLiveDumpAllocAndInitProcessFilters(__int64 a1)
{
  __int64 i; // rax
  void *v4; // rdi
  char v5; // cl
  int v6; // eax
  int j; // edi

  if ( (*(_DWORD *)(a1 + 40) & 4) != 0 )
  {
    for ( i = PsGetNextProcess(0LL); ; i = PsGetNextProcess(v4) )
    {
      v4 = (void *)i;
      if ( !i )
        break;
      v5 = *(_BYTE *)(i + 1530);
      if ( (v5 & 7) == 2 && (v5 & 0xF0) != 0x70 || (v5 & 7) == 1 )
      {
        v6 = IopLiveDumpAddProcessFilter(a1, (void *)*(unsigned int *)(i + 464), 2);
        if ( v6 < 0 )
          return (unsigned int)v6;
      }
    }
    for ( j = 0; j < 3; ++j )
    {
      v6 = IopLiveDumpAddProcessFilter(a1, 0LL, 0);
      if ( v6 < 0 )
        break;
    }
    return (unsigned int)v6;
  }
  else
  {
    return 0;
  }
}
