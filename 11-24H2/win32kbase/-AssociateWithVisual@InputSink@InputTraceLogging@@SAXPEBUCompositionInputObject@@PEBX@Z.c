/*
 * XREFs of ?AssociateWithVisual@InputSink@InputTraceLogging@@SAXPEBUCompositionInputObject@@PEBX@Z @ 0x140048360
 * Callers:
 *     ?ReleaseCompositionInputObject@CInteractionMarshaler@DirectComposition@@IEAAXXZ @ 0x140048230 (-ReleaseCompositionInputObject@CInteractionMarshaler@DirectComposition@@IEAAXXZ.c)
 *     ?SetInputSinkHelper@CInteractionMarshaler@DirectComposition@@QEAAJPEAXPEA_N@Z @ 0x14004A34C (-SetInputSinkHelper@CInteractionMarshaler@DirectComposition@@QEAAJPEAXPEA_N@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3@Z @ 0x1400F2040 (--$Write@U-$_tlgWrapperByVal@$07@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 */

void __fastcall InputTraceLogging::InputSink::AssociateWithVisual(
        const struct CompositionInputObject *a1,
        const void *a2,
        int a3,
        int a4)
{
  const void *v4; // [rsp+50h] [rbp+18h] BYREF
  const struct CompositionInputObject *v5; // [rsp+58h] [rbp+20h] BYREF

  if ( (unsigned int)dword_14029AE30 > 5 && (qword_14029AE40 & 4) != 0 && (qword_14029AE48 & 4) == qword_14029AE48 )
  {
    v4 = a2;
    v5 = a1;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
      (unsigned int)&dword_14029AE30,
      (unsigned int)&unk_14027FDDB,
      a3,
      a4,
      (__int64)&v5,
      (__int64)&v4);
  }
}
