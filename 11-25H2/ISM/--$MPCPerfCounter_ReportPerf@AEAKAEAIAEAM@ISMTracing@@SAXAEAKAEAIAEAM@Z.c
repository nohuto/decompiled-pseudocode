/*
 * XREFs of ??$MPCPerfCounter_ReportPerf@AEAKAEAIAEAM@ISMTracing@@SAXAEAKAEAIAEAM@Z @ 0x1800C9744
 * Callers:
 *     ?ReportPerf@MPCPerfCounter@@AEAAX_K@Z @ 0x1800C982C (-ReportPerf@MPCPerfCounter@@AEAAX_K@Z.c)
 * Callees:
 *     ?IsEnabled@ISMTracing@@SA_NE_K@Z @ 0x180012810 (-IsEnabled@ISMTracing@@SA_NE_K@Z.c)
 *     ?Instance@ISMTracing@@KAPEAV1@XZ @ 0x180012EB8 (-Instance@ISMTracing@@KAPEAV1@XZ.c)
 *     ?MPCPerfCounter_ReportPerf_@ISMTracing@@QEAAXKIM@Z @ 0x1800C9790 (-MPCPerfCounter_ReportPerf_@ISMTracing@@QEAAXKIM@Z.c)
 */

void __fastcall ISMTracing::MPCPerfCounter_ReportPerf<unsigned long &,unsigned int &,float &>(
        unsigned int *a1,
        unsigned int *a2,
        float *a3)
{
  ISMTracing *v6; // rcx

  if ( ISMTracing::IsEnabled() )
  {
    ISMTracing::Instance();
    ISMTracing::MPCPerfCounter_ReportPerf_(v6, *a1, *a2, *a3);
  }
}
