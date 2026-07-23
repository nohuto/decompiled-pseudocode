/*
 * XREFs of ApiSetResolveToHost @ 0x14065E514
 * Callers:
 *     ExIsMultiSessionSku @ 0x1407B7F88 (ExIsMultiSessionSku.c)
 *     MiResolveImageReferences @ 0x140A10E04 (MiResolveImageReferences.c)
 * Callees:
 *     ApiSetpSearchForApiSet @ 0x1404A8708 (ApiSetpSearchForApiSet.c)
 *     ApiSetpSearchForApiSetHost @ 0x14065E9C4 (ApiSetpSearchForApiSetHost.c)
 *     ApiSetpResolveHost @ 0x14065FB18 (ApiSetpResolveHost.c)
 */

__int64 __fastcall ApiSetResolveToHost(__int64 a1, unsigned __int16 *a2, __int64 a3, char *a4, __int64 a5)
{
  __int64 v7; // rbx
  char v9; // di
  __int64 v10; // rcx
  const WCHAR *v11; // rdx
  unsigned __int64 v12; // rax
  _WORD *v13; // rax
  unsigned int v14; // r8d
  unsigned __int16 v15; // r8
  __int64 v16; // rax
  __int64 v17; // rcx

  v7 = a1;
  if ( *(_BYTE *)a1 == 7 )
    return ApiSetpResolveHost(a1, *((_QWORD *)a2 + 1), *a2 >> 1, (_DWORD)a4, a3, (__int64)a4, a5);
  if ( *(_DWORD *)a1 == 6 && *(_DWORD *)(a1 + 16) > 8u )
  {
    a1 += 28LL;
    if ( *(_BYTE *)a1 == 7 && (*(_BYTE *)(v7 + 30) & 4) == 0 )
      return ApiSetpResolveHost(a1, *((_QWORD *)a2 + 1), *a2 >> 1, (_DWORD)a4, a3, (__int64)a4, a5);
  }
  v9 = 0;
  *(_OWORD *)a5 = 0LL;
  v10 = *a2;
  if ( (unsigned __int16)v10 >= 8u )
  {
    v11 = (const WCHAR *)*((_QWORD *)a2 + 1);
    v12 = *(_QWORD *)v11 & 0xFFFFFFDFFFDFFFDFuLL;
    if ( v12 == 0x2D004900500041LL || v12 == 0x2D005400580045LL )
    {
      v13 = (_WORD *)((char *)v11 + v10);
      v14 = v10;
      do
      {
        v14 -= 2;
        --v13;
      }
      while ( *v13 != 45 && v14 > 1 );
      v15 = (unsigned __int16)v14 >> 1;
      if ( v15 )
      {
        v16 = ApiSetpSearchForApiSet((_DWORD *)v7, v11, v15);
        if ( v16 )
        {
          if ( a3 && *(_DWORD *)(v16 + 20) > 1u )
          {
            v17 = ApiSetpSearchForApiSetHost(v16, *(_QWORD *)(a3 + 8), *(_WORD *)a3 >> 1, v7);
LABEL_20:
            v9 = 1;
            *(_QWORD *)(a5 + 8) = v7 + *(unsigned int *)(v17 + 12);
            *(_WORD *)(a5 + 2) = *(_WORD *)(v17 + 16);
            *(_WORD *)a5 = *(_WORD *)(v17 + 16);
            goto LABEL_21;
          }
          if ( *(_DWORD *)(v16 + 20) )
          {
            v17 = v7 + *(unsigned int *)(v16 + 16);
            goto LABEL_20;
          }
        }
      }
    }
  }
LABEL_21:
  *a4 = v9;
  return 0LL;
}
