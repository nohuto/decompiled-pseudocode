/*
 * XREFs of ??$TaskflowImmersiveShellBroker_StartupTaskExecuted@AEBG@TaskFlowDataEngineTelemetry@@SAXAEBG@Z @ 0x1800CF6B4
 * Callers:
 *     _lambda_328cf9fe8e40f62dbe0573cdd1213578_::operator() @ 0x1800CF5D0 (_lambda_328cf9fe8e40f62dbe0573cdd1213578_--operator().c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1800D09B8 (--$Write@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 *     ?Provider@TaskFlowDataEngineTelemetry@@SAPEBU_tlgProvider_t@@XZ @ 0x1802AB228 (-Provider@TaskFlowDataEngineTelemetry@@SAPEBU_tlgProvider_t@@XZ.c)
 */

const struct _tlgProvider_t *__fastcall TaskFlowDataEngineTelemetry::TaskflowImmersiveShellBroker_StartupTaskExecuted<unsigned short const &>(
        unsigned __int16 *a1)
{
  const struct _tlgProvider_t *result; // rax
  int v3; // r9d
  int v4; // [rsp+48h] [rbp+10h] BYREF

  result = TaskFlowDataEngineTelemetry::Provider();
  if ( *(_DWORD *)result > 5u )
  {
    v4 = *a1;
    return (const struct _tlgProvider_t *)_tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>>(
                                            (_DWORD)result,
                                            (unsigned int)&unk_1807F63B8,
                                            0,
                                            v3,
                                            (__int64)&v4);
  }
  return result;
}
