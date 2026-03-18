/*
 * XREFs of PopSystemIrpCompletion @ 0x140B6F8E0
 * Callers:
 *     PopFxHandleReportDevicePoweredOn @ 0x14049CF90 (PopFxHandleReportDevicePoweredOn.c)
 *     PopFxNotifyPendingSIrpReady @ 0x1405D17C8 (PopFxNotifyPendingSIrpReady.c)
 *     PopFxUnregisterDevice @ 0x140A74BB4 (PopFxUnregisterDevice.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140255180 (EtwTraceKernelEvent.c)
 *     ExAcquireSpinLockExclusive @ 0x14028F370 (ExAcquireSpinLockExclusive.c)
 *     ObfDereferenceObjectWithTag @ 0x1403254A0 (ObfDereferenceObjectWithTag.c)
 *     PopDequeueQuerySetIrp @ 0x140375DBC (PopDequeueQuerySetIrp.c)
 *     PopFxLockDevice @ 0x140376070 (PopFxLockDevice.c)
 *     PopFreeIrp @ 0x1403764AC (PopFreeIrp.c)
 *     PopFxDereferenceDevice @ 0x140376880 (PopFxDereferenceDevice.c)
 *     ExReleaseSpinLockExclusive @ 0x140379ED0 (ExReleaseSpinLockExclusive.c)
 *     PopCompleteNotifyTransitionCommon @ 0x1403D8F34 (PopCompleteNotifyTransitionCommon.c)
 *     KeReleaseSemaphore @ 0x1403D91C0 (KeReleaseSemaphore.c)
 *     IoFindDeviceThatFailedIrp @ 0x14043B4CC (IoFindDeviceThatFailedIrp.c)
 *     PopFxIncrementDeviceSleepCount @ 0x140490E70 (PopFxIncrementDeviceSleepCount.c)
 *     PopDiagTraceIrpPended @ 0x1404D547C (PopDiagTraceIrpPended.c)
 *     Feature_Sx_PEP_Notification_Synchronization__private_IsEnabledNoReportingNoInline @ 0x1405CD8C8 (Feature_Sx_PEP_Notification_Synchronization__private_IsEnabledNoReportingNoInline.c)
 *     PopFxNotifyPostSIrpCompletion @ 0x1405D1818 (PopFxNotifyPostSIrpCompletion.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 */

__int64 __fastcall PopSystemIrpCompletion(__int64 a1, IRP *a2, __int64 a3, __int64 a4)
{
  __int64 StackCount; // rax
  __int64 DeviceThatFailedIrp; // rdi
  __int64 *v7; // r14
  __int64 v8; // rcx
  __int64 v9; // rbp
  int v10; // ebx
  NTSTATUS Status; // eax
  __int64 v12; // rax
  __int64 v13; // rbp
  int v14; // ebx
  KIRQL v15; // al
  __int64 v16; // r8
  KIRQL v17; // bp
  int v18; // ebp
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  PRKSEMAPHORE *v23; // rbx
  IRP *v25; // [rsp+30h] [rbp-48h] BYREF
  NTSTATUS v26; // [rsp+38h] [rbp-40h]
  int v27; // [rsp+3Ch] [rbp-3Ch]
  _QWORD v28[2]; // [rsp+40h] [rbp-38h] BYREF

  StackCount = a2->StackCount;
  DeviceThatFailedIrp = 0LL;
  v7 = *(__int64 **)(a3 + 216);
  v8 = 9 * StackCount;
  v9 = *((_QWORD *)&a2->Tail.CompletionKey + 9 * StackCount + 10);
  v10 = *(_DWORD *)(v9 + 192);
  if ( (xmmword_140FC5B10 & 0x8000) != 0 )
  {
    Status = a2->IoStatus.Status;
    v27 = 0;
    v25 = a2;
    v26 = Status;
    v28[1] = 16LL;
    v28[0] = &v25;
    EtwTraceKernelEvent((int)v28, 1, 0x80008000, 4647, 5249026);
  }
  if ( (unsigned int)Feature_Sx_PEP_Notification_Synchronization__private_IsEnabledNoReportingNoInline(
                       v8,
                       (__int64)a2,
                       a3,
                       a4) )
  {
    if ( *(_BYTE *)(v9 + 184) == 2 )
    {
      v12 = PopFxLockDevice((__int64)(v7 - 20), 0, 0);
      v13 = v12;
      if ( v12 )
      {
        v14 = PopFxNotifyPostSIrpCompletion(v12, (__int64)a2);
        PopFxDereferenceDevice(v13, 0);
        if ( v14 == 259 )
          return 3221225494LL;
      }
    }
  }
  else if ( v10 == 1 )
  {
    v15 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)v7 - 18);
    v16 = *(v7 - 10);
    v17 = v15;
    if ( v16 )
    {
      if ( *(_QWORD *)(v16 + 136) )
      {
        _m_prefetchw((const void *)(v16 + 32));
        if ( (_InterlockedOr((volatile signed __int32 *)(v16 + 32), 0) & 0x800) != 0 )
        {
          _InterlockedOr((volatile signed __int32 *)(v16 + 32), 0x400u);
          PopDiagTraceIrpPended((__int64)a2);
          ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)v7 - 18, v17);
          return 3221225494LL;
        }
      }
    }
    ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)v7 - 18, v15);
  }
  v18 = 0;
  if ( (DWORD1(PopCurrentBroadcast) & 0x800000) == 0 )
    v18 = a2->IoStatus.Status;
  if ( v18 < 0 )
    DeviceThatFailedIrp = IoFindDeviceThatFailedIrp((__int64)a2);
  PopDequeueQuerySetIrp((__int64)a2);
  PopFreeIrp(a2);
  v23 = (PRKSEMAPHORE *)qword_140F0BDF0;
  if ( (unsigned __int8)(*(_BYTE *)qword_140F0BDF0 - 2) <= 1u && *((int *)qword_140F0BDF0 + 1) > 1 )
  {
    Feature_Sx_PEP_Notification_Synchronization__private_IsEnabledNoReportingNoInline(v20, v19, v21, v22);
    PopFxIncrementDeviceSleepCount(*(v7 - 16));
    ObfDereferenceObjectWithTag((PVOID)*(v7 - 16), 0x72496F50u);
  }
  PopCompleteNotifyTransitionCommon((__int64)v23, v7, v18, DeviceThatFailedIrp);
  KeReleaseSemaphore(v23[5], 0, 1, 0);
  return 3221225494LL;
}
