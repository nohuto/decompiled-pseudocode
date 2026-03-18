/*
 * XREFs of ??0DXGDEADLOCK_TRACKER@@QEAA@PEAVDXGADAPTER@@_N@Z @ 0x1402A6008
 * Callers:
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEBD@Z @ 0x14028FF40 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEBD@Z.c)
 *     ?AcquireCoreResourceExclusiveWithTracking@DXGADAPTER@@AEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@_N@Z @ 0x1403C1824 (-AcquireCoreResourceExclusiveWithTracking@DXGADAPTER@@AEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@.c)
 * Callees:
 *     Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline @ 0x14006681C (Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline.c)
 *     ?Activate@DXGDEADLOCK_TRACKER@@QEAAXXZ @ 0x1403C0E04 (-Activate@DXGDEADLOCK_TRACKER@@QEAAXXZ.c)
 */

DXGDEADLOCK_TRACKER *__fastcall DXGDEADLOCK_TRACKER::DXGDEADLOCK_TRACKER(
        DXGDEADLOCK_TRACKER *this,
        struct DXGADAPTER *a2,
        char a3)
{
  unsigned __int64 v4; // rax
  __int64 v5; // rbx
  __int64 *v6; // rcx
  __int64 v7; // rax
  __int64 **v8; // rdx
  __int64 v9; // rbx

  *(_QWORD *)this = 0LL;
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 3) = 0;
  *((_DWORD *)this + 4) = 0;
  *((_WORD *)this + 16) = 0;
  *((_DWORD *)this + 9) = 0;
  *((_QWORD *)this + 3) = a2;
  *((_BYTE *)this + 240) = a3;
  v4 = DXGDEADLOCK_TRACKER::DeadlockCounter;
  *((_QWORD *)this + 48) = 0LL;
  *((_QWORD *)this + 47) = v4;
  _InterlockedIncrement64((volatile signed __int64 *)a2 + 3);
  *((_QWORD *)this + 48) = -1LL;
  KeInitializeTimer((PKTIMER)((char *)this + 248));
  KeInitializeDpc((PRKDPC)((char *)this + 312), (PKDEFERRED_ROUTINE)DeadlockTimeOutDpc, this);
  KeInitializeTimer((PKTIMER)((char *)this + 40));
  KeInitializeDpc((PRKDPC)((char *)this + 104), (PKDEFERRED_ROUTINE)DeadlockPulseDpc, this);
  KeInitializeEvent((PRKEVENT)((char *)this + 200), NotificationEvent, 1u);
  *((_QWORD *)this + 21) = 0LL;
  *((_QWORD *)this + 23) = ProcessDeadlockThread;
  *((_QWORD *)this + 24) = this;
  v5 = *((_QWORD *)this + 3);
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v5 + 4928, 0LL);
  Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
  v6 = (__int64 *)((char *)this + 224);
  *(_QWORD *)(v5 + 4936) = KeGetCurrentThread();
  v7 = *((_QWORD *)this + 3) + 4952LL;
  v8 = *(__int64 ***)(*((_QWORD *)this + 3) + 4960LL);
  if ( *v8 != (__int64 *)v7 )
    __fastfail(3u);
  *v6 = v7;
  *((_QWORD *)this + 29) = v8;
  *v8 = v6;
  *(_QWORD *)(v7 + 8) = v6;
  v9 = *((_QWORD *)this + 3);
  Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
  *(_QWORD *)(v9 + 4936) = 0LL;
  ExReleasePushLockExclusiveEx(v9 + 4928, 0LL);
  KeLeaveCriticalRegion();
  if ( *(_DWORD *)(*((_QWORD *)this + 3) + 4924LL) == 1 )
    DXGDEADLOCK_TRACKER::Activate(this);
  return this;
}
