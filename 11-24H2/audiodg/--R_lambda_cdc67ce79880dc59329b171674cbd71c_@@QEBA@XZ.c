/*
 * XREFs of ??R_lambda_cdc67ce79880dc59329b171674cbd71c_@@QEBA@XZ @ 0x140077190
 * Callers:
 *     ??$AtomicUpdate@V_lambda_7183e9ae03d95d0d634d64af3f4c35bb_@@V_lambda_cdc67ce79880dc59329b171674cbd71c_@@@AtomicUpdates@detail@XWinRT@@SAJPECIAEBV_lambda_7183e9ae03d95d0d634d64af3f4c35bb_@@AEBV_lambda_cdc67ce79880dc59329b171674cbd71c_@@@Z @ 0x140074FCC (--$AtomicUpdate@V_lambda_7183e9ae03d95d0d634d64af3f4c35bb_@@V_lambda_cdc67ce79880dc59329b171674c.c)
 *     ??$Do@V_lambda_7d6f68d31115486fe66f015c3efdf151_@@V_lambda_cdc67ce79880dc59329b171674cbd71c_@@@?$InvalidationChecker@V?$Vector@UEventRegistrationToken@@UEventRegistrationTokenEqual@Internal@Devices@Media@Windows@@UPodLifetimeTraits@XWinRT@@U?$DefaultVectorOptions@UEventRegistrationToken@@@3Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@UIntVersionTag@XWinRT@@@detail@XWinRT@@QEAAJPEAV?$Vector@UEventRegistrationToken@@UEventRegistrationTokenEqual@Internal@Devices@Media@Windows@@UPodLifetimeTraits@XWinRT@@U?$DefaultVectorOptions@UEventRegistrationToken@@@3Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@AEBV_lambda_7d6f68d31115486fe66f015c3efdf151_@@AEBV_lambda_cdc67ce79880dc59329b171674cbd71c_@@@Z @ 0x140075548 (--$Do@V_lambda_7d6f68d31115486fe66f015c3efdf151_@@V_lambda_cdc67ce79880dc59329b171674cbd71c_@@@-.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall _lambda_cdc67ce79880dc59329b171674cbd71c_::operator()(__int64 a1)
{
  _DWORD **v1; // r8
  __int64 v2; // rdx
  _DWORD *result; // rax
  _QWORD *v4; // r9

  v1 = *(_DWORD ***)a1;
  v2 = 0LL;
  result = **(_DWORD ***)a1;
  if ( *result )
  {
    v4 = *(_QWORD **)(a1 + 8);
    do
    {
      *(_QWORD *)(*v4 + 8 * v2) = 0LL;
      v2 = (unsigned int)(v2 + 1);
      result = *v1;
    }
    while ( (unsigned int)v2 < **v1 );
  }
  *result = 0;
  return result;
}
