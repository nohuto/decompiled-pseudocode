/*
 * XREFs of ?SignalCompletionEvent@CSpatialCrossProcessServerEndpoint@@AEAA_NXZ @ 0x140031D3C
 * Callers:
 *     ?PulseEndpoint@CSpatialCrossProcessServerInputEndpoint@@UEAAXXZ @ 0x140031390 (-PulseEndpoint@CSpatialCrossProcessServerInputEndpoint@@UEAAXXZ.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1400089C8 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$com_ptr_t@U?$IVector@PEAVAudioDeviceModule@Devices@Media@Windows@@@Collections@Foundation@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x14000ED80 (-reset@-$com_ptr_t@U-$IVector@PEAVAudioDeviceModule@Devices@Media@Windows@@@Collections@Foundati.c)
 *     McTemplateU0pqp_EventWriteTransfer @ 0x14000F444 (McTemplateU0pqp_EventWriteTransfer.c)
 *     ??$MakeAndInitialize@VCStandardEvent@@UICrossProcessEvent@@PEAX@Details@WRL@Microsoft@@YAJPEAPEAUICrossProcessEvent@@$$QEAPEAX@Z @ 0x14001D4D8 (--$MakeAndInitialize@VCStandardEvent@@UICrossProcessEvent@@PEAX@Details@WRL@Microsoft@@YAJPEAPEA.c)
 *     ?IsRunning@CSpatialCrossProcessBaseEndpoint@@IEBA_NXZ @ 0x140031970 (-IsRunning@CSpatialCrossProcessBaseEndpoint@@IEBA_NXZ.c)
 */

char __fastcall CSpatialCrossProcessServerEndpoint::SignalCompletionEvent(
        CSpatialCrossProcessServerEndpoint *this,
        __int64 a2)
{
  __int64 v2; // rax
  _QWORD *v3; // rsi
  char v4; // di
  int v7; // eax
  __int64 v8; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v10; // [rsp+40h] [rbp+8h] BYREF

  v2 = *((_QWORD *)this + 171);
  v3 = (_QWORD *)((char *)this + 1352);
  v4 = 0;
  if ( v2 )
  {
    _InterlockedExchange64((volatile __int64 *)this + 170, v2);
    v10 = *((_QWORD *)this + 170);
    wil::com_ptr_t<Windows::Foundation::Collections::IVector<Windows::Media::Devices::AudioDeviceModule *>,wil::err_returncode_policy>::reset((__int64 *)this + 169);
    v7 = Microsoft::WRL::Details::MakeAndInitialize<CStandardEvent,ICrossProcessEvent,void *>(v3, &v10);
    if ( v7 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xD1,
        (int)"avcore\\audiocore\\engine\\core\\endpoint\\spatialcrossprocess\\spatialcpserverendpoint.cpp",
        (const char *)(unsigned int)v7);
    v8 = *((_QWORD *)this + 163);
    *((_QWORD *)this + 171) = 0LL;
    _InterlockedOr((volatile signed __int32 *)(v8 + 64), 0x20u);
  }
  if ( *v3 && CSpatialCrossProcessBaseEndpoint::IsRunning(this) )
  {
    SetEvent(*((HANDLE *)this + 170));
    v4 = 1;
  }
  if ( (byte_1400C45C1 & 4) != 0 )
    McTemplateU0pqp_EventWriteTransfer(
      *((_QWORD *)this + 170),
      a2,
      (__int64)this,
      *((_DWORD *)this + 345),
      *((_QWORD *)this + 170));
  return v4;
}
