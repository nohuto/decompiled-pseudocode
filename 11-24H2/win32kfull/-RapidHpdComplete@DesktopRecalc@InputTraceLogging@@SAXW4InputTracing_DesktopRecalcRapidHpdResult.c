/*
 * XREFs of ?RapidHpdComplete@DesktopRecalc@InputTraceLogging@@SAXW4InputTracing_DesktopRecalcRapidHpdResult@@IIIIU_GUID@@I@Z @ 0x14026B6B0
 * Callers:
 *     ?Delete@CRapidHpdInfo@@CAXW4InputTracing_DesktopRecalcRapidHpdResult@@@Z @ 0x1401F2F30 (-Delete@CRapidHpdInfo@@CAXW4InputTracing_DesktopRecalcRapidHpdResult@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U?$_tlgWrapperByRef@$0BA@@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@444AEBU?$_tlgWrapperByRef@$0BA@@@4@Z @ 0x140006274 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U2@U2@U2@U-$_tlgWrapperByRef@$0BA@@@U2@@-$_tl.c)
 *     _tlgKeywordOn @ 0x14017A844 (_tlgKeywordOn.c)
 *     ?RapidHpdToString@InputTraceLogging@@SAPEBDW4InputTracing_DesktopRecalcRapidHpdResult@@@Z @ 0x1402B6138 (-RapidHpdToString@InputTraceLogging@@SAPEBDW4InputTracing_DesktopRecalcRapidHpdResult@@@Z.c)
 */

void __fastcall InputTraceLogging::DesktopRecalc::RapidHpdComplete(unsigned int a1)
{
  __int64 v2; // r8
  __int64 v3; // r9
  __int64 v4; // [rsp+80h] [rbp+2Fh] BYREF

  if ( (unsigned int)dword_140398B80 > 4 )
  {
    if ( tlgKeywordOn((__int64)&dword_140398B80, 0x80000LL) )
    {
      v4 = InputTraceLogging::RapidHpdToString(a1);
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>,_tlgWrapperByVal<4>>(
        (__int64)&dword_140398B80,
        (__int64)&unk_14036950D,
        v2,
        v3,
        &v4);
    }
  }
}
