/*
 * XREFs of RtlpMuiRegGetOrAddStringToPool @ 0x14082D340
 * Callers:
 *     RtlpMuiRegGetOrAddString @ 0x14082D200 (RtlpMuiRegGetOrAddString.c)
 * Callees:
 *     RtlULongLongMult @ 0x14042A2B0 (RtlULongLongMult.c)
 *     _wcsicmp @ 0x1404FBC70 (_wcsicmp.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 */

__int64 __fastcall RtlpMuiRegGetOrAddStringToPool(__int64 a1, const wchar_t *a2, char a3, _DWORD *a4)
{
  __int64 v8; // rsi
  __int64 v9; // rbp
  const wchar_t *v10; // rcx
  __int64 v11; // rbp
  ULONGLONG v12; // rbp
  __int16 v14; // r9
  __int64 v15; // rbx
  size_t v16; // r8
  __int64 v17; // rax
  ULONGLONG pullResult; // [rsp+50h] [rbp+8h] BYREF

  pullResult = 0LL;
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
  if ( (int)v8 < 0 )
  {
    if ( !a1 || !a2 )
      return 0xFFFFFFFFLL;
    v11 = -1LL;
    do
      ++v11;
    while ( a2[v11] );
    v12 = v11 + 1;
    if ( v12 + *(unsigned __int16 *)(a1 + 10) > *(unsigned __int16 *)(a1 + 8) )
    {
      if ( a4 )
        *a4 = v12;
      return 0xFFFFFFFFLL;
    }
    if ( !a3 || *(_WORD *)(a1 + 6) >= *(_WORD *)(a1 + 4) || RtlULongLongMult(v12, 2uLL, &pullResult) < 0 )
      return 0xFFFFFFFFLL;
    v15 = *(__int16 *)(a1 + 10);
    v8 = *(unsigned __int16 *)(a1 + 6);
    v16 = pullResult;
    *(_WORD *)(a1 + 6) = v14 + v8;
    *(_WORD *)(a1 + 10) = v14 + v15;
    memmove((void *)(*(_QWORD *)(a1 + 24) + 2 * v15), a2, v16);
    v17 = *(_QWORD *)(a1 + 16);
    *(_WORD *)(a1 + 10) += v12;
    *(_WORD *)(v17 + 2 * v8) = v15;
  }
  return (unsigned int)v8;
}
