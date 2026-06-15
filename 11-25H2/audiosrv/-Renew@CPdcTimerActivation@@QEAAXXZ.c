/*
 * XREFs of ?Renew@CPdcTimerActivation@@QEAAXXZ @ 0x180080E44
 * Callers:
 *     ?ReevaluateTimerActivationRequest@CVADServer@@QEAAXXZ @ 0x180107170 (-ReevaluateTimerActivationRequest@CVADServer@@QEAAXXZ.c)
 * Callees:
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x18000F7B0 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     _tlgKeywordOn @ 0x180055760 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U1@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@344@Z @ 0x180073040 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U1@U2@U2@@-$_tlgWriteTemplate@$$A6AJP.c)
 *     __security_check_cookie @ 0x1800A7AB0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800A8BC4 (memset_0.c)
 */

void __fastcall CPdcTimerActivation::Renew(CPdcTimerActivation *this)
{
  __int64 v1; // rax
  __int64 v3; // rcx
  int v4; // edi
  _DWORD *v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdx
  int v10; // [rsp+50h] [rbp-B0h] BYREF
  int v11; // [rsp+54h] [rbp-ACh] BYREF
  int v12; // [rsp+58h] [rbp-A8h] BYREF
  int v13; // [rsp+5Ch] [rbp-A4h] BYREF
  __int64 v14; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v15; // [rsp+68h] [rbp-98h] BYREF
  _DWORD v16[2]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v17; // [rsp+78h] [rbp-88h]
  __int64 v18; // [rsp+80h] [rbp-80h]
  _QWORD *v19; // [rsp+88h] [rbp-78h]
  __int64 v20; // [rsp+90h] [rbp-70h]
  _QWORD v21[3]; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v22[152]; // [rsp+B8h] [rbp-48h] BYREF

  v1 = *((_QWORD *)this + 2);
  v10 = 0;
  v21[1] = v1;
  v21[0] = 1LL;
  v21[2] = 568LL;
  memset_0(v22, 0, 0x90uLL);
  v17 = 0LL;
  v18 = 0LL;
  v3 = *(_QWORD *)this;
  v19 = v21;
  v16[0] = 1;
  v16[1] = 300;
  v20 = 0LL;
  if ( v3 )
  {
    v4 = Pdcv2ActivationClientRenewActivation(v3, v16, &v10);
    v5 = (_DWORD *)*((_QWORD *)AudioSrvTelemetryProvider::Instance() + 1);
    if ( *v5 > 4u && tlgKeywordOn((__int64)v5, 64LL) )
    {
      v9 = *((_QWORD *)this + 2);
      v11 = v10;
      v12 = v4;
      v14 = *(_QWORD *)(v9 + 544);
      v13 = *(_DWORD *)(v9 + 40);
      v15 = v9;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v6,
        byte_1801A2408,
        v7,
        v8,
        (__int64)&v15,
        (__int64)&v13,
        (__int64)&v14,
        (__int64)&v12,
        (__int64)&v11);
    }
  }
}
