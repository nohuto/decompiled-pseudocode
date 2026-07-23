/*
 * XREFs of atol @ 0x1404FB4C0
 * Callers:
 *     atoi @ 0x1404FB4A0 (atoi.c)
 *     HvlDebuggerSupportInitialize @ 0x14057F7A0 (HvlDebuggerSupportInitialize.c)
 *     KdInitSystem @ 0x140B77E30 (KdInitSystem.c)
 *     InitBootProcessor @ 0x140C0CC88 (InitBootProcessor.c)
 *     Phase1InitializationDiscard @ 0x140C0E048 (Phase1InitializationDiscard.c)
 *     RamdiskStart @ 0x140C607D8 (RamdiskStart.c)
 * Callees:
 *     strtolX @ 0x1404FAF78 (strtolX.c)
 */

int __cdecl atol(const char *Str)
{
  if ( Str )
    return strtolX((unsigned __int8 *)Str, 0LL, 0xAu, 1);
  else
    return 0;
}
