/*
 * XREFs of ?RuntimeClassInitialize@CStreamInstanceProxy@@QEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@_JPEAUSystemAudioStream@@@Z @ 0x1800F36B8
 * Callers:
 *     ??$MakeAndInitialize@VCStreamInstanceProxy@@UIStreamInstanceProxy@@AEAPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@AEAPEAUIAudioGraphCallback@@_JAEAPEAUSystemAudioStream@@@Details@WRL@Microsoft@@YAJPEAPEAUIStreamInstanceProxy@@AEAPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@AEAPEAUIAudioGraphCallback@@$$QEA_JAEAPEAUSystemAudioStream@@@Z @ 0x1800EDF78 (--$MakeAndInitialize@VCStreamInstanceProxy@@UIStreamInstanceProxy@@AEAPEAUSYSTEM_AUDIO_STREAM_DE.c)
 * Callees:
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x18000F7B0 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001AC8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _tlgKeywordOn @ 0x180055760 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@4@Z @ 0x18006AD9C (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     ?Initialize@CStreamInstanceProxyImpl@@IEAAJ_J@Z @ 0x18008ADC8 (-Initialize@CStreamInstanceProxyImpl@@IEAAJ_J@Z.c)
 *     _lambda_aa1414ab8e95a4429593081bb8a30d1f_::_lambda_aa1414ab8e95a4429593081bb8a30d1f_ @ 0x1800EE940 (_lambda_aa1414ab8e95a4429593081bb8a30d1f_--_lambda_aa1414ab8e95a4429593081bb8a30d1f_.c)
 *     _lambda_d7b7c63bb19bd4dc54ca7775a1234c2f_::operator() @ 0x1800EF510 (_lambda_d7b7c63bb19bd4dc54ca7775a1234c2f_--operator().c)
 */

__int64 __fastcall CStreamInstanceProxy::RuntimeClassInitialize(
        CStreamInstanceProxy *this,
        struct SYSTEM_AUDIO_STREAM_DESCRIPTOR *a2,
        struct IAudioGraphCallback *a3,
        __int64 a4,
        struct SystemAudioStream *a5)
{
  int v6; // eax
  unsigned int v7; // ebx
  __int64 *v8; // rax
  _DWORD *v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned int v14; // [rsp+40h] [rbp-40h] BYREF
  __int64 v15; // [rsp+48h] [rbp-38h] BYREF
  CStreamInstanceProxy *v16; // [rsp+50h] [rbp-30h] BYREF
  _QWORD v17[5]; // [rsp+58h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+8h]
  struct SYSTEM_AUDIO_STREAM_DESCRIPTOR *v19; // [rsp+98h] [rbp+18h] BYREF
  struct IAudioGraphCallback *v20; // [rsp+A0h] [rbp+20h] BYREF

  v20 = a3;
  v19 = a2;
  v6 = CStreamInstanceProxyImpl::Initialize(this, a4);
  v7 = v6;
  if ( v6 >= 0 )
  {
    v8 = lambda_aa1414ab8e95a4429593081bb8a30d1f_::_lambda_aa1414ab8e95a4429593081bb8a30d1f_(
           v17,
           (__int64)this,
           (__int64)&v19,
           (__int64)&v20,
           (__int64)&a5);
    v7 = lambda_d7b7c63bb19bd4dc54ca7775a1234c2f_::operator()(v8);
    v9 = (_DWORD *)*((_QWORD *)AudioSrvTelemetryProvider::Instance() + 1);
    if ( *v9 > 4u && tlgKeywordOn((__int64)v9, 512LL) )
    {
      v15 = *((_QWORD *)this + 4);
      v16 = this;
      v14 = v7;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
        v10,
        byte_1801A1697,
        v11,
        v12,
        (__int64)&v14,
        (__int64)&v16,
        (__int64)&v15);
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xF9A,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
      (const char *)(unsigned int)v6);
  }
  return v7;
}
