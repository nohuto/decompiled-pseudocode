/*
 * XREFs of IoInvalidateInit @ 0x140C24998
 * Callers:
 *     IopInitializePlugPlayServices @ 0x140C210BC (IopInitializePlugPlayServices.c)
 * Callees:
 *     Feature_Servicing_PnpBootWaitForAsyncBusRelations__private_IsEnabledDeviceUsageNoInline @ 0x1404F42AC (Feature_Servicing_PnpBootWaitForAsyncBusRelations__private_IsEnabledDeviceUsageNoInline.c)
 */

void (*IoInvalidateInit())()
{
  void (*result)(); // rax

  IoInvalidateBusRelationsLock = 0LL;
  if ( (unsigned int)Feature_Servicing_PnpBootWaitForAsyncBusRelations__private_IsEnabledDeviceUsageNoInline() )
  {
    IoInvalidateBusRelationsMutex.Owner = 0LL;
    IoInvalidateBusRelationsMutex.Contention = 0;
    IoInvalidateBusRelationsMutex.Event.Header.SignalState = 0;
    IoInvalidateBusRelationsMutex.Event.Header.WaitListHead.Blink = &IoInvalidateBusRelationsMutex.Event.Header.WaitListHead;
    IoInvalidateBusRelationsMutex.Event.Header.WaitListHead.Flink = &IoInvalidateBusRelationsMutex.Event.Header.WaitListHead;
    IoInvalidateBusRelationsMutex.Count = 1;
    LOWORD(IoInvalidateBusRelationsMutex.Event.Header.Lock) = 1;
    IoInvalidateBusRelationsMutex.Event.Header.Size = 6;
  }
  IoInvalidateBusRelationsWorkItem.Parameter = 0LL;
  IoInvalidateBusRelationsWorkItem.List.Flink = 0LL;
  qword_140F8C2D8 = (__int64)&IoInvalidateBusRelationsQueue;
  IoInvalidateBusRelationsQueue = (__int64)&IoInvalidateBusRelationsQueue;
  result = IopInvalidateBusRelationsWorker;
  IoInvalidateBusRelationsWorkItem.WorkerRoutine = (void (__fastcall *)(void *))IopInvalidateBusRelationsWorker;
  return result;
}
