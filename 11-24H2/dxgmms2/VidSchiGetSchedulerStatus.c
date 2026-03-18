/*
 * XREFs of VidSchiGetSchedulerStatus @ 0x14004F760
 * Callers:
 *     VidSchFlushAdapter @ 0x1400A6CB0 (VidSchFlushAdapter.c)
 *     VidSchiRequestSchedulerStatus @ 0x140115930 (VidSchiRequestSchedulerStatus.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VidSchiGetSchedulerStatus(__int64 a1)
{
  return *(unsigned int *)(a1 + 368);
}
