/*
 * XREFs of wil::details::lambda_call__lambda_9532c6789f8817c10f052c0604d56f68___::_lambda_call__lambda_9532c6789f8817c10f052c0604d56f68___ @ 0x1802F5CA0
 * Callers:
 *     _lambda_4eb51ed923c3c5026d1aa1b932d3fcbb_::__lambda_4eb51ed923c3c5026d1aa1b932d3fcbb_ @ 0x1802F5B0C (_lambda_4eb51ed923c3c5026d1aa1b932d3fcbb_--__lambda_4eb51ed923c3c5026d1aa1b932d3fcbb_.c)
 *     ?_SwitchAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIAsyncCallback@@@Z @ 0x1802FDCD4 (-_SwitchAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@PEAUIViewWrapp.c)
 * Callees:
 *     ?Stop@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180031F14 (-Stop@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ??1SwitchAsyncWorker@CAppViewManagerTelemetry@@QEAA@XZ @ 0x1802F5F24 (--1SwitchAsyncWorker@CAppViewManagerTelemetry@@QEAA@XZ.c)
 *     ?TransferToCurrentThread@SwitchAsyncWorker@CAppViewManagerTelemetry@@QEAA?AV12@XZ @ 0x1802FB2C4 (-TransferToCurrentThread@SwitchAsyncWorker@CAppViewManagerTelemetry@@QEAA-AV12@XZ.c)
 */

void __fastcall wil::details::lambda_call__lambda_9532c6789f8817c10f052c0604d56f68___::_lambda_call__lambda_9532c6789f8817c10f052c0604d56f68___(
        CAppViewManagerTelemetry::SwitchAsyncWorker *this)
{
  _BYTE v2[336]; // [rsp+20h] [rbp-168h] BYREF

  if ( *((_BYTE *)this + 336) )
  {
    *((_BYTE *)this + 336) = 0;
    CAppViewManagerTelemetry::SwitchAsyncWorker::TransferToCurrentThread(this, v2);
    wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v2, 0);
    CAppViewManagerTelemetry::SwitchAsyncWorker::~SwitchAsyncWorker((CAppViewManagerTelemetry::SwitchAsyncWorker *)v2);
  }
  CAppViewManagerTelemetry::SwitchAsyncWorker::~SwitchAsyncWorker(this);
}
