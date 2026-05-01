/*
 * XREFs of ?TouchKeyboardExperienceManagerDestroyed@TouchKeyboardExperienceTelemetryLogger@@SAXXZ @ 0x1802CDCB4
 * Callers:
 *     _lambda_0181179693446beb1d5841bdc72a572d_::operator() @ 0x18046D3B4 (_lambda_0181179693446beb1d5841bdc72a572d_--operator().c)
 *     _lambda_07c09ec2b66b1cd0a67fc9fd25c7941f_::operator() @ 0x18046D680 (_lambda_07c09ec2b66b1cd0a67fc9fd25c7941f_--operator().c)
 *     _lambda_3b092b602b32291197616247ac44fb10_::operator() @ 0x18046DA58 (_lambda_3b092b602b32291197616247ac44fb10_--operator().c)
 *     _lambda_3f93e84ee3927ec557523765ee2fe070_::operator() @ 0x18046DB9C (_lambda_3f93e84ee3927ec557523765ee2fe070_--operator().c)
 *     _lambda_5c8612707d1ce1f8a03bb177e1540ce1_::operator() @ 0x18046DD6C (_lambda_5c8612707d1ce1f8a03bb177e1540ce1_--operator().c)
 *     _lambda_75452c5cb5e77a67412b4cfed81632b0_::operator() @ 0x18046DF94 (_lambda_75452c5cb5e77a67412b4cfed81632b0_--operator().c)
 *     _lambda_76f340d5d82a2ae937276f5837d7f307_::operator() @ 0x18046E408 (_lambda_76f340d5d82a2ae937276f5837d7f307_--operator().c)
 *     _lambda_9bbb35718b31022091a790d2d74f2a46_::operator() @ 0x18046E8B8 (_lambda_9bbb35718b31022091a790d2d74f2a46_--operator().c)
 *     _lambda_a469c2389bb8dc71f832d95fbc03d5e0_::operator() @ 0x18046E9FC (_lambda_a469c2389bb8dc71f832d95fbc03d5e0_--operator().c)
 *     _lambda_fc11afed419eac497169c2fc21e58d6f_::operator() @ 0x18046F208 (_lambda_fc11afed419eac497169c2fc21e58d6f_--operator().c)
 * Callees:
 *     ?Provider@TouchKeyboardExperienceTraceLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x18008317C (-Provider@TouchKeyboardExperienceTraceLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     _tlgKeywordOn @ 0x1800CBCCC (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x18018E94C (--$Write@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 */

void TouchKeyboardExperienceTelemetryLogger::TouchKeyboardExperienceManagerDestroyed(void)
{
  const struct _tlgProvider_t *v0; // rcx
  __int64 v1; // rcx
  __int64 v2; // r9
  __int64 v3; // [rsp+40h] [rbp+8h] BYREF

  v0 = TouchKeyboardExperienceTraceLogging::Provider();
  if ( *(_DWORD *)v0 > 5u )
  {
    if ( tlgKeywordOn((__int64)v0, 0x400000000000LL) )
    {
      v3 = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>>(
        v1,
        byte_1807FE971,
        0LL,
        v2,
        (__int64)&v3);
    }
  }
}
