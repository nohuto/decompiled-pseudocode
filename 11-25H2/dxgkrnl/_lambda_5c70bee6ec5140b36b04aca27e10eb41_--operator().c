/*
 * XREFs of _lambda_5c70bee6ec5140b36b04aca27e10eb41_::operator() @ 0x14027057C
 * Callers:
 *     _DXGKCALLONEXIT__lambda_5c70bee6ec5140b36b04aca27e10eb41____::_2_::DXGKCALLONEXIT::_DXGKCALLONEXIT @ 0x1400901D4 (_DXGKCALLONEXIT__lambda_5c70bee6ec5140b36b04aca27e10eb41____--_2_--DXGKCALLONEXIT--_DXGKCALLONEX.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U?$_tlgWrapperByRef@$0BA@@@U2@U2@U2@U_tlgWrapperBinary@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4AEBU?$_tlgWrapperByRef@$0BA@@@444AEBU_tlgWrapperBinary@@@Z @ 0x140006F54 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U-$_tlgWrapperByRef@$0BA@@@U2@U2@U.c)
 *     _tlgKeywordOn @ 0x140047784 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     ?DestroyPowerConnectionWithUsb4Stack@MonitorUsb4State@DxgMonitor@@AEAAX_N@Z @ 0x14042C8D4 (-DestroyPowerConnectionWithUsb4Stack@MonitorUsb4State@DxgMonitor@@AEAAX_N@Z.c)
 */

void __fastcall lambda_5c70bee6ec5140b36b04aca27e10eb41_::operator()(__int64 a1)
{
  __int128 **v1; // rax
  __int64 v3; // r9
  __int64 v4; // rcx
  unsigned int *v5; // rax
  __int64 v6; // rcx
  DxgMonitor::MonitorUsb4State *v7; // rbx
  int v8; // [rsp+60h] [rbp+7h] BYREF
  int v9; // [rsp+64h] [rbp+Bh] BYREF
  int v10; // [rsp+68h] [rbp+Fh] BYREF
  unsigned int v11; // [rsp+6Ch] [rbp+13h] BYREF
  int v12; // [rsp+70h] [rbp+17h] BYREF
  __int128 *v13; // [rsp+78h] [rbp+1Fh] BYREF
  __int64 v14; // [rsp+80h] [rbp+27h] BYREF
  __int64 v15; // [rsp+88h] [rbp+2Fh] BYREF
  __int16 v16; // [rsp+90h] [rbp+37h]
  __int128 v17; // [rsp+98h] [rbp+3Fh] BYREF

  v1 = *(__int128 ***)a1;
  v17 = 0LL;
  if ( *v1 )
    v17 = **v1;
  if ( (unsigned int)dword_14015B5B8 > 5 && tlgKeywordOn((__int64)&dword_14015B5B8, 0x400000001000LL) )
  {
    v4 = *(_QWORD *)(a1 + 24);
    v16 = v3;
    v15 = v4 + 20;
    v8 = *(_DWORD *)(v4 + 16);
    v9 = *(_DWORD *)(v4 + 12);
    LODWORD(v4) = **(_DWORD **)(a1 + 16);
    v13 = &v17;
    v5 = *(unsigned int **)(a1 + 8);
    v10 = v4;
    v11 = *v5;
    v12 = 1;
    v14 = 16779264LL;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperBinary>(
      v11,
      (__int64)&unk_14013DE2C,
      (__int64)&v17,
      v3,
      (__int64)&v14,
      (__int64)&v12,
      (__int64)&v11,
      (__int64 *)&v13,
      (__int64)&v10,
      (__int64)&v9,
      (__int64)&v8,
      &v15);
  }
  v6 = **(int **)(a1 + 8);
  if ( (int)v6 < 0 )
  {
    WdLogSingleEntry2(2LL, **(unsigned int **)(a1 + 16), v6);
    v7 = *(DxgMonitor::MonitorUsb4State **)(a1 + 24);
    WdLogGlobalForLineNumber = 1016;
    DxgMonitor::MonitorUsb4State::DestroyPowerConnectionWithUsb4Stack(v7, 0);
    *((_BYTE *)v7 + 8) = 0;
  }
}
