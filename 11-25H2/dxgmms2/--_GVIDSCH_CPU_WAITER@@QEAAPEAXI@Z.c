/*
 * XREFs of ??_GVIDSCH_CPU_WAITER@@QEAAPEAXI@Z @ 0x14001839C
 * Callers:
 *     VidSchSubmitWaitFromCpu @ 0x140019390 (VidSchSubmitWaitFromCpu.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall VIDSCH_CPU_WAITER::`scalar deleting destructor'(_QWORD *P)
{
  _QWORD *v2; // rcx

  v2 = (_QWORD *)P[4];
  if ( v2 != P + 5 && v2 )
    ExFreePoolWithTag(v2, 0);
  P[4] = 0LL;
  *((_DWORD *)P + 50) = 0;
  if ( P )
    ExFreePoolWithTag(P, 0);
  return P;
}
