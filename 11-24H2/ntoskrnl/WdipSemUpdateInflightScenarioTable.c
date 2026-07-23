/*
 * XREFs of WdipSemUpdateInflightScenarioTable @ 0x1407A27F4
 * Callers:
 *     WdipSemLogInflightLimitExceededInformation @ 0x1407A2478 (WdipSemLogInflightLimitExceededInformation.c)
 * Callees:
 *     WdipSemFastAllocate @ 0x140A3FB7C (WdipSemFastAllocate.c)
 */

__int64 __fastcall WdipSemUpdateInflightScenarioTable(_QWORD *a1, __int16 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebx
  unsigned int v9; // r10d
  __int64 v10; // rdx
  unsigned int i; // ecx
  __int64 v12; // r9
  __int64 v13; // r8
  __int64 v14; // rax
  __int128 v15; // xmm0

  v4 = 0;
  if ( a1 && a3 && a4 )
  {
    v9 = *(_DWORD *)(a3 + 1000);
    v10 = 0LL;
    for ( i = 0; i < v9; ++i )
    {
      v12 = *(_QWORD *)(a3 + 8LL * i);
      v13 = *a1 - *(_QWORD *)v12;
      if ( *a1 == *(_QWORD *)v12 )
        v13 = a1[1] - *(_QWORD *)(v12 + 8);
      if ( !v13 && a2 == *(_WORD *)(v12 + 16) )
      {
        v10 = *(_QWORD *)(a3 + 8LL * i);
        break;
      }
    }
    if ( v10 )
    {
      ++*(_DWORD *)(v10 + 20);
    }
    else
    {
      if ( v9 >= 0x7D )
        return (unsigned int)-1073741823;
      v14 = WdipSemFastAllocate(5LL, 24LL);
      v10 = v14;
      if ( !v14 )
        return (unsigned int)-1073741670;
      *(_OWORD *)v14 = 0LL;
      *(_QWORD *)(v14 + 16) = 0LL;
      v15 = *(_OWORD *)a1;
      *(_WORD *)(v14 + 16) = a2;
      *(_DWORD *)(v14 + 20) = 1;
      *(_OWORD *)v14 = v15;
      *(_QWORD *)(a3 + 8LL * (unsigned int)(*(_DWORD *)(a3 + 1000))++) = v14;
    }
    if ( !*(_QWORD *)a4 || *(_DWORD *)(v10 + 20) > *(_DWORD *)(*(_QWORD *)a4 + 20LL) )
      *(_QWORD *)a4 = v10;
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v4;
}
