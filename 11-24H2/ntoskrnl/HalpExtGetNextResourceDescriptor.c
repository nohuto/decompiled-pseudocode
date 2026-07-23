/*
 * XREFs of HalpExtGetNextResourceDescriptor @ 0x14054A750
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HalpExtGetNextResourceDescriptor(
        __int64 a1,
        unsigned int *a2,
        unsigned int *a3,
        __int16 a4,
        __int16 a5,
        int a6)
{
  char *v6; // rcx
  unsigned __int64 v7; // r8
  bool v8; // cf
  __int64 v9; // rax

  v6 = (char *)a2 + *a2;
  if ( a3 )
    v7 = (unsigned __int64)a3 + *a3;
  else
    v7 = (unsigned __int64)a2 + a2[5] + 24;
  while ( 1 )
  {
    v8 = v7 < (unsigned __int64)v6;
    if ( v7 >= (unsigned __int64)v6 )
      break;
    v9 = *(unsigned int *)v7;
    if ( (unsigned int)v9 < 0xC )
      return 0LL;
    if ( (a4 == -1 || a4 == *(_WORD *)(v7 + 4))
      && (a5 == -1 || a5 == *(_WORD *)(v7 + 6))
      && (a6 == 0xFFFF || a6 == *(_DWORD *)(v7 + 8)) )
    {
      v8 = v7 < (unsigned __int64)v6;
      return v7 & -(__int64)v8;
    }
    v7 += v9;
  }
  return v7 & -(__int64)v8;
}
