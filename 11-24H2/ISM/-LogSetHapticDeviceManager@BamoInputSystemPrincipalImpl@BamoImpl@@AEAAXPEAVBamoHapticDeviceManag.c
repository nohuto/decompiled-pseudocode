/*
 * XREFs of ?LogSetHapticDeviceManager@BamoInputSystemPrincipalImpl@BamoImpl@@AEAAXPEAVBamoHapticDeviceManagerPrincipal@@@Z @ 0x18012E2A0
 * Callers:
 *     ?SetHapticDeviceManager@BamoInputSystemPrincipalImpl@BamoImpl@@QEAAXPEAVBamoHapticDeviceManagerPrincipal@@@Z @ 0x18012E808 (-SetHapticDeviceManager@BamoInputSystemPrincipalImpl@BamoImpl@@QEAAXPEAVBamoHapticDeviceManagerP.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3@Z @ 0x180001DE4 (--$Write@U-$_tlgWrapperByVal@$03@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 *     _tlgKeywordOn @ 0x180031A40 (_tlgKeywordOn.c)
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x180041D00 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x180043030 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ?GetItemId@BamoPrincipalImpl@BamoImpl@Microsoft@@QEBAIXZ @ 0x180044CA8 (-GetItemId@BamoPrincipalImpl@BamoImpl@Microsoft@@QEBAIXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall BamoImpl::BamoInputSystemPrincipalImpl::LogSetHapticDeviceManager(
        BamoImpl::BamoInputSystemPrincipalImpl *this,
        struct Microsoft::BamoImpl::ConnectionIndirector **a2)
{
  __int64 v4; // rdi
  int ItemId; // ebx
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r8
  __int64 v9; // r9
  Microsoft::BamoImpl::BamoImplObject *v10[5]; // [rsp+30h] [rbp-28h] BYREF
  int v11; // [rsp+70h] [rbp+18h] BYREF
  int v12; // [rsp+78h] [rbp+20h] BYREF

  v4 = (__int64)*(&ISMBamos_AutoBamos::BamoTraceLogging::s_providers + 1);
  ItemId = 0;
  if ( *(&ISMBamos_AutoBamos::BamoTraceLogging::s_providers + 1)
    && *(_DWORD *)*(&ISMBamos_AutoBamos::BamoTraceLogging::s_providers + 1) > 5u
    && tlgKeywordOn((__int64)*(&ISMBamos_AutoBamos::BamoTraceLogging::s_providers + 1), 1LL) )
  {
    if ( a2 )
    {
      Microsoft::BamoImpl::InternalLock::InternalLock(v10, a2[4]);
      ItemId = Microsoft::BamoImpl::BamoPrincipalImpl::GetItemId((Microsoft::BamoImpl::BamoPrincipalImpl *)(a2 + 2));
      Microsoft::BamoImpl::InternalLock::~InternalLock((volatile signed __int32 **)v10, v6, v7);
    }
    v11 = ItemId;
    v12 = Microsoft::BamoImpl::BamoPrincipalImpl::GetItemId(this);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v4,
      (__int64)&unk_18021A963,
      v8,
      v9,
      (__int64)&v12,
      (__int64)&v11);
  }
}
