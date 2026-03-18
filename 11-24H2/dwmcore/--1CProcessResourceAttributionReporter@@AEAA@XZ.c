/*
 * XREFs of ??1CProcessResourceAttributionReporter@@AEAA@XZ @ 0x180260DDC
 * Callers:
 *     ?RunCompositionThread@CConnection@@AEAAJXZ @ 0x18025D134 (-RunCompositionThread@CConnection@@AEAAJXZ.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180040040 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??1?$unique_ptr@UHighResourceUsageReport@CProcessResourceAttributionReporter@@U?$default_delete@UHighResourceUsageReport@CProcessResourceAttributionReporter@@@std@@@std@@QEAA@XZ @ 0x18012CC98 (--1-$unique_ptr@UHighResourceUsageReport@CProcessResourceAttributionReporter@@U-$default_delete@.c)
 *     ??$_Destroy_range@V?$allocator@V?$unique_ptr@UResourceThresholdForProcessSequenceNumber@CProcessResourceAttributionReporter@@U?$default_delete@UResourceThresholdForProcessSequenceNumber@CProcessResourceAttributionReporter@@@std@@@std@@@std@@@std@@YAXPEAV?$unique_ptr@UResourceThresholdForProcessSequenceNumber@CProcessResourceAttributionReporter@@U?$default_delete@UResourceThresholdForProcessSequenceNumber@CProcessResourceAttributionReporter@@@std@@@0@QEAV10@AEAV?$allocator@V?$unique_ptr@UResourceThresholdForProcessSequenceNumber@CProcessResourceAttributionReporter@@U?$default_delete@UResourceThresholdForProcessSequenceNumber@CProcessResourceAttributionReporter@@@std@@@std@@@0@@Z @ 0x18024CEC0 (--$_Destroy_range@V-$allocator@V-$unique_ptr@UResourceThresholdForProcessSequenceNumber@CProcess.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CProcessResourceAttributionReporter::~CProcessResourceAttributionReporter(
        CProcessResourceAttributionReporter *this)
{
  unsigned int v2; // edx
  CProcessResourceAttributionReporter::HighResourceUsageReport *v3; // rdi
  void (__fastcall ***v4)(_QWORD, __int64); // rcx
  void **v5; // rcx
  CProcessResourceAttributionReporter::HighResourceUsageReport *v6; // [rsp+30h] [rbp+8h] BYREF

  WaitForThreadpoolWorkCallbacks(*((PTP_WORK *)this + 1), 1);
  CloseThreadpoolWork(*((PTP_WORK *)this + 1));
  v3 = (CProcessResourceAttributionReporter::HighResourceUsageReport *)InterlockedFlushSList((PSLIST_HEADER)this + 1);
  while ( v3 )
  {
    v6 = v3;
    v3 = *(CProcessResourceAttributionReporter::HighResourceUsageReport **)v3;
    std::unique_ptr<CProcessResourceAttributionReporter::HighResourceUsageReport>::~unique_ptr<CProcessResourceAttributionReporter::HighResourceUsageReport>(
      &v6,
      v2);
  }
  v4 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 7);
  if ( v4 )
    (**v4)(v4, 1LL);
  v5 = (void **)*((_QWORD *)this + 4);
  if ( v5 )
  {
    std::_Destroy_range<std::allocator<std::unique_ptr<CProcessResourceAttributionReporter::ResourceThresholdForProcessSequenceNumber>>>(
      v5,
      *((void ***)this + 5));
    std::_Deallocate<16,0>(
      *((_QWORD **)this + 4),
      (*((_QWORD *)this + 6) - *((_QWORD *)this + 4)) & 0xFFFFFFFFFFFFFFF8uLL);
    *((_QWORD *)this + 4) = 0LL;
    *((_QWORD *)this + 5) = 0LL;
    *((_QWORD *)this + 6) = 0LL;
  }
}
