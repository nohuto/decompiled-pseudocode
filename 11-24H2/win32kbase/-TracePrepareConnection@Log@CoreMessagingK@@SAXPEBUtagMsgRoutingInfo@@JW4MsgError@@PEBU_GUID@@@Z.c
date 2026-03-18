/*
 * XREFs of ?TracePrepareConnection@Log@CoreMessagingK@@SAXPEBUtagMsgRoutingInfo@@JW4MsgError@@PEBU_GUID@@@Z @ 0x1400FD79C
 * Callers:
 *     ?PrepareConnection@RegistrarClient@CoreMessagingK@@SAJPEBUtagMsgRoutingInfo@@PEAW4MsgError@@PEAU_GUID@@@Z @ 0x1400FD044 (-PrepareConnection@RegistrarClient@CoreMessagingK@@SAJPEBUtagMsgRoutingInfo@@PEAW4MsgError@@PEAU.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByRef@$0BA@@@U1@U1@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByRef@$0BA@@@335@Z @ 0x14000B01C (--$Write@U-$_tlgWrapperByVal@$03@@U1@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByRef@$0BA@@@U1@U1@U.c)
 */

__int64 __fastcall CoreMessagingK::Log::TracePrepareConnection(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  int v5; // [rsp+60h] [rbp+27h] BYREF
  int v6; // [rsp+64h] [rbp+2Bh] BYREF
  int v7; // [rsp+68h] [rbp+2Fh] BYREF
  int v8; // [rsp+6Ch] [rbp+33h] BYREF
  __int64 v9; // [rsp+70h] [rbp+37h] BYREF
  __int64 v10; // [rsp+78h] [rbp+3Fh] BYREF
  __int64 v11; // [rsp+80h] [rbp+47h] BYREF

  if ( (unsigned int)dword_14029B140 > 5 )
  {
    v6 = a2;
    v10 = a1 + 24;
    v11 = *(_QWORD *)(a1 + 8);
    v7 = *(_DWORD *)(a1 + 4);
    v8 = *(_DWORD *)a1;
    v9 = a4;
    v5 = a3;
    return _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByRef<16>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>>(
             a1,
             (__int64)&unk_140280BEF,
             a3,
             a4,
             (__int64)&v8,
             (__int64)&v7,
             (__int64)&v11,
             &v10,
             (__int64)&v6,
             (__int64)&v5,
             &v9);
  }
  return result;
}
