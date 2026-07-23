/*
 * XREFs of RtlpUnWaitCriticalSection @ 0x180138DE0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpCreateDeferredCriticalSectionEvent @ 0x18002FCA0 (RtlpCreateDeferredCriticalSectionEvent.c)
 *     RtlRaiseStatus @ 0x1800417E0 (RtlRaiseStatus.c)
 *     ZwSetEventEx @ 0x180163460 (ZwSetEventEx.c)
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
