/*
 * XREFs of memcpy_s @ 0x1400068B8
 * Callers:
 *     AcpiEval_PDC @ 0x1400317EC (AcpiEval_PDC.c)
 *     AcpiEval_OSC @ 0x140044368 (AcpiEval_OSC.c)
 * Callees:
 *     AcpiCStateIdleComplete @ 0x140004D10 (AcpiCStateIdleComplete.c)
 *     memmove @ 0x140010040 (memmove.c)
 *     memset @ 0x140010340 (memset.c)
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
  memset(a1, 0, DstSize);
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
  AcpiCStateIdleComplete();
  return v8;
}
