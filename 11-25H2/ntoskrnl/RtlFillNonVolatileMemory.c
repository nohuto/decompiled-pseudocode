/*
 * XREFs of RtlFillNonVolatileMemory @ 0x1405E20C0
 * Callers:
 *     <none>
 * Callees:
 *     RtlFlushNonVolatileMemory @ 0x1404F89F0 (RtlFlushNonVolatileMemory.c)
 *     RtlFillMemoryNonTemporal @ 0x1406A88B0 (RtlFillMemoryNonTemporal.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

__int64 __fastcall RtlFillNonVolatileMemory(__int64 a1, void *a2, size_t a3, unsigned __int8 a4, __int16 a5)
{
  unsigned int v5; // ebx
  __int64 v7; // rdi

  v5 = 0;
  v7 = a3;
  if ( (a1 & 1) == 0 )
    return 3221225485LL;
  if ( (a5 & 3) == 1 )
  {
    if ( (a5 & 0x100) != 0 )
      LOBYTE(v5) = 1;
    goto LABEL_11;
  }
  if ( (a5 & 2) == 0 )
  {
    memset_0(a2, a4, a3);
    return v5;
  }
  if ( a3 < 8 )
  {
LABEL_11:
    memset_0(a2, a4, a3);
    return (unsigned int)RtlFlushNonVolatileMemory(a1, (__int64)a2, v7, v5);
  }
  LOBYTE(a3) = a4;
  RtlFillMemoryNonTemporal(a2, v7, a3);
  return v5;
}
