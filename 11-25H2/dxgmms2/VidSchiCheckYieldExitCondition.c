/*
 * XREFs of VidSchiCheckYieldExitCondition @ 0x14003B96C
 * Callers:
 *     ?VidSchiWorkerThreadTimerCallback@@YAXPEAU_EX_TIMER@@PEAX@Z @ 0x140048EE0 (-VidSchiWorkerThreadTimerCallback@@YAXPEAU_EX_TIMER@@PEAX@Z.c)
 * Callees:
 *     ?VidSchiStopNodeYield@@YAXPEAU_VIDSCH_NODE@@@Z @ 0x14003B9B8 (-VidSchiStopNodeYield@@YAXPEAU_VIDSCH_NODE@@@Z.c)
 */

void __fastcall VidSchiCheckYieldExitCondition(__int64 a1, unsigned __int64 a2, char *a3)
{
  char v3; // r10
  __int64 v5; // r8

  v3 = 0;
  if ( *(_BYTE *)(a1 + 2144) )
  {
    v5 = *(_QWORD *)(a1 + 2120);
    if ( v5 )
    {
      if ( a2 > v5 + *(_QWORD *)(a1 + 2128) )
      {
        VidSchiStopNodeYield((struct _VIDSCH_NODE *)a1);
        v3 = 1;
      }
    }
  }
  *a3 = v3;
}
