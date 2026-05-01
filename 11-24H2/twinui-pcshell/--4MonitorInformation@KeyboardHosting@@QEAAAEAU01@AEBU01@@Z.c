/*
 * XREFs of ??4MonitorInformation@KeyboardHosting@@QEAAAEAU01@AEBU01@@Z @ 0x180479F1C
 * Callers:
 *     ?UpdateMonitorInfo@PositionAndSizeOptionsProvider@KeyboardHosting@@QEAAXAEBUMonitorInformation@2@00@Z @ 0x180255C48 (-UpdateMonitorInfo@PositionAndSizeOptionsProvider@KeyboardHosting@@QEAAXAEBUMonitorInformation@2.c)
 *     ?UnsafeUpdateMonitorInfo@ViewRectProvider@KeyboardHosting@@QEAAXAEBUMonitorInformation@2@00@Z @ 0x180488FB8 (-UnsafeUpdateMonitorInfo@ViewRectProvider@KeyboardHosting@@QEAAXAEBUMonitorInformation@2@00@Z.c)
 * Callees:
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x1800EA680 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180120A50 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseS.c)
 *     ?LockShared@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockShared@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x1801343EC (-LockShared@SRWLock@Wrappers@WRL@Microsoft@@SA-AVSyncLockShared@Details@234@PEAU_RTL_SRWLOCK@@@Z.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x18013C6D0 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_RacyAccessInMonitorInfo@@@details@wil@@QEAA_NXZ @ 0x18047A5A8 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_RacyAccessInMonitorInfo@@@details.c)
 */

__int64 __fastcall KeyboardHosting::MonitorInformation::operator=(__int64 a1, __int64 a2)
{
  RTL_SRWLOCK *v5; // [rsp+30h] [rbp+8h] BYREF
  RTL_SRWLOCK *v6; // [rsp+40h] [rbp+18h] BYREF

  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_RacyAccessInMonitorInfo>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_RacyAccessInMonitorInfo>::GetImpl'::`2'::impl) )
  {
    if ( a1 != a2 )
    {
      Microsoft::WRL::Wrappers::SRWLock::LockShared(&v6, (RTL_SRWLOCK *)(a2 + 80));
      wil::AcquireSRWLockExclusive(&v5, (RTL_SRWLOCK *)(a1 + 80));
      *(_QWORD *)(a1 + 88) = *(_QWORD *)(a2 + 88);
      *(_DWORD *)(a1 + 96) = *(_DWORD *)(a2 + 96);
      *(_OWORD *)(a1 + 100) = *(_OWORD *)(a2 + 100);
      *(_OWORD *)(a1 + 116) = *(_OWORD *)(a2 + 116);
      *(_OWORD *)(a1 + 132) = *(_OWORD *)(a2 + 132);
      *(_OWORD *)(a1 + 148) = *(_OWORD *)(a2 + 148);
      CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v5);
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(&v6);
    }
  }
  else if ( a1 != a2 )
  {
    *(_QWORD *)a1 = *(_QWORD *)a2;
    *(_OWORD *)(a1 + 8) = *(_OWORD *)(a2 + 8);
    *(_OWORD *)(a1 + 24) = *(_OWORD *)(a2 + 24);
    *(_DWORD *)(a1 + 40) = *(_DWORD *)(a2 + 40);
    *(_OWORD *)(a1 + 44) = *(_OWORD *)(a2 + 44);
    *(_OWORD *)(a1 + 60) = *(_OWORD *)(a2 + 60);
  }
  return a1;
}
