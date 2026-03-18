/*
 * XREFs of ?Destroy@CEventPoolEntry@CEventPool@@SAXQEAV12@@Z @ 0x140100E24
 * Callers:
 *     ?UmfdClientSendAndWaitForCompletion@@YAJW4FontDriverType@@PEAVFontDriverDdiRequest@@@Z @ 0x14010090C (-UmfdClientSendAndWaitForCompletion@@YAJW4FontDriverType@@PEAVFontDriverDdiRequest@@@Z.c)
 *     _UmfdClientSendAndWaitForCompletion_::_2_::_lambda_1_::operator() @ 0x140100C8C (_UmfdClientSendAndWaitForCompletion_--_2_--_lambda_1_--operator().c)
 *     ?UmfdClientSignalServerAndWaitForCompletion@@YAJPEAX0PEBI@Z @ 0x140175620 (-UmfdClientSignalServerAndWaitForCompletion@@YAJPEAX0PEBI@Z.c)
 *     ?Destroy@CEventPool@@SAXQEAV1@@Z @ 0x1402191AC (-Destroy@CEventPool@@SAXQEAV1@@Z.c)
 *     ??1?$CAutoDestroy@VCEventPoolEntry@CEventPool@@@@QEAA@XZ @ 0x14026992C (--1-$CAutoDestroy@VCEventPoolEntry@CEventPool@@@@QEAA@XZ.c)
 * Callees:
 *     ?Destroy@CManualResetEvent@@SAXQEAV1@@Z @ 0x140102014 (-Destroy@CManualResetEvent@@SAXQEAV1@@Z.c)
 */

void __fastcall CEventPool::CEventPoolEntry::Destroy(_QWORD *pv)
{
  void *v2; // rcx

  v2 = (void *)pv[1];
  if ( v2 )
    CManualResetEvent::Destroy(v2);
  EngFreeMem(pv);
}
