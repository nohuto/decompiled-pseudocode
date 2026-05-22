/*
 * XREFs of ?LogReceiveStopProcess@BamoInputProcessPrincipalImpl@BamoImpl@@AEAAXXZ @ 0x1800CC4BC
 * Callers:
 *     ?StopProcess@BamoInputProcessPrincipalImpl@BamoImpl@@QEAAJXZ @ 0x1800CCBD4 (-StopProcess@BamoInputProcessPrincipalImpl@BamoImpl@@QEAAJXZ.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3@Z @ 0x180001DE4 (--$Write@U-$_tlgWrapperByVal@$03@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 *     _tlgKeywordOn @ 0x180031A40 (_tlgKeywordOn.c)
 *     ?GetCurrentCaller@BamoPrincipalImpl@BamoImpl@Microsoft@@IEAAPEAVBamoStubImpl@23@XZ @ 0x18003D7D0 (-GetCurrentCaller@BamoPrincipalImpl@BamoImpl@Microsoft@@IEAAPEAVBamoStubImpl@23@XZ.c)
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x180041D00 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x180043030 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ?GetItemId@BamoPrincipalImpl@BamoImpl@Microsoft@@QEBAIXZ @ 0x180044CA8 (-GetItemId@BamoPrincipalImpl@BamoImpl@Microsoft@@QEBAIXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall BamoImpl::BamoInputProcessPrincipalImpl::LogReceiveStopProcess(
        struct Microsoft::BamoImpl::ConnectionIndirector **this)
{
  __int64 v2; // rdi
  int ItemId; // ebx
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r8
  __int64 v7; // r9
  int v8; // [rsp+48h] [rbp+10h] BYREF
  int v9; // [rsp+50h] [rbp+18h] BYREF
  Microsoft::BamoImpl::BamoImplObject *v10; // [rsp+58h] [rbp+20h] BYREF

  v2 = (__int64)*(&ISMBamos_AutoBamos::BamoTraceLogging::s_providers + 1);
  if ( *(&ISMBamos_AutoBamos::BamoTraceLogging::s_providers + 1)
    && *(_DWORD *)*(&ISMBamos_AutoBamos::BamoTraceLogging::s_providers + 1) > 5u
    && tlgKeywordOn((__int64)*(&ISMBamos_AutoBamos::BamoTraceLogging::s_providers + 1), 1LL) )
  {
    v8 = *(_DWORD *)(*((_QWORD *)Microsoft::BamoImpl::BamoPrincipalImpl::GetCurrentCaller((Microsoft::BamoImpl::BamoPrincipalImpl *)this)
                     + 4)
                   + 36LL);
    Microsoft::BamoImpl::InternalLock::InternalLock(&v10, this[2]);
    ItemId = Microsoft::BamoImpl::BamoPrincipalImpl::GetItemId((Microsoft::BamoImpl::BamoPrincipalImpl *)this);
    Microsoft::BamoImpl::InternalLock::~InternalLock((volatile signed __int32 **)&v10, v4, v5);
    v9 = ItemId;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v2,
      (__int64)&unk_180211EE8,
      v6,
      v7,
      (__int64)&v9,
      (__int64)&v8);
  }
}
