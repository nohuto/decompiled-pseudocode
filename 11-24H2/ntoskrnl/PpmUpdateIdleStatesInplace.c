/*
 * XREFs of PpmUpdateIdleStatesInplace @ 0x14049C9D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PpmUpdateIdleStatesInplace(__int64 a1, __int64 a2)
{
  __int64 v2; // r9
  unsigned int v3; // r8d
  __int64 v4; // rcx
  __int64 v6; // r9
  __int64 v7; // r10
  int *v8; // rdx
  unsigned int v9; // ecx

  v2 = *(_QWORD *)(a1 + 34880);
  v3 = 0;
  if ( v2 )
  {
    v4 = *(unsigned int *)(a2 + 96);
    if ( (_DWORD)v4 == *(_DWORD *)(v2 + 40) )
    {
      *(_QWORD *)(v2 + 664) = *(_QWORD *)(a2 + 8);
      if ( (_DWORD)v4 )
      {
        v6 = v2 + 1336;
        v7 = v4;
        v8 = (int *)(a2 + 104);
        do
        {
          *(_BYTE *)(v6 + 63) = (*v8 & 0x40000000) != 0;
          *(_DWORD *)v6 = v8[1];
          v6 += 344LL;
          *(_DWORD *)(v6 - 336) = v8[3];
          *(_DWORD *)(v6 - 340) = v8[2];
          *(_BYTE *)(v6 - 287) = *v8 < 0;
          v9 = *v8;
          v8 += 8;
          *(_DWORD *)(v6 - 332) = v9 >> 31;
          --v7;
        }
        while ( v7 );
      }
    }
    else
    {
      return (unsigned int)-1073741811;
    }
  }
  else
  {
    return (unsigned int)-1073741637;
  }
  return v3;
}
