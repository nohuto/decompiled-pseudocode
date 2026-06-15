/*
 * XREFs of ??1CSystemAudioDeviceOffloadGraph@@UEAA@XZ @ 0x1400728E0
 * Callers:
 *     ??1?$CComAggObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@UEAA@XZ @ 0x1400727F0 (--1-$CComAggObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@UEAA@XZ.c)
 *     ??1?$CComObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@UEAA@XZ @ 0x140072834 (--1-$CComObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@UEAA@XZ.c)
 *     ??_E?$CComContainedObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@UEAAPEAXI@Z @ 0x140072A10 (--_E-$CComContainedObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x140006C80 (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ??1CComSafeDeleteCriticalSection@ATL@@QEAA@XZ @ 0x140007B00 (--1CComSafeDeleteCriticalSection@ATL@@QEAA@XZ.c)
 *     ??1CSystemAudioDeviceSharedBase@@UEAA@XZ @ 0x14002AB2C (--1CSystemAudioDeviceSharedBase@@UEAA@XZ.c)
 *     ??1?$CSAutoLock@$00@@QEAA@XZ @ 0x14002CC20 (--1-$CSAutoLock@$00@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x140058DE0 (__security_check_cookie.c)
 *     ?Cleanup@CSystemAudioDeviceOffloadGraph@@MEAAXXZ @ 0x140072CA0 (-Cleanup@CSystemAudioDeviceOffloadGraph@@MEAAXXZ.c)
 */

void __fastcall CSystemAudioDeviceOffloadGraph::~CSystemAudioDeviceOffloadGraph(CSystemAudioDeviceOffloadGraph *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // [rsp+20h] [rbp-38h] BYREF
  __int128 v3; // [rsp+28h] [rbp-30h]
  __int128 v4; // [rsp+38h] [rbp-20h] BYREF

  v3 = *(_OWORD *)((char *)this + 104);
  v4 = v3;
  EtwEventActivityIdControl(4LL, &v4);
  EnterCriticalSection((LPCRITICAL_SECTION)this + 1);
  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 40);
  CSystemAudioDeviceOffloadGraph::Cleanup(this);
  CSAutoLock<1>::~CSAutoLock<1>(&v2);
  EtwEventActivityIdControl(4LL, &v4);
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)this + 41);
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)this + 40);
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)this + 39);
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)this + 38);
  CSystemAudioDeviceSharedBase::~CSystemAudioDeviceSharedBase(this);
  ATL::CComSafeDeleteCriticalSection::~CComSafeDeleteCriticalSection((CSystemAudioDeviceOffloadGraph *)((char *)this + 256));
}
