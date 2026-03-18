/*
 * XREFs of SeTokenSetRedirectionTrustPolicy @ 0x140497B08
 * Callers:
 *     PspSetRedirectionTrustPolicy @ 0x140A62D9C (PspSetRedirectionTrustPolicy.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     ExAcquireResourceExclusiveLite @ 0x14028A9E0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x140296E10 (ExReleaseResourceLite.c)
 */

void __fastcall SeTokenSetRedirectionTrustPolicy(__int64 a1, char a2)
{
  struct _KTHREAD *CurrentThread; // rax
  int v5; // eax
  unsigned int v6; // eax
  signed __int32 v7[10]; // [rsp+0h] [rbp-28h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(*(PERESOURCE *)(a1 + 48), 1u);
  _InterlockedOr(v7, 0);
  v5 = *(_DWORD *)(a1 + 200);
  if ( a2 )
    v6 = v5 & 0xFF3FFFFF | 0x800000;
  else
    v6 = v5 & 0xFF3FFFFF | 0x400000;
  *(_DWORD *)(a1 + 200) = v6;
  *(_QWORD *)(a1 + 56) = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
  _InterlockedOr(v7, 0);
  ExReleaseResourceLite(*(PERESOURCE *)(a1 + 48));
  KeLeaveCriticalRegion();
}
