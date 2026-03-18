/*
 * XREFs of ?DequeueWorkItem@CWorkItemQueue@@QEBAPEAVCWorkItem@1@XZ @ 0x1C00984B4
 * Callers:
 *     ?UmfdCancelServerOutstandingRequests@@YAJPEAX@Z @ 0x1C007C950 (-UmfdCancelServerOutstandingRequests@@YAJPEAX@Z.c)
 *     ?WaitForWorkItem@CWorkItemQueue@@QEBAPEAVCWorkItem@1@XZ @ 0x1C0098424 (-WaitForWorkItem@CWorkItemQueue@@QEBAPEAVCWorkItem@1@XZ.c)
 *     ?UmfdEscSendCompleteWaitReceive@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1C00D0D50 (-UmfdEscSendCompleteWaitReceive@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 * Callees:
 *     <none>
 */

struct CWorkItemQueue::CWorkItem *__fastcall CWorkItemQueue::DequeueWorkItem(union _SLIST_HEADER *this)
{
  struct CWorkItemQueue::CWorkItem *result; // rax
  signed __int32 v2[10]; // [rsp+0h] [rbp-28h] BYREF

  result = (struct CWorkItemQueue::CWorkItem *)ExpInterlockedPopEntrySList(this + 1);
  _InterlockedOr(v2, 0);
  if ( result )
    *((_DWORD *)result + 2) = 2;
  return result;
}
