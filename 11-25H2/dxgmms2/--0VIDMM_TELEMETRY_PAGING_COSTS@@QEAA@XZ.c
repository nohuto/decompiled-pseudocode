/*
 * XREFs of ??0VIDMM_TELEMETRY_PAGING_COSTS@@QEAA@XZ @ 0x14009A17C
 * Callers:
 *     ??0VIDMM_WORKER_THREAD@@QEAA@PEAVVIDMM_GLOBAL@@@Z @ 0x140098934 (--0VIDMM_WORKER_THREAD@@QEAA@PEAVVIDMM_GLOBAL@@@Z.c)
 * Callees:
 *     memset @ 0x140056780 (memset.c)
 */

VIDMM_TELEMETRY_PAGING_COSTS *__fastcall VIDMM_TELEMETRY_PAGING_COSTS::VIDMM_TELEMETRY_PAGING_COSTS(
        VIDMM_TELEMETRY_PAGING_COSTS *this)
{
  VIDMM_TELEMETRY_PAGING_COSTS *result; // rax

  memset(this, 0, 0x58uLL);
  memset((char *)this + 88, 0, 0xB0uLL);
  memset((char *)this + 264, 0, 0xB0uLL);
  memset((char *)this + 440, 0, 0x58uLL);
  memset((char *)this + 528, 0, 0xB0uLL);
  memset((char *)this + 704, 0, 0xB0uLL);
  memset((char *)this + 880, 0, 0x58uLL);
  memset((char *)this + 968, 0, 0xB0uLL);
  memset((char *)this + 1144, 0, 0xB0uLL);
  memset((char *)this + 1320, 0, 0x58uLL);
  memset((char *)this + 1408, 0, 0xB0uLL);
  memset((char *)this + 1584, 0, 0xB0uLL);
  memset((char *)this + 1760, 0, 0x58uLL);
  memset((char *)this + 1848, 0, 0xB0uLL);
  memset((char *)this + 2024, 0, 0xB0uLL);
  memset((char *)this + 2200, 0, 0x58uLL);
  memset((char *)this + 2288, 0, 0xB0uLL);
  memset((char *)this + 2464, 0, 0xB0uLL);
  memset((char *)this + 2640, 0, 0x58uLL);
  memset((char *)this + 2728, 0, 0xB0uLL);
  memset((char *)this + 2904, 0, 0xB0uLL);
  memset((char *)this + 3080, 0, 0x58uLL);
  memset((char *)this + 3168, 0, 0xB0uLL);
  memset((char *)this + 3344, 0, 0xB0uLL);
  *((_QWORD *)this + 451) = 0LL;
  *((_QWORD *)this + 452) = 0LL;
  *((_DWORD *)this + 906) = 0;
  result = this;
  *((_DWORD *)this + 907) = 1;
  return result;
}
