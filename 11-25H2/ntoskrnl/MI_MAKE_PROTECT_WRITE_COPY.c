/*
 * XREFs of MI_MAKE_PROTECT_WRITE_COPY @ 0x1402CE0D4
 * Callers:
 *     MiBuildForkPte @ 0x1402CCF80 (MiBuildForkPte.c)
 *     MiCombineInitialInstance @ 0x1402CE290 (MiCombineInitialInstance.c)
 *     MiHandleForkTransitionPte @ 0x1402CF714 (MiHandleForkTransitionPte.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MI_MAKE_PROTECT_WRITE_COPY(__int64 *a1)
{
  __int64 result; // rax

  result = *a1;
  if ( (*a1 & 0x80u) != 0LL )
  {
    result |= 0x20uLL;
    *a1 = result;
  }
  return result;
}
