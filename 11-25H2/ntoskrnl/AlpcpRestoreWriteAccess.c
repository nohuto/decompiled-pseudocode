/*
 * XREFs of AlpcpRestoreWriteAccess @ 0x1408B4984
 * Callers:
 *     AlpcpExposeViewAttributeInSenderContext @ 0x1408AA7F0 (AlpcpExposeViewAttributeInSenderContext.c)
 *     AlpcViewDestroyProcedure @ 0x1408B3AF0 (AlpcViewDestroyProcedure.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140289470 (KiUnstackDetachProcess.c)
 *     KeStackAttachProcess @ 0x140348CD0 (KeStackAttachProcess.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     MmUnsecureVirtualMemory @ 0x1408B48C0 (MmUnsecureVirtualMemory.c)
 */

void __fastcall AlpcpRestoreWriteAccess(__int64 a1)
{
  __int64 v2; // rdi
  _KPROCESS *Process; // rsi
  struct _KPROCESS *v4; // rcx
  struct _KAPC_STATE ApcState; // [rsp+20h] [rbp-48h] BYREF

  memset(&ApcState, 0, sizeof(ApcState));
  v2 = *(_QWORD *)(a1 + 16);
  Process = KeGetCurrentThread()->ApcState.Process;
  if ( *(_QWORD *)(a1 + 64) )
  {
    v4 = *(struct _KPROCESS **)(a1 + 32);
    if ( v4 != Process )
      KeStackAttachProcess(v4, &ApcState);
    MmUnsecureVirtualMemory(*(HANDLE *)(a1 + 64));
    if ( *(_KPROCESS **)(a1 + 32) != Process )
      KiUnstackDetachProcess((__int64)&ApcState, 0LL);
    *(_QWORD *)(a1 + 64) = 0LL;
  }
  *(_DWORD *)(a1 + 72) |= 1u;
  *(_QWORD *)(v2 + 72) = 0LL;
  *(_QWORD *)(v2 + 80) = a1;
}
