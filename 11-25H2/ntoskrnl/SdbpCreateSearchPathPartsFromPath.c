/*
 * XREFs of SdbpCreateSearchPathPartsFromPath @ 0x140829934
 * Callers:
 *     SdbpInitializeSearchDBContext @ 0x1407F53A0 (SdbpInitializeSearchDBContext.c)
 * Callees:
 *     wcschr @ 0x1404FD610 (wcschr.c)
 *     AslLogCallPrintf @ 0x140825A60 (AslLogCallPrintf.c)
 *     AslAlloc @ 0x14082B9C0 (AslAlloc.c)
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
  __int64 v12; // rax
  const wchar_t *j; // rdx
  wchar_t v14; // ax
  __int64 v15; // rcx

  v3 = a1;
  v4 = 0;
  v5 = 0LL;
  if ( !a1 )
    goto LABEL_5;
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
LABEL_5:
    AslLogCallPrintf(1LL);
    return 0LL;
  }
  *v9 = i;
  v12 = -1LL;
  do
    ++v12;
  while ( v3[v12] );
  for ( j = &v3[v12]; j >= v3; --j )
  {
    v14 = *j;
    if ( *j == 92 )
    {
      if ( !v5 )
        v5 = j;
LABEL_15:
      if ( v3 != j )
        continue;
      goto LABEL_16;
    }
    if ( v14 != 59 )
      goto LABEL_15;
LABEL_16:
    if ( v5 )
    {
      if ( v14 == 59 )
        ++j;
      v15 = 6LL * v4++;
      v10[2 * v15 + 4] = v5 - j + 1;
      v5 = 0LL;
      *(_QWORD *)&v10[2 * v15 + 2] = j;
    }
  }
  *a2 = v10;
  return 1LL;
}
