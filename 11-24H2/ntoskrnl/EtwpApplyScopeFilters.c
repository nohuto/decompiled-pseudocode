/*
 * XREFs of EtwpApplyScopeFilters @ 0x140839F10
 * Callers:
 *     EtwpUpdateRegEntryEnableMask @ 0x140838494 (EtwpUpdateRegEntryEnableMask.c)
 *     EtwpRegisterUMProvider @ 0x140838D50 (EtwpRegisterUMProvider.c)
 * Callees:
 *     EtwpApplyContainerFilter @ 0x140A78118 (EtwpApplyContainerFilter.c)
 *     EtwpApplyExeFilter @ 0x140A78C24 (EtwpApplyExeFilter.c)
 *     EtwpApplyPackageIdFilter @ 0x140A7975C (EtwpApplyPackageIdFilter.c)
 */

void __fastcall EtwpApplyScopeFilters(__int64 a1, char a2, char a3, char a4, _WORD *a5)
{
  __int64 v8; // rsi
  unsigned int v9; // ebx
  __int64 v10; // rcx
  __int64 v11; // rcx
  char v12; // dl
  __int64 v13; // rdx
  __int64 v14; // rdx
  unsigned int *v15; // r10
  unsigned int i; // edx

  if ( (*(_BYTE *)(a1 + 98) & 1) == 0 )
  {
    *a5 = 0;
    if ( a3 )
      v8 = *(_QWORD *)(a1 + 40);
    else
      v8 = *(_QWORD *)(a1 + 32);
    if ( a4 )
      v8 = *(_QWORD *)(v8 + 656);
    v9 = 0;
    while ( 1 )
    {
      if ( !*(_DWORD *)(32 * (v9 + 4LL) + v8) )
        goto LABEL_8;
      v10 = 32LL * v9;
      if ( a4 )
      {
        if ( (*(_DWORD *)(v10 + v8 + 136) & 0x400) == 0 )
          goto LABEL_8;
      }
      if ( a2 && *(_WORD *)(v10 + v8 + 134) != *(_WORD *)(v8 + 88) )
        goto LABEL_8;
      v11 = *(_QWORD *)(v8 + 640);
      v12 = 1;
      if ( !v11 )
        break;
      if ( (*(_DWORD *)(104LL * v9 + v11) & 0x80000004) == 0x80000004
        && (v15 = *(unsigned int **)(104LL * v9 + v11 + 8)) != 0LL )
      {
        for ( i = 0; i < *v15; ++i )
        {
          if ( v15[i + 1] == *(_DWORD *)(*(_QWORD *)(a1 + 80) + 464LL) )
          {
            v12 = 1;
            goto LABEL_19;
          }
        }
      }
      else
      {
LABEL_19:
        if ( (*(_DWORD *)(104LL * v9 + v11) & 0x80000008) == 0x80000008 )
          v12 = EtwpApplyExeFilter(a1, *(_QWORD *)(104LL * v9 + v11 + 16));
        if ( v12 )
        {
          if ( (v13 = *(_QWORD *)(v8 + 640) + 104LL * v9, (*(_DWORD *)v13 & 0x80000010) != 0x80000010)
            && (*(_DWORD *)v13 & 0x80000020) != 0x80000020
            || (unsigned __int8)EtwpApplyPackageIdFilter(a1, *(_QWORD *)(v13 + 24), *(_QWORD *)(v13 + 32)) )
          {
            v14 = *(_QWORD *)(v8 + 640) + 104LL * v9;
            if ( (*(_DWORD *)v14 & 0x80008000) != 0x80008000
              || (unsigned __int8)EtwpApplyContainerFilter(a1, *(_QWORD *)(v14 + 40)) )
            {
              break;
            }
          }
        }
      }
LABEL_15:
      if ( a2 )
        return;
LABEL_8:
      if ( ++v9 >= 0x10 )
        return;
    }
    *a5 |= 1 << v9;
    goto LABEL_15;
  }
}
