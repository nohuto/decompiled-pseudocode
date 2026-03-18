/*
 * XREFs of ??$emplace@V?$unique_ptr@UResourceThresholdForProcessSequenceNumber@CProcessResourceAttributionReporter@@U?$default_delete@UResourceThresholdForProcessSequenceNumber@CProcessResourceAttributionReporter@@@std@@@std@@@?$vector@V?$unique_ptr@UResourceThresholdForProcessSequenceNumber@CProcessResourceAttributionReporter@@U?$default_delete@UResourceThresholdForProcessSequenceNumber@CProcessResourceAttributionReporter@@@std@@@std@@V?$allocator@V?$unique_ptr@UResourceThresholdForProcessSequenceNumber@CProcessResourceAttributionReporter@@U?$default_delete@UResourceThresholdForProcessSequenceNumber@CProcessResourceAttributionReporter@@@std@@@std@@@2@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$unique_ptr@UResourceThresholdForProcessSequenceNumber@CProcessResourceAttributionReporter@@U?$default_delete@UResourceThresholdForProcessSequenceNumber@CProcessResourceAttributionReporter@@@std@@@std@@@std@@@std@@@1@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$unique_ptr@UResourceThresholdForProcessSequenceNumber@CProcessResourceAttributionReporter@@U?$default_delete@UResourceThresholdForProcessSequenceNumber@CProcessResourceAttributionReporter@@@std@@@std@@@std@@@std@@@1@$$QEAV?$unique_ptr@UResourceThresholdForProcessSequenceNumber@CProcessResourceAttributionReporter@@U?$default_delete@UResourceThresholdForProcessSequenceNumber@CProcessResourceAttributionReporter@@@std@@@1@@Z @ 0x1802283B4
 * Callers:
 *     ?ReportHighResourceUsageWorker@CProcessResourceAttributionReporter@@AEAAXPEAUHighResourceUsageReport@1@@Z @ 0x18012C710 (-ReportHighResourceUsageWorker@CProcessResourceAttributionReporter@@AEAAXPEAUHighResourceUsageRe.c)
 * Callees:
 *     ??$_Emplace_reallocate@V?$unique_ptr@UResourceThresholdForProcessSequenceNumber@CProcessResourceAttributionReporter@@U?$default_delete@UResourceThresholdForProcessSequenceNumber@CProcessResourceAttributionReporter@@@std@@@std@@@?$vector@V?$unique_ptr@UResourceThresholdForProcessSequenceNumber@CProcessResourceAttributionReporter@@U?$default_delete@UResourceThresholdForProcessSequenceNumber@CProcessResourceAttributionReporter@@@std@@@std@@V?$allocator@V?$unique_ptr@UResourceThresholdForProcessSequenceNumber@CProcessResourceAttributionReporter@@U?$default_delete@UResourceThresholdForProcessSequenceNumber@CProcessResourceAttributionReporter@@@std@@@std@@@2@@std@@AEAAPEAV?$unique_ptr@UResourceThresholdForProcessSequenceNumber@CProcessResourceAttributionReporter@@U?$default_delete@UResourceThresholdForProcessSequenceNumber@CProcessResourceAttributionReporter@@@std@@@1@QEAV21@$$QEAV21@@Z @ 0x180228460 (--$_Emplace_reallocate@V-$unique_ptr@UResourceThresholdForProcessSequenceNumber@CProcessResource.c)
 *     ??1?$unique_ptr@UResourceThresholdForProcessSequenceNumber@CProcessResourceAttributionReporter@@U?$default_delete@UResourceThresholdForProcessSequenceNumber@CProcessResourceAttributionReporter@@@std@@@std@@QEAA@XZ @ 0x180248CAC (--1-$unique_ptr@UResourceThresholdForProcessSequenceNumber@CProcessResourceAttributionReporter@@.c)
 *     ??$?4U?$default_delete@UResourceThresholdForProcessSequenceNumber@CProcessResourceAttributionReporter@@@std@@$0A@@?$unique_ptr@UResourceThresholdForProcessSequenceNumber@CProcessResourceAttributionReporter@@U?$default_delete@UResourceThresholdForProcessSequenceNumber@CProcessResourceAttributionReporter@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180260D20 (--$-4U-$default_delete@UResourceThresholdForProcessSequenceNumber@CProcessResourceAttributionRep.c)
 */

_QWORD *__fastcall std::vector<std::unique_ptr<CProcessResourceAttributionReporter::ResourceThresholdForProcessSequenceNumber>>::emplace<std::unique_ptr<CProcessResourceAttributionReporter::ResourceThresholdForProcessSequenceNumber>>(
        __int64 a1,
        _QWORD *a2,
        _QWORD *a3,
        __int64 *a4)
{
  _QWORD *v6; // rdx
  __int64 v7; // rax
  _QWORD *v8; // rdi
  __int64 v9; // rax
  _QWORD *v10; // rcx
  _QWORD v12[2]; // [rsp+28h] [rbp-10h] BYREF

  v6 = *(_QWORD **)(a1 + 8);
  if ( v6 == *(_QWORD **)(a1 + 16) )
  {
    *a2 = std::vector<std::unique_ptr<CProcessResourceAttributionReporter::ResourceThresholdForProcessSequenceNumber>>::_Emplace_reallocate<std::unique_ptr<CProcessResourceAttributionReporter::ResourceThresholdForProcessSequenceNumber>>(
            a1,
            a3,
            a4);
  }
  else
  {
    v7 = *a4;
    *a4 = 0LL;
    if ( a3 == v6 )
    {
      *v6 = v7;
      *(_QWORD *)(a1 + 8) += 8LL;
    }
    else
    {
      v8 = v6 - 1;
      v12[0] = v7;
      v9 = *(v6 - 1);
      *(v6 - 1) = 0LL;
      *v6 = v9;
      *(_QWORD *)(a1 + 8) += 8LL;
      while ( v8 != a3 )
      {
        v10 = v8--;
        std::unique_ptr<CProcessResourceAttributionReporter::ResourceThresholdForProcessSequenceNumber>::operator=<std::default_delete<CProcessResourceAttributionReporter::ResourceThresholdForProcessSequenceNumber>,0>(
          v10,
          v8);
      }
      std::unique_ptr<CProcessResourceAttributionReporter::ResourceThresholdForProcessSequenceNumber>::operator=<std::default_delete<CProcessResourceAttributionReporter::ResourceThresholdForProcessSequenceNumber>,0>(
        a3,
        v12);
      std::unique_ptr<CProcessResourceAttributionReporter::ResourceThresholdForProcessSequenceNumber>::~unique_ptr<CProcessResourceAttributionReporter::ResourceThresholdForProcessSequenceNumber>(v12);
    }
    *a2 = a3;
  }
  return a2;
}
