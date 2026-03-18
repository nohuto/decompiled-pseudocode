/*
 * XREFs of PopSystemIdleEventHandler @ 0x140A8ABD0
 * Callers:
 *     <none>
 * Callees:
 *     SSHSupportIsPlatformAoAc @ 0x140491754 (SSHSupportIsPlatformAoAc.c)
 *     PopAdaptiveGetBootTargetSystemState @ 0x140A8AC28 (PopAdaptiveGetBootTargetSystemState.c)
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
