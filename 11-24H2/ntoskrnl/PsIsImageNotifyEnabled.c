/*
 * XREFs of PsIsImageNotifyEnabled @ 0x140A328DC
 * Callers:
 *     MiMapViewOfImageSection @ 0x1408E3418 (MiMapViewOfImageSection.c)
 *     DbgkCreateThread @ 0x1408FED24 (DbgkCreateThread.c)
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
