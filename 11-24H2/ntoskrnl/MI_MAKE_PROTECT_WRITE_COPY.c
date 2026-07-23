/*
 * XREFs of MI_MAKE_PROTECT_WRITE_COPY @ 0x1402697B0
 * Callers:
 *     MiHandleForkTransitionPte @ 0x1402678C4 (MiHandleForkTransitionPte.c)
 *     MiBuildForkPte @ 0x1402687D0 (MiBuildForkPte.c)
 *     MiCombineInitialInstance @ 0x140294F94 (MiCombineInitialInstance.c)
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
