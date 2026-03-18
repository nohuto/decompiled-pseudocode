/*
 * XREFs of MmDeleteTeb @ 0x1408F6330
 * Callers:
 *     PspInsertThread @ 0x1408F1D7C (PspInsertThread.c)
 *     PspAllocateThread @ 0x1408F2828 (PspAllocateThread.c)
 *     PspExitThread @ 0x1408F49D0 (PspExitThread.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140289470 (KiUnstackDetachProcess.c)
 *     MiObtainReferencedVadEx @ 0x1402A7A60 (MiObtainReferencedVadEx.c)
 *     KeStackAttachProcess @ 0x140348CD0 (KeStackAttachProcess.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     MiFreeToSubAllocatedRegion @ 0x1408F63EC (MiFreeToSubAllocatedRegion.c)
 */

__int64 __fastcall MmDeleteTeb(struct _KPROCESS *a1, unsigned __int64 a2)
{
  void *v3; // rax
  int v5; // [rsp+20h] [rbp-48h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+28h] [rbp-40h] BYREF

  v5 = 0;
  memset(&ApcState, 0, sizeof(ApcState));
  KeStackAttachProcess(a1, &ApcState);
  v3 = (void *)MiObtainReferencedVadEx(a2, 0, &v5);
  if ( v3 )
    MiFreeToSubAllocatedRegion(v3);
  return KiUnstackDetachProcess((__int64)&ApcState, 0LL);
}
