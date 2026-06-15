/*
 * XREFs of ??1CSystemAudioDeviceExclusive@@UEAA@XZ @ 0x14006EFE4
 * Callers:
 *     ??1?$CComAggObject@VCSystemAudioDeviceExclusive@@@ATL@@UEAA@XZ @ 0x14006EF3C (--1-$CComAggObject@VCSystemAudioDeviceExclusive@@@ATL@@UEAA@XZ.c)
 *     ??1?$CComObject@VCSystemAudioDeviceExclusive@@@ATL@@UEAA@XZ @ 0x14006EF80 (--1-$CComObject@VCSystemAudioDeviceExclusive@@@ATL@@UEAA@XZ.c)
 *     ??_ECSystemAudioDeviceExclusive@@UEAAPEAXI@Z @ 0x14006F110 (--_ECSystemAudioDeviceExclusive@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1CComSafeDeleteCriticalSection@ATL@@QEAA@XZ @ 0x140007B30 (--1CComSafeDeleteCriticalSection@ATL@@QEAA@XZ.c)
 *     ??1CSystemAudioDeviceBase@@UEAA@XZ @ 0x14002AB50 (--1CSystemAudioDeviceBase@@UEAA@XZ.c)
 *     ??1?$CSAutoLock@$00@@QEAA@XZ @ 0x14002C920 (--1-$CSAutoLock@$00@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x140058CF0 (__security_check_cookie.c)
 *     ?Cleanup@CSystemAudioDeviceExclusive@@MEAAXXZ @ 0x14006F2B0 (-Cleanup@CSystemAudioDeviceExclusive@@MEAAXXZ.c)
 */

void __fastcall CSystemAudioDeviceExclusive::~CSystemAudioDeviceExclusive(CSystemAudioDeviceExclusive *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // [rsp+20h] [rbp-38h] BYREF
  __int128 v3; // [rsp+28h] [rbp-30h]
  __int128 v4; // [rsp+38h] [rbp-20h] BYREF

  *(_QWORD *)this = &CSystemAudioDeviceExclusive::`vftable'{for `IAudioDeviceGraph'};
  *((_QWORD *)this + 1) = &CSystemAudioDeviceExclusive::`vftable'{for `IAudioGraphCallback'};
  *((_QWORD *)this + 2) = &CSystemAudioDeviceExclusive::`vftable'{for `IAudioProtectedOutput'};
  *((_QWORD *)this + 3) = &CSystemAudioDeviceExclusive::`vftable'{for `ISubmix'};
  v3 = *(_OWORD *)((char *)this + 104);
  v4 = v3;
  EtwEventActivityIdControl(4LL, &v4);
  if ( !*((_DWORD *)this + 60) )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)this + 1);
    v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 40);
    CSystemAudioDeviceExclusive::Cleanup(this);
    CSAutoLock<1>::~CSAutoLock<1>(&v2);
  }
  EtwEventActivityIdControl(4LL, &v4);
  CSystemAudioDeviceBase::~CSystemAudioDeviceBase(this);
  ATL::CComSafeDeleteCriticalSection::~CComSafeDeleteCriticalSection((CSystemAudioDeviceExclusive *)((char *)this + 160));
}
