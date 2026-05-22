/*
 * XREFs of ?LogOnPeerConnected@BamoConnectionImpl@ISMBamos_AutoBamos@BamoImpl@@AEAAXPEAVBamoPeer@2@@Z @ 0x18008F2B0
 * Callers:
 *     ?OnPeerConnectedThunk@BamoConnectionImpl@ISMBamos_AutoBamos@BamoImpl@@MEAAJPEAVBaseBamoPeerImpl@3Microsoft@@PEA_NPEAPEAVBamoPrincipal@Bamo@5@@Z @ 0x18006C930 (-OnPeerConnectedThunk@BamoConnectionImpl@ISMBamos_AutoBamos@BamoImpl@@MEAAJPEAVBaseBamoPeerImpl@.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1800020EC (--$Write@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 *     _tlgKeywordOn @ 0x180031480 (_tlgKeywordOn.c)
 *     ?GetPeerId@BaseBamoPeer@Bamo@Microsoft@@QEBAIXZ @ 0x18006D918 (-GetPeerId@BaseBamoPeer@Bamo@Microsoft@@QEBAIXZ.c)
 */

void __fastcall BamoImpl::ISMBamos_AutoBamos::BamoConnectionImpl::LogOnPeerConnected(
        BamoImpl::ISMBamos_AutoBamos::BamoConnectionImpl *this,
        struct ISMBamos_AutoBamos::BamoPeer *a2)
{
  __int64 v2; // rbx
  __int64 PeerId; // r8
  Microsoft::Bamo::BaseBamoPeer *v4; // r9
  BamoImpl::ISMBamos_AutoBamos::BamoConnectionImpl *v5; // [rsp+40h] [rbp+8h] BYREF

  v5 = this;
  v2 = qword_1802475B0;
  if ( qword_1802475B0 && *(_DWORD *)qword_1802475B0 > 5u && tlgKeywordOn(qword_1802475B0, 2LL) )
  {
    if ( v4 )
      PeerId = (unsigned int)Microsoft::Bamo::BaseBamoPeer::GetPeerId(v4);
    LODWORD(v5) = PeerId;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>>(
      v2,
      (__int64)&unk_18020C8B8,
      PeerId,
      (__int64)v4,
      (__int64)&v5);
  }
}
