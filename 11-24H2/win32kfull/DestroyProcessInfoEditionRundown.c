/*
 * XREFs of DestroyProcessInfoEditionRundown @ 0x1401C1760
 * Callers:
 *     <none>
 * Callees:
 *     ?TraceLoggingProcessUsageOnTerminationEvent@@YAXQEAUtagPROCESSINFO@@@Z @ 0x1401C1790 (-TraceLoggingProcessUsageOnTerminationEvent@@YAXQEAUtagPROCESSINFO@@@Z.c)
 */

void __fastcall DestroyProcessInfoEditionRundown(struct tagPROCESSINFO *a1)
{
  if ( a1 )
  {
    if ( *((_DWORD *)a1 + 232) )
    {
      TraceLoggingProcessUsageOnTerminationEvent(a1);
      *((_DWORD *)a1 + 232) = 0;
    }
  }
}
