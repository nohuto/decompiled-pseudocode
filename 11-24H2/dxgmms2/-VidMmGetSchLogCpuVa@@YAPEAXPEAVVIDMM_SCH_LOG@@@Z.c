/*
 * XREFs of ?VidMmGetSchLogCpuVa@@YAPEAXPEAVVIDMM_SCH_LOG@@@Z @ 0x14004B4E0
 * Callers:
 *     VidSchiSerializeSchedulingLog @ 0x14010B484 (VidSchiSerializeSchedulingLog.c)
 * Callees:
 *     <none>
 */

void *__fastcall VidMmGetSchLogCpuVa(struct VIDMM_SCH_LOG *a1)
{
  return (void *)*((_QWORD *)a1 + 6);
}
