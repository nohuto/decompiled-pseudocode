/*
 * XREFs of KiAccumulateProcessorCycleStats @ 0x1403E6C50
 * Callers:
 *     KiEndDebugAccumulation @ 0x1404F2520 (KiEndDebugAccumulation.c)
 * Callees:
 *     <none>
 */

char __fastcall KiAccumulateProcessorCycleStats(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v4; // r10
  unsigned int v5; // r10d
  unsigned int v6; // r9d
  unsigned __int16 *v7; // rax
  char result; // al
  _QWORD *v9; // rdx

  v2 = *(_QWORD *)(a1 + 35248);
  v4 = *(_QWORD *)(a1 + 35256);
  if ( v2 && v4 )
  {
    if ( *(_BYTE *)(v4 + 112) )
    {
      v5 = *(_DWORD *)(v4 + 132);
    }
    else
    {
      v5 = *(_DWORD *)(v4 + 80);
      if ( v5 >= *(_DWORD *)(v2 + 528) )
        v5 = *(_DWORD *)(v2 + 528);
    }
  }
  else
  {
    v5 = 100;
  }
  v6 = 0;
  v7 = (unsigned __int16 *)(a1 + 35434);
  do
  {
    if ( v5 <= *v7 )
      break;
    ++v6;
    ++v7;
  }
  while ( v6 < 3 );
  result = -*(_BYTE *)(a1 + 35336);
  v9 = (_QWORD *)(16 * (v6 + 2168LL) + a1 + (*(_BYTE *)(a1 + 35336) != 0 ? 8 : 0));
  *v9 += a2;
  return result;
}
