/*
 * XREFs of PiDqPropertyCallback @ 0x1408D2660
 * Callers:
 *     FilterEvalStrict @ 0x1408D0FC0 (FilterEvalStrict.c)
 *     FilterEvalImpliedAnd @ 0x1408D1E0C (FilterEvalImpliedAnd.c)
 * Callees:
 *     _wcsicmp @ 0x1404FBC30 (_wcsicmp.c)
 *     PiDqOpenObjectRegKey @ 0x14083E018 (PiDqOpenObjectRegKey.c)
 *     PiDqGetPnpObjectType @ 0x1408D2870 (PiDqGetPnpObjectType.c)
 *     PiDqPnPGetObjectProperty @ 0x1408D28C0 (PiDqPnPGetObjectProperty.c)
 */

__int64 __fastcall PiDqPropertyCallback(__int64 *a1, __int64 a2, _DWORD *a3, _DWORD *a4, _QWORD *a5)
{
  unsigned int v6; // edi
  __int64 v7; // r13
  unsigned int i; // esi
  _QWORD *v12; // r8
  __int64 v13; // rdx
  __int64 v14; // rbp
  __int64 v15; // rcx
  const wchar_t *v16; // rcx
  const wchar_t *v17; // rdx
  _DWORD *v19; // rsi
  int v20; // ecx
  int v21; // r10d
  int v22; // eax
  unsigned int PnpObjectType; // eax
  __int64 v24; // r9
  __int64 v25; // rax
  __int64 v26; // rcx

  v6 = 0;
  LODWORD(v7) = 0;
  for ( i = 0; i < *((_DWORD *)a1 + 6); ++i )
  {
    v12 = a1 + 2;
    v13 = a1[2];
    v14 = 48LL * i;
    if ( *(_DWORD *)(a2 + 16) == *(_DWORD *)(v13 + v14 + 16) )
    {
      v15 = *(_QWORD *)a2 - *(_QWORD *)(v13 + 48LL * i);
      if ( *(_QWORD *)a2 == *(_QWORD *)(v13 + 48LL * i) )
        v15 = *(_QWORD *)(a2 + 8) - *(_QWORD *)(v13 + v14 + 8);
      if ( !v15 && *(_DWORD *)(a2 + 20) == *(_DWORD *)(v13 + v14 + 20) )
      {
        v16 = *(const wchar_t **)(a2 + 24);
        v17 = *(const wchar_t **)(v13 + v14 + 24);
        if ( v16 == v17 )
          goto LABEL_9;
        if ( v16 && v17 && !wcsicmp(v16, v17) )
        {
          v12 = a1 + 2;
LABEL_9:
          *a3 = *(_DWORD *)(a1[2] + v14 + 32);
          *a4 = *(_DWORD *)(*v12 + 48LL * i + 36);
          *a5 = *(_QWORD *)(*v12 + 48LL * i + 40);
          return v6;
        }
      }
    }
  }
  v19 = (_DWORD *)(a2 + 20);
  v20 = *(_DWORD *)(a2 + 20);
  if ( v20 )
  {
    if ( v20 != 1 )
      return (unsigned int)-1073741811;
    if ( !*a1 )
    {
      PnpObjectType = PiDqGetPnpObjectType(*(unsigned int *)(*(_QWORD *)(a1[5] + 24) + 16LL));
      v6 = PiDqOpenObjectRegKey(1, a1[4], PnpObjectType, 1LL, 0, v24, a1);
      if ( v6 == -1073741772 )
      {
        *a1 = -1LL;
        v19 = (_DWORD *)(a2 + 20);
        v6 = 0;
      }
    }
    v7 = *a1;
    if ( *a1 == -1 )
    {
      v25 = a1[2];
      v26 = 6LL * *((unsigned int *)a1 + 6);
      *(_OWORD *)(v25 + 8 * v26) = *(_OWORD *)a2;
      *(_OWORD *)(v25 + 8 * v26 + 16) = *(_OWORD *)(a2 + 16);
      ++*((_DWORD *)a1 + 6);
      goto LABEL_26;
    }
    v21 = 0;
    if ( (v6 & 0x80000000) != 0 )
      return v6;
  }
  else
  {
    v21 = PiDqGetPnpObjectType(*(unsigned int *)(*(_QWORD *)(a1[5] + 24) + 16LL));
  }
  v22 = PiDqPnPGetObjectProperty(a1[4], v21, v7, a2, *v19, 0LL, a1[2] + 48LL * *((unsigned int *)a1 + 6));
  v6 = v22;
  if ( v22 == -1073741811 )
  {
    v6 = 0;
LABEL_26:
    *a3 = 0;
    *a4 = 0;
    *a5 = 0LL;
    return v6;
  }
  if ( v22 >= 0 )
  {
    *a3 = *(_DWORD *)(a1[2] + 48LL * *((unsigned int *)a1 + 6) + 32);
    *a4 = *(_DWORD *)(a1[2] + 48LL * *((unsigned int *)a1 + 6) + 36);
    *a5 = *(_QWORD *)(a1[2] + 48LL * (unsigned int)(*((_DWORD *)a1 + 6))++ + 40);
  }
  return v6;
}
