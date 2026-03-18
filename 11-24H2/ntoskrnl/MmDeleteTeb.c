/*
 * XREFs of MmDeleteTeb @ 0x1408DB490
 * Callers:
 *     PspAllocateThread @ 0x1408A49BC (PspAllocateThread.c)
 *     PspInsertThread @ 0x1408A59BC (PspInsertThread.c)
 *     PspExitThread @ 0x1408A7D90 (PspExitThread.c)
 * Callees:
 *     KeStackAttachProcess @ 0x1402473F0 (KeStackAttachProcess.c)
 *     MiObtainReferencedVadEx @ 0x1402FBE30 (MiObtainReferencedVadEx.c)
 *     KiUnstackDetachProcess @ 0x140321EC0 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     MiFreeToSubAllocatedRegion @ 0x1408DB54C (MiFreeToSubAllocatedRegion.c)
 */

__int64 __fastcall MmDeleteTeb(struct _KPROCESS *a1, unsigned __int64 a2)
{
  void *v3; // rax
  int v5; // [rsp+20h] [rbp-48h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+28h] [rbp-40h] BYREF

  v5 = 0;
  memset(&ApcState, 0, sizeof(ApcState));
  KeStackAttachProcess(a1, &ApcState);
  v3 = (void *)MiObtainReferencedVadEx(a2, 0LL, &v5);
  if ( v3 )
    MiFreeToSubAllocatedRegion(v3);
  return KiUnstackDetachProcess((__int64)&ApcState, 0);
}
