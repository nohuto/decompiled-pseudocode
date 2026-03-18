/*
 * XREFs of ApiSetpSearchForSectionIndex_V7 @ 0x1C014068C
 * Callers:
 *     ApiSetResolveToHost_V7 @ 0x1C01403DC (ApiSetResolveToHost_V7.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ApiSetpSearchForSectionIndex_V7(__int64 a1, unsigned int *a2, const WCHAR *a3, unsigned __int16 a4)
{
  unsigned int v4; // r11d
  unsigned int v5; // eax
  const WCHAR *v6; // r15
  const WCHAR *v9; // rsi
  int v10; // edi
  LONG v11; // r10d
  int v12; // r9d
  __int64 v13; // r8
  unsigned __int8 v14; // al
  unsigned __int8 v15; // dl
  unsigned int v16; // eax
  int v17; // r8d
  __int64 v18; // r12
  int v19; // edx
  __int64 v20; // r9
  __int64 v21; // r13
  int v22; // ecx
  __int64 v23; // rax
  __int64 v25; // rsi
  __int64 v26; // rdx
  int v27; // r11d
  __int64 v28; // rax
  unsigned __int8 *v29; // r14
  int v30; // r9d
  unsigned __int8 v31; // r8
  unsigned __int8 v32; // bp

  v4 = 0;
  v5 = a4;
  v6 = a3;
  v9 = a3;
  v10 = a4;
  v11 = 1;
  if ( a4 )
  {
    v12 = *((unsigned __int16 *)a2 + 4);
    v13 = v5;
    do
    {
      v14 = *(_BYTE *)v9;
      v15 = *(_BYTE *)v9;
      if ( *(_BYTE *)v9 >= 0x41u && v14 <= 0x5Au )
        v15 = v14 + 32;
      ++v9;
      v4 = v4 * v12 + v15;
      --v13;
    }
    while ( v13 );
  }
  v16 = a2[1];
  v17 = 0;
  v18 = *a2;
  v19 = v16 - 1;
  if ( (int)(v16 - 1) < 0 )
    return 0xFFFFFFFFLL;
  v20 = *(unsigned __int16 *)(a1 + 6);
  v21 = (unsigned int)v18 + v16 * *((unsigned __int8 *)a2 + 10);
  while ( 1 )
  {
    v22 = (v17 + v19) >> 1;
    v23 = v21 + 8LL * v22 - v20;
    if ( v4 >= *(_DWORD *)(v23 + a1) )
      break;
    v19 = v22 - 1;
LABEL_13:
    if ( v17 > v19 )
      return 0xFFFFFFFFLL;
  }
  if ( v4 > *(_DWORD *)(v23 + a1) )
  {
    v17 = v22 + 1;
    goto LABEL_13;
  }
  v25 = *(unsigned int *)(v23 + a1 + 4);
  v26 = v18 + v25 * *((unsigned __int8 *)a2 + 10) - v20;
  v27 = *(unsigned __int16 *)(v26 + a1 + 4);
  if ( v10 != v27 )
    return 0xFFFFFFFFLL;
  v28 = *(unsigned int *)(v26 + a1);
  if ( (*((_BYTE *)a2 + 11) & 1) != 0 )
  {
    v11 = RtlCompareUnicodeStrings(
            v6,
            a4,
            (PCWCH)(a1 + v28 + *(unsigned int *)(a1 + 16) - v20),
            *(unsigned __int16 *)(v26 + a1 + 4),
            1u);
  }
  else
  {
    v29 = (unsigned __int8 *)(v28 + *(unsigned int *)(a1 + 24) - v20 + a1);
    if ( v27 )
    {
      if ( v10 )
      {
        v30 = 0;
        while ( v10 )
        {
          v31 = *(_BYTE *)v6;
          v32 = *v29 + 32;
          if ( (unsigned __int8)(*v29 - 65) > 0x19u )
            v32 = *v29;
          if ( (unsigned __int8)(*(_BYTE *)v6 - 65) <= 0x19u )
            v31 += 32;
          if ( v32 < v31 )
          {
            v30 = -1;
            break;
          }
          if ( v32 > v31 )
          {
            v30 = 1;
            break;
          }
          ++v29;
          ++v6;
          --v10;
          if ( !--v27 )
            break;
        }
        v11 = v30;
      }
    }
    else
    {
      v11 = -1;
    }
  }
  if ( v11 )
    LODWORD(v25) = -1;
  return (unsigned int)v25;
}
