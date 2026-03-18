/*
 * XREFs of ??$make_unique@UResourceThresholdForProcessSequenceNumber@CProcessResourceAttributionReporter@@$$V$0A@@std@@YA?AV?$unique_ptr@UResourceThresholdForProcessSequenceNumber@CProcessResourceAttributionReporter@@U?$default_delete@UResourceThresholdForProcessSequenceNumber@CProcessResourceAttributionReporter@@@std@@@0@XZ @ 0x18022C0C4
 * Callers:
 *     ?ReportHighResourceUsageWorker@CProcessResourceAttributionReporter@@AEAAXPEAUHighResourceUsageReport@1@@Z @ 0x18012C710 (-ReportHighResourceUsageWorker@CProcessResourceAttributionReporter@@AEAAXPEAUHighResourceUsageRe.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180041E40 (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall std::make_unique<CProcessResourceAttributionReporter::ResourceThresholdForProcessSequenceNumber,,0>(
        _QWORD *a1)
{
  _DWORD *v2; // rax

  v2 = operator new(0x20uLL);
  if ( v2 )
  {
    *(_QWORD *)v2 = 0LL;
    v2[3] = 1000;
    v2[7] = 1000;
    v2[2] = 5000;
    v2[4] = 10000;
    v2[5] = 200;
    v2[6] = 500;
  }
  *a1 = v2;
  return a1;
}
