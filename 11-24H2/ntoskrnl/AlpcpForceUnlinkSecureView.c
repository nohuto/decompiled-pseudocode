/*
 * XREFs of AlpcpForceUnlinkSecureView @ 0x140741D24
 * Callers:
 *     AlpcpCleanupProcessViews @ 0x1408A977C (AlpcpCleanupProcessViews.c)
 * Callees:
 *     KeStackAttachProcess @ 0x1402473F0 (KeStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x140321EC0 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     AlpcpDereferenceBlobEx @ 0x140890420 (AlpcpDereferenceBlobEx.c)
 *     AlpcpLockForCachedReferenceBlob @ 0x140890590 (AlpcpLockForCachedReferenceBlob.c)
 *     AlpcpUnlockBlob @ 0x140890620 (AlpcpUnlockBlob.c)
 *     MmUnsecureVirtualMemory @ 0x1408E51C0 (MmUnsecureVirtualMemory.c)
 */

__int64 __fastcall AlpcpForceUnlinkSecureView(ULONG_PTR a1)
{
  ULONG_PTR v1; // rdi
  struct _KPROCESS *v2; // rsi
  ULONG_PTR v3; // rbx
  __int64 result; // rax
  struct _KAPC_STATE ApcState; // [rsp+20h] [rbp-48h] BYREF

  v2 = *(struct _KPROCESS **)(a1 + 32);
  v3 = a1;
  v1 = *(_QWORD *)(a1 + 16);
  memset(&ApcState, 0, sizeof(ApcState));
  AlpcpLockForCachedReferenceBlob(v1);
  if ( v3 == *(_QWORD *)(v1 + 72) )
  {
    if ( *(_QWORD *)(v3 + 64) )
    {
      KeStackAttachProcess(v2, &ApcState);
      MmUnsecureVirtualMemory(*(HANDLE *)(v3 + 64));
      KiUnstackDetachProcess((__int64)&ApcState, 0);
      *(_QWORD *)(v3 + 64) = 0LL;
    }
    *(_DWORD *)(v3 + 72) |= 1u;
    *(_QWORD *)(v1 + 72) = 0LL;
    *(_DWORD *)(v3 + 72) |= 4u;
  }
  else
  {
    v3 = 0LL;
  }
  result = AlpcpUnlockBlob(v1);
  if ( v3 )
    return AlpcpDereferenceBlobEx(v3);
  return result;
}
