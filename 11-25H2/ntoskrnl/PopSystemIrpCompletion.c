/*
 * XREFs of PopSystemIrpCompletion @ 0x140B5A4B0
 * Callers:
 *     PopFxHandleReportDevicePoweredOn @ 0x140356360 (PopFxHandleReportDevicePoweredOn.c)
 *     PopFxUnregisterDevice @ 0x140A72854 (PopFxUnregisterDevice.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140254220 (EtwTraceKernelEvent.c)
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     KeReleaseSemaphore @ 0x14027FE40 (KeReleaseSemaphore.c)
 *     ExAcquireSpinLockExclusive @ 0x1402BEA90 (ExAcquireSpinLockExclusive.c)
 *     PopDequeueQuerySetIrp @ 0x14035836C (PopDequeueQuerySetIrp.c)
 *     PopFreeIrp @ 0x14035860C (PopFreeIrp.c)
 *     ExReleaseSpinLockExclusive @ 0x1403A2D40 (ExReleaseSpinLockExclusive.c)
 *     IoFindDeviceThatFailedIrp @ 0x140463C54 (IoFindDeviceThatFailedIrp.c)
 *     PopCompleteNotifyTransitionCommon @ 0x140477380 (PopCompleteNotifyTransitionCommon.c)
 *     PopFxIncrementDeviceSleepCount @ 0x140491DBC (PopFxIncrementDeviceSleepCount.c)
 *     PopDiagTraceIrpPended @ 0x1404D5AD0 (PopDiagTraceIrpPended.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 */

__int64 __fastcall PopSystemIrpCompletion(__int64 a1, IRP *a2, __int64 a3)
{
  __int64 DeviceThatFailedIrp; // rdi
  __int64 *v5; // r14
  int v6; // ebx
  NTSTATUS Status; // eax
  int v8; // ebp
  PRKSEMAPHORE *v9; // rbx
  KIRQL v11; // al
  __int64 v12; // r8
  KIRQL v13; // bp
  IRP *v14; // [rsp+30h] [rbp-48h] BYREF
  NTSTATUS v15; // [rsp+38h] [rbp-40h]
  int v16; // [rsp+3Ch] [rbp-3Ch]
  _QWORD v17[2]; // [rsp+40h] [rbp-38h] BYREF

  DeviceThatFailedIrp = 0LL;
  v5 = *(__int64 **)(a3 + 216);
  v6 = *(_DWORD *)(*((_QWORD *)&a2->Tail.CompletionKey + 9 * a2->StackCount + 10) + 192LL);
  if ( (xmmword_140FC5B10 & 0x8000) != 0 )
  {
    Status = a2->IoStatus.Status;
    v16 = 0;
    v14 = a2;
    v15 = Status;
    v17[1] = 16LL;
    v17[0] = &v14;
    EtwTraceKernelEvent((int)v17, 1, 0x80008000, 4647, 5249026);
  }
  if ( v6 == 1 )
  {
    v11 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)v5 - 18);
    v12 = *(v5 - 10);
    v13 = v11;
    if ( v12 )
    {
      if ( *(_QWORD *)(v12 + 136) )
      {
        _m_prefetchw((const void *)(v12 + 32));
        if ( (_InterlockedOr((volatile signed __int32 *)(v12 + 32), 0) & 0x800) != 0 )
        {
          _InterlockedOr((volatile signed __int32 *)(v12 + 32), 0x400u);
          PopDiagTraceIrpPended((__int64)a2);
          ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)v5 - 18, v13);
          return 3221225494LL;
        }
      }
    }
    ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)v5 - 18, v11);
  }
  v8 = 0;
  if ( (DWORD1(PopCurrentBroadcast) & 0x800000) == 0 )
    v8 = a2->IoStatus.Status;
  if ( v8 < 0 )
    DeviceThatFailedIrp = IoFindDeviceThatFailedIrp((__int64)a2);
  PopDequeueQuerySetIrp((__int64)a2);
  PopFreeIrp(a2);
  v9 = (PRKSEMAPHORE *)qword_140F0AA30;
  if ( (unsigned __int8)(*(_BYTE *)qword_140F0AA30 - 2) <= 1u && *((int *)qword_140F0AA30 + 1) > 1 )
  {
    PopFxIncrementDeviceSleepCount(*(v5 - 16));
    ObfDereferenceObjectWithTag((PVOID)*(v5 - 16), 0x72496F50u);
  }
  PopCompleteNotifyTransitionCommon((__int64)v9, v5, v8, DeviceThatFailedIrp);
  KeReleaseSemaphore(v9[5], 0, 1, 0);
  return 3221225494LL;
}
