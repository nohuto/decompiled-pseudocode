/*
 * XREFs of ?OnPoStandbyAudioRequestReceived@@YAJW4_PO_STANDBY_AUDIO_POLICY@@@Z @ 0x180106C80
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_40f55f5f2cebb35db0c56c4bfb17afd0__void_::_Do_call @ 0x1800CFB40 (std--_Func_impl_no_alloc__lambda_40f55f5f2cebb35db0c56c4bfb17afd0__void_--_Do_call.c)
 * Callees:
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x18000F7B0 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     ?QueueWorkItem@CSerialWorkQueue@@QEAAJV?$function@$$A6AXXZ@std@@@Z @ 0x18001CAB0 (-QueueWorkItem@CSerialWorkQueue@@QEAAJV-$function@$$A6AXXZ@std@@@Z.c)
 *     ?GetSerialWorkQueue@@YAAEAVCSerialWorkQueue@@XZ @ 0x18001DF28 (-GetSerialWorkQueue@@YAAEAVCSerialWorkQueue@@XZ.c)
 *     _tlgKeywordOn @ 0x180055760 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x180075D20 (--$Write@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PE_ea_180075D20.c)
 *     McTemplateU0q_EtwEventWriteTransfer @ 0x18010BA50 (McTemplateU0q_EtwEventWriteTransfer.c)
 */

__int64 __fastcall OnPoStandbyAudioRequestReceived(unsigned int a1)
{
  __int64 v2; // rdx
  _DWORD *v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  struct CSerialWorkQueue *SerialWorkQueue; // rax
  __int64 (__fastcall **v7)(); // rcx
  __int64 v9[8]; // [rsp+30h] [rbp-40h] BYREF
  unsigned int v10; // [rsp+80h] [rbp+10h] BYREF

  v3 = (_DWORD *)*((_QWORD *)AudioSrvTelemetryProvider::Instance() + 1);
  if ( *v3 > 4u && tlgKeywordOn((__int64)v3, 64LL) )
  {
    v10 = a1;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>>(
      (__int64)v3,
      byte_1801A2A3D,
      v4,
      v5,
      (__int64)&v10);
  }
  if ( (Microsoft_Windows_AudioEnableBits & 0x10) != 0 )
    McTemplateU0q_EtwEventWriteTransfer(v3, v2, a1);
  SerialWorkQueue = GetSerialWorkQueue();
  v7 = off_180173658;
  if ( a1 )
    v7 = off_180173688;
  v9[0] = (__int64)v7;
  v9[7] = (__int64)v9;
  CSerialWorkQueue::QueueWorkItem((__int64)SerialWorkQueue, v9);
  return 0LL;
}
