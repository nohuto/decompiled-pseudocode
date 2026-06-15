/*
 * XREFs of ??$Do@V_lambda_a16af002d07ace4fe9b089da77d4d3b3_@@V_lambda_e7f9a9833f543183a86b640d7a18f225_@@@?$InvalidationChecker@V?$Vector@UEventRegistrationToken@@UEventRegistrationTokenEqual@Internal@Devices@Media@Windows@@UPodLifetimeTraits@XWinRT@@U?$DefaultVectorOptions@UEventRegistrationToken@@@3Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@UIntVersionTag@XWinRT@@@detail@XWinRT@@QEAAJPEAV?$Vector@UEventRegistrationToken@@UEventRegistrationTokenEqual@Internal@Devices@Media@Windows@@UPodLifetimeTraits@XWinRT@@U?$DefaultVectorOptions@UEventRegistrationToken@@@3Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@AEBV_lambda_a16af002d07ace4fe9b089da77d4d3b3_@@AEBV_lambda_e7f9a9833f543183a86b640d7a18f225_@@@Z @ 0x140075774
 * Callers:
 *     ?MoveNext@?$SimpleVectorIterator@UEventRegistrationToken@@V?$Vector@UEventRegistrationToken@@UEventRegistrationTokenEqual@Internal@Devices@Media@Windows@@UPodLifetimeTraits@XWinRT@@U?$DefaultVectorOptions@UEventRegistrationToken@@@3Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@UPodLifetimeTraits@XWinRT@@UIntVersionTag@8@$0A@@Internal@Collections@Foundation@Windows@@UEAAJPEAE@Z @ 0x14007ABB0 (-MoveNext@-$SimpleVectorIterator@UEventRegistrationToken@@V-$Vector@UEventRegistrationToken@@UEv.c)
 * Callees:
 *     ??$?0V?$Vector@UEventRegistrationToken@@UEventRegistrationTokenEqual@Internal@Devices@Media@Windows@@UPodLifetimeTraits@XWinRT@@U?$DefaultVectorOptions@UEventRegistrationToken@@@3Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@@IntVersionTag@XWinRT@@QEAA@PEAV?$Vector@UEventRegistrationToken@@UEventRegistrationTokenEqual@Internal@Devices@Media@Windows@@UPodLifetimeTraits@XWinRT@@U?$DefaultVectorOptions@UEventRegistrationToken@@@3Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@@Z @ 0x140074BA8 (--$-0V-$Vector@UEventRegistrationToken@@UEventRegistrationTokenEqual@Internal@Devices@Media@Wind.c)
 *     ??$AtomicUpdate@V_lambda_e68733d78a9cd18cced38060ce28385c_@@V_lambda_e7f9a9833f543183a86b640d7a18f225_@@@AtomicUpdates@detail@XWinRT@@SAJPECIAEBV_lambda_e68733d78a9cd18cced38060ce28385c_@@AEBV_lambda_e7f9a9833f543183a86b640d7a18f225_@@@Z @ 0x140075040 (--$AtomicUpdate@V_lambda_e68733d78a9cd18cced38060ce28385c_@@V_lambda_e7f9a9833f543183a86b640d7a1.c)
 *     ??R_lambda_e68733d78a9cd18cced38060ce28385c_@@QEBAJIPEAI@Z @ 0x1400771C0 (--R_lambda_e68733d78a9cd18cced38060ce28385c_@@QEBAJIPEAI@Z.c)
 */

__int64 __fastcall XWinRT::detail::InvalidationChecker<Windows::Foundation::Collections::Internal::Vector<EventRegistrationToken,Windows::Media::Devices::Internal::EventRegistrationTokenEqual,XWinRT::PodLifetimeTraits,Windows::Foundation::Collections::Internal::DefaultVectorOptions<EventRegistrationToken>>,XWinRT::IntVersionTag>::Do<_lambda_a16af002d07ace4fe9b089da77d4d3b3_,_lambda_e7f9a9833f543183a86b640d7a18f225_>(
        unsigned int *a1,
        __int64 a2,
        __int64 *a3,
        _BYTE ***a4)
{
  unsigned int v4; // ebx
  __int64 v8; // rcx
  _BYTE ***v9; // rdx
  bool v10; // zf
  unsigned int v11; // eax
  _QWORD v13[3]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v14; // [rsp+40h] [rbp+8h] BYREF

  v4 = *a1;
  if ( (*a1 & 0x80000000) == 0 )
  {
    v8 = *a3;
    v9 = (_BYTE ***)a3[2];
    v13[0] = a3[1];
    v14 = v8;
    v10 = *(_BYTE *)(v8 + 56) == 0;
    v13[1] = &v14;
    if ( v10 )
      v11 = XWinRT::detail::AtomicUpdates::AtomicUpdate<_lambda_e68733d78a9cd18cced38060ce28385c_,_lambda_e7f9a9833f543183a86b640d7a18f225_>(
              (volatile signed __int32 *)(v8 + 40),
              (__int64)v13,
              v9);
    else
      v11 = _lambda_e68733d78a9cd18cced38060ce28385c_::operator()(v13, *(unsigned int *)(v8 + 40), v8 + 40);
    v4 = v11;
    XWinRT::IntVersionTag::IntVersionTag(&v14, a2);
    if ( a1[1] != (_DWORD)v14 )
    {
      *a1 = -2147483636;
      if ( (v4 & 0x80000000) != 0 )
      {
        RoTransformError(v4, 2147483660LL, 0LL);
      }
      else
      {
        RoOriginateError(2147483660LL, 0LL);
        ***a4 = 0;
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
