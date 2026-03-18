/*
 * XREFs of ?ResetDefaultInteractionForCurrentMC@CInteraction@@QEAAX_N@Z @ 0x180219900
 * Callers:
 *     ?ResetDefaultStateForAllInteractions@CInteraction@@SAXXZ @ 0x1802198B0 (-ResetDefaultStateForAllInteractions@CInteraction@@SAXXZ.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x18012B3DC (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPr.c)
 */

void __fastcall CInteraction::ResetDefaultInteractionForCurrentMC(CInteraction *this, char a2, __int64 a3, __int64 a4)
{
  unsigned __int8 v4; // dl
  CInteraction *v5; // [rsp+40h] [rbp+8h] BYREF
  int v6; // [rsp+48h] [rbp+10h] BYREF

  LOBYTE(v6) = a2;
  v4 = *((_BYTE *)this + 200) ^ (*((_BYTE *)this + 200) ^ (2 * *((_BYTE *)this + 200))) & 0x20;
  *((_BYTE *)this + 200) = v4;
  if ( (unsigned int)dword_1803F8D18 > 4 && (byte_1803F8D28 & 2) != 0 && (qword_1803F8D30 & 2) == qword_1803F8D30 )
  {
    v5 = this;
    v6 = (v4 >> 4) & 1;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
      (__int64)&dword_1803F8D18,
      byte_1803CCCCC,
      a3,
      a4,
      (__int64)&v5,
      (__int64)&v6);
  }
}
