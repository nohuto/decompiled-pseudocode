/*
 * XREFs of MmDeleteTeb @ 0x1408D96BC
 * Callers:
 *     PspAllocateThread @ 0x1408FAFD4 (PspAllocateThread.c)
 *     PspInsertThread @ 0x1408FBFD4 (PspInsertThread.c)
 *     PspExitThread @ 0x1408FDFF0 (PspExitThread.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x1402CAA50 (KiUnstackDetachProcess.c)
 *     KeStackAttachProcess @ 0x1402E1C90 (KeStackAttachProcess.c)
 *     MiObtainReferencedVadEx @ 0x140344D30 (MiObtainReferencedVadEx.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     MiFreeToSubAllocatedRegion @ 0x1408D9778 (MiFreeToSubAllocatedRegion.c)
 */

__int64 __fastcall MmDeleteTeb(struct _KPROCESS *a1, unsigned __int64 a2)
{
  __int64 v3; // r9
  void *v4; // rax
  __int64 v5; // r8
  __int64 v6; // r9
  int v8; // [rsp+20h] [rbp-48h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+28h] [rbp-40h] BYREF

  v8 = 0;
  memset(&ApcState, 0, sizeof(ApcState));
  KeStackAttachProcess(a1, &ApcState);
  v4 = (void *)MiObtainReferencedVadEx(a2, 0LL, &v8, v3);
  if ( v4 )
    MiFreeToSubAllocatedRegion(v4);
  return KiUnstackDetachProcess((__int64)&ApcState, 0, v5, v6);
}
