/*
 * XREFs of ??$AtomicUpdate@V_lambda_7183e9ae03d95d0d634d64af3f4c35bb_@@V_lambda_cdc67ce79880dc59329b171674cbd71c_@@@AtomicUpdates@detail@XWinRT@@SAJPECIAEBV_lambda_7183e9ae03d95d0d634d64af3f4c35bb_@@AEBV_lambda_cdc67ce79880dc59329b171674cbd71c_@@@Z @ 0x1400774A4
 * Callers:
 *     ??$Do@V_lambda_7d6f68d31115486fe66f015c3efdf151_@@V_lambda_cdc67ce79880dc59329b171674cbd71c_@@@?$InvalidationChecker@V?$Vector@UEventRegistrationToken@@UEventRegistrationTokenEqual@Internal@Devices@Media@Windows@@UPodLifetimeTraits@XWinRT@@U?$DefaultVectorOptions@UEventRegistrationToken@@@3Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@UIntVersionTag@XWinRT@@@detail@XWinRT@@QEAAJPEAV?$Vector@UEventRegistrationToken@@UEventRegistrationTokenEqual@Internal@Devices@Media@Windows@@UPodLifetimeTraits@XWinRT@@U?$DefaultVectorOptions@UEventRegistrationToken@@@3Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@AEBV_lambda_7d6f68d31115486fe66f015c3efdf151_@@AEBV_lambda_cdc67ce79880dc59329b171674cbd71c_@@@Z @ 0x140077A20 (--$Do@V_lambda_7d6f68d31115486fe66f015c3efdf151_@@V_lambda_cdc67ce79880dc59329b171674cbd71c_@@@-.c)
 * Callees:
 *     ??R_lambda_7183e9ae03d95d0d634d64af3f4c35bb_@@QEBAJIPEAI@Z @ 0x1400795E8 (--R_lambda_7183e9ae03d95d0d634d64af3f4c35bb_@@QEBAJIPEAI@Z.c)
 *     ??R_lambda_cdc67ce79880dc59329b171674cbd71c_@@QEBA@XZ @ 0x14007965C (--R_lambda_cdc67ce79880dc59329b171674cbd71c_@@QEBA@XZ.c)
 */

__int64 __fastcall XWinRT::detail::AtomicUpdates::AtomicUpdate<_lambda_7183e9ae03d95d0d634d64af3f4c35bb_,_lambda_cdc67ce79880dc59329b171674cbd71c_>(
        volatile signed __int32 *a1,
        __int64 a2,
        __int64 a3)
{
  unsigned __int32 v3; // ebx
  bool v7; // zf
  signed __int32 v8; // eax
  int v9; // r9d
  signed __int32 v11; // [rsp+30h] [rbp+8h] BYREF

  v3 = *a1;
  while ( 1 )
  {
    v11 = 0;
    v9 = _lambda_7183e9ae03d95d0d634d64af3f4c35bb_::operator()(a2, v3, &v11);
    if ( v9 < 0 )
      break;
    v8 = _InterlockedCompareExchange(a1, v11, v3);
    v7 = v3 == v8;
    v3 = v8;
    if ( v7 )
      break;
    _lambda_cdc67ce79880dc59329b171674cbd71c_::operator()(a3);
  }
  return (unsigned int)v9;
}
