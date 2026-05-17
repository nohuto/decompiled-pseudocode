/*
 * XREFs of RtlpCreateDeferredCriticalSectionEvent @ 0x18009AE50
 * Callers:
 *     RtlpWaitOnCriticalSection @ 0x18009A7A0 (RtlpWaitOnCriticalSection.c)
 *     RtlpUnWaitCriticalSection @ 0x18013ABB0 (RtlpUnWaitCriticalSection.c)
 * Callees:
 *     NtClose @ 0x180161E70 (NtClose.c)
 *     ZwCreateEvent @ 0x180162590 (ZwCreateEvent.c)
 */

HANDLE __fastcall RtlpCreateDeferredCriticalSectionEvent(__int64 a1)
{
  signed __int64 v1; // rdi
  signed __int64 v3; // rbx
  HANDLE Handle; // [rsp+40h] [rbp+8h] BYREF

  v1 = -1LL;
  Handle = (HANDLE)-1LL;
  if ( RtlpForceCSToUseEvents )
  {
    if ( (int)ZwCreateEvent(&Handle, 1048579LL, 0LL, 1LL, 0) >= 0 )
      v1 = (signed __int64)Handle;
    else
      Handle = (HANDLE)-1LL;
  }
  v3 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 24), v1, 0LL);
  if ( !v3 )
    return Handle;
  if ( Handle != (HANDLE)-1LL )
    NtClose(Handle);
  return (HANDLE)v3;
}
