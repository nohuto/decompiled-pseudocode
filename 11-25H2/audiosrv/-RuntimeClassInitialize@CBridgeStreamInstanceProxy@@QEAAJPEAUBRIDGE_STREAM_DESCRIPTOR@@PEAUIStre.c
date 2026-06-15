/*
 * XREFs of ?RuntimeClassInitialize@CBridgeStreamInstanceProxy@@QEAAJPEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIStreamGroupProxy@@_J@Z @ 0x1800F337C
 * Callers:
 *     ??$MakeAndInitialize@VCBridgeStreamInstanceProxy@@UIBridgeStreamInstanceProxy@@PEAUBRIDGE_STREAM_DESCRIPTOR@@AEAPEAUIStreamGroupProxy@@AEA_J@Details@WRL@Microsoft@@YAJPEAPEAUIBridgeStreamInstanceProxy@@$$QEAPEAUBRIDGE_STREAM_DESCRIPTOR@@AEAPEAUIStreamGroupProxy@@AEA_J@Z @ 0x1800B6230 (--$MakeAndInitialize@VCBridgeStreamInstanceProxy@@UIBridgeStreamInstanceProxy@@PEAUBRIDGE_STREAM.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@44@Z @ 0x1800013A8 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U2@U2@@-$_tlgWriteTemplate@$$A6AJPEBU.c)
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x18000F7B0 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001AC8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _tlgKeywordOn @ 0x180055760 (_tlgKeywordOn.c)
 *     ?Initialize@CStreamInstanceProxyImpl@@IEAAJ_J@Z @ 0x18008ADC8 (-Initialize@CStreamInstanceProxyImpl@@IEAAJ_J@Z.c)
 *     _lambda_dacf159241f8e1fef226fb2cfac8af81_::_lambda_dacf159241f8e1fef226fb2cfac8af81_ @ 0x1800B6FEC (_lambda_dacf159241f8e1fef226fb2cfac8af81_--_lambda_dacf159241f8e1fef226fb2cfac8af81_.c)
 *     _lambda_a4cb84fa65d51627a0f7f0ac7469365e_::operator() @ 0x1800EF1F4 (_lambda_a4cb84fa65d51627a0f7f0ac7469365e_--operator().c)
 */

__int64 __fastcall CBridgeStreamInstanceProxy::RuntimeClassInitialize(
        CBridgeStreamInstanceProxy *this,
        struct BRIDGE_STREAM_DESCRIPTOR *a2,
        struct IStreamGroupProxy *a3,
        __int64 a4)
{
  int v5; // eax
  unsigned int v6; // ebx
  _QWORD *v7; // rax
  _DWORD *v8; // rcx
  int v9; // ecx
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned int v13; // [rsp+40h] [rbp-40h] BYREF
  struct IStreamGroupProxy *v14; // [rsp+48h] [rbp-38h] BYREF
  __int64 v15; // [rsp+50h] [rbp-30h] BYREF
  CBridgeStreamInstanceProxy *v16; // [rsp+58h] [rbp-28h] BYREF
  _QWORD v17[4]; // [rsp+60h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+8h]
  struct BRIDGE_STREAM_DESCRIPTOR *v19; // [rsp+98h] [rbp+18h] BYREF
  struct IStreamGroupProxy *v20; // [rsp+A0h] [rbp+20h] BYREF

  v20 = a3;
  v19 = a2;
  v5 = CStreamInstanceProxyImpl::Initialize(this, a4);
  v6 = v5;
  if ( v5 >= 0 )
  {
    v7 = lambda_dacf159241f8e1fef226fb2cfac8af81_::_lambda_dacf159241f8e1fef226fb2cfac8af81_(
           v17,
           (__int64)&v20,
           (__int64)this,
           (__int64)&v19);
    v6 = lambda_a4cb84fa65d51627a0f7f0ac7469365e_::operator()((_QWORD **)v7);
    v8 = (_DWORD *)*((_QWORD *)AudioSrvTelemetryProvider::Instance() + 1);
    if ( *v8 > 4u && tlgKeywordOn((__int64)v8, 512LL) )
    {
      v14 = v20;
      v15 = *((_QWORD *)this + 4);
      v16 = this;
      v13 = v6;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
        v9,
        (int)&unk_1801A151E,
        v10,
        v11,
        (__int64)&v13,
        (__int64)&v16,
        (__int64)&v15,
        (__int64)&v14);
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x102D,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
      (const char *)(unsigned int)v5);
  }
  return v6;
}
