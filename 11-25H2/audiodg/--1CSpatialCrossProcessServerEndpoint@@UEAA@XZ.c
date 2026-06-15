/*
 * XREFs of ??1CSpatialCrossProcessServerEndpoint@@UEAA@XZ @ 0x14004E86C
 * Callers:
 *     ??1CSpatialCrossProcessServerInputEndpoint@@UEAA@XZ @ 0x1400587C8 (--1CSpatialCrossProcessServerInputEndpoint@@UEAA@XZ.c)
 *     ??_GCSpatialCrossProcessServerEndpoint@@UEAAPEAXI@Z @ 0x140089960 (--_GCSpatialCrossProcessServerEndpoint@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x140006C80 (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ?reset@?$com_ptr_t@U?$IVector@PEAVAudioDeviceModule@Devices@Media@Windows@@@Collections@Foundation@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x14000ED80 (-reset@-$com_ptr_t@U-$IVector@PEAVAudioDeviceModule@Devices@Media@Windows@@@Collections@Foundati.c)
 *     ?AERTDestroyZoneHeap@@YAXPEAX@Z @ 0x140044DFC (-AERTDestroyZoneHeap@@YAXPEAX@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1400591B4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall CSpatialCrossProcessServerEndpoint::~CSpatialCrossProcessServerEndpoint(
        CSpatialCrossProcessServerEndpoint *this,
        __int64 a2,
        __int64 a3)
{
  void *v4; // rcx
  __int64 v5; // rcx
  char *v6; // rcx

  *(_QWORD *)this = &CSpatialCrossProcessServerEndpoint::`vftable'{for `IAudioEndpoint'};
  *((_QWORD *)this + 1) = &CSpatialCrossProcessClientEndpoint::`vftable'{for `IAudioEndpointRT'};
  *((_QWORD *)this + 2) = &CSpatialCrossProcessServerEndpoint::`vftable'{for `ISpatialAudioProcessBlockRT'};
  *((_QWORD *)this + 3) = &CSpatialCrossProcessServerEndpoint::`vftable'{for `ISpatialAudioCrossProcessResourceControl'};
  *((_QWORD *)this + 166) = &CSpatialCrossProcessServerEndpoint::`vftable'{for `IAudioCrossProcessServerEndpoint'};
  *((_QWORD *)this + 167) = &CSpatialCrossProcessServerEndpoint::`vftable'{for `ISpatialAudioCrossProcessServerEndpoint'};
  v4 = (void *)*((_QWORD *)this + 177);
  if ( v4 )
  {
    operator delete(v4);
    *((_QWORD *)this + 177) = 0LL;
  }
  v5 = *((_QWORD *)this + 14);
  if ( v5 )
  {
    AERTDestroyZoneHeap(v5, a2, a3);
    *((_QWORD *)this + 14) = 0LL;
  }
  *((_QWORD *)this + 170) = 0LL;
  wil::com_ptr_t<Windows::Foundation::Collections::IVector<Windows::Media::Devices::AudioDeviceModule *>,wil::err_returncode_policy>::reset((__int64 *)this + 169);
  v6 = (char *)*((_QWORD *)this + 171);
  if ( (unsigned __int64)(v6 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    CloseHandle(v6);
    *((_QWORD *)this + 171) = 0LL;
  }
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)this + 169);
  CSpatialCrossProcessBaseEndpoint::~CSpatialCrossProcessBaseEndpoint(this);
}
