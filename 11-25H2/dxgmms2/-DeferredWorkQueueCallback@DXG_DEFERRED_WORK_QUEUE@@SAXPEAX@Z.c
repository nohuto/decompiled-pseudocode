/*
 * XREFs of ?DeferredWorkQueueCallback@DXG_DEFERRED_WORK_QUEUE@@SAXPEAX@Z @ 0x14004CA60
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x140028730 (--3@YAXPEAX@Z.c)
 *     Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline @ 0x14004CCF0 (Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline.c)
 *     _guard_dispatch_icall @ 0x1400562A0 (_guard_dispatch_icall.c)
 */

void __fastcall DXG_DEFERRED_WORK_QUEUE::DeferredWorkQueueCallback(struct _KEVENT *a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  struct _KEVENT *v4; // rsi
  struct _LIST_ENTRY *Flink; // rax
  __int64 v6; // rcx
  struct _KEVENT *v7; // rdi
  __int64 v8; // rax
  __int64 v9; // rcx

  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(a1, 0LL);
  Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline(v2);
  v4 = a1 + 1;
  a1->Header.WaitListHead.Flink = (struct _LIST_ENTRY *)KeGetCurrentThread();
  while ( 1 )
  {
    v7 = *(struct _KEVENT **)&v4->Header.Lock;
    v8 = **(_QWORD **)&v4->Header.Lock;
    if ( *(struct _KEVENT **)(*(_QWORD *)&v4->Header.Lock + 8LL) != v4 || *(struct _KEVENT **)(v8 + 8) != v7 )
      __fastfail(3u);
    *(_QWORD *)&v4->Header.Lock = v8;
    *(_QWORD *)(v8 + 8) = v4;
    if ( v7 == v4 )
      break;
    Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline(v3);
    a1->Header.WaitListHead.Flink = 0LL;
    ExReleasePushLockExclusiveEx(a1, 0LL);
    KeLeaveCriticalRegion();
    ((void (__fastcall *)(_QWORD))v7->Header.WaitListHead.Blink)(*(_QWORD *)&v7[1].Header.Lock);
    Flink = v7[1].Header.WaitListHead.Flink;
    if ( Flink )
      ((void (__fastcall *)(_QWORD))Flink)(*(_QWORD *)&v7[1].Header.Lock);
    operator delete(v7);
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(a1, 0LL);
    Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline(v6);
    a1->Header.WaitListHead.Flink = (struct _LIST_ENTRY *)KeGetCurrentThread();
    --LODWORD(a1[1].Header.WaitListHead.Blink);
  }
  KeSetEvent(a1 + 2, 0, 0);
  Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline(v9);
  a1->Header.WaitListHead.Flink = 0LL;
  ExReleasePushLockExclusiveEx(a1, 0LL);
  KeLeaveCriticalRegion();
}
