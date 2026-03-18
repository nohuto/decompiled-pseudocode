/*
 * XREFs of SeQueryServerSiloToken @ 0x1409BB180
 * Callers:
 *     SepCreateClientSecurityEx @ 0x1408A6AF0 (SepCreateClientSecurityEx.c)
 *     SepUpdateSiloInClientSecurity @ 0x1409B977C (SepUpdateSiloInClientSecurity.c)
 *     NtCreateUserProcess @ 0x1409BC1D0 (NtCreateUserProcess.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     ExAcquireResourceSharedLite @ 0x140295130 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x140296E10 (ExReleaseResourceLite.c)
 *     PsGetSiloBySessionId @ 0x1409BB1E4 (PsGetSiloBySessionId.c)
 */

__int64 __fastcall SeQueryServerSiloToken(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v5; // ebx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(*(PERESOURCE *)(a1 + 48), 1u);
  v5 = *(_DWORD *)(a1 + 120);
  ExReleaseResourceLite(*(PERESOURCE *)(a1 + 48));
  KeLeaveCriticalRegion();
  return PsGetSiloBySessionId(v5, a2);
}
