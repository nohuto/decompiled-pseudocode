/*
 * XREFs of ??1CSpatialCrossProcessBaseEndpoint@@UEAA@XZ @ 0x140055930
 * Callers:
 *     ??1CSpatialCrossProcessServerEndpoint@@UEAA@XZ @ 0x14004E86C (--1CSpatialCrossProcessServerEndpoint@@UEAA@XZ.c)
 *     ??1CSpatialCrossProcessClientEndpoint@@UEAA@XZ @ 0x14008962C (--1CSpatialCrossProcessClientEndpoint@@UEAA@XZ.c)
 *     ??_GCSpatialCrossProcessBaseEndpoint@@UEAAPEAXI@Z @ 0x1400898E0 (--_GCSpatialCrossProcessBaseEndpoint@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x140006C80 (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x14000897C (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?reset@?$com_ptr_t@U?$IVector@PEAVAudioDeviceModule@Devices@Media@Windows@@@Collections@Foundation@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x14000ED80 (-reset@-$com_ptr_t@U-$IVector@PEAVAudioDeviceModule@Devices@Media@Windows@@@Collections@Foundati.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x140012DA8 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?reset@?$unique_ptr@VHandleSendReceiveServer@@U?$default_delete@VHandleSendReceiveServer@@@wistd@@@wistd@@QEAAXPEAVHandleSendReceiveServer@@@Z @ 0x1400442A4 (-reset@-$unique_ptr@VHandleSendReceiveServer@@U-$default_delete@VHandleSendReceiveServer@@@wistd.c)
 *     ?AERTDestroyZoneHeap@@YAXPEAX@Z @ 0x140044DFC (-AERTDestroyZoneHeap@@YAXPEAX@Z.c)
 *     ??1CSpatialCrossProcessEndpointTraceLogger@@UEAA@XZ @ 0x140055A28 (--1CSpatialCrossProcessEndpointTraceLogger@@UEAA@XZ.c)
 *     ??_GSpatialBlock@@QEAAPEAXI@Z @ 0x14008999C (--_GSpatialBlock@@QEAAPEAXI@Z.c)
 */

void __fastcall CSpatialCrossProcessBaseEndpoint::~CSpatialCrossProcessBaseEndpoint(
        CSpatialCrossProcessBaseEndpoint *this)
{
  __int64 *v2; // rsi
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // rcx
  unsigned int v6; // edx
  SpatialBlock *v7; // rcx
  std::_Ref_count_base *v8; // rcx

  *(_QWORD *)this = &CSpatialCrossProcessBaseEndpoint::`vftable'{for `IAudioEndpoint'};
  *((_QWORD *)this + 1) = &CSpatialCrossProcessBaseEndpoint::`vftable'{for `IAudioEndpointRT'};
  *((_QWORD *)this + 2) = &CSpatialCrossProcessBaseEndpoint::`vftable'{for `ISpatialAudioProcessBlockRT'};
  *((_QWORD *)this + 3) = &CSpatialCrossProcessBaseEndpoint::`vftable'{for `ISpatialAudioCrossProcessResourceControl'};
  v2 = (__int64 *)((char *)this + 776);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 97);
  v5 = *((_QWORD *)this + 14);
  if ( v5 )
  {
    AERTDestroyZoneHeap(v5, v3, v4);
    *((_QWORD *)this + 14) = 0LL;
  }
  wil::com_ptr_t<Windows::Foundation::Collections::IVector<Windows::Media::Devices::AudioDeviceModule *>,wil::err_returncode_policy>::reset((__int64 *)this + 11);
  v7 = (SpatialBlock *)*((_QWORD *)this + 164);
  if ( v7 )
    SpatialBlock::`scalar deleting destructor'(v7, v6);
  *((_QWORD *)this + 164) = 0LL;
  wistd::unique_ptr<HandleSendReceiveServer,wistd::default_delete<HandleSendReceiveServer>>::reset(
    (__int64 (__fastcall ****)(_QWORD, __int64))this + 162,
    0LL);
  CSpatialCrossProcessEndpointTraceLogger::~CSpatialCrossProcessEndpointTraceLogger((CSpatialCrossProcessBaseEndpoint *)((char *)this + 784));
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v2);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 736));
  v8 = (std::_Ref_count_base *)*((_QWORD *)this + 91);
  if ( v8 )
    std::_Ref_count_base::_Decref(v8);
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)this + 11);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
}
