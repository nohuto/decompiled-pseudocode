/*
 * XREFs of AlpcpRestoreWriteAccess @ 0x140896794
 * Callers:
 *     AlpcViewDestroyProcedure @ 0x140897790 (AlpcViewDestroyProcedure.c)
 *     AlpcpExposeViewAttributeInSenderContext @ 0x14089BCC0 (AlpcpExposeViewAttributeInSenderContext.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x1402CAA50 (KiUnstackDetachProcess.c)
 *     KeStackAttachProcess @ 0x1402E1C90 (KeStackAttachProcess.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     MmUnsecureVirtualMemory @ 0x140896BF0 (MmUnsecureVirtualMemory.c)
 */

void __fastcall AlpcpRestoreWriteAccess(__int64 a1)
{
  __int64 v2; // rdi
  _KPROCESS *Process; // rsi
  struct _KPROCESS *v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
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
      KiUnstackDetachProcess((__int64)&ApcState, 0, v5, v6);
    *(_QWORD *)(a1 + 64) = 0LL;
  }
  *(_DWORD *)(a1 + 72) |= 1u;
  *(_QWORD *)(v2 + 72) = 0LL;
  *(_QWORD *)(v2 + 80) = a1;
}
