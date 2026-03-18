/*
 * XREFs of ?CalculateIdealPState@DXGPOWERSTATISTICSTRANSITIONENGINE@@AEAAII@Z @ 0x1400767B0
 * Callers:
 *     ?CalculatePState@DXGPOWERSTATISTICSTRANSITIONENGINE@@AEAAXI@Z @ 0x140076838 (-CalculatePState@DXGPOWERSTATISTICSTRANSITIONENGINE@@AEAAXI@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DXGPOWERSTATISTICSTRANSITIONENGINE::CalculateIdealPState(
        DXGPOWERSTATISTICSTRANSITIONENGINE *this,
        unsigned int a2)
{
  unsigned int *v2; // rdi
  unsigned int v3; // r9d
  unsigned __int64 v4; // r11
  unsigned int v5; // r8d
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rcx

  v2 = (unsigned int *)*((_QWORD *)this + 2);
  v3 = *v2;
  v4 = -1LL;
  v5 = *v2;
  v6 = a2 * (unsigned __int64)v2[*((unsigned int *)this + 14) + 1] / *(unsigned int *)(*(_QWORD *)this + 4652LL);
  while ( 1 )
  {
    if ( !v5 )
      return 0LL;
    v7 = v2[v5];
    v8 = v7 - v6;
    if ( v7 <= v6 )
      v8 = v6 - v7;
    if ( v8 >= v4 )
      break;
    v4 = v8;
    --v5;
  }
  if ( v5 >= v3 )
    return v3 - 1;
  return v5;
}
