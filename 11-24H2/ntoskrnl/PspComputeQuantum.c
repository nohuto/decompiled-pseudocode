/*
 * XREFs of PspComputeQuantum @ 0x140A263B4
 * Callers:
 *     PsChangeQuantumTable @ 0x140A261A0 (PsChangeQuantumTable.c)
 *     PspComputeQuantumAndPriority @ 0x140A262E0 (PspComputeQuantumAndPriority.c)
 * Callees:
 *     <none>
 */

char __fastcall PspComputeQuantum(__int64 a1, char a2)
{
  __int64 v2; // rcx
  __int64 v4; // rax

  if ( *(_BYTE *)(a1 + 839) == 1 )
    return 6;
  v2 = *(_QWORD *)(a1 + 672);
  if ( !v2 || !PspUseJobSchedulingClasses )
    return *((_BYTE *)&PspForegroundQuantum + (PsPrioritySeparation & (unsigned int)-(a2 != 0)));
  v4 = *(unsigned int *)(v2 + 1060);
  if ( (unsigned int)v4 >= 0xA )
    v4 = *(unsigned int *)(v2 + 580);
  return *((_BYTE *)PspJobSchedulingClasses + v4);
}
