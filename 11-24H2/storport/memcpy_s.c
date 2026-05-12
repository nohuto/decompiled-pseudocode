/*
 * XREFs of memcpy_s @ 0x140056418
 * Callers:
 *     RaidEvaluateDsmLedState @ 0x14008C01C (RaidEvaluateDsmLedState.c)
 * Callees:
 *     RaidNullReference @ 0x140073AD0 (RaidNullReference.c)
 *     memmove @ 0x140143780 (memmove.c)
 *     memset_0 @ 0x140143A80 (memset_0.c)
 */

errno_t __cdecl memcpy_s(void *a1, rsize_t DstSize, const void *Src, rsize_t MaxCount)
{
  errno_t v8; // ebx

  if ( !MaxCount )
    return 0;
  if ( !a1 )
    goto LABEL_11;
  if ( Src && DstSize >= MaxCount )
  {
    memmove(a1, Src, MaxCount);
    return 0;
  }
  memset_0(a1, 0, DstSize);
  if ( Src )
  {
    if ( DstSize >= MaxCount )
      return 22;
    v8 = 34;
  }
  else
  {
LABEL_11:
    v8 = 22;
  }
  RaidNullReference(0LL, 0LL, 0LL, 0LL, 0LL);
  return v8;
}
