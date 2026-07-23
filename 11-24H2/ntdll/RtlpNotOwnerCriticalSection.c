/*
 * XREFs of RtlpNotOwnerCriticalSection @ 0x180041700
 * Callers:
 *     LdrpAddUnicodeStringToSnapsBuffer @ 0x180040ED0 (LdrpAddUnicodeStringToSnapsBuffer.c)
 *     RtlLeaveCriticalSection @ 0x1800413F0 (RtlLeaveCriticalSection.c)
 * Callees:
 *     RtlRaiseStatus @ 0x1800417E0 (RtlRaiseStatus.c)
 *     RtlDecodePointer @ 0x180046E40 (RtlDecodePointer.c)
 *     DbgPrintEx @ 0x180074670 (DbgPrintEx.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180171020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_PEB_LDR_DATA *__fastcall RtlpNotOwnerCriticalSection(_RTL_CRITICAL_SECTION *a1)
{
  _PEB_LDR_DATA *result; // rax
  struct _TEB *v2; // rdx
  __int64 WowTebOffset; // rax

  result = NtCurrentPeb()->Ldr;
  if ( !result->ShutdownInProgress
    || a1 == &LdrpLoaderLock && result->ShutdownThreadId != NtCurrentTeb()->ClientId.UniqueThread )
  {
    if ( !UseWOW64 )
      goto LABEL_16;
    v2 = NtCurrentTeb();
    WowTebOffset = v2->WowTebOffset;
    if ( (_DWORD)WowTebOffset )
    {
      if ( (int)WowTebOffset >= 0 )
        v2 = (struct _TEB *)((char *)v2 + WowTebOffset);
    }
    else
    {
      v2 = 0LL;
    }
    result = (_PEB_LDR_DATA *)LODWORD(v2->NtTib.Self);
    if ( !HIDWORD(result->SsHandle) || !*(_BYTE *)(HIDWORD(result->SsHandle) + 0x28LL) )
    {
LABEL_16:
      if ( NtCurrentPeb()->BeingDebugged )
      {
        DbgPrintEx(
          0x65u,
          0,
          "NTDLL: Calling thread (%p) not owner of CritSect: %p  Owner ThreadId: %p\n",
          NtCurrentTeb()->ClientId.UniqueThread,
          a1,
          a1->OwningThread);
        __debugbreak();
      }
      RtlDecodePointer(RtlpUnhandledExceptionFilter);
      RtlRaiseStatus(-1073741212);
    }
  }
  return result;
}
