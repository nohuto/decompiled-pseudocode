/*
 * XREFs of ??1CSystemAudioDeviceSharedBase@@UEAA@XZ @ 0x14002AB2C
 * Callers:
 *     ??1CSystemAudioDeviceShared@@UEAA@XZ @ 0x14002AA70 (--1CSystemAudioDeviceShared@@UEAA@XZ.c)
 *     ??1CSystemAudioDeviceOffloadGraph@@UEAA@XZ @ 0x1400728E0 (--1CSystemAudioDeviceOffloadGraph@@UEAA@XZ.c)
 *     ??_GCSystemAudioDeviceSharedBase@@UEAAPEAXI@Z @ 0x140072A90 (--_GCSystemAudioDeviceSharedBase@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x140006C80 (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ?Cleanup@CSystemAudioDeviceSharedBase@@MEAAXXZ @ 0x1400295C0 (-Cleanup@CSystemAudioDeviceSharedBase@@MEAAXXZ.c)
 *     ??1CSystemAudioDeviceBase@@UEAA@XZ @ 0x14002AE50 (--1CSystemAudioDeviceBase@@UEAA@XZ.c)
 *     __security_check_cookie @ 0x140058DE0 (__security_check_cookie.c)
 */

void __fastcall CSystemAudioDeviceSharedBase::~CSystemAudioDeviceSharedBase(CSystemAudioDeviceSharedBase *this)
{
  DWORD v2; // ecx
  DWORD v3; // ecx
  __int128 v4; // [rsp+30h] [rbp-28h] BYREF

  *(_QWORD *)this = &CSystemAudioDeviceSharedBase::`vftable'{for `IAudioDeviceGraph'};
  *((_QWORD *)this + 1) = &CSystemAudioDeviceSharedBase::`vftable'{for `IAudioGraphCallback'};
  *((_QWORD *)this + 2) = &CSystemAudioDeviceSharedBase::`vftable'{for `IAudioProtectedOutput'};
  *((_QWORD *)this + 3) = &CSystemAudioDeviceSharedBase::`vftable'{for `ISubmix'};
  *((_QWORD *)this + 19) = &CSystemAudioDeviceSharedBase::`vftable'{for `ISaDeviceCallback'};
  *((_QWORD *)this + 20) = &CSystemAudioDeviceSharedBase::`vftable'{for `ISubmixInternal'};
  v4 = *(_OWORD *)((char *)this + 104);
  EtwEventActivityIdControl(4LL, &v4);
  EnterCriticalSection((LPCRITICAL_SECTION)this + 1);
  CSystemAudioDeviceSharedBase::Cleanup(this);
  v2 = *((_DWORD *)this + 54);
  if ( v2 != -1 )
  {
    FlsSetValue(v2, 0LL);
    FlsFree(*((_DWORD *)this + 54));
  }
  v3 = *((_DWORD *)this + 53);
  if ( v3 != -1 )
    TlsFree(v3);
  if ( this != (CSystemAudioDeviceSharedBase *)-40LL )
    LeaveCriticalSection((LPCRITICAL_SECTION)this + 1);
  EtwEventActivityIdControl(4LL, &v4);
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)this + 23);
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)this + 22);
  CSystemAudioDeviceBase::~CSystemAudioDeviceBase(this);
}
