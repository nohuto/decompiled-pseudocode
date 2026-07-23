/*
 * XREFs of SdbpCreateSearchPathPartsFromPath @ 0x1409431D4
 * Callers:
 *     SdbpInitializeSearchDBContext @ 0x140805650 (SdbpInitializeSearchDBContext.c)
 * Callees:
 *     wcschr @ 0x1404FD650 (wcschr.c)
 *     AslAlloc @ 0x140944EA4 (AslAlloc.c)
 *     AslLogCallPrintf @ 0x140947C9C (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbpCreateSearchPathPartsFromPath(const wchar_t *a1, _QWORD *a2)
{
  const wchar_t *v3; // rdi
  unsigned int v4; // r15d
  const wchar_t *v5; // rbx
  int i; // esi
  wchar_t *v7; // rax
  __int64 v8; // rcx
  _DWORD *v9; // rax
  _DWORD *v10; // r8
  const char *v11; // r9
  int v12; // r8d
  __int64 v14; // rax
  const wchar_t *j; // rdx
  wchar_t v16; // ax
  __int64 v17; // rcx

  v3 = a1;
  v4 = 0;
  v5 = 0LL;
  if ( !a1 )
  {
    v11 = "Invalid argument";
    v12 = 3006;
    goto LABEL_6;
  }
  for ( i = *a1 != 0; ; ++i )
  {
    v7 = wcschr(a1, 0x3Bu);
    if ( !v7 )
      break;
    a1 = v7 + 1;
  }
  v9 = (_DWORD *)AslAlloc(v8, 48LL * (unsigned int)(i - 1) + 56);
  v10 = v9;
  if ( !v9 )
  {
    v11 = "Failed to allocate search path parts";
    v12 = 3035;
LABEL_6:
    AslLogCallPrintf(1, (unsigned int)"SdbpCreateSearchPathPartsFromPath", v12, (_DWORD)v11);
    return 0LL;
  }
  *v9 = i;
  v14 = -1LL;
  do
    ++v14;
  while ( v3[v14] );
  for ( j = &v3[v14]; j >= v3; --j )
  {
    v16 = *j;
    if ( *j == 92 )
    {
      if ( !v5 )
        v5 = j;
LABEL_16:
      if ( v3 != j )
        continue;
      goto LABEL_17;
    }
    if ( v16 != 59 )
      goto LABEL_16;
LABEL_17:
    if ( v5 )
    {
      if ( v16 == 59 )
        ++j;
      v17 = 6LL * v4++;
      v10[2 * v17 + 4] = v5 - j + 1;
      v5 = 0LL;
      *(_QWORD *)&v10[2 * v17 + 2] = j;
    }
  }
  *a2 = v10;
  return 1LL;
}
