/*
 * XREFs of ObReferenceObjectByPointerWithTag @ 0x140418730
 * Callers:
 *     DifObReferenceObjectByPointerWithTagWrapper @ 0x140636200 (DifObReferenceObjectByPointerWithTagWrapper.c)
 *     DifObReferenceObjectByPointerWrapper @ 0x1406363A0 (DifObReferenceObjectByPointerWrapper.c)
 *     ObOpenObjectByPointer @ 0x140854F10 (ObOpenObjectByPointer.c)
 *     PspSchedulerSharedDataRegionSlotAllocate @ 0x1409137C4 (PspSchedulerSharedDataRegionSlotAllocate.c)
 *     PspSchedulerSharedDataRegionCreate @ 0x140946D5C (PspSchedulerSharedDataRegionCreate.c)
 *     IoRegisterPlugPlayNotification @ 0x1409ED860 (IoRegisterPlugPlayNotification.c)
 * Callees:
 *     ObpTraceObjectReferenceIfActive @ 0x140340450 (ObpTraceObjectReferenceIfActive.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
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
