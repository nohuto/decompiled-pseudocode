/*
 * XREFs of HalpTimerQueryWatchdogType @ 0x140538F20
 * Callers:
 *     HaliQuerySystemInformation @ 0x140B5BC60 (HaliQuerySystemInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HalpTimerQueryWatchdogType(_DWORD *a1)
{
  if ( HalpWatchdogTimer )
  {
    switch ( *(_DWORD *)(HalpWatchdogTimer + 228) )
    {
      case 8:
        *a1 = 1;
        break;
      case 0xD:
        *a1 = 2;
        break;
      case 0xE:
        *a1 = 4;
        break;
      default:
        *a1 = 3;
        break;
    }
  }
  else
  {
    *a1 = 0;
  }
  return 0LL;
}
