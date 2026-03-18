/*
 * XREFs of ?ProcessEvent@Mouse@InputTraceLogging@@SAX_KAEBUtagPOINT@@GGAEBUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1400952C8
 * Callers:
 *     ?xxxProcessMouseEvent@CMouseProcessor@@QEAAXXZ @ 0x14021F008 (-xxxProcessMouseEvent@CMouseProcessor@@QEAAXXZ.c)
 * Callees:
 *     ?OriginIdToString@InputTraceLogging@@CAPEBDW4tagINPUT_MESSAGE_ORIGIN_ID@@@Z @ 0x1400953B0 (-OriginIdToString@InputTraceLogging@@CAPEBDW4tagINPUT_MESSAGE_ORIGIN_ID@@@Z.c)
 *     ?DeviceTypeToString@InputTraceLogging@@CAPEBDK@Z @ 0x1400953F8 (-DeviceTypeToString@InputTraceLogging@@CAPEBDK@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U?$_tlgWrapSz@D@@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@444AEBU?$_tlgWrapSz@D@@5@Z @ 0x140095468 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@U2@U-$_tlgWrapSz@D@@U3@@-$_tlgW.c)
 */

void __fastcall InputTraceLogging::Mouse::ProcessEvent(
        __int64 a1,
        const struct tagPOINT *a2,
        __int64 a3,
        __int64 a4,
        const struct tagINPUT_MESSAGE_SOURCE *a5)
{
  __int64 v6; // rax
  unsigned int *v7; // rdx
  unsigned int v8; // ecx
  int v9; // r9d
  int v10; // r8d
  int *v11; // r11
  int v12; // [rsp+60h] [rbp+1Fh] BYREF
  int v13; // [rsp+64h] [rbp+23h] BYREF
  int v14; // [rsp+68h] [rbp+27h] BYREF
  int v15; // [rsp+6Ch] [rbp+2Bh] BYREF
  __int64 v16; // [rsp+70h] [rbp+2Fh] BYREF
  const char *v17; // [rsp+78h] [rbp+37h] BYREF
  __int64 v18; // [rsp+80h] [rbp+3Fh] BYREF

  if ( (unsigned int)dword_14029AE30 > 4 && (qword_14029AE40 & 0x40) != 0 && (qword_14029AE48 & 0x40) == qword_14029AE48 )
  {
    v6 = InputTraceLogging::OriginIdToString(*((unsigned int *)a5 + 1));
    v8 = *v7;
    v16 = v6;
    v17 = InputTraceLogging::DeviceTypeToString(v8);
    v12 = (unsigned __int16)v9;
    v13 = (unsigned __int16)v10;
    v14 = v11[1];
    v15 = *v11;
    v18 = a1;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<char>>(
      (unsigned int)&dword_14029AE30,
      (unsigned int)&unk_14027F059,
      v10,
      v9,
      (__int64)&v18,
      (__int64)&v15,
      (__int64)&v14,
      (__int64)&v13,
      (__int64)&v12,
      (__int64)&v17,
      (__int64)&v16);
  }
}
