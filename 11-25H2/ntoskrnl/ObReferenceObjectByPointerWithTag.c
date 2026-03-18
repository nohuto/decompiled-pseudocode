/*
 * XREFs of ObReferenceObjectByPointerWithTag @ 0x14041B630
 * Callers:
 *     DifObReferenceObjectByPointerWithTagWrapper @ 0x14062A240 (DifObReferenceObjectByPointerWithTagWrapper.c)
 *     DifObReferenceObjectByPointerWrapper @ 0x14062A3E0 (DifObReferenceObjectByPointerWrapper.c)
 *     ObOpenObjectByPointer @ 0x140857EB0 (ObOpenObjectByPointer.c)
 *     PspSchedulerSharedDataRegionSlotAllocate @ 0x1408B9D1C (PspSchedulerSharedDataRegionSlotAllocate.c)
 *     PspSchedulerSharedDataRegionCreate @ 0x1408BA4BC (PspSchedulerSharedDataRegionCreate.c)
 *     IoRegisterPlugPlayNotification @ 0x14096BD60 (IoRegisterPlugPlayNotification.c)
 * Callees:
 *     ObpTraceObjectReferenceIfActive @ 0x14029B0E0 (ObpTraceObjectReferenceIfActive.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 */

NTSTATUS __stdcall ObReferenceObjectByPointerWithTag(
        PVOID Object,
        ACCESS_MASK DesiredAccess,
        POBJECT_TYPE ObjectType,
        KPROCESSOR_MODE AccessMode,
        ULONG Tag)
{
  volatile signed __int64 *v5; // rbx
  signed __int64 BugCheckParameter4; // rdi

  if ( ObjectType )
  {
    v5 = (volatile signed __int64 *)((char *)Object - 48);
    if ( ((unsigned __int8)ObHeaderCookie ^ (unsigned __int8)(*((char *)Object - 24) ^ ((unsigned __int16)((_WORD)Object - 48) >> 8))) != ObjectType->Index )
      return -1073741788;
  }
  else
  {
    if ( AccessMode )
      return -1073741788;
    v5 = (volatile signed __int64 *)((char *)Object - 48);
  }
  ObpTraceObjectReferenceIfActive((int)v5);
  BugCheckParameter4 = _InterlockedIncrement64(v5);
  if ( BugCheckParameter4 <= 1 )
    KeBugCheckEx(0x18u, 0LL, (ULONG_PTR)(v5 + 6), 0x10uLL, BugCheckParameter4);
  return 0;
}
