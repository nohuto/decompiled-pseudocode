/*
 * XREFs of ?AcquireLocksForPowerStateD3transition@DXGADAPTER@@QEAAXXZ @ 0x1402CA9B0
 * Callers:
 *     ?AcquireCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z @ 0x1402CA7D8 (-AcquireCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceExclusiveOwner@ADAPTER_RENDER@@QEBAEXZ @ 0x140029490 (-IsCoreResourceExclusiveOwner@ADAPTER_RENDER@@QEBAEXZ.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x140029C50 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x14002F1A0 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     ?ReleaseCoreResource@DXGADAPTER@@AEAAXPEBD@Z @ 0x1402A1E90 (-ReleaseCoreResource@DXGADAPTER@@AEAAXPEBD@Z.c)
 *     ?AcquireCoreResourceExclusive@DXGADAPTER@@AEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEBD@Z @ 0x1402CACD4 (-AcquireCoreResourceExclusive@DXGADAPTER@@AEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEBD@Z.c)
 *     ?ReleaseLocksForPowerStateD3transition@DXGADAPTER@@QEAAXXZ @ 0x14038849C (-ReleaseLocksForPowerStateD3transition@DXGADAPTER@@QEAAXXZ.c)
 *     ?TryAcquireDeviceLockForAllDevices@ADAPTER_RENDER@@QEAAEW4DXGADAPTER_DEVICELISTTYPE@@@Z @ 0x140388AFC (-TryAcquireDeviceLockForAllDevices@ADAPTER_RENDER@@QEAAEW4DXGADAPTER_DEVICELISTTYPE@@@Z.c)
 */

void __fastcall DXGADAPTER::AcquireLocksForPowerStateD3transition(DXGADAPTER *this)
{
  ADAPTER_RENDER **v1; // rsi
  __int64 v3; // rdi
  char *v4; // r14
  __int64 **v5; // r14
  __int64 **i; // rdi
  ADAPTER_RENDER *v7; // rdi
  char *v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx

  v1 = (ADAPTER_RENDER **)((char *)this + 3128);
  v3 = *((_QWORD *)this + 391);
  v4 = (char *)this + 3128;
  if ( v3 )
  {
    v5 = (__int64 **)(v3 + 144);
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v3 + 24, 0LL) )
      goto LABEL_26;
    *(_QWORD *)(v3 + 32) = KeGetCurrentThread();
    for ( i = (__int64 **)*v5; i != v5 && i; i = (__int64 **)*i )
    {
      if ( !ExAcquireResourceExclusiveLite((PERESOURCE)i[17], 0)
        || !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(i + 18, 0LL) )
      {
        goto LABEL_27;
      }
      i[19] = (__int64 *)KeGetCurrentThread();
    }
    if ( !(unsigned __int8)ADAPTER_RENDER::TryAcquireDeviceLockForAllDevices(*v1, 1LL) )
      goto LABEL_27;
    v4 = (char *)this + 3128;
  }
  DXGADAPTER::AcquireCoreResourceExclusive(this, 2LL, 1LL);
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)this) )
    goto LABEL_27;
  v7 = *v1;
  if ( *v1 )
  {
    if ( !DXGADAPTER::IsDxgmms2(this) )
    {
      if ( !ADAPTER_RENDER::IsCoreResourceExclusiveOwner(v7) )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 4687;
        DxgkLogInternalTriageEvent(
          0LL,
          262146LL,
          0xFFFFFFFFLL,
          L"IsCoreResourceExclusiveOwner()",
          4687LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      if ( *((_QWORD *)v7 + 172) )
        goto LABEL_27;
      v4 = (char *)this + 3128;
    }
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 391) + 760LL) + 8LL)
                                                   + 1024LL))(*(_QWORD *)(*((_QWORD *)this + 391) + 768LL))
      || (*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v4 + 736LL) + 8LL) + 936LL))(*(_QWORD *)(*(_QWORD *)v4 + 744LL))
      || *((_BYTE *)this + 3053) )
    {
LABEL_27:
      if ( DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)this) )
        DXGADAPTER::ReleaseCoreResource((PERESOURCE *)this, 0LL);
      DXGADAPTER::ReleaseLocksForPowerStateD3transition(this);
      return;
    }
  }
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx((char *)this + 104, 0LL) )
  {
LABEL_26:
    KeLeaveCriticalRegion();
    goto LABEL_27;
  }
  *((_QWORD *)this + 14) = KeGetCurrentThread();
  v8 = (char *)this + 104;
  if ( *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 27) + 64LL) + 4232LL) )
  {
    *((_QWORD *)this + 14) = 0LL;
    ExReleasePushLockExclusiveEx(v8, 0LL);
    goto LABEL_26;
  }
  *((_DWORD *)this + 40) = 1;
  *((_QWORD *)this + 14) = 0LL;
  ExReleasePushLockExclusiveEx(v8, 0LL);
  KeLeaveCriticalRegion();
  v9 = *((_QWORD *)this + 391);
  if ( v9 )
  {
    *(_QWORD *)(v9 + 32) = 0LL;
    ExReleasePushLockExclusiveEx(v9 + 24, 0LL);
    KeLeaveCriticalRegion();
    v10 = *((_QWORD *)this + 391);
    *(_QWORD *)(v10 + 56) = 0LL;
    ExReleasePushLockExclusiveEx(v10 + 48, 0LL);
    KeLeaveCriticalRegion();
  }
}
