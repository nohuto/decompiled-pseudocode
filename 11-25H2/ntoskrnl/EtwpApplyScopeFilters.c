/*
 * XREFs of EtwpApplyScopeFilters @ 0x14089E4C0
 * Callers:
 *     EtwpAddRegEntryToGroup @ 0x140899D60 (EtwpAddRegEntryToGroup.c)
 *     EtwpEnableGuid @ 0x14089BB2C (EtwpEnableGuid.c)
 *     EtwpRegisterUMProvider @ 0x14089D2F0 (EtwpRegisterUMProvider.c)
 *     EtwpUpdateRegEntryEnableMask @ 0x1409EF1BC (EtwpUpdateRegEntryEnableMask.c)
 * Callees:
 *     EtwpApplyContainerFilter @ 0x140A7B678 (EtwpApplyContainerFilter.c)
 *     EtwpApplyExeFilter @ 0x140A7BF5C (EtwpApplyExeFilter.c)
 *     EtwpApplyPackageIdFilter @ 0x140A7C304 (EtwpApplyPackageIdFilter.c)
 */

void __fastcall EtwpApplyScopeFilters(__int64 a1, char a2, char a3, char a4, _BYTE *a5)
{
  __int64 v8; // rsi
  __int64 v9; // rbx
  __int64 v10; // rcx
  __int64 v11; // rcx
  char v12; // dl
  __int64 v13; // rdx
  __int64 v14; // rdx
  _DWORD *v15; // r10
  __int64 i; // rdx

  if ( (*(_BYTE *)(a1 + 98) & 1) == 0 )
  {
    *a5 = 0;
    if ( a3 )
      v8 = *(_QWORD *)(a1 + 40);
    else
      v8 = *(_QWORD *)(a1 + 32);
    if ( a4 )
      v8 = *(_QWORD *)(v8 + 400);
    v9 = 0LL;
    while ( 1 )
    {
      if ( !*(_DWORD *)(32 * (v9 + 4) + v8) )
        goto LABEL_8;
      v10 = 32LL * (unsigned int)v9;
      if ( a4 )
      {
        if ( (*(_DWORD *)(v10 + v8 + 136) & 0x400) == 0 )
          goto LABEL_8;
      }
      if ( a2 && *(_WORD *)(v10 + v8 + 134) != *(_WORD *)(v8 + 88) )
        goto LABEL_8;
      v11 = *(_QWORD *)(v8 + 384);
      v12 = 1;
      if ( !v11 )
        break;
      if ( (*(_DWORD *)(104LL * (unsigned int)v9 + v11) & 0x80000004) == 0x80000004
        && (v15 = *(_DWORD **)(104LL * (unsigned int)v9 + v11 + 8)) != 0LL )
      {
        for ( i = 0LL; (unsigned int)i < *v15; i = (unsigned int)(i + 1) )
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
        if ( (*(_DWORD *)(104LL * (unsigned int)v9 + v11) & 0x80000008) == 0x80000008 )
          v12 = EtwpApplyExeFilter(a1, *(_QWORD *)(104LL * (unsigned int)v9 + v11 + 16));
        if ( v12 )
        {
          if ( (v13 = *(_QWORD *)(v8 + 384) + 104LL * (unsigned int)v9, (*(_DWORD *)v13 & 0x80000010) != 0x80000010)
            && (*(_DWORD *)v13 & 0x80000020) != 0x80000020
            || (unsigned __int8)EtwpApplyPackageIdFilter(a1, *(_QWORD *)(v13 + 24), *(_QWORD *)(v13 + 32)) )
          {
            v14 = *(_QWORD *)(v8 + 384) + 104LL * (unsigned int)v9;
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
      v9 = (unsigned int)(v9 + 1);
      if ( (unsigned int)v9 >= 8 )
        return;
    }
    *a5 |= 1 << v9;
    goto LABEL_15;
  }
}
