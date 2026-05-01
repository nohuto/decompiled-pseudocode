/*
 * XREFs of _lambda_4eb51ed923c3c5026d1aa1b932d3fcbb_::_lambda_4eb51ed923c3c5026d1aa1b932d3fcbb_ @ 0x1803AB9D0
 * Callers:
 *     ?_SwitchAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIAsyncCallback@@@Z @ 0x1803B9C54 (-_SwitchAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@PEAUIViewWrapp.c)
 * Callees:
 *     ??0?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV01@@Z @ 0x1800205E4 (--0-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@w.c)
 *     wil::details::lambda_call__lambda_9532c6789f8817c10f052c0604d56f68___::lambda_call__lambda_9532c6789f8817c10f052c0604d56f68___ @ 0x1803AC1A0 (wil--details--lambda_call__lambda_9532c6789f8817c10f052c0604d56f68___--lambda_call__lambda_9532c.c)
 */

__int64 __fastcall lambda_4eb51ed923c3c5026d1aa1b932d3fcbb_::_lambda_4eb51ed923c3c5026d1aa1b932d3fcbb_(
        __int64 a1,
        __int64 *a2)
{
  __int64 v4; // rax
  __int64 *v5; // rsi
  __int64 v6; // rax

  *(_QWORD *)a1 = 0LL;
  if ( (__int64 *)a1 != a2 )
  {
    v4 = *a2;
    *a2 = 0LL;
    *(_QWORD *)a1 = v4;
  }
  *(_QWORD *)(a1 + 8) = a2[1];
  *(_QWORD *)(a1 + 16) = a2[2];
  *(_DWORD *)(a1 + 24) = *((_DWORD *)a2 + 6);
  wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>((struct wil::details::IFailureCallback *)(a1 + 32));
  *(_QWORD *)(a1 + 32) = &CAppViewManagerTelemetry::SwitchAsyncWorker::`vftable';
  wil::details::lambda_call__lambda_9532c6789f8817c10f052c0604d56f68___::lambda_call__lambda_9532c6789f8817c10f052c0604d56f68___(
    a1 + 352,
    a2 + 44);
  v5 = a2 + 85;
  *(_QWORD *)(a1 + 680) = 0LL;
  if ( (__int64 *)(a1 + 680) != v5 )
  {
    v6 = *v5;
    *v5 = 0LL;
    *(_QWORD *)(a1 + 680) = v6;
  }
  return a1;
}
