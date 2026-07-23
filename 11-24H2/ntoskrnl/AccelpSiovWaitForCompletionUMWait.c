/*
 * XREFs of AccelpSiovWaitForCompletionUMWait @ 0x140403218
 * Callers:
 *     AccelpSiovInternalOperationHandler @ 0x140402CBC (AccelpSiovInternalOperationHandler.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AccelpSiovWaitForCompletionUMWait(int a1, _BYTE *a2)
{
  bool v4; // r11
  unsigned __int64 i; // r9

  _ESI = 1;
  _R8 = a2;
  v4 = 1;
  for ( i = __rdtsc() + 5000000; a1 != 1 && a1 != 2 || (*a2 & 0x3F) == 0; v4 = __CFSHR__(i, 32) )
  {
    if ( !v4 )
      i = __rdtsc() + 5000000;
    __asm { umonitor r8 }
    if ( (a1 == 1 || a1 == 2) && (*a2 & 0x3F) != 0 )
      break;
    __asm { umwait  esi }
  }
  return 0LL;
}
