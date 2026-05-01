/*
 * XREFs of ??$SnapSignalDataCreated@AEAW4SnapEventType@DataEngine@TaskFlow@Shell@Internal@Windows@@AEA_JAEB_K@TaskFlowDataEngineTelemetry@@SAXAEAW4SnapEventType@DataEngine@TaskFlow@Shell@Internal@Windows@@AEA_JAEB_K@Z @ 0x180401684
 * Callers:
 *     ?TryCreateSnapSignalData@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@AEAA?AV?$com_ptr_t@UISnapSignalData@DataEngine@TaskFlow@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@W4SnapEventType@23456@PEAUIApplicationView@@@Z @ 0x180403870 (-TryCreateSnapSignalData@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@AEAA-AV-$co.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@4@Z @ 0x1800056BC (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     ?Provider@TaskFlowDataEngineTelemetry@@SAPEBU_tlgProvider_t@@XZ @ 0x1802AB228 (-Provider@TaskFlowDataEngineTelemetry@@SAPEBU_tlgProvider_t@@XZ.c)
 */

const struct _tlgProvider_t *__fastcall TaskFlowDataEngineTelemetry::SnapSignalDataCreated<enum Windows::Internal::Shell::TaskFlow::DataEngine::SnapEventType &,__int64 &,unsigned __int64 const &>(
        __int64 a1)
{
  const struct _tlgProvider_t *result; // rax

  result = TaskFlowDataEngineTelemetry::Provider(a1);
  if ( *(_DWORD *)result > 5u )
    return (const struct _tlgProvider_t *)_tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
                                            (__int64)result,
                                            (__int64)&unk_1807F667D);
  return result;
}
