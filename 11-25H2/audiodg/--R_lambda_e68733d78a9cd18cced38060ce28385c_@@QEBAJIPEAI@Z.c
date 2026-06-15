/*
 * XREFs of ??R_lambda_e68733d78a9cd18cced38060ce28385c_@@QEBAJIPEAI@Z @ 0x14007968C
 * Callers:
 *     ??$AtomicUpdate@V_lambda_e68733d78a9cd18cced38060ce28385c_@@V_lambda_e7f9a9833f543183a86b640d7a18f225_@@@AtomicUpdates@detail@XWinRT@@SAJPECIAEBV_lambda_e68733d78a9cd18cced38060ce28385c_@@AEBV_lambda_e7f9a9833f543183a86b640d7a18f225_@@@Z @ 0x140077518 (--$AtomicUpdate@V_lambda_e68733d78a9cd18cced38060ce28385c_@@V_lambda_e7f9a9833f543183a86b640d7a1.c)
 *     ??$Do@V_lambda_a16af002d07ace4fe9b089da77d4d3b3_@@V_lambda_e7f9a9833f543183a86b640d7a18f225_@@@?$InvalidationChecker@V?$Vector@UEventRegistrationToken@@UEventRegistrationTokenEqual@Internal@Devices@Media@Windows@@UPodLifetimeTraits@XWinRT@@U?$DefaultVectorOptions@UEventRegistrationToken@@@3Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@UIntVersionTag@XWinRT@@@detail@XWinRT@@QEAAJPEAV?$Vector@UEventRegistrationToken@@UEventRegistrationTokenEqual@Internal@Devices@Media@Windows@@UPodLifetimeTraits@XWinRT@@U?$DefaultVectorOptions@UEventRegistrationToken@@@3Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@AEBV_lambda_a16af002d07ace4fe9b089da77d4d3b3_@@AEBV_lambda_e7f9a9833f543183a86b640d7a18f225_@@@Z @ 0x140077C4C (--$Do@V_lambda_a16af002d07ace4fe9b089da77d4d3b3_@@V_lambda_e7f9a9833f543183a86b640d7a18f225_@@@-.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall _lambda_e68733d78a9cd18cced38060ce28385c_::operator()(__int64 a1, unsigned int a2, _DWORD *a3)
{
  bool **v3; // r9
  __int64 *v4; // rax
  __int64 v5; // rcx

  v3 = *(bool ***)a1;
  ***(_BYTE ***)a1 = 0;
  v4 = *(__int64 **)(a1 + 8);
  v5 = *v4;
  if ( a2 >= *(_DWORD *)(*v4 + 44) )
  {
    RoOriginateError(2147483659LL, 0LL);
    return 2147483659LL;
  }
  else
  {
    *a3 = a2 + 1;
    **v3 = a2 + 1 < *(_DWORD *)(v5 + 44);
    return 0LL;
  }
}
