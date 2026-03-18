/*
 * XREFs of ??0CProcessResourceAttributionReporter@@AEAA@XZ @ 0x18026CDA8
 * Callers:
 *     ?RunCompositionThread@CConnection@@AEAAJXZ @ 0x1802670A4 (-RunCompositionThread@CConnection@@AEAAJXZ.c)
 * Callees:
 *     ?CreateObserver@CProcessAttributionManager@@QEAAPEAVCProcessAttributionObserver@@XZ @ 0x180202DE4 (-CreateObserver@CProcessAttributionManager@@QEAAPEAVCProcessAttributionObserver@@XZ.c)
 *     ModuleFailFastForHRESULT @ 0x18024A244 (ModuleFailFastForHRESULT.c)
 */

ULONGLONG *__fastcall CProcessResourceAttributionReporter::CProcessResourceAttributionReporter(ULONGLONG *pv)
{
  ULONGLONG TickCount64; // rax
  const void **v3; // rcx
  PTP_WORK ThreadpoolWork; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]

  TickCount64 = GetTickCount64();
  pv[1] = 0LL;
  v3 = (const void **)qword_1804070A0;
  *pv = TickCount64;
  pv[4] = 0LL;
  pv[5] = 0LL;
  pv[6] = 0LL;
  pv[7] = (ULONGLONG)CProcessAttributionManager::CreateObserver(v3);
  *((_DWORD *)pv + 16) = 0;
  ThreadpoolWork = CreateThreadpoolWork(
                     (PTP_WORK_CALLBACK)CProcessResourceAttributionReporter::ReportHighResourceUsageWorker,
                     pv,
                     0LL);
  pv[1] = (ULONGLONG)ThreadpoolWork;
  if ( !ThreadpoolWork )
    ModuleFailFastForHRESULT(0x8007000E, retaddr);
  return pv;
}
