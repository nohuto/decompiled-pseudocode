/*
 * XREFs of ?LogSubscribe@CSpatialAudioResourceManagerTraceLogger@@QEAAXK_NI@Z @ 0x18011C818
 * Callers:
 *     ?RegisterForApplicationPolicyChanges@CSpatialAudioResourceManager@Sarm@@AEAAJPEAVCStreamResource@2@@Z @ 0x180119C20 (-RegisterForApplicationPolicyChanges@CSpatialAudioResourceManager@Sarm@@AEAAJPEAVCStreamResource.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@33@Z @ 0x180004A50 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_.c)
 */

void __fastcall CSpatialAudioResourceManagerTraceLogger::LogSubscribe(
        CSpatialAudioResourceManagerTraceLogger *this,
        int a2,
        __int64 a3,
        __int64 a4)
{
  int v4; // [rsp+40h] [rbp-18h] BYREF
  _DWORD v5[5]; // [rsp+44h] [rbp-14h] BYREF
  CSpatialAudioResourceManagerTraceLogger *v6; // [rsp+60h] [rbp+8h] BYREF

  v6 = this;
  if ( (unsigned int)dword_1801CC2B0 > 5 )
  {
    v4 = (unsigned __int8)a3;
    v5[0] = a2;
    LODWORD(v6) = a4;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (__int64)this,
      (__int64)&unk_1801A39A6,
      a3,
      a4,
      (__int64)v5,
      (__int64)&v4,
      (__int64)&v6);
  }
}
