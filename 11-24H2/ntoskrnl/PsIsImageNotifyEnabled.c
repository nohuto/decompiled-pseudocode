/*
 * XREFs of PsIsImageNotifyEnabled @ 0x140A268F4
 * Callers:
 *     DbgkCreateThread @ 0x140921604 (DbgkCreateThread.c)
 *     MiMapViewOfImageSection @ 0x140AE8594 (MiMapViewOfImageSection.c)
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
