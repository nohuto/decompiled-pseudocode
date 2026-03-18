/*
 * XREFs of LdrEnumResources @ 0x14076F120
 * Callers:
 *     <none>
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x14040FE90 (RtlImageDirectoryEntryToData.c)
 *     LdrpCompareResourceNamesWithValidation @ 0x1404737B4 (LdrpCompareResourceNamesWithValidation.c)
 */

__int64 __fastcall LdrEnumResources(
        unsigned __int64 a1,
        const wchar_t **a2,
        unsigned int a3,
        unsigned int *a4,
        __int64 a5)
{
  unsigned int v6; // r15d
  const wchar_t **v7; // r13
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rbx
  unsigned int *v12; // r14
  unsigned int v13; // edi
  __int64 v14; // rcx
  const wchar_t *v15; // r8
  __int64 v16; // rax
  __int64 v17; // rsi
  __int64 v18; // rsi
  unsigned int *v19; // rbp
  __int64 v20; // rcx
  unsigned int v21; // eax
  const wchar_t *v22; // r8
  __int64 v23; // rax
  __int64 v24; // rdi
  __int64 v25; // rdi
  unsigned int *v26; // r15
  __int64 v27; // rcx
  unsigned int i; // r13d
  __int64 v29; // rax
  __int64 v30; // rcx
  __int64 v31; // rcx
  __int64 v32; // r9
  unsigned int v33; // [rsp+30h] [rbp-68h]
  unsigned int v34; // [rsp+34h] [rbp-64h]
  unsigned int v35; // [rsp+38h] [rbp-60h]
  unsigned int v36; // [rsp+3Ch] [rbp-5Ch]
  unsigned int v37; // [rsp+40h] [rbp-58h]
  unsigned int v38; // [rsp+44h] [rbp-54h]
  unsigned int v39; // [rsp+48h] [rbp-50h]
  unsigned int v40; // [rsp+4Ch] [rbp-4Ch]
  int v44; // [rsp+B8h] [rbp+20h] BYREF

  v6 = a3;
  v7 = a2;
  v33 = 0;
  if ( a5 )
    v34 = *a4;
  else
    v34 = 0;
  *a4 = 0;
  v8 = RtlImageDirectoryEntryToData(a1, 1, 2u, &v44);
  v10 = v8;
  if ( !v8 )
    return 3221225609LL;
  v12 = (unsigned int *)(v8 + 16);
  v13 = 0;
  v14 = *(unsigned __int16 *)(v8 + 12) + (unsigned int)*(unsigned __int16 *)(v8 + 14);
  v37 = 0;
  v40 = *(unsigned __int16 *)(v8 + 12) + *(unsigned __int16 *)(v8 + 14);
  while ( 1 )
  {
    v36 = v13;
    if ( v13 >= (unsigned int)v14 )
      break;
    if ( !v6
      || (v15 = *v7, LOBYTE(v44) = 0,
                     !(unsigned int)LdrpCompareResourceNamesWithValidation(v14, v9, v15, v10, v12, &v44)) )
    {
      v16 = v12[1];
      if ( (int)v16 >= 0 )
        return 3221225595LL;
      v17 = *v12;
      if ( (int)v17 >= 0 )
      {
        v18 = *(unsigned __int16 *)v12;
      }
      else
      {
        LODWORD(v17) = v17 & 0x7FFFFFFF;
        v18 = v10 + v17;
      }
      LODWORD(v16) = v16 & 0x7FFFFFFF;
      v19 = (unsigned int *)(v16 + v10 + 16);
      v20 = *(unsigned __int16 *)(v16 + v10 + 12) + (unsigned int)*(unsigned __int16 *)(v16 + v10 + 14);
      v39 = *(unsigned __int16 *)(v16 + v10 + 12) + *(unsigned __int16 *)(v16 + v10 + 14);
      v21 = 0;
      while ( 1 )
      {
        v35 = v21;
        if ( v21 >= (unsigned int)v20 )
          break;
        if ( v6 <= 1
          || (v22 = v7[1],
              LOBYTE(v44) = 0,
              !(unsigned int)LdrpCompareResourceNamesWithValidation(v20, v9, v22, v10, v19, &v44)) )
        {
          v23 = v19[1];
          if ( (int)v23 >= 0 )
            return 3221225595LL;
          v24 = *v19;
          if ( (int)v24 >= 0 )
          {
            v25 = *(unsigned __int16 *)v19;
          }
          else
          {
            LODWORD(v24) = v24 & 0x7FFFFFFF;
            v25 = v10 + v24;
          }
          LODWORD(v23) = v23 & 0x7FFFFFFF;
          v26 = (unsigned int *)(v23 + v10 + 16);
          v27 = *(unsigned __int16 *)(v23 + v10 + 12) + (unsigned int)*(unsigned __int16 *)(v23 + v10 + 14);
          v38 = *(unsigned __int16 *)(v23 + v10 + 12) + *(unsigned __int16 *)(v23 + v10 + 14);
          for ( i = 0; i < (unsigned int)v27; ++i )
          {
            if ( a3 <= 2
              || (LOBYTE(v44) = 0, !(unsigned int)LdrpCompareResourceNamesWithValidation(v27, v9, a2[2], v10, v26, &v44)) )
            {
              v29 = v26[1];
              if ( (int)v29 < 0 )
                return 3221225595LL;
              v30 = *v26;
              if ( (int)v30 >= 0 )
              {
                v31 = *(unsigned __int16 *)v26;
              }
              else
              {
                LODWORD(v30) = v30 & 0x7FFFFFFF;
                v31 = v10 + v30;
              }
              v9 = 5LL * v33++;
              if ( v33 > v34 )
              {
                v37 = -1073741820;
              }
              else
              {
                v32 = a5;
                *(_QWORD *)(a5 + 8 * v9) = v18;
                *(_QWORD *)(v32 + 8 * v9 + 8) = v25;
                *(_QWORD *)(v32 + 8 * v9 + 16) = v31;
                *(_QWORD *)(v32 + 8 * v9 + 24) = a1 + *(unsigned int *)(v29 + v10);
                *(_QWORD *)(v32 + 8 * v9 + 32) = *(unsigned int *)(v29 + v10 + 4);
              }
            }
            v27 = v38;
            v26 += 2;
          }
          v6 = a3;
          v7 = a2;
        }
        v20 = v39;
        v21 = v35 + 1;
        v19 += 2;
      }
      v13 = v36;
    }
    v14 = v40;
    ++v13;
    v12 += 2;
  }
  *a4 = v33;
  return v37;
}
