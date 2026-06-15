/*
 * XREFs of ??1CSystemAudioDeviceBase@@UEAA@XZ @ 0x14002AE50
 * Callers:
 *     ??1CSystemAudioDeviceSharedBase@@UEAA@XZ @ 0x14002AB2C (--1CSystemAudioDeviceSharedBase@@UEAA@XZ.c)
 *     ??1CSystemAudioDeviceExclusive@@UEAA@XZ @ 0x14006F070 (--1CSystemAudioDeviceExclusive@@UEAA@XZ.c)
 *     ??_ECSystemAudioDeviceBase@@UEAAPEAXI@Z @ 0x14006F220 (--_ECSystemAudioDeviceBase@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x140006C80 (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x140058DE0 (__security_check_cookie.c)
 */

void __fastcall CSystemAudioDeviceBase::~CSystemAudioDeviceBase(CSystemAudioDeviceBase *this)
{
  __int128 v2; // [rsp+30h] [rbp-28h] BYREF

  *(_QWORD *)this = &CSystemAudioDeviceBase::`vftable'{for `IAudioDeviceGraph'};
  *((_QWORD *)this + 1) = &CSystemAudioDeviceSharedBase::`vftable'{for `IAudioGraphCallback'};
  *((_QWORD *)this + 2) = &CSystemAudioDeviceBase::`vftable'{for `IAudioProtectedOutput'};
  *((_QWORD *)this + 3) = &CSystemAudioDeviceSharedBase::`vftable'{for `ISubmix'};
  v2 = *(_OWORD *)((char *)this + 104);
  EtwEventActivityIdControl(4LL, &v2);
  EtwEventActivityIdControl(4LL, &v2);
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)this + 18);
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)this + 16);
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)this + 15);
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)this + 11);
  DeleteCriticalSection((LPCRITICAL_SECTION)this + 1);
}
