/*
 * XREFs of IopInvalidateBusRelationsWorker @ 0x1404BE320
 * Callers:
 *     PnpWaitForDevicesToStart @ 0x140C22720 (PnpWaitForDevicesToStart.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14024DD30 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140254B20 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeReleaseGuardedMutex @ 0x14031E470 (KeReleaseGuardedMutex.c)
 *     ObfDereferenceObjectWithTag @ 0x1403254A0 (ObfDereferenceObjectWithTag.c)
 *     ExAcquireFastMutex @ 0x14033E850 (ExAcquireFastMutex.c)
 *     Feature_Servicing_PnpBootWaitForAsyncBusRelations__private_IsEnabledDeviceUsageNoInline @ 0x1404F69C8 (Feature_Servicing_PnpBootWaitForAsyncBusRelations__private_IsEnabledDeviceUsageNoInline.c)
 *     IopProcessInvalidateBusRelationsRequest @ 0x1409EDC68 (IopProcessInvalidateBusRelationsRequest.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void IopInvalidateBusRelationsWorker()
{
  KIRQL v0; // bl
  __int64 **v1; // rdx
  __int64 v2; // rax
  PVOID *v3; // rbx
  __int64 v4; // rax
  PVOID P; // [rsp+20h] [rbp-10h] BYREF
  PVOID *p_P; // [rsp+28h] [rbp-8h]

  p_P = &P;
  P = &P;
  if ( (unsigned int)Feature_Servicing_PnpBootWaitForAsyncBusRelations__private_IsEnabledDeviceUsageNoInline() )
    ExAcquireFastMutex(&IoInvalidateBusRelationsMutex);
  v0 = KeAcquireSpinLockRaiseToDpc(&IoInvalidateBusRelationsLock);
  Feature_Servicing_PnpBootWaitForAsyncBusRelations__private_IsEnabledDeviceUsageNoInline();
  if ( (__int64 *)IoInvalidateBusRelationsQueue != &IoInvalidateBusRelationsQueue )
  {
    v1 = (__int64 **)p_P;
    if ( *((PVOID **)P + 1) != &P
      || *p_P != &P
      || *(__int64 **)(IoInvalidateBusRelationsQueue + 8) != &IoInvalidateBusRelationsQueue
      || *(__int64 **)qword_140F8C088 != &IoInvalidateBusRelationsQueue
      || (*p_P = &IoInvalidateBusRelationsQueue,
          p_P = (PVOID *)qword_140F8C088,
          *(_QWORD *)qword_140F8C088 = &P,
          v2 = IoInvalidateBusRelationsQueue,
          qword_140F8C088 = (__int64)v1,
          *(__int64 **)(IoInvalidateBusRelationsQueue + 8) != &IoInvalidateBusRelationsQueue)
      || *v1 != &IoInvalidateBusRelationsQueue )
    {
LABEL_16:
      __fastfail(3u);
    }
    *v1 = (__int64 *)IoInvalidateBusRelationsQueue;
    *(_QWORD *)(v2 + 8) = v1;
    qword_140F8C088 = (__int64)&IoInvalidateBusRelationsQueue;
    IoInvalidateBusRelationsQueue = (__int64)&IoInvalidateBusRelationsQueue;
  }
  KeReleaseSpinLock(&IoInvalidateBusRelationsLock, v0);
  while ( 1 )
  {
    v3 = (PVOID *)P;
    if ( P == &P )
      break;
    if ( *((PVOID **)P + 1) != &P )
      goto LABEL_16;
    v4 = *(_QWORD *)P;
    if ( *(PVOID *)(*(_QWORD *)P + 8LL) != P )
      goto LABEL_16;
    P = *(PVOID *)P;
    *(_QWORD *)(v4 + 8) = &P;
    IopProcessInvalidateBusRelationsRequest(v3);
    ObfDereferenceObjectWithTag(v3[2], 0x65706E50u);
    v3[2] = 0LL;
    ExFreePoolWithTag(v3, 0x6F697050u);
  }
  if ( (unsigned int)Feature_Servicing_PnpBootWaitForAsyncBusRelations__private_IsEnabledDeviceUsageNoInline() )
    KeReleaseGuardedMutex(&IoInvalidateBusRelationsMutex);
}
