/*
 * XREFs of CcGetVacbLargeOffset @ 0x1403EF0D0
 * Callers:
 *     CcUnmapVacbArray @ 0x1402073E0 (CcUnmapVacbArray.c)
 *     CcGetVirtualAddress @ 0x140229480 (CcGetVirtualAddress.c)
 *     CcUnmapInactiveViewsInternal @ 0x1403EE88C (CcUnmapInactiveViewsInternal.c)
 *     CcSetFileSizesEx @ 0x1404A10D0 (CcSetFileSizesEx.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CcGetVacbLargeOffset(__int64 a1, __int64 a2)
{
  __int64 v2; // r11
  int v3; // r8d
  int v4; // r9d
  int v5; // r10d
  __int64 result; // rax
  __int64 v7; // rdx

  v2 = a2;
  v3 = 0;
  v4 = 25;
  do
  {
    v5 = v4;
    v4 += 7;
    ++v3;
  }
  while ( *(_QWORD *)(a1 + 32) > 1LL << v4 );
  for ( result = *(_QWORD *)(*(_QWORD *)(a1 + 88) + 8 * (a2 >> v5)); result; result = *(_QWORD *)(result + 8 * (v2 >> v5)) )
  {
    if ( !v3 )
      break;
    v7 = 1LL << v5;
    v5 -= 7;
    v2 &= v7 - 1;
    --v3;
  }
  return result;
}
