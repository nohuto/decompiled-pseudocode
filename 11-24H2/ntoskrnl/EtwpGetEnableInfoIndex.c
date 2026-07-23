/*
 * XREFs of EtwpGetEnableInfoIndex @ 0x140442A28
 * Callers:
 *     SendCaptureStateNotificationsWorker @ 0x1407ADE80 (SendCaptureStateNotificationsWorker.c)
 *     EtwpBufferingModeFlush @ 0x1409D2A94 (EtwpBufferingModeFlush.c)
 * Callees:
 *     <none>
 */

char __fastcall EtwpGetEnableInfoIndex(__int64 a1, int a2, _DWORD *a3)
{
  __int64 i; // r9

  *a3 = 0;
  for ( i = 0LL; ; *a3 = i )
  {
    if ( (unsigned int)i >= 0x10 )
      return 0;
    if ( *(unsigned __int16 *)(32LL * (unsigned int)i + a1 + 134) == a2 && *(_DWORD *)(32 * (i + 4) + a1) )
      break;
    i = (unsigned int)(i + 1);
  }
  return 1;
}
