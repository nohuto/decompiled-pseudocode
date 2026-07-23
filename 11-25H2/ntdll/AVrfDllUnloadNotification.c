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

int __fastcall AVrfDllUnloadNotification(__int64 a1)
{
  struct _PEB *v1; // rax
  __int64 *v3; // rbx
  void (__fastcall *v4)(_QWORD, _QWORD, _QWORD, __int64); // rax

  v1 = NtCurrentPeb();
  if ( (v1->NtGlobalFlag & 0x100) != 0 && AVrfpEnabled )
  {
    RtlEnterCriticalSection(&AVrfpVerifierLock);
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
    LODWORD(v1) = RtlLeaveCriticalSection(&AVrfpVerifierLock);
  }
  return (int)v1;
}
