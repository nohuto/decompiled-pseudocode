/*
 * XREFs of ??R_lambda_7183e9ae03d95d0d634d64af3f4c35bb_@@QEBAJIPEAI@Z @ 0x14007711C
 * Callers:
 *     ??$AtomicUpdate@V_lambda_7183e9ae03d95d0d634d64af3f4c35bb_@@V_lambda_cdc67ce79880dc59329b171674cbd71c_@@@AtomicUpdates@detail@XWinRT@@SAJPECIAEBV_lambda_7183e9ae03d95d0d634d64af3f4c35bb_@@AEBV_lambda_cdc67ce79880dc59329b171674cbd71c_@@@Z @ 0x140074FCC (--$AtomicUpdate@V_lambda_7183e9ae03d95d0d634d64af3f4c35bb_@@V_lambda_cdc67ce79880dc59329b171674c.c)
 *     ??$Do@V_lambda_7d6f68d31115486fe66f015c3efdf151_@@V_lambda_cdc67ce79880dc59329b171674cbd71c_@@@?$InvalidationChecker@V?$Vector@UEventRegistrationToken@@UEventRegistrationTokenEqual@Internal@Devices@Media@Windows@@UPodLifetimeTraits@XWinRT@@U?$DefaultVectorOptions@UEventRegistrationToken@@@3Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@UIntVersionTag@XWinRT@@@detail@XWinRT@@QEAAJPEAV?$Vector@UEventRegistrationToken@@UEventRegistrationTokenEqual@Internal@Devices@Media@Windows@@UPodLifetimeTraits@XWinRT@@U?$DefaultVectorOptions@UEventRegistrationToken@@@3Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@AEBV_lambda_7d6f68d31115486fe66f015c3efdf151_@@AEBV_lambda_cdc67ce79880dc59329b171674cbd71c_@@@Z @ 0x140075548 (--$Do@V_lambda_7d6f68d31115486fe66f015c3efdf151_@@V_lambda_cdc67ce79880dc59329b171674cbd71c_@@@-.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall _lambda_7183e9ae03d95d0d634d64af3f4c35bb_::operator()(__int64 a1, __int64 a2, _DWORD *a3)
{
  int v5; // edi
  __int64 result; // rax

  v5 = a2;
  result = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD, _QWORD))(**(_QWORD **)(**(_QWORD **)a1 + 32LL)
                                                                              + 128LL))(
             *(_QWORD *)(**(_QWORD **)a1 + 32LL),
             a2,
             **(unsigned int **)(a1 + 8),
             **(_QWORD **)(a1 + 16),
             **(_QWORD **)(a1 + 24));
  if ( (int)result >= 0 )
    *a3 = v5 + ***(_DWORD ***)(a1 + 24);
  return result;
}
