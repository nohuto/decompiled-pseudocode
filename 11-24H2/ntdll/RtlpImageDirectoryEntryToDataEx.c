/*
 * XREFs of RtlpImageDirectoryEntryToDataEx @ 0x180058BE0
 * Callers:
 *     RtlComputeImportTableHash @ 0x180134EA0 (RtlComputeImportTableHash.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x1800590F0 (RtlImageNtHeaderEx.c)
 *     RtlAddressInSectionTable @ 0x1800649C0 (RtlAddressInSectionTable.c)
 */

__int64 __fastcall RtlpImageDirectoryEntryToDataEx(
        unsigned __int64 a1,
        char a2,
        unsigned __int16 a3,
        _DWORD *a4,
        __int64 a5)
{
  __int64 *v5; // r14
  unsigned int v6; // edi
  char v7; // si
  __int64 v9; // rbp
  unsigned __int64 v10; // rbx
  __int64 result; // rax
  __int64 v12; // rcx
  __int16 v13; // ax
  __int64 v14; // rdx
  __int64 v15; // r10
  unsigned int v16; // r8d
  unsigned int *i; // rdx
  __int64 v18; // r9
  unsigned __int64 v19; // rax
  __int64 v20; // rax
  unsigned int v21; // ecx

  v5 = (__int64 *)a5;
  v6 = 0;
  v7 = a2;
  v9 = a3;
  v10 = a1;
  a5 = 0LL;
  *v5 = 0LL;
  if ( (a1 & 3) != 0 )
  {
    v10 = a1 & 0xFFFFFFFFFFFFFFFCuLL;
    v7 = 0;
    if ( (a1 & 1) == 0 )
      v7 = a2;
  }
  result = RtlImageNtHeaderEx(1LL, v10, 0LL, &a5);
  v12 = a5;
  if ( a5 )
  {
    v13 = *(_WORD *)(a5 + 24);
    if ( v13 == 267 )
    {
      if ( (unsigned int)v9 < *(_DWORD *)(a5 + 116) )
      {
        v15 = *(unsigned int *)(a5 + 8 * v9 + 120);
        if ( !(_DWORD)v15 )
          return (unsigned int)-1073741822;
        *a4 = *(_DWORD *)(a5 + 8 * v9 + 124);
        if ( v7 || (unsigned int)v15 < *(_DWORD *)(v12 + 84) )
        {
          *v5 = v10 + v15;
          return v6;
        }
        v16 = 0;
        for ( i = (unsigned int *)(*(unsigned __int16 *)(v12 + 20) + a5 + 24); ; i += 10 )
        {
          if ( v16 >= *(unsigned __int16 *)(a5 + 6) )
          {
            *v5 = 0LL;
            return (unsigned int)-1073741811;
          }
          v18 = i[3];
          if ( (unsigned int)v15 >= (unsigned int)v18 && (unsigned int)v15 < (unsigned int)v18 + i[4] )
            break;
          ++v16;
        }
        v19 = v10 + i[5] - v18;
        *v5 = v19 + v15;
        if ( v19 + v15 )
          return v6;
      }
    }
    else if ( v13 == 523 && (unsigned int)v9 < *(_DWORD *)(a5 + 132) )
    {
      v14 = *(unsigned int *)(a5 + 8 * v9 + 136);
      if ( (_DWORD)v14 )
      {
        *a4 = *(_DWORD *)(a5 + 8 * v9 + 140);
        if ( v7 || (unsigned int)v14 < *(_DWORD *)(v12 + 84) )
        {
          *v5 = v10 + v14;
        }
        else
        {
          v20 = RtlAddressInSectionTable(v12, v10, (unsigned int)v14);
          v21 = 0;
          *v5 = v20;
          if ( !v20 )
            return (unsigned int)-1073741811;
          return v21;
        }
        return v6;
      }
      return (unsigned int)-1073741822;
    }
    return (unsigned int)-1073741811;
  }
  return result;
}
