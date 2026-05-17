/*
 * XREFs of RtlAddAce @ 0x18005EFC0
 * Callers:
 *     RtlCreateAndSetSD @ 0x180065F40 (RtlCreateAndSetSD.c)
 * Callees:
 *     RtlValidAcl @ 0x18005FD10 (RtlValidAcl.c)
 */

__int64 __fastcall RtlAddAce(char *a1, unsigned int a2, unsigned int a3, char *a4, unsigned int a5)
{
  unsigned int v9; // esi
  char *v10; // rax
  unsigned int v11; // r11d
  unsigned __int64 v12; // r9
  unsigned int i; // r10d
  unsigned __int8 *v14; // rdx
  __int64 v15; // r8
  unsigned __int64 v16; // r15
  unsigned __int8 v17; // r13
  unsigned __int64 v18; // r10
  int v19; // r9d
  __int64 v20; // r10
  __int64 v21; // r11
  char v22; // cl
  char *v23; // rbx
  __int64 result; // rax
  unsigned __int8 v25; // cl
  __int16 v26; // [rsp+20h] [rbp-38h]

  if ( !(unsigned __int8)RtlValidAcl(a1) )
    return 3221225485LL;
  v9 = *((unsigned __int16 *)a1 + 2);
  v10 = a1 + 8;
  v11 = 0;
  v12 = (unsigned __int64)(a1 + 8);
  for ( i = 0; i < v9; ++i )
  {
    if ( v12 >= (unsigned __int64)&a1[*((unsigned __int16 *)a1 + 1)] )
      return 3221225485LL;
    v12 += *(unsigned __int16 *)(v12 + 2);
  }
  v14 = (unsigned __int8 *)a4;
  v15 = a5;
  v16 = (unsigned __int64)&a1[*((unsigned __int16 *)a1 + 1)];
  v17 = a2;
  v26 = 0;
  v18 = (unsigned __int64)&a4[a5];
  if ( v12 > v16 )
    v12 = 0LL;
  if ( (unsigned __int8)a2 <= (unsigned __int8)*a1 )
    v17 = *a1;
  while ( (unsigned __int64)v14 < v18 )
  {
    v25 = *v14;
    if ( *v14 > 3u )
    {
      if ( v25 <= 4u )
      {
        if ( a2 < 3 )
          return 3221225485LL;
      }
      else if ( v25 <= 8u )
      {
        if ( a2 < 4 )
          return 3221225485LL;
      }
      else if ( !*((_WORD *)v14 + 1) )
      {
        return 3221225485LL;
      }
    }
    v14 += *((unsigned __int16 *)v14 + 1);
    ++v26;
  }
  if ( (unsigned __int64)v14 > v18 )
    return 3221225485LL;
  if ( !v12 || v12 + a5 > v16 )
    return 3221225507LL;
  if ( a3 )
  {
    do
    {
      if ( v11 >= v9 )
        break;
      ++v11;
      v10 += *((unsigned __int16 *)v10 + 1);
    }
    while ( v11 < a3 );
  }
  v19 = v12 - (_DWORD)v10 - 1;
  v20 = v19;
  if ( v19 >= 0 )
  {
    v21 = v19 + a5;
    do
    {
      v22 = v10[v20--];
      v10[v21] = v22;
      v21 = (unsigned int)(v21 - 1);
    }
    while ( v20 >= 0 );
  }
  if ( a5 )
  {
    v23 = (char *)(a4 - v10);
    do
    {
      *v10 = v10[(_QWORD)v23];
      ++v10;
      --v15;
    }
    while ( v15 );
  }
  *((_WORD *)a1 + 2) += v26;
  result = 0LL;
  *a1 = v17;
  return result;
}
