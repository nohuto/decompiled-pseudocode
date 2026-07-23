/*
 * XREFs of PiDqQueryValidateQueryData @ 0x1409F27A0
 * Callers:
 *     PiDqIrpQueryCreate @ 0x1409F2380 (PiDqIrpQueryCreate.c)
 * Callees:
 *     _PnpValidatePropertyData @ 0x1408B6740 (_PnpValidatePropertyData.c)
 *     PiDqGetPnpObjectType @ 0x1408D2490 (PiDqGetPnpObjectType.c)
 *     PnpValidateMultiSz @ 0x1409F298C (PnpValidateMultiSz.c)
 *     ValidFilter @ 0x1409F2A20 (ValidFilter.c)
 */

__int64 __fastcall PiDqQueryValidateQueryData(__int64 a1)
{
  unsigned int v2; // ebp
  __int64 v3; // r8
  __int64 v4; // r9
  int v5; // eax
  __int64 v6; // rdx
  unsigned int v7; // r8d
  unsigned int i; // ecx
  __int64 v9; // rdx
  _DWORD *v10; // rsi
  __int64 j; // rdi

  v2 = -1073741811;
  if ( a1
    && (unsigned int)PiDqGetPnpObjectType(*(_DWORD *)(a1 + 16))
    && ((*(_DWORD *)(a1 + 40) & 2) == 0 || !*(_DWORD *)(a1 + 64)) )
  {
    if ( *(_DWORD *)(a1 + 20) == 1 )
    {
      if ( !*(_QWORD *)(a1 + 24) )
        return v2;
    }
    else if ( *(_DWORD *)(a1 + 20) == 2
           && (int)PnpValidateMultiSz(*(_QWORD *)(a1 + 32), *(unsigned int *)(a1 + 24), v3, v4) < 0 )
    {
      return v2;
    }
    v5 = *(_DWORD *)(a1 + 40);
    if ( (v5 & 0xFFFFFFF8) != 0 )
      return v2;
    if ( (v5 & 4) != 0 )
    {
      if ( (int)PnpValidateMultiSz(*(_QWORD *)(a1 + 56), *(unsigned int *)(a1 + 48), v3, v4) < 0 )
        return v2;
    }
    else if ( *(_QWORD *)(a1 + 56) || *(_DWORD *)(a1 + 48) )
    {
      return v2;
    }
    v6 = *(_QWORD *)(a1 + 72);
    if ( v6 || !*(_DWORD *)(a1 + 64) )
    {
      v7 = *(_DWORD *)(a1 + 64);
      if ( v7 || !v6 )
      {
        for ( i = 0; i < v7; ++i )
        {
          if ( *(_QWORD *)(32LL * i + v6 + 24) )
            return v2;
        }
        v9 = *(_QWORD *)(a1 + 88);
        if ( (v9 || !*(_DWORD *)(a1 + 80)) && (*(_DWORD *)(a1 + 80) || !v9) && (!v9 || (unsigned int)ValidFilter()) )
        {
          v10 = (_DWORD *)(a1 + 96);
          if ( *(_QWORD *)(a1 + 104) )
          {
            if ( !*(_DWORD *)(a1 + 96) )
              return v2;
          }
          else if ( *v10 )
          {
            return v2;
          }
          for ( j = 0LL; (unsigned int)j < *v10; j = (unsigned int)(j + 1) )
          {
            if ( (int)PnpValidatePropertyData(
                        *(__int64 **)(*(_QWORD *)(a1 + 104) + 40 * j + 32),
                        *(_DWORD *)(*(_QWORD *)(a1 + 104) + 40 * j + 24),
                        *(_DWORD *)(*(_QWORD *)(a1 + 104) + 40 * j + 20)) < 0 )
              return v2;
          }
          return 0;
        }
      }
    }
  }
  return v2;
}
