/*
 * XREFs of ApiSetResolveToHost @ 0x140008B40
 * Callers:
 *     SmpProcessModuleImports @ 0x1400086D0 (SmpProcessModuleImports.c)
 * Callees:
 *     ApiSetpSearchForApiSet @ 0x140008110 (ApiSetpSearchForApiSet.c)
 *     ApiSetpResolveHost @ 0x14001990C (ApiSetpResolveHost.c)
 */

__int64 __fastcall ApiSetResolveToHost(__int64 a1, unsigned __int16 *a2, __int64 a3, __int64 a4, __int64 a5)
{
  _BYTE *v5; // r14
  __int64 v7; // rbx
  __int64 result; // rax
  char v9; // bp
  __int64 v10; // rcx
  const WCHAR *v11; // rdx
  unsigned __int64 v12; // rax
  _WORD *v13; // rax
  unsigned int v14; // r8d
  unsigned __int16 v15; // r8
  __int64 v16; // rax
  __int64 v17; // r15
  unsigned int v18; // esi
  int v19; // r14d
  const WCHAR *v20; // r11
  __int64 v21; // rbp
  unsigned __int16 v22; // ax
  int v23; // esi
  SIZE_T v24; // r10
  int v25; // edi
  __int64 v26; // r13
  LONG v27; // eax
  __int16 v28; // ax
  const WCHAR *v29; // [rsp+40h] [rbp-48h]
  SIZE_T v30; // [rsp+90h] [rbp+8h]

  v5 = (_BYTE *)a4;
  v7 = a1;
  if ( *(_BYTE *)a1 == 7 )
    return ApiSetpResolveHost(a1, *((_QWORD *)a2 + 1), *a2 >> 1, a4, a3, a4, a5);
  if ( *(_DWORD *)a1 == 6 && *(_DWORD *)(a1 + 16) > 8u )
  {
    a1 += 28LL;
    if ( *(_BYTE *)a1 == 7 && (*(_BYTE *)(v7 + 30) & 4) == 0 )
      return ApiSetpResolveHost(a1, *((_QWORD *)a2 + 1), *a2 >> 1, a4, a3, a4, a5);
  }
  v9 = 0;
  *(_OWORD *)a5 = 0LL;
  v10 = *a2;
  if ( (unsigned int)v10 < 8 )
    goto LABEL_30;
  v11 = (const WCHAR *)*((_QWORD *)a2 + 1);
  v12 = *(_QWORD *)v11 & 0xFFFFFFDFFFDFFFDFuLL;
  if ( v12 != 0x2D004900500041LL && v12 != 0x2D005400580045LL )
    goto LABEL_30;
  v13 = (_WORD *)((char *)v11 + v10);
  v14 = v10;
  do
  {
    v14 -= 2;
    --v13;
  }
  while ( *v13 != 45 && v14 > 1 );
  v15 = (unsigned __int16)v14 >> 1;
  if ( !v15 )
    goto LABEL_30;
  v16 = ApiSetpSearchForApiSet((_DWORD *)v7, v11, v15);
  v17 = v16;
  if ( !v16 )
    goto LABEL_30;
  if ( a3 )
  {
    v18 = *(_DWORD *)(v16 + 20);
    if ( v18 > 1 )
    {
      v19 = 1;
      v20 = *(const WCHAR **)(a3 + 8);
      v21 = v7 + *(unsigned int *)(v16 + 16);
      v22 = *(_WORD *)a3 >> 1;
      v23 = v18 - 1;
      v29 = v20;
      if ( v23 < 1 )
        goto LABEL_26;
      v24 = v22;
      v30 = v22;
      while ( 1 )
      {
        v25 = (v19 + v23) >> 1;
        v26 = v7 + *(unsigned int *)(v17 + 16) + 20LL * v25;
        v27 = RtlCompareUnicodeStrings(
                v20,
                v24,
                (PCWCH)(v7 + *(unsigned int *)(v26 + 4)),
                *(_DWORD *)(v26 + 8) >> 1,
                1u);
        if ( v27 >= 0 )
        {
          if ( v27 <= 0 )
          {
            v21 = v26;
LABEL_26:
            v5 = (_BYTE *)a4;
LABEL_29:
            *(_QWORD *)(a5 + 8) = v7 + *(unsigned int *)(v21 + 12);
            *(_WORD *)(a5 + 2) = *(_WORD *)(v21 + 16);
            v28 = *(_WORD *)(v21 + 16);
            v9 = 1;
            *(_WORD *)a5 = v28;
            goto LABEL_30;
          }
          v19 = v25 + 1;
        }
        else
        {
          v23 = v25 - 1;
        }
        v24 = v30;
        v20 = v29;
        if ( v19 > v23 )
        {
          v5 = (_BYTE *)a4;
          goto LABEL_29;
        }
      }
    }
  }
  if ( *(_DWORD *)(v16 + 20) )
  {
    v21 = v7 + *(unsigned int *)(v16 + 16);
    goto LABEL_29;
  }
LABEL_30:
  result = 0LL;
  *v5 = v9;
  return result;
}
