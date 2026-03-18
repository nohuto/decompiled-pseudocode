/*
 * XREFs of PsIsImageNotifyEnabled @ 0x14090409C
 * Callers:
 *     MiMapViewOfImageSection @ 0x1409028FC (MiMapViewOfImageSection.c)
 *     DbgkCreateThread @ 0x14090B274 (DbgkCreateThread.c)
 * Callees:
 *     <none>
 */

bool PsIsImageNotifyEnabled()
{
  char v0; // cl

  v0 = 1;
  if ( (PspNotifyEnableMask & 1) == 0 )
    return (PerfGlobalGroupMask[0] & 4) != 0;
  return v0;
}
