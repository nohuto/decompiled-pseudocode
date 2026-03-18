/*
 * XREFs of SeTokenGetRedirectionTrustPolicy @ 0x14048DA00
 * Callers:
 *     IoCheckRedirectionTrustLevel @ 0x14047A880 (IoCheckRedirectionTrustLevel.c)
 *     PspGetRedirectionTrustPolicy @ 0x1408BA06C (PspGetRedirectionTrustPolicy.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     ExAcquireResourceSharedLite @ 0x140295130 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x140296E10 (ExReleaseResourceLite.c)
 */

bool __fastcall SeTokenGetRedirectionTrustPolicy(__int64 a1, bool *a2, bool *a3)
{
  struct _KTHREAD *CurrentThread; // rax
  int v7; // edi
  bool result; // al

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(*(PERESOURCE *)(a1 + 48), 1u);
  v7 = *(_DWORD *)(a1 + 200);
  ExReleaseResourceLite(*(PERESOURCE *)(a1 + 48));
  KeLeaveCriticalRegion();
  result = (v7 & 0x400000) != 0;
  *a2 = result;
  *a3 = (v7 & 0x800000) != 0;
  return result;
}
