/*
 * XREFs of ??$Do@V_lambda_7d6f68d31115486fe66f015c3efdf151_@@V_lambda_cdc67ce79880dc59329b171674cbd71c_@@@?$InvalidationChecker@V?$Vector@UEventRegistrationToken@@UEventRegistrationTokenEqual@Internal@Devices@Media@Windows@@UPodLifetimeTraits@XWinRT@@U?$DefaultVectorOptions@UEventRegistrationToken@@@3Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@UIntVersionTag@XWinRT@@@detail@XWinRT@@QEAAJPEAV?$Vector@UEventRegistrationToken@@UEventRegistrationTokenEqual@Internal@Devices@Media@Windows@@UPodLifetimeTraits@XWinRT@@U?$DefaultVectorOptions@UEventRegistrationToken@@@3Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@AEBV_lambda_7d6f68d31115486fe66f015c3efdf151_@@AEBV_lambda_cdc67ce79880dc59329b171674cbd71c_@@@Z @ 0x140075548
 * Callers:
 *     ?GetMany@?$SimpleVectorIterator@UEventRegistrationToken@@V?$Vector@UEventRegistrationToken@@UEventRegistrationTokenEqual@Internal@Devices@Media@Windows@@UPodLifetimeTraits@XWinRT@@U?$DefaultVectorOptions@UEventRegistrationToken@@@3Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@UPodLifetimeTraits@XWinRT@@UIntVersionTag@8@$0A@@Internal@Collections@Foundation@Windows@@UEAAJIPEAUEventRegistrationToken@@PEAI@Z @ 0x140079500 (-GetMany@-$SimpleVectorIterator@UEventRegistrationToken@@V-$Vector@UEventRegistrationToken@@UEve.c)
 * Callees:
 *     ??$?0V?$Vector@UEventRegistrationToken@@UEventRegistrationTokenEqual@Internal@Devices@Media@Windows@@UPodLifetimeTraits@XWinRT@@U?$DefaultVectorOptions@UEventRegistrationToken@@@3Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@@IntVersionTag@XWinRT@@QEAA@PEAV?$Vector@UEventRegistrationToken@@UEventRegistrationTokenEqual@Internal@Devices@Media@Windows@@UPodLifetimeTraits@XWinRT@@U?$DefaultVectorOptions@UEventRegistrationToken@@@3Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@@Z @ 0x140074BA8 (--$-0V-$Vector@UEventRegistrationToken@@UEventRegistrationTokenEqual@Internal@Devices@Media@Wind.c)
 *     ??$AtomicUpdate@V_lambda_7183e9ae03d95d0d634d64af3f4c35bb_@@V_lambda_cdc67ce79880dc59329b171674cbd71c_@@@AtomicUpdates@detail@XWinRT@@SAJPECIAEBV_lambda_7183e9ae03d95d0d634d64af3f4c35bb_@@AEBV_lambda_cdc67ce79880dc59329b171674cbd71c_@@@Z @ 0x140074FCC (--$AtomicUpdate@V_lambda_7183e9ae03d95d0d634d64af3f4c35bb_@@V_lambda_cdc67ce79880dc59329b171674c.c)
 *     ??R_lambda_7183e9ae03d95d0d634d64af3f4c35bb_@@QEBAJIPEAI@Z @ 0x14007711C (--R_lambda_7183e9ae03d95d0d634d64af3f4c35bb_@@QEBAJIPEAI@Z.c)
 *     ??R_lambda_cdc67ce79880dc59329b171674cbd71c_@@QEBA@XZ @ 0x140077190 (--R_lambda_cdc67ce79880dc59329b171674cbd71c_@@QEBA@XZ.c)
 */

__int64 __fastcall XWinRT::detail::InvalidationChecker<Windows::Foundation::Collections::Internal::Vector<EventRegistrationToken,Windows::Media::Devices::Internal::EventRegistrationTokenEqual,XWinRT::PodLifetimeTraits,Windows::Foundation::Collections::Internal::DefaultVectorOptions<EventRegistrationToken>>,XWinRT::IntVersionTag>::Do<_lambda_7d6f68d31115486fe66f015c3efdf151_,_lambda_cdc67ce79880dc59329b171674cbd71c_>(
        unsigned int *a1,
        __int64 a2,
        __int64 *a3,
        __int64 a4)
{
  unsigned int v4; // ebx
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rax
  bool v11; // zf
  unsigned int v12; // eax
  _QWORD v14[5]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v15; // [rsp+50h] [rbp+8h] BYREF

  v4 = *a1;
  if ( (*a1 & 0x80000000) == 0 )
  {
    v8 = *a3;
    v9 = a3[4];
    v14[0] = &v15;
    v14[1] = a3[1];
    v14[2] = a3[2];
    v10 = a3[3];
    v15 = v8;
    v11 = *(_BYTE *)(v8 + 56) == 0;
    v14[3] = v10;
    if ( v11 )
      v12 = XWinRT::detail::AtomicUpdates::AtomicUpdate<_lambda_7183e9ae03d95d0d634d64af3f4c35bb_,_lambda_cdc67ce79880dc59329b171674cbd71c_>(
              (volatile signed __int32 *)(v8 + 40),
              (__int64)v14,
              v9);
    else
      v12 = _lambda_7183e9ae03d95d0d634d64af3f4c35bb_::operator()(v14, *(unsigned int *)(v8 + 40), v8 + 40);
    v4 = v12;
    XWinRT::IntVersionTag::IntVersionTag(&v15, a2);
    if ( a1[1] != (_DWORD)v15 )
    {
      *a1 = -2147483636;
      if ( (v4 & 0x80000000) != 0 )
      {
        RoTransformError(v4, 2147483660LL, 0LL);
      }
      else
      {
        RoOriginateError(2147483660LL, 0LL);
        _lambda_cdc67ce79880dc59329b171674cbd71c_::operator()(a4);
      }
      return (unsigned int)-2147483636;
    }
  }
  else
  {
    RoOriginateError(v4, 0LL);
  }
  return v4;
}
