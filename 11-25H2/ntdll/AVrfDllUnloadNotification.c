/*
 * XREFs of AVrfDllUnloadNotification @ 0x18011BEB0
 * Callers:
 *     LdrpUnloadNode @ 0x1800465A0 (LdrpUnloadNode.c)
 * Callees:
 *     DbgPrint @ 0x1800586D0 (DbgPrint.c)
 *     RtlEnterCriticalSection @ 0x18007BF00 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18007C000 (RtlLeaveCriticalSection.c)
 *     AVrfpIsVerifierProviderDll @ 0x1800ED09C (AVrfpIsVerifierProviderDll.c)
 *     AVrfpDllUnloadNotificationInternal @ 0x18011A4A8 (AVrfpDllUnloadNotificationInternal.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

struct _PEB *__fastcall AVrfDllUnloadNotification(__int64 a1)
{
  struct _PEB *result; // rax
  __int64 *v3; // rbx
  void (__fastcall *v4)(_QWORD, _QWORD, _QWORD, __int64); // rax

  result = NtCurrentPeb();
  if ( (result->NtGlobalFlag & 0x100) != 0 && AVrfpEnabled )
  {
    RtlEnterCriticalSection((__int64)&AVrfpVerifierLock);
    if ( AVrfpIsVerifierProviderDll(*(_QWORD *)(a1 + 48)) )
    {
      DbgPrint("AVRF: AVrfDllUnloadNotification called for a provider (%p) \n", (const void *)a1);
      __debugbreak();
    }
    if ( (int)AVrfpDllUnloadNotificationInternal(a1) >= 0 )
    {
      v3 = (__int64 *)AVrfpVerifierProvidersList;
      while ( v3 != &AVrfpVerifierProvidersList )
      {
        v4 = (void (__fastcall *)(_QWORD, _QWORD, _QWORD, __int64))v3[7];
        v3 = (__int64 *)*v3;
        if ( v4 )
          v4(*(_QWORD *)(a1 + 96), *(_QWORD *)(a1 + 48), *(unsigned int *)(a1 + 64), a1);
      }
    }
    return (struct _PEB *)RtlLeaveCriticalSection((__int64)&AVrfpVerifierLock);
  }
  return result;
}
