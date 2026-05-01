/*
 * XREFs of AslPathCleanUstr @ 0x1800A3E88
 * Callers:
 *     AslPathWildcardFindFirst @ 0x1800A4510 (AslPathWildcardFindFirst.c)
 * Callees:
 *     AslLogCallPrintf @ 0x180071658 (AslLogCallPrintf.c)
 */

__int64 __fastcall AslPathCleanUstr(unsigned __int16 *a1)
{
  unsigned __int16 v1; // r12
  const wchar_t **v3; // rdi
  unsigned int v4; // esi
  const wchar_t *v5; // rcx
  int v6; // ebx
  const wchar_t **v7; // r14
  unsigned __int16 v8; // r10
  unsigned __int64 v9; // rcx
  unsigned __int16 v10; // r8
  unsigned __int16 i; // r9
  __int64 v12; // rcx
  __int16 v13; // dx
  __int16 v14; // ax
  __int64 v15; // rcx
  __int16 v16; // ax
  __int64 v17; // rcx
  __int16 v18; // ax
  __int64 v19; // rax

  v1 = *a1 >> 1;
  if ( *a1 < 2u || (v3 = (const wchar_t **)(a1 + 4), v4 = 0, v5 = (const wchar_t *)*((_QWORD *)a1 + 1), !*v5) )
  {
    v4 = -1073741582;
    AslLogCallPrintf(1LL);
    return v4;
  }
  v6 = 4;
  if ( v1 >= 8u )
  {
    if ( !_wcsnicmp(v5, L"\\??\\UNC\\", 8uLL) )
    {
      v6 = 5;
      goto LABEL_17;
    }
    v7 = (const wchar_t **)(a1 + 4);
    goto LABEL_8;
  }
  v7 = v3;
  if ( v1 >= 4u )
  {
LABEL_8:
    if ( !wcsncmp(*v3, L"\\??\\", 4uLL) )
    {
      v6 = 3;
LABEL_10:
      v3 = v7;
      goto LABEL_17;
    }
    if ( !wcsncmp(*v3, L"\\\\?\\", 4uLL) || !wcsncmp(*v7, L"\\\\.\\", 4uLL) )
      goto LABEL_10;
    v3 = (const wchar_t **)(a1 + 4);
LABEL_15:
    if ( !wcsncmp(*v7, L"\\\\", 2uLL) )
      goto LABEL_17;
    goto LABEL_16;
  }
  if ( v1 > 2u )
    goto LABEL_15;
LABEL_16:
  v6 = 1;
LABEL_17:
  v8 = 0;
  do
  {
    v9 = 2LL * v8;
    if ( v9 >= *a1 )
      break;
    if ( (*v3)[v9 / 2] == 92 || (*v3)[v9 / 2] == 47 )
      --v6;
    ++v8;
  }
  while ( v6 > 0 );
  v10 = v8;
  for ( i = v8; i < v1; ++i )
  {
    if ( i < v10 )
    {
      AslLogCallPrintf(1LL);
      return (unsigned int)-1073741595;
    }
    v12 = *((_QWORD *)a1 + 1);
    if ( *(_WORD *)(v12 + 2LL * i) == 92 || *(_WORD *)(v12 + 2LL * i) == 47 )
    {
      if ( !v10 || *(_WORD *)(v12 + 2LL * v10 - 2) != 92 )
      {
        v19 = v10++;
        *(_WORD *)(v12 + 2 * v19) = 92;
      }
    }
    else if ( *(_WORD *)(v12 + 2LL * i) == 46 )
    {
      if ( i + 1 == v1 )
        break;
      v14 = *(_WORD *)(v12 + 2LL * i + 2);
      if ( v14 == 92 || v14 == 47 )
        goto LABEL_50;
      if ( v14 == 46 && (i + 2 == v1 || *(_WORD *)(v12 + 2LL * i + 4) == 92 || *(_WORD *)(v12 + 2LL * i + 4) == 47) )
      {
        while ( 1 )
        {
          if ( v10 < v8 )
          {
LABEL_49:
            ++v10;
            goto LABEL_50;
          }
          v15 = *((_QWORD *)a1 + 1);
          v16 = *(_WORD *)(v15 + 2LL * v10);
          *(_WORD *)(v15 + 2LL * v10) = 0;
          if ( v16 == 92 )
            break;
          --v10;
        }
        while ( 1 )
        {
          v17 = *((_QWORD *)a1 + 1);
          v18 = *(_WORD *)(v17 + 2LL * v10);
          *(_WORD *)(v17 + 2LL * v10) = 0;
          if ( v18 == 92 )
            break;
          if ( --v10 < v8 )
            goto LABEL_49;
        }
LABEL_50:
        ++i;
        continue;
      }
    }
    else
    {
      do
      {
        v13 = *(_WORD *)(v12 + 2LL * i);
        if ( v13 == 92 || v13 == 47 )
          break;
        if ( i != v10 )
        {
          *(_WORD *)(v12 + 2LL * v10) = v13;
          v12 = *((_QWORD *)a1 + 1);
        }
        ++v10;
        ++i;
      }
      while ( i < v1 );
      --i;
    }
  }
  *(_WORD *)(*((_QWORD *)a1 + 1) + 2LL * v10) = 0;
  *a1 = 2 * v10;
  return v4;
}
