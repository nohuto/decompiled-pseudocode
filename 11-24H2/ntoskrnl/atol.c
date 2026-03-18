/*
 * XREFs of atol @ 0x1404FDC00
 * Callers:
 *     atoi @ 0x1404FDBE0 (atoi.c)
 *     HvlDebuggerSupportInitialize @ 0x140582420 (HvlDebuggerSupportInitialize.c)
 *     KdInitSystem @ 0x140B75E30 (KdInitSystem.c)
 *     InitBootProcessor @ 0x140C0AC88 (InitBootProcessor.c)
 *     Phase1InitializationDiscard @ 0x140C0C048 (Phase1InitializationDiscard.c)
 *     RamdiskStart @ 0x140C5E688 (RamdiskStart.c)
 * Callees:
 *     strtolX @ 0x1404FD6B8 (strtolX.c)
 */

int __cdecl atol(const char *Str)
{
  if ( Str )
    return strtolX((unsigned __int8 *)Str, 0LL, 0xAu, 1);
  else
    return 0;
}
