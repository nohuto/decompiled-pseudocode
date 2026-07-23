/*
 * XREFs of EtwpApplyExeFilter @ 0x140A78C24
 * Callers:
 *     EtwpApplyTransientFilters @ 0x140834EC8 (EtwpApplyTransientFilters.c)
 *     EtwpApplyScopeFilters @ 0x140839F10 (EtwpApplyScopeFilters.c)
 *     EtwpAddRegEntryToGroup @ 0x140AD9390 (EtwpAddRegEntryToGroup.c)
 * Callees:
 *     _wcsnicmp @ 0x1404FBDB0 (_wcsnicmp.c)
 */

char __fastcall EtwpApplyExeFilter(__int64 a1, unsigned __int16 *a2)
{
  unsigned __int16 *v3; // rcx
  const wchar_t *v5; // rdx
  unsigned int v6; // edi
  const wchar_t *v7; // rcx
  const wchar_t *v8; // r14
  unsigned __int16 v9; // si
  char v10; // bl
  unsigned int v11; // edi

  if ( !a2 )
    return 1;
  v3 = *(unsigned __int16 **)(*(_QWORD *)(a1 + 80) + 848LL);
  if ( !v3 )
    return 1;
  v5 = (const wchar_t *)*((_QWORD *)v3 + 1);
  v6 = *v3 >> 1;
  v7 = &v5[v6];
  do
  {
    v8 = v7;
    if ( v7 == v5 )
      break;
    --v7;
  }
  while ( *v7 != 92 );
  v9 = 0;
  v10 = 1;
  v11 = v6 - (v8 - v5);
  while ( v9 < *a2 )
  {
    if ( a2[8 * v9 + 4] == v11 && !wcsnicmp(*(const wchar_t **)&a2[8 * v9 + 8], v8, v11) )
      return v10;
    ++v9;
  }
  return 0;
}
