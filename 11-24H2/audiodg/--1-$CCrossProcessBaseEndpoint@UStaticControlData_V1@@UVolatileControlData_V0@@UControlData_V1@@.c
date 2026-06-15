/*
 * XREFs of ??1?$CCrossProcessBaseEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@UEAA@XZ @ 0x1400553C8
 * Callers:
 *     ??1?$CCrossProcessBaseServerEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@UEAA@XZ @ 0x140055494 (--1-$CCrossProcessBaseServerEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlDat.c)
 *     ??1?$CCrossProcessBaseClientEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@UEAA@XZ @ 0x140080E90 (--1-$CCrossProcessBaseClientEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlDat.c)
 *     ??_G?$CCrossProcessBaseEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@UEAAPEAXI@Z @ 0x1400812D0 (--_G-$CCrossProcessBaseEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@.c)
 * Callees:
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x140006CB0 (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ?AERTGetDLLRTHeap@@YAPEAXXZ @ 0x14000CD7C (-AERTGetDLLRTHeap@@YAPEAXXZ.c)
 *     ?AERTFree@@YAXPEAX0@Z @ 0x14000CDC0 (-AERTFree@@YAXPEAX0@Z.c)
 *     ?reset@?$com_ptr_t@U?$IVector@PEAVAudioDeviceModule@Devices@Media@Windows@@@Collections@Foundation@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x14000EDB0 (-reset@-$com_ptr_t@U-$IVector@PEAVAudioDeviceModule@Devices@Media@Windows@@@Collections@Foundati.c)
 *     ?reset@?$unique_ptr@VHandleSendReceiveServer@@U?$default_delete@VHandleSendReceiveServer@@@wistd@@@wistd@@QEAAXPEAVHandleSendReceiveServer@@@Z @ 0x140043FA4 (-reset@-$unique_ptr@VHandleSendReceiveServer@@U-$default_delete@VHandleSendReceiveServer@@@wistd.c)
 *     ?AERTDestroyZoneHeap@@YAXPEAX@Z @ 0x140044AFC (-AERTDestroyZoneHeap@@YAXPEAX@Z.c)
 *     ??1CCrossProcessEndpointTraceLogger@@UEAA@XZ @ 0x140044D84 (--1CCrossProcessEndpointTraceLogger@@UEAA@XZ.c)
 */

void __fastcall CCrossProcessBaseEndpoint<StaticControlData_V1,VolatileControlData_V0,ControlData_V1>::~CCrossProcessBaseEndpoint<StaticControlData_V1,VolatileControlData_V0,ControlData_V1>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v4; // rcx
  void *v5; // rax
  int v6; // r8d

  *(_QWORD *)a1 = &CCrossProcessBaseEndpoint<StaticControlData_V1,VolatileControlData_V0,ControlData_V1>::`vftable'{for `IAudioEndpoint'};
  *(_QWORD *)(a1 + 8) = &CCrossProcessBaseEndpoint<StaticControlData_V1,VolatileControlData_V0,ControlData_V1>::`vftable'{for `IAudioEndpointRT'};
  v4 = *(_QWORD *)(a1 + 160);
  if ( v4 )
  {
    AERTDestroyZoneHeap(v4, a2, a3);
    *(_QWORD *)(a1 + 160) = 0LL;
  }
  wil::com_ptr_t<Windows::Foundation::Collections::IVector<Windows::Media::Devices::AudioDeviceModule *>,wil::err_returncode_policy>::reset((__int64 *)(a1 + 72));
  *(_QWORD *)(a1 + 88) = 0LL;
  *(_QWORD *)(a1 + 80) = 0LL;
  v5 = (void *)AERTGetDLLRTHeap();
  AERTFree(*(void **)(a1 + 96), v5, v6);
  *(_QWORD *)(a1 + 96) = 0LL;
  CCrossProcessEndpointTraceLogger::~CCrossProcessEndpointTraceLogger((CCrossProcessEndpointTraceLogger *)(a1 + 216));
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)(a1 + 72));
  wistd::unique_ptr<HandleSendReceiveServer,wistd::default_delete<HandleSendReceiveServer>>::reset(
    (__int64 (__fastcall ****)(_QWORD, __int64))(a1 + 64),
    0LL);
  DeleteCriticalSection((LPCRITICAL_SECTION)(a1 + 16));
}
