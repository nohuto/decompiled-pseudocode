/*
 * XREFs of ?VidMmGetSchLogCpuVa@@YAPEAXPEAVVIDMM_SCH_LOG@@@Z @ 0x14004BDD0
 * Callers:
 *     VidSchiSerializeSchedulingLog @ 0x14010D784 (VidSchiSerializeSchedulingLog.c)
 * Callees:
 *     <none>
 */

void *__fastcall VidMmGetSchLogCpuVa(struct VIDMM_SCH_LOG *a1)
{
  return (void *)*((_QWORD *)a1 + 6);
}
