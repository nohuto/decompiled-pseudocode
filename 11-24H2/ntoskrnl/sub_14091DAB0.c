/*
 * XREFs of sub_14091DAB0 @ 0x14091DAB0
 * Callers:
 *     sub_14091DCCC @ 0x14091DCCC (sub_14091DCCC.c)
 *     sub_14091DF30 @ 0x14091DF30 (sub_14091DF30.c)
 *     sub_14091EE7C @ 0x14091EE7C (sub_14091EE7C.c)
 *     sub_1409F876C @ 0x1409F876C (sub_1409F876C.c)
 * Callees:
 *     SddlpFree @ 0x140867F20 (SddlpFree.c)
 *     sub_14091DBE4 @ 0x14091DBE4 (sub_14091DBE4.c)
 */

__int64 __fastcall sub_14091DAB0(__int64 a1, __int64 a2, int a3)
{
  unsigned int v3; // ebx
  int *v4; // rsi
  int v7; // eax
  __int64 v8; // rbp
  __int64 v9; // r14
  __int64 v10; // rdi

  v3 = 0;
  v4 = (int *)(a2 + 16);
  if ( a3 <= -1 )
    a3 = *v4;
  v7 = *v4;
  if ( a3 > (unsigned int)*v4 )
  {
    return (unsigned int)-1073741811;
  }
  else if ( a3 > 0 )
  {
    v8 = (unsigned int)a3;
    do
    {
      v9 = *(_QWORD *)(a2 + 24) + 32LL * (unsigned int)(v7 - 1);
      v10 = *(_QWORD *)v9;
      if ( *(_QWORD *)v9 && _InterlockedExchangeAdd64((volatile signed __int64 *)(v10 + 80), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      {
        if ( *(_QWORD *)(v10 + 40) )
        {
          sub_14091DBE4(a1);
          *(_QWORD *)(v10 + 40) = 0LL;
          *(_QWORD *)(v10 + 24) = 0LL;
          *(_QWORD *)(v10 + 32) = 0LL;
          *(_DWORD *)(v10 + 72) = 0;
        }
        SddlpFree((void *)v10);
      }
      *(_OWORD *)v9 = 0LL;
      *(_OWORD *)(v9 + 16) = 0LL;
      v7 = --*v4;
      --v8;
    }
    while ( v8 );
  }
  return v3;
}
