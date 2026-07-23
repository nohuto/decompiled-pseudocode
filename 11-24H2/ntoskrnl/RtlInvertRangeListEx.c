/*
 * XREFs of RtlInvertRangeListEx @ 0x140A70AB0
 * Callers:
 *     ArbInitializeRangeList @ 0x140703530 (ArbInitializeRangeList.c)
 *     RtlInvertRangeList @ 0x140A70A80 (RtlInvertRangeList.c)
 * Callees:
 *     RtlAddRange @ 0x140A70BB0 (RtlAddRange.c)
 */

__int64 __fastcall RtlInvertRangeListEx(int a1, unsigned __int64 *a2, char a3, __int64 a4, __int64 a5)
{
  unsigned int v6; // edi
  __int64 v7; // rbp
  unsigned __int64 v10; // rdx
  __int64 result; // rax
  unsigned __int64 v12; // rbx
  unsigned __int64 *v13; // rbx
  int v14; // eax
  unsigned __int64 v15; // rdx
  __int64 v16; // [rsp+28h] [rbp-40h]

  v6 = 0;
  v7 = a4;
  v10 = 0LL;
  if ( *((_DWORD *)a2 + 5) )
  {
    v12 = *a2;
    while ( 1 )
    {
      v13 = (unsigned __int64 *)(v12 - 40);
      if ( a2 == v13 + 5 )
        break;
      if ( *v13 > v10 )
      {
        LOBYTE(a4) = a3;
        result = RtlAddRange(a1, v10, (unsigned int)*v13 - 1, a4, 0, v7, a5);
        if ( (int)result < 0 )
          return result;
      }
      v15 = v13[1];
      v12 = v13[5];
      v10 = v15 + 1;
    }
    if ( v10 )
    {
      LOBYTE(a4) = a3;
      v14 = RtlAddRange(a1, v10, -1, a4, 0, v7, a5);
      if ( v14 < 0 )
        return (unsigned int)v14;
      return v6;
    }
    else
    {
      return 0LL;
    }
  }
  else
  {
    v16 = a4;
    LOBYTE(a4) = a3;
    return RtlAddRange(a1, 0, -1, a4, 0, v16, a5);
  }
}
