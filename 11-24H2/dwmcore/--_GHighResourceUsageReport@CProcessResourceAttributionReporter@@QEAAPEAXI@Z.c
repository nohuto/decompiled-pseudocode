/*
 * XREFs of ??_GHighResourceUsageReport@CProcessResourceAttributionReporter@@QEAAPEAXI@Z @ 0x18012D998
 * Callers:
 *     ?ReportHighResourceUsageWorker@CProcessResourceAttributionReporter@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18012C6A0 (-ReportHighResourceUsageWorker@CProcessResourceAttributionReporter@@CAXPEAU_TP_CALLBACK_INSTANCE.c)
 *     ??1?$unique_ptr@UHighResourceUsageReport@CProcessResourceAttributionReporter@@U?$default_delete@UHighResourceUsageReport@CProcessResourceAttributionReporter@@@std@@@std@@QEAA@XZ @ 0x18012CC98 (--1-$unique_ptr@UHighResourceUsageReport@CProcessResourceAttributionReporter@@U-$default_delete@.c)
 *     ?CheckAndReportHighResourceUsage@CProcessResourceAttributionReporter@@AEAAXXZ @ 0x18012CEF8 (-CheckAndReportHighResourceUsage@CProcessResourceAttributionReporter@@AEAAXXZ.c)
 *     std::_Func_impl_no_alloc__lambda_d726b1e7ec95932be2432bf4c2269415__void_void___unsigned_long_unsigned___int64_unsigned_short_const___enum_ProcessAttributionFlags_ProcessAttributionResourceCounters_const_&_::_Do_call @ 0x18012DA00 (std--_Func_impl_no_alloc__lambda_d726b1e7ec95932be2432bf4c2269415__void_void___unsigned_long_uns.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180040040 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x180250CC4 (--3@YAXPEAX_K@Z.c)
 */

CProcessResourceAttributionReporter::HighResourceUsageReport *__fastcall CProcessResourceAttributionReporter::HighResourceUsageReport::`scalar deleting destructor'(
        CProcessResourceAttributionReporter::HighResourceUsageReport *this)
{
  _QWORD *v2; // rcx

  v2 = (_QWORD *)*((_QWORD *)this + 2);
  if ( v2 )
  {
    std::_Deallocate<16,0>(v2, 8 * ((__int64)(*((_QWORD *)this + 4) - (_QWORD)v2) >> 3));
    *((_QWORD *)this + 2) = 0LL;
    *((_QWORD *)this + 3) = 0LL;
    *((_QWORD *)this + 4) = 0LL;
  }
  operator delete(this, 0x30uLL);
  return this;
}
