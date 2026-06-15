/*
 * XREFs of ?ProcessingComplete@?$CCrossProcessBaseServerEndpoint@UStaticControlData_V0@@UVolatileControlData_V0@@UControlData_V0@@@@UEAAXXZ @ 0x140053160
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1400089C8 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$com_ptr_t@U?$IVector@PEAVAudioDeviceModule@Devices@Media@Windows@@@Collections@Foundation@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x14000ED80 (-reset@-$com_ptr_t@U-$IVector@PEAVAudioDeviceModule@Devices@Media@Windows@@@Collections@Foundati.c)
 *     McTemplateU0pqp_EventWriteTransfer @ 0x14000F444 (McTemplateU0pqp_EventWriteTransfer.c)
 *     ??$MakeAndInitialize@VCStandardEvent@@UICrossProcessEvent@@PEAX@Details@WRL@Microsoft@@YAJPEAPEAUICrossProcessEvent@@$$QEAPEAX@Z @ 0x14001D4D8 (--$MakeAndInitialize@VCStandardEvent@@UICrossProcessEvent@@PEAX@Details@WRL@Microsoft@@YAJPEAPEA.c)
 */

void __fastcall CCrossProcessBaseServerEndpoint<StaticControlData_V0,VolatileControlData_V0,ControlData_V0>::ProcessingComplete(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // rdi
  char v3; // al
  int v4; // esi
  __int64 v5; // rax
  _QWORD *v6; // rbx
  int v7; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v9; // [rsp+40h] [rbp+8h] BYREF

  v2 = a1;
  if ( (*(_DWORD *)(a1 + 184) & 0x40000) != 0 )
  {
    a2 = *(_QWORD *)(a1 + 80);
    v3 = _InterlockedCompareExchange((volatile signed __int32 *)(a2 + 164), 0, 0);
    v4 = v3 & 1;
    if ( (v3 & 1) != 0 )
    {
      v5 = *(_QWORD *)(a1 + 440);
      if ( v5 )
      {
        _InterlockedExchange64((volatile __int64 *)(a1 + 432), v5);
        v6 = (_QWORD *)(a1 + 424);
        v9 = *(_QWORD *)(a1 + 432);
        wil::com_ptr_t<Windows::Foundation::Collections::IVector<Windows::Media::Devices::AudioDeviceModule *>,wil::err_returncode_policy>::reset((__int64 *)(a1 + 424));
        v7 = Microsoft::WRL::Details::MakeAndInitialize<CStandardEvent,ICrossProcessEvent,void *>(v6, &v9);
        if ( v7 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x3FB,
            (int)"avcore\\audiocore\\engine\\core\\endpoint\\crossprocess\\cpbaseendpoint.cpp",
            (const char *)(unsigned int)v7);
        *(_QWORD *)(v2 + 440) = 0LL;
      }
    }
    a1 = *(_QWORD *)(v2 + 432);
    if ( a1 && ((*(_BYTE *)(v2 + 184) & 1) == 0 || v4) )
      SetEvent((HANDLE)a1);
  }
  if ( (byte_1400C45C1 & 4) != 0 )
    McTemplateU0pqp_EventWriteTransfer(a1, a2, v2 - 8, *(_DWORD *)(v2 + 452), *(_QWORD *)(v2 + 432));
}
