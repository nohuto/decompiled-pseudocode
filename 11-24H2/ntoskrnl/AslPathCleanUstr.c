/*
 * XREFs of AslPathCleanUstr @ 0x14080A0BC
 * Callers:
 *     AslPathWildcardFindFirst @ 0x14080A7E4 (AslPathWildcardFindFirst.c)
 * Callees:
 *     _wcsnicmp @ 0x1404FBDB0 (_wcsnicmp.c)
 *     wcsncmp @ 0x1404FD890 (wcsncmp.c)
 *     AslLogCallPrintf @ 0x140947C9C (AslLogCallPrintf.c)
 */

__int64 __fastcall AslPathCleanUstr(unsigned __int16 *a1)
{
  unsigned __int16 v2; // r12
  const wchar_t **v3; // rdi
  unsigned int v4; // esi
  const wchar_t *v5; // rcx
  int v6; // ebx
  const wchar_t **v7; // r14
  unsigned __int16 v8; // r10
  unsigned __int64 v9; // rcx
  wchar_t v10; // dx
  unsigned __int16 v11; // r8
  unsigned __int16 i; // r9
  __int64 v13; // rcx
  __int16 v14; // dx
  __int16 v15; // dx
  __int16 v16; // ax
  __int16 v17; // ax
  __int64 v18; // rcx
  __int16 v19; // ax
  __int64 v20; // rcx
  __int16 v21; // ax
  __int64 v22; // rax

  v2 = *a1 >> 1;
  if ( *a1 < 2u || (v3 = (const wchar_t **)(a1 + 4), v4 = 0, v5 = (const wchar_t *)*((_QWORD *)a1 + 1), !*v5) )
  {
    v4 = -1073741582;
    AslLogCallPrintf(1, (unsigned int)"AslPathCleanUstr", 730, (unsigned int)"AslpPathGetFormatInfo failed [%x]");
    return v4;
  }
  v6 = 4;
  if ( v2 >= 8u )
  {
    if ( !wcsnicmp(v5, L"\\??\\UNC\\", 8uLL) )
    {
      v6 = 5;
      goto LABEL_17;
    }
    v7 = (const wchar_t **)(a1 + 4);
    goto LABEL_8;
  }
  v7 = v3;
  if ( v2 >= 4u )
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
  if ( v2 > 2u )
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
    v10 = (*v3)[v9 / 2];
    if ( v10 == 92 || v10 == 47 )
      --v6;
    ++v8;
  }
  while ( v6 > 0 );
  v11 = v8;
  for ( i = v8; i < v2; ++i )
  {
    if ( i < v11 )
    {
      AslLogCallPrintf(
        1,
        (unsigned int)"AslPathCleanUstr",
        742,
        (unsigned int)"AslPathCleanUstr failed with source pointer behind destination pointer.");
      return (unsigned int)-1073741595;
    }
    v13 = *((_QWORD *)a1 + 1);
    v14 = *(_WORD *)(v13 + 2LL * i);
    if ( v14 == 92 || v14 == 47 )
    {
      if ( !v11 || *(_WORD *)(v13 + 2LL * v11 - 2) != 92 )
      {
        v22 = v11++;
        *(_WORD *)(v13 + 2 * v22) = 92;
      }
    }
    else if ( v14 == 46 )
    {
      if ( i + 1 == v2 )
        break;
      v16 = *(_WORD *)(v13 + 2LL * i + 2);
      if ( v16 == 92 || v16 == 47 )
        goto LABEL_50;
      if ( v16 == 46 )
      {
        if ( i + 2 == v2 || (v17 = *(_WORD *)(v13 + 2LL * i + 4), v17 == 92) || v17 == 47 )
        {
          while ( 1 )
          {
            if ( v11 < v8 )
            {
LABEL_49:
              ++v11;
              goto LABEL_50;
            }
            v18 = *((_QWORD *)a1 + 1);
            v19 = *(_WORD *)(v18 + 2LL * v11);
            *(_WORD *)(v18 + 2LL * v11) = 0;
            if ( v19 == 92 )
              break;
            --v11;
          }
          while ( 1 )
          {
            v20 = *((_QWORD *)a1 + 1);
            v21 = *(_WORD *)(v20 + 2LL * v11);
            *(_WORD *)(v20 + 2LL * v11) = 0;
            if ( v21 == 92 )
              break;
            if ( --v11 < v8 )
              goto LABEL_49;
          }
LABEL_50:
          ++i;
          continue;
        }
      }
    }
    else
    {
      do
      {
        v15 = *(_WORD *)(v13 + 2LL * i);
        if ( v15 == 92 || v15 == 47 )
          break;
        if ( i != v11 )
        {
          *(_WORD *)(v13 + 2LL * v11) = v15;
          v13 = *((_QWORD *)a1 + 1);
        }
        ++v11;
        ++i;
      }
      while ( i < v2 );
      --i;
    }
  }
  *(_WORD *)(*((_QWORD *)a1 + 1) + 2LL * v11) = 0;
  *a1 = 2 * v11;
  return v4;
}
