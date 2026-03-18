/*
 * XREFs of ?CalcScreenSaverTimeout@@YAXPEAU_UNICODE_STRING@@K@Z @ 0x1C00D6160
 * Callers:
 *     xxxUpdatePerUserSystemParameters @ 0x1C00D433C (xxxUpdatePerUserSystemParameters.c)
 * Callees:
 *     GetEasTimeout @ 0x1C00D61F0 (GetEasTimeout.c)
 */

void __fastcall CalcScreenSaverTimeout(struct _UNICODE_STRING *a1, int a2)
{
  unsigned int EasTimeout; // esi
  unsigned int v5; // [rsp+50h] [rbp+18h] BYREF

  v5 = 0;
  EasTimeout = GetEasTimeout();
  if ( (unsigned int)FastGetProfileIntFromID(a1, 4LL, 99LL, EasTimeout) && (!EasTimeout || v5 < EasTimeout) )
    EasTimeout = v5;
  xxxSystemParametersInfo(15LL, EasTimeout, 0LL, 0x8000LL, &v5, a2);
}
