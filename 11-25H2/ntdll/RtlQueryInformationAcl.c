/*
 * XREFs of RtlQueryInformationAcl @ 0x1800DE5C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlQueryInformationAcl(unsigned __int8 *a1, unsigned int *a2, unsigned int a3, int a4)
{
  unsigned int v6; // ecx
  int v7; // r9d
  unsigned int v8; // r8d
  unsigned __int8 *v9; // rdx
  unsigned int i; // ecx
  unsigned __int8 *v11; // rax
  int v12; // edx
  __int64 result; // rax

  v6 = *a1;
  if ( (unsigned __int8)(v6 - 2) > 2u )
    return 3221225485LL;
  v7 = a4 - 1;
  if ( !v7 )
  {
    if ( a3 >= 4 )
    {
      *a2 = v6;
      return 0LL;
    }
    return 3221225507LL;
  }
  if ( v7 != 1 )
    return 3221225475LL;
  if ( a3 < 0xC )
    return 3221225507LL;
  v8 = *((unsigned __int16 *)a1 + 2);
  v9 = a1 + 8;
  for ( i = 0; ; ++i )
  {
    v11 = &a1[*((unsigned __int16 *)a1 + 1)];
    if ( i >= v8 )
      break;
    if ( v9 >= v11 )
      return 3221225485LL;
    v9 += *((unsigned __int16 *)v9 + 1);
  }
  *a2 = v8;
  if ( v9 > v11 )
    v9 = 0LL;
  if ( v9 )
  {
    v12 = (_DWORD)v9 - (_DWORD)a1;
    a2[1] = v12;
    a2[2] = *((unsigned __int16 *)a1 + 1) - v12;
    return 0LL;
  }
  a2[1] = *((unsigned __int16 *)a1 + 1);
  result = 0LL;
  a2[2] = 0;
  return result;
}
