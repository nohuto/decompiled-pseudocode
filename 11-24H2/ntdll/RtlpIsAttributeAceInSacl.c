/*
 * XREFs of RtlpIsAttributeAceInSacl @ 0x1800E2F1C
 * Callers:
 *     RtlpMergeSecurityAttributeInformation @ 0x1800E2AF0 (RtlpMergeSecurityAttributeInformation.c)
 * Callees:
 *     memcmp @ 0x180165A90 (memcmp.c)
 */

char __fastcall RtlpIsAttributeAceInSacl(__int64 a1, __int64 a2, char a3, _BYTE *a4)
{
  unsigned int v5; // edx
  int v6; // ebp
  int *v7; // r14
  unsigned int v8; // ecx
  char *v9; // r13
  unsigned __int64 v10; // rax
  _WORD *v11; // rcx
  unsigned __int64 v12; // rax
  int i; // edx
  int v14; // edx
  unsigned int v15; // ecx
  unsigned int v16; // r12d
  __int64 v17; // rbx
  unsigned int j; // r15d
  char result; // al
  unsigned int v20; // ecx
  int v21; // esi
  unsigned int *v22; // rdi
  unsigned int v23; // ecx
  char *v24; // r9
  unsigned __int64 v25; // rax
  _WORD *v26; // rcx
  unsigned __int64 v27; // rax
  int k; // edx
  int v29; // edx
  unsigned int v30; // ebx
  unsigned int v31; // esi
  unsigned int v32; // [rsp+68h] [rbp+10h]
  char v33; // [rsp+70h] [rbp+18h]

  v33 = a3;
  *a4 = 0;
  if ( !a2 )
    return 0;
  v5 = 4 * *(unsigned __int8 *)(a1 + 9) + 8;
  v6 = *(unsigned __int16 *)(a1 + 2) - v5 - 8;
  if ( v6 <= 20 )
    return 1;
  v7 = (int *)(a1 + v5 + 8LL);
  if ( v6 < (unsigned int)*v7 )
    return 1;
  v8 = v6 - *v7;
  if ( v8 < 4 )
    return 1;
  v9 = (char *)v7 + (unsigned int)*v7;
  if ( !v9 )
    return 1;
  v10 = v8;
  v11 = (_WORD *)((char *)v7 + (unsigned int)*v7);
  v12 = v10 >> 1;
  for ( i = v12; v12; --v12 )
  {
    if ( !*v11 )
      break;
    ++v11;
  }
  v14 = v12 ? i - v12 : 0;
  if ( !v12 )
    return 1;
  v15 = *(unsigned __int16 *)(a2 + 4);
  v16 = 2 * v14;
  v32 = v15;
  v17 = a2 + 8;
  for ( j = 0; ; ++j )
  {
    result = 0;
    if ( j >= v15 )
      break;
    if ( *(_BYTE *)v17 == 18 && (!a3 || (*(_BYTE *)(v17 + 1) & 0x10) != 0) )
    {
      v20 = 4 * *(unsigned __int8 *)(v17 + 9) + 8;
      v21 = *(unsigned __int16 *)(v17 + 2) - v20 - 8;
      if ( v21 > 20 )
      {
        v22 = (unsigned int *)(v17 + v20 + 8LL);
        if ( v21 >= *v22 )
        {
          v23 = v21 - *v22;
          if ( v23 >= 4 )
          {
            v24 = (char *)v22 + *v22;
            if ( v24 )
            {
              v25 = v23;
              v26 = (_WORD *)((char *)v22 + *v22);
              v27 = v25 >> 1;
              for ( k = v27; v27; --v27 )
              {
                if ( !*v26 )
                  break;
                ++v26;
              }
              v29 = v27 ? k - v27 : 0;
              if ( v27 && 2 * v29 == v16 )
              {
                if ( !memcmp(v24, v9, v16) )
                {
                  result = 1;
                  if ( !v33 || v21 != v6 )
                    return result;
                  v30 = v7[2];
                  v31 = v22[2];
                  *((_BYTE *)v7 + 10) = 0;
                  *((_BYTE *)v22 + 10) = 0;
                  if ( !memcmp(v22, v7, (unsigned int)v6) )
                    *a4 = 1;
                  v7[2] = v30;
                  v22[2] = v31;
                  return 1;
                }
                a3 = v33;
              }
            }
          }
        }
      }
      v15 = v32;
    }
    v17 += *(unsigned __int16 *)(v17 + 2);
  }
  return result;
}
