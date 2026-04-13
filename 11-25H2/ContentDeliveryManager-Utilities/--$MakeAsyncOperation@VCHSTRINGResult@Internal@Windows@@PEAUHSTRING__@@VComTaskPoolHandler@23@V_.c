/*
 * XREFs of ??$MakeAsyncOperation@VCHSTRINGResult@Internal@Windows@@PEAUHSTRING__@@VComTaskPoolHandler@23@V_lambda_163dbea914ec29e3eb0ae38e4a9291a3_@@@Internal@Windows@@YAJ$$QEAVComTaskPoolHandler@01@PEAPEAU?$IAsyncOperation@PEAUHSTRING__@@@Foundation@1@W4TrustLevel@@$$QEAV_lambda_163dbea914ec29e3eb0ae38e4a9291a3_@@@Z @ 0x180026DE4
 * Callers:
 *     ?TryGetSecondaryMSATicketAsync@IdentityManager@ContentManagement@@UEAAJPEAUHSTRING__@@PEAPEAU?$IAsyncOperation@PEAUHSTRING__@@@Foundation@Windows@@@Z @ 0x18003C120 (-TryGetSecondaryMSATicketAsync@IdentityManager@ContentManagement@@UEAAJPEAUHSTRING__@@PEAPEAU-$I.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180022490 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??$?0V_lambda_163dbea914ec29e3eb0ae38e4a9291a3_@@@?$COperationLambdaVar@$0A@V_lambda_163dbea914ec29e3eb0ae38e4a9291a3_@@VCHSTRINGResult@Internal@Windows@@$$V@Internal@Windows@@QEAA@$$QEAV_lambda_163dbea914ec29e3eb0ae38e4a9291a3_@@@Z @ 0x180024288 (--$-0V_lambda_163dbea914ec29e3eb0ae38e4a9291a3_@@@-$COperationLambdaVar@$0A@V_lambda_163dbea914e.c)
 *     ??$MakeAsyncHelper@U?$IAsyncOperation@PEAUHSTRING__@@@Foundation@Windows@@U?$IAsyncOperationCompletedHandler@PEAUHSTRING__@@@23@UINilDelegate@Internal@3@VCHSTRINGResult@63@VComTaskPoolHandler@63@U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@YAJPEAPEAU?$IAsyncOperation@PEAUHSTRING__@@@Foundation@1@$$QEAVComTaskPoolHandler@01@QEBGW4TrustLevel@@PEAV?$AsyncCallbackBase@VCHSTRINGResult@Internal@Windows@@@01@@Z @ 0x180026B34 (--$MakeAsyncHelper@U-$IAsyncOperation@PEAUHSTRING__@@@Foundation@Windows@@U-$IAsyncOperationComp.c)
 */

__int64 __fastcall Windows::Internal::MakeAsyncOperation<Windows::Internal::CHSTRINGResult,HSTRING__ *,Windows::Internal::ComTaskPoolHandler,_lambda_163dbea914ec29e3eb0ae38e4a9291a3_>(
        __int64 a1,
        __int64 *a2,
        __int64 a3,
        __int64 a4)
{
  void *v7; // rcx
  __int64 v8; // r9
  __int64 v9; // rax

  v7 = operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
  v9 = 0LL;
  if ( v7 )
    v9 = Windows::Internal::COperationLambdaVar<0,_lambda_163dbea914ec29e3eb0ae38e4a9291a3_,Windows::Internal::CHSTRINGResult,>::COperationLambdaVar<0,_lambda_163dbea914ec29e3eb0ae38e4a9291a3_,Windows::Internal::CHSTRINGResult,>(
           (__int64)v7,
           a4);
  return Windows::Internal::MakeAsyncHelper<Windows::Foundation::IAsyncOperation<HSTRING__ *>,Windows::Foundation::IAsyncOperationCompletedHandler<HSTRING__ *>,Windows::Internal::INilDelegate,Windows::Internal::CHSTRINGResult,Windows::Internal::ComTaskPoolHandler,Microsoft::WRL::AsyncOptions<-1,0,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>(
           a2,
           a1,
           (__int64)L"Windows.Foundation.IAsyncOperation`1<String>",
           v8,
           v9);
}
