/*
 * XREFs of ?VidSchiStartExecutionTimeAtThisPriority@@YAXPEAU_VIDSCH_NODE@@K_K@Z @ 0x140036580
 * Callers:
 *     VidSchiProcessDpcSystemRequest @ 0x140009610 (VidSchiProcessDpcSystemRequest.c)
 *     VidSchiProcessDpcPreemptedPacket @ 0x140046B44 (VidSchiProcessDpcPreemptedPacket.c)
 *     VidSchiSetPriorityContext @ 0x140047D78 (VidSchiSetPriorityContext.c)
 * Callees:
 *     <none>
 */

void __fastcall VidSchiStartExecutionTimeAtThisPriority(struct _VIDSCH_NODE *a1, int a2, __int64 a3)
{
  __int64 v3; // rdx
  _QWORD *v4; // rax

  v3 = gulPriorityToYieldPriorityBand[a2];
  if ( v3 )
  {
    v4 = (_QWORD *)((char *)a1 + 8 * v3 + 2056);
    do
    {
      if ( *(v4 - 4) )
        *v4 = a3;
      --v4;
      --v3;
    }
    while ( v3 );
  }
}
