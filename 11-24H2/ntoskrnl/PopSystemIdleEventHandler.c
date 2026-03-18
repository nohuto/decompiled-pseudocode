/*
 * XREFs of PopSystemIdleEventHandler @ 0x1409BA480
 * Callers:
 *     <none>
 * Callees:
 *     SSHSupportIsPlatformAoAc @ 0x140490DC8 (SSHSupportIsPlatformAoAc.c)
 *     PopAdaptiveGetBootTargetSystemState @ 0x1409BA4D8 (PopAdaptiveGetBootTargetSystemState.c)
 */

__int64 __fastcall PopSystemIdleEventHandler(char a1, _DWORD *a2, _DWORD *a3)
{
  if ( a1 )
  {
    *a2 = 1;
  }
  else if ( (int)PopAdaptiveGetBootTargetSystemState(a2, a3) < 0 )
  {
    if ( SSHSupportIsPlatformAoAc() )
    {
      *a2 = 2;
    }
    else
    {
      *a2 = 10;
      *a3 = 0;
    }
  }
  return 0LL;
}
