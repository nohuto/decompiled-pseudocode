/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x14000274C
 * Callers:
 *     ?EndDeferral@CQoSReport@@QEAAXXZ @ 0x1401A50A0 (-EndDeferral@CQoSReport@@QEAAXXZ.c)
 *     ?PolicyChanged@QualityOfService@@YAXXZ @ 0x1401A5400 (-PolicyChanged@QualityOfService@@YAXXZ.c)
 *     ?ReportProcess@CQoSReport@@QEAAXPEAUtagPROCESSINFO@@@Z @ 0x1401A56D0 (-ReportProcess@CQoSReport@@QEAAXPEAUtagPROCESSINFO@@@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1400B0708 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 */

__int64 __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<1>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  _QWORD v7[5]; // [rsp+30h] [rbp-58h] BYREF
  int v8; // [rsp+58h] [rbp-30h]
  int v9; // [rsp+5Ch] [rbp-2Ch]
  __int64 v10; // [rsp+60h] [rbp-28h]
  int v11; // [rsp+68h] [rbp-20h]
  int v12; // [rsp+6Ch] [rbp-1Ch]

  v10 = a6;
  v12 = 0;
  v11 = 1;
  v7[4] = a5;
  v9 = 0;
  v8 = 4;
  return tlgWriteTransfer_EtwWriteTransfer(&dword_14029AF48, a2, 0LL, 0LL, 4, v7);
}
