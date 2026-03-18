/*
 * XREFs of ??0VIDMM_TELEMETRY_PROCESS_MIGRATION_STATS@@QEAA@XZ @ 0x14004146C
 * Callers:
 *     ??0VIDMM_PROCESS_ADAPTER_INFO@@QEAA@XZ @ 0x140102D58 (--0VIDMM_PROCESS_ADAPTER_INFO@@QEAA@XZ.c)
 * Callees:
 *     memset @ 0x140056340 (memset.c)
 */

VIDMM_TELEMETRY_PROCESS_MIGRATION_STATS *__fastcall VIDMM_TELEMETRY_PROCESS_MIGRATION_STATS::VIDMM_TELEMETRY_PROCESS_MIGRATION_STATS(
        VIDMM_TELEMETRY_PROCESS_MIGRATION_STATS *this)
{
  VIDMM_TELEMETRY_PROCESS_MIGRATION_STATS *result; // rax

  *(_DWORD *)this = 0;
  *((_DWORD *)this + 1) = 0;
  memset((char *)this + 8, 0, 0x58uLL);
  memset((char *)this + 96, 0, 0xB0uLL);
  memset((char *)this + 272, 0, 0xB0uLL);
  memset((char *)this + 448, 0, 0xB0uLL);
  memset((char *)this + 624, 0, 0xB0uLL);
  memset((char *)this + 800, 0, 0x58uLL);
  memset((char *)this + 888, 0, 0x58uLL);
  result = this;
  *((_BYTE *)this + 976) = 0;
  return result;
}
