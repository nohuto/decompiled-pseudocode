/*
 * XREFs of ??$AtomicUpdate@V_lambda_e68733d78a9cd18cced38060ce28385c_@@V_lambda_e7f9a9833f543183a86b640d7a18f225_@@@AtomicUpdates@detail@XWinRT@@SAJPECIAEBV_lambda_e68733d78a9cd18cced38060ce28385c_@@AEBV_lambda_e7f9a9833f543183a86b640d7a18f225_@@@Z @ 0x140075040
 * Callers:
 *     ??$Do@V_lambda_a16af002d07ace4fe9b089da77d4d3b3_@@V_lambda_e7f9a9833f543183a86b640d7a18f225_@@@?$InvalidationChecker@V?$Vector@UEventRegistrationToken@@UEventRegistrationTokenEqual@Internal@Devices@Media@Windows@@UPodLifetimeTraits@XWinRT@@U?$DefaultVectorOptions@UEventRegistrationToken@@@3Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@UIntVersionTag@XWinRT@@@detail@XWinRT@@QEAAJPEAV?$Vector@UEventRegistrationToken@@UEventRegistrationTokenEqual@Internal@Devices@Media@Windows@@UPodLifetimeTraits@XWinRT@@U?$DefaultVectorOptions@UEventRegistrationToken@@@3Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@AEBV_lambda_a16af002d07ace4fe9b089da77d4d3b3_@@AEBV_lambda_e7f9a9833f543183a86b640d7a18f225_@@@Z @ 0x140075774 (--$Do@V_lambda_a16af002d07ace4fe9b089da77d4d3b3_@@V_lambda_e7f9a9833f543183a86b640d7a18f225_@@@-.c)
 * Callees:
 *     ??R_lambda_e68733d78a9cd18cced38060ce28385c_@@QEBAJIPEAI@Z @ 0x1400771C0 (--R_lambda_e68733d78a9cd18cced38060ce28385c_@@QEBAJIPEAI@Z.c)
 */

__int64 __fastcall XWinRT::detail::AtomicUpdates::AtomicUpdate<_lambda_e68733d78a9cd18cced38060ce28385c_,_lambda_e7f9a9833f543183a86b640d7a18f225_>(
        volatile signed __int32 *a1,
        __int64 a2,
        _BYTE ***a3)
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
    v9 = _lambda_e68733d78a9cd18cced38060ce28385c_::operator()(a2, v3, &v11);
    if ( v9 < 0 )
      break;
    v8 = _InterlockedCompareExchange(a1, v11, v3);
    v7 = v3 == v8;
    v3 = v8;
    if ( v7 )
      break;
    ***a3 = 0;
  }
  return (unsigned int)v9;
}
