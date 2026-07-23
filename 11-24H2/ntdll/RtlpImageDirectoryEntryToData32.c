/*
 * XREFs of RtlpImageDirectoryEntryToData32 @ 0x1800D6FE0
 * Callers:
 *     RtlpxLookupFunctionTable @ 0x1800430E0 (RtlpxLookupFunctionTable.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpImageDirectoryEntryToData32(
        __int64 a1,
        char a2,
        unsigned __int16 a3,
        _DWORD *a4,
        __int64 a5,
        _QWORD *a6)
{
  __int64 v6; // rax
  __int64 v7; // r8
  unsigned int *v8; // r9
  unsigned int v9; // ebx
  unsigned int i; // r10d
  __int64 v11; // rax
  __int64 v12; // rcx

  if ( (unsigned int)a3 >= *(_DWORD *)(a5 + 116) )
    return 3221225485LL;
  v6 = a3;
  v7 = *(unsigned int *)(a5 + 8LL * a3 + 120);
  if ( !(_DWORD)v7 )
    return 3221225474LL;
  *a4 = *(_DWORD *)(a5 + 8 * v6 + 124);
  if ( a2 || (unsigned int)v7 < *(_DWORD *)(a5 + 84) )
  {
    *a6 = a1 + v7;
    return 0LL;
  }
  else
  {
    v8 = (unsigned int *)(a5 + *(unsigned __int16 *)(a5 + 20) + 24LL);
    v9 = 0;
    for ( i = 0; ; ++i )
    {
      if ( i >= *(unsigned __int16 *)(a5 + 6) )
      {
        *a6 = 0LL;
        return 3221225485LL;
      }
      v11 = v8[3];
      if ( (unsigned int)v7 >= (unsigned int)v11 && (unsigned int)v7 < (unsigned int)v11 + v8[4] )
        break;
      v8 += 10;
    }
    v12 = v8[5] - v11 + a1;
    *a6 = v12 + v7;
    if ( !(v12 + v7) )
      return (unsigned int)-1073741811;
    return v9;
  }
}
