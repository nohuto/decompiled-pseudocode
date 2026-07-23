/*
 * XREFs of WdipSemAddEndEventToScenario @ 0x1407A0D3C
 * Callers:
 *     WdipSemMergeScenarios @ 0x1407A2198 (WdipSemMergeScenarios.c)
 * Callees:
 *     WdipSemMergeEvents @ 0x1407A2164 (WdipSemMergeEvents.c)
 *     WdipSemFastAllocate @ 0x140A3FB7C (WdipSemFastAllocate.c)
 */

__int64 __fastcall WdipSemAddEndEventToScenario(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  unsigned int v5; // r9d
  unsigned int i; // ecx
  __int64 v7; // r8
  __int64 v8; // rdx
  _OWORD *v9; // rax

  v2 = 0;
  if ( a1 && a2 )
  {
    v5 = *(_DWORD *)(a1 + 52);
    for ( i = 0; i < v5; ++i )
    {
      v7 = *(_QWORD *)(a1 + 8LL * i + 1048);
      v8 = *(_QWORD *)a2 - *(_QWORD *)v7;
      if ( *(_QWORD *)a2 == *(_QWORD *)v7 )
        v8 = *(_QWORD *)(a2 + 8) - *(_QWORD *)(v7 + 8);
      if ( !v8 && *(_WORD *)(a2 + 16) == *(_WORD *)(v7 + 16) )
      {
        WdipSemMergeEvents(*(_QWORD *)(a1 + 8LL * i + 1048), a2);
        return v2;
      }
    }
    if ( v5 < 0x10 )
    {
      v9 = (_OWORD *)WdipSemFastAllocate(0LL, 48LL);
      if ( v9 )
      {
        *v9 = *(_OWORD *)a2;
        v9[1] = *(_OWORD *)(a2 + 16);
        v9[2] = *(_OWORD *)(a2 + 32);
        *(_QWORD *)(a1 + 8LL * (unsigned int)(*(_DWORD *)(a1 + 52))++ + 1048) = v9;
      }
      else
      {
        return (unsigned int)-1073741670;
      }
    }
    else
    {
      return (unsigned int)-1073741823;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v2;
}
