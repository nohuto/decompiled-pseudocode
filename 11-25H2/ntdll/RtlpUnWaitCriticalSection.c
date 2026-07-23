/*
 * XREFs of RtlpUnWaitCriticalSection @ 0x18013C320
 * Callers:
 *     <none>
 * Callees:
 *     RtlpCreateDeferredCriticalSectionEvent @ 0x1800064C0 (RtlpCreateDeferredCriticalSectionEvent.c)
 *     RtlRaiseStatus @ 0x18007C3F0 (RtlRaiseStatus.c)
 *     ZwSetEventEx @ 0x180166630 (ZwSetEventEx.c)
 */

NTSTATUS __fastcall RtlpUnWaitCriticalSection(__int64 a1)
{
  HANDLE DeferredCriticalSectionEvent; // rax
  NTSTATUS result; // eax
  signed __int32 v4[10]; // [rsp+0h] [rbp-28h] BYREF

  DeferredCriticalSectionEvent = *(HANDLE *)(a1 + 24);
  if ( !DeferredCriticalSectionEvent )
    DeferredCriticalSectionEvent = RtlpCreateDeferredCriticalSectionEvent(a1);
  if ( DeferredCriticalSectionEvent == (HANDLE)-1LL )
  {
    _InterlockedOr(v4, 0);
    return RtlpWakeByAddress(a1 + 8, 0, a1);
  }
  else
  {
    result = ZwSetEventEx(DeferredCriticalSectionEvent, 0LL, a1);
    if ( result < 0 )
      RtlRaiseStatus(result);
  }
  return result;
}
