/*
 * XREFs of sub_14002E8F8 @ 0x14002E8F8
 * Callers:
 *     sub_14003CF60 @ 0x14003CF60 (sub_14003CF60.c)
 * Callees:
 *     sub_14002F0C0 @ 0x14002F0C0 (sub_14002F0C0.c)
 */

__int64 __fastcall sub_14002E8F8(_DWORD *a1, __int64 a2)
{
  __int64 result; // rax
  __int64 i; // rbx
  __int64 v5; // rbp
  __int64 j; // rsi

  if ( !a1 )
    return 3221225473LL;
  for ( i = 0LL; (unsigned int)i < *a1; i = (unsigned int)(i + 1) )
  {
    v5 = *(_QWORD *)&a1[10 * i + 6];
    if ( v5 )
    {
      for ( j = 0LL; (unsigned int)j < *(_DWORD *)(v5 + 16); j = (unsigned int)(j + 1) )
      {
        LOBYTE(a2) = 1;
        result = sub_14002F0C0(v5 + 80 * j + 24, a2, *(_QWORD *)&a1[10 * i + 4]);
        if ( (int)result < 0 )
          return result;
      }
    }
  }
  return 0LL;
}
