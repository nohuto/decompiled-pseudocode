/*
 * XREFs of MI_MAKE_PROTECT_WRITE_COPY @ 0x1402C63C8
 * Callers:
 *     MiBuildForkPte @ 0x1402C53E8 (MiBuildForkPte.c)
 *     MiCombineInitialInstance @ 0x14036C3E0 (MiCombineInitialInstance.c)
 *     MiHandleForkTransitionPte @ 0x14036D640 (MiHandleForkTransitionPte.c)
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
