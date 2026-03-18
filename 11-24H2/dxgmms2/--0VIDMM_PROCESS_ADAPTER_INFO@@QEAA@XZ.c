/*
 * XREFs of ??0VIDMM_PROCESS_ADAPTER_INFO@@QEAA@XZ @ 0x140102D58
 * Callers:
 *     ?InitializeProcessAdapterInfo@VIDMM_PROCESS@@IEAAPEAUVIDMM_PROCESS_ADAPTER_INFO@@PEAVVIDMM_GLOBAL@@@Z @ 0x1400B9FAC (-InitializeProcessAdapterInfo@VIDMM_PROCESS@@IEAAPEAUVIDMM_PROCESS_ADAPTER_INFO@@PEAVVIDMM_GLOBA.c)
 * Callees:
 *     ??0_unnamed_type__Policy_@VIDMM_PROCESS_ADAPTER_INFO@@QEAA@XZ @ 0x140040FD0 (--0_unnamed_type__Policy_@VIDMM_PROCESS_ADAPTER_INFO@@QEAA@XZ.c)
 *     ??0VIDMM_TELEMETRY_PROCESS_MIGRATION_STATS@@QEAA@XZ @ 0x14004146C (--0VIDMM_TELEMETRY_PROCESS_MIGRATION_STATS@@QEAA@XZ.c)
 *     memset @ 0x140056340 (memset.c)
 */

VIDMM_PROCESS_ADAPTER_INFO *__fastcall VIDMM_PROCESS_ADAPTER_INFO::VIDMM_PROCESS_ADAPTER_INFO(
        VIDMM_PROCESS_ADAPTER_INFO *this)
{
  _OWORD *v1; // rdi
  VIDMM_PROCESS_ADAPTER_INFO *result; // rax

  v1 = (_OWORD *)((char *)this + 152);
  *(_QWORD *)this = 0LL;
  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_DWORD *)this + 16) = 0;
  *((_DWORD *)this + 17) = 1;
  *((_DWORD *)this + 18) = 54;
  *((_DWORD *)this + 20) = 33685504;
  VIDMM_PROCESS_ADAPTER_INFO::_unnamed_type__Policy_::_unnamed_type__Policy_((VIDMM_PROCESS_ADAPTER_INFO *)((char *)this + 152));
  *((_QWORD *)this + 23) = 0LL;
  *((_QWORD *)this + 24) = 0LL;
  *((_QWORD *)this + 25) = 0LL;
  memset((char *)this + 208, 0, 0xB0uLL);
  memset((char *)this + 384, 0, 0x58uLL);
  *((_BYTE *)this + 472) = 0;
  memset((char *)this + 480, 0, 0xE8uLL);
  memset((char *)this + 712, 0, 0x74uLL);
  *((_BYTE *)this + 828) = 0;
  *((_OWORD *)this + 52) = 0LL;
  *((_OWORD *)this + 53) = 0LL;
  *((_QWORD *)this + 108) = 0LL;
  *(_OWORD *)((char *)this + 872) = 0LL;
  *((_DWORD *)this + 222) = 0;
  *((_BYTE *)this + 892) = 0;
  *((_QWORD *)this + 112) = 0LL;
  *((_QWORD *)this + 113) = 0LL;
  *((_DWORD *)this + 228) = 0;
  *((_BYTE *)this + 916) = 0;
  VIDMM_TELEMETRY_PROCESS_MIGRATION_STATS::VIDMM_TELEMETRY_PROCESS_MIGRATION_STATS((VIDMM_PROCESS_ADAPTER_INFO *)((char *)this + 920));
  *v1 = 0LL;
  *(_OWORD *)((char *)this + 168) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_OWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 14) = (char *)this + 104;
  *((_QWORD *)this + 13) = (char *)this + 104;
  result = this;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  return result;
}
