/*
 * XREFs of VidSchiGetSchedulerStatus @ 0x14004FE78
 * Callers:
 *     VidSchFlushAdapter @ 0x1400A5430 (VidSchFlushAdapter.c)
 *     VidSchiRequestSchedulerStatus @ 0x140115710 (VidSchiRequestSchedulerStatus.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VidSchiGetSchedulerStatus(__int64 a1)
{
  return *(unsigned int *)(a1 + 368);
}
