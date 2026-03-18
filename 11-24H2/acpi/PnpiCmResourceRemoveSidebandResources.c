/*
 * XREFs of PnpiCmResourceRemoveSidebandResources @ 0x1400A5D68
 * Callers:
 *     PnpCmResourcesExcludeSidebandResources @ 0x1400984B0 (PnpCmResourcesExcludeSidebandResources.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PnpiCmResourceRemoveSidebandResources(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        unsigned int *a6)
{
  unsigned int v6; // r10d
  unsigned int v9; // edi
  unsigned int v10; // r15d
  unsigned int v11; // r11d
  unsigned int i; // r13d
  char v13; // al
  unsigned int v14; // eax
  char v15; // r14
  unsigned int k; // r9d
  __int64 v17; // rcx
  unsigned int v18; // eax
  unsigned int j; // ecx
  __int64 v20; // r9
  __int64 v21; // rcx
  unsigned int v22; // eax

  v6 = 0;
  v9 = 0;
  if ( !*(_DWORD *)a2 )
    return (unsigned int)-1073741772;
  if ( *(_DWORD *)a2 != 1 || *(_DWORD *)a3 != 1 || *(_DWORD *)(a2 + 16) != *(_DWORD *)(a3 + 16) )
    return (unsigned int)-1073741823;
  v10 = *a6;
  if ( *a6 >= 0x28 )
  {
    *(_OWORD *)a4 = *(_OWORD *)a2;
    *(_OWORD *)(a4 + 16) = *(_OWORD *)(a2 + 16);
    *(_QWORD *)(a4 + 32) = *(_QWORD *)(a2 + 32);
    *(_DWORD *)(a4 + 16) = 0;
    *(_OWORD *)a5 = *(_OWORD *)a3;
    *(_OWORD *)(a5 + 16) = *(_OWORD *)(a3 + 16);
    *(_QWORD *)(a5 + 32) = *(_QWORD *)(a3 + 32);
    *(_DWORD *)(a5 + 16) = 0;
  }
  v11 = 20;
  for ( i = 0; i < *(_DWORD *)(a2 + 16); ++i )
  {
    v13 = *(_BYTE *)(a2 + 20LL * i + 20);
    if ( v13 == 2 )
    {
      v18 = *(_DWORD *)(a1 + 4);
      v15 = 0;
      for ( j = 0; j < v18; ++j )
      {
        v20 = 32LL * j;
        if ( *(_BYTE *)(v20 + a1 + 9) == 2 )
        {
          if ( *(_DWORD *)(v20 + a1 + 16) == *(_DWORD *)(a2 + 20LL * i + 28) )
          {
LABEL_26:
            v15 = 1;
            break;
          }
          v18 = *(_DWORD *)(a1 + 4);
        }
      }
LABEL_27:
      if ( v15 )
        continue;
      goto LABEL_28;
    }
    if ( v13 == -124 )
    {
      v14 = *(_DWORD *)(a1 + 4);
      v15 = 0;
      for ( k = 0; k < v14; ++k )
      {
        v17 = 32LL * k;
        if ( *(_BYTE *)(v17 + a1 + 9) == 0x84 )
        {
          if ( *(_DWORD *)(v17 + a1 + 24) == *(_DWORD *)(a2 + 20LL * i + 32)
            && *(_DWORD *)(v17 + a1 + 20) == *(_DWORD *)(a2 + 20LL * i + 28) )
          {
            goto LABEL_26;
          }
          v14 = *(_DWORD *)(a1 + 4);
        }
      }
      goto LABEL_27;
    }
LABEL_28:
    v11 += 20;
    if ( v10 >= v11 )
    {
      v21 = 5LL * v9;
      *(_OWORD *)(a4 + 4 * v21 + 20) = *(_OWORD *)(a2 + 20LL * i + 20);
      *(_DWORD *)(a4 + 4 * v21 + 36) = *(_DWORD *)(a2 + 20LL * i + 36);
      ++*(_DWORD *)(a4 + 16);
      *(_OWORD *)(a5 + 4 * v21 + 20) = *(_OWORD *)(a3 + 20LL * i + 20);
      *(_DWORD *)(a5 + 4 * v21 + 36) = *(_DWORD *)(a3 + 20LL * i + 36);
      ++*(_DWORD *)(a5 + 16);
    }
    ++v9;
  }
  v22 = v11 + 20;
  if ( v9 )
    v22 = v11;
  if ( v9 == *(_DWORD *)(a2 + 16) )
    return (unsigned int)-1073741772;
  if ( v22 > v10 )
  {
    v6 = -1073741789;
    *a6 = v22;
  }
  return v6;
}
