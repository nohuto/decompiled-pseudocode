/*
 * XREFs of RtlWriteNonVolatileMemory @ 0x1404A50D0
 * Callers:
 *     <none>
 * Callees:
 *     RtlFlushNonVolatileMemory @ 0x1404FAE20 (RtlFlushNonVolatileMemory.c)
 *     RtlCopyMemoryNonTemporal @ 0x1406B3A40 (RtlCopyMemoryNonTemporal.c)
 *     memmove @ 0x1406BFC40 (memmove.c)
 */

__int64 __fastcall RtlWriteNonVolatileMemory(__int64 a1, void *a2, const void *a3, size_t a4, char a5)
{
  unsigned int v5; // ebx

  v5 = 0;
  if ( (a1 & 1) != 0 )
  {
    if ( (a5 & 3) == 1 )
      goto LABEL_6;
    if ( (a5 & 2) == 0 )
    {
      memmove(a2, a3, a4);
      return v5;
    }
    if ( a4 < 8 )
    {
LABEL_6:
      memmove(a2, a3, a4);
      return (unsigned int)RtlFlushNonVolatileMemory(a1, a2, a4);
    }
    else
    {
      RtlCopyMemoryNonTemporal(a2, a3, a4);
    }
    return v5;
  }
  return 3221225485LL;
}
