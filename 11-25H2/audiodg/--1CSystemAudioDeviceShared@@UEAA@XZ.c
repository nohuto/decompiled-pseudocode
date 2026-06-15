/*
 * XREFs of ??1CSystemAudioDeviceShared@@UEAA@XZ @ 0x14002AA70
 * Callers:
 *     ??1?$CComObject@VCSystemAudioDeviceShared@@@ATL@@UEAA@XZ @ 0x1400449BC (--1-$CComObject@VCSystemAudioDeviceShared@@@ATL@@UEAA@XZ.c)
 *     ??1?$CComAggObject@VCSystemAudioDeviceShared@@@ATL@@UEAA@XZ @ 0x14007383C (--1-$CComAggObject@VCSystemAudioDeviceShared@@@ATL@@UEAA@XZ.c)
 *     ??_E?$CComContainedObject@VCSystemAudioDeviceShared@@@ATL@@UEAAPEAXI@Z @ 0x1400738C0 (--_E-$CComContainedObject@VCSystemAudioDeviceShared@@@ATL@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1CComSafeDeleteCriticalSection@ATL@@QEAA@XZ @ 0x140007B00 (--1CComSafeDeleteCriticalSection@ATL@@QEAA@XZ.c)
 *     ?Cleanup@CSystemAudioDeviceSharedBase@@MEAAXXZ @ 0x1400295C0 (-Cleanup@CSystemAudioDeviceSharedBase@@MEAAXXZ.c)
 *     ??1CSystemAudioDeviceSharedBase@@UEAA@XZ @ 0x14002AB2C (--1CSystemAudioDeviceSharedBase@@UEAA@XZ.c)
 *     __security_check_cookie @ 0x140058DE0 (__security_check_cookie.c)
 */

void __fastcall CSystemAudioDeviceShared::~CSystemAudioDeviceShared(CSystemAudioDeviceShared *this)
{
  __int128 v2; // [rsp+30h] [rbp-28h] BYREF

  v2 = *(_OWORD *)((char *)this + 104);
  EtwEventActivityIdControl(4LL, &v2);
  EnterCriticalSection((LPCRITICAL_SECTION)this + 1);
  CSystemAudioDeviceSharedBase::Cleanup(this);
  if ( this != (CSystemAudioDeviceShared *)-40LL )
    LeaveCriticalSection((LPCRITICAL_SECTION)this + 1);
  EtwEventActivityIdControl(4LL, &v2);
  CSystemAudioDeviceSharedBase::~CSystemAudioDeviceSharedBase(this);
  ATL::CComSafeDeleteCriticalSection::~CComSafeDeleteCriticalSection((CSystemAudioDeviceShared *)((char *)this + 232));
}
