/*
 * XREFs of RtlpMuiRegGetOrAddStringToPool @ 0x180099620
 * Callers:
 *     RtlpMuiRegGetOrAddString @ 0x1800993D0 (RtlpMuiRegGetOrAddString.c)
 * Callees:
 *     _wcsicmp @ 0x180120EA0 (_wcsicmp.c)
 *     memmove @ 0x1801657C0 (memmove.c)
 */

__int64 __fastcall RtlpMuiRegGetOrAddStringToPool(__int64 a1, const wchar_t *a2, char a3, _DWORD *a4)
{
  __int64 v8; // rdi
  __int64 v9; // rbp
  const wchar_t *v10; // rcx
  __int64 v12; // rbp
  __int64 v13; // r15
  unsigned __int64 v14; // rbp
  unsigned __int16 v15; // cx
  __int64 v16; // rax

  if ( a1 && a2 )
  {
    LODWORD(v8) = 0;
    v9 = 0LL;
    while ( (int)v8 < *(unsigned __int16 *)(a1 + 6) )
    {
      v10 = (const wchar_t *)(*(_QWORD *)(a1 + 24) + 2LL * *(__int16 *)(*(_QWORD *)(a1 + 16) + v9));
      if ( v10 == a2 || !wcsicmp(v10, a2) )
        goto LABEL_9;
      LODWORD(v8) = v8 + 1;
      v9 += 2LL;
    }
  }
  LODWORD(v8) = -1;
LABEL_9:
  if ( a4 )
    *a4 = 0;
  if ( (int)v8 >= 0 )
    return (unsigned int)v8;
  if ( !a1 || !a2 )
    return 0xFFFFFFFFLL;
  v12 = -1LL;
  do
    ++v12;
  while ( a2[v12] );
  v13 = *(unsigned __int16 *)(a1 + 10);
  v14 = v12 + 1;
  if ( v13 + v14 <= *(unsigned __int16 *)(a1 + 8) )
  {
    if ( a3 )
    {
      v15 = *(_WORD *)(a1 + 6);
      if ( v15 < *(_WORD *)(a1 + 4) && is_mul_ok(v14, 2uLL) )
      {
        v8 = *(unsigned __int16 *)(a1 + 6);
        *(_WORD *)(a1 + 6) = v15 + 1;
        *(_WORD *)(a1 + 10) = v13 + 1;
        memmove((void *)(*(_QWORD *)(a1 + 24) + 2LL * (__int16)v13), a2, 2 * v14);
        v16 = *(_QWORD *)(a1 + 16);
        *(_WORD *)(a1 + 10) += v14;
        *(_WORD *)(v16 + 2 * v8) = v13;
        return (unsigned int)v8;
      }
    }
    return 0xFFFFFFFFLL;
  }
  if ( !a4 )
    return 0xFFFFFFFFLL;
  *a4 = v14;
  return 0xFFFFFFFFLL;
}
