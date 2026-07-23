/*
 * XREFs of SeIsTokenAssignableToProcess @ 0x140A255F4
 * Callers:
 *     PspAssignPrimaryToken @ 0x140777290 (PspAssignPrimaryToken.c)
 *     PspAllocateProcess @ 0x1409FACD0 (PspAllocateProcess.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14028AA60 (ExReleaseResourceLite.c)
 *     PsReferencePrimaryTokenWithTag @ 0x14031F4D0 (PsReferencePrimaryTokenWithTag.c)
 *     ExAcquireResourceSharedLite @ 0x140321360 (ExAcquireResourceSharedLite.c)
 *     ObFastDereferenceObject @ 0x140324D60 (ObFastDereferenceObject.c)
 *     RtlSidDominatesForTrust @ 0x1403E3BC0 (RtlSidDominatesForTrust.c)
 *     RtlSidDominates @ 0x1403EFBC0 (RtlSidDominates.c)
 *     SepCopyTokenIntegrity @ 0x140409240 (SepCopyTokenIntegrity.c)
 *     SepIsChildTokenByPointer @ 0x140A257AC (SepIsChildTokenByPointer.c)
 *     SepIsSiblingTokenByPointer @ 0x140A25848 (SepIsSiblingTokenByPointer.c)
 */

NTSTATUS __fastcall SeIsTokenAssignableToProcess(__int64 a1, char *a2)
{
  char v2; // di
  _KPROCESS *Process; // r15
  ULONG_PTR v6; // rbx
  struct _KTHREAD *CurrentThread; // rax
  void *v8; // r12
  struct _KTHREAD *v9; // rax
  int v10; // ebx
  int v11; // r15d
  void *v12; // r13
  NTSTATUS result; // eax
  char v14; // bl
  PSID Sid2[2]; // [rsp+20h] [rbp-20h] BYREF
  PSID Sid1[2]; // [rsp+30h] [rbp-10h] BYREF
  BOOLEAN Dominates; // [rsp+88h] [rbp+48h] BYREF
  char v18; // [rsp+90h] [rbp+50h] BYREF
  char v19; // [rsp+98h] [rbp+58h] BYREF

  v2 = 0;
  *a2 = 0;
  v18 = 0;
  v19 = 0;
  Dominates = 0;
  Process = KeGetCurrentThread()->ApcState.Process;
  *(_OWORD *)Sid2 = 0LL;
  *(_OWORD *)Sid1 = 0LL;
  v6 = PsReferencePrimaryTokenWithTag((__int64)Process, 0x746C6644u);
  if ( !v6 )
    return -1073741823;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(*(PERESOURCE *)(v6 + 48), 1u);
  SepCopyTokenIntegrity(v6, (__int64)Sid1);
  v8 = *(void **)(v6 + 1104);
  ExReleaseResourceLite(*(PERESOURCE *)(v6 + 48));
  KeLeaveCriticalRegion();
  ObFastDereferenceObject((__int64 *)&Process[1].ActiveProcessors, v6, 0x746C6644u);
  v9 = KeGetCurrentThread();
  --v9->KernelApcDisable;
  ExAcquireResourceSharedLite(*(PERESOURCE *)(a1 + 48), 1u);
  SepCopyTokenIntegrity(a1, (__int64)Sid2);
  v10 = *(_DWORD *)(a1 + 192);
  v11 = *(_DWORD *)(a1 + 196);
  v12 = *(void **)(a1 + 1104);
  ExReleaseResourceLite(*(PERESOURCE *)(a1 + 48));
  KeLeaveCriticalRegion();
  if ( v10 == 2 && v11 < 2 )
    return -1073741659;
  result = RtlSidDominates(Sid1[0], Sid2[0], &Dominates);
  if ( result >= 0 )
  {
    if ( !Dominates )
      goto LABEL_17;
    Dominates = 0;
    result = RtlSidDominatesForTrust(v8, v12, &Dominates);
    if ( result < 0 )
      return result;
    if ( !Dominates )
    {
LABEL_17:
      v14 = v18;
LABEL_11:
      if ( v14 || v19 )
        v2 = 1;
      *a2 = v2;
      return result;
    }
    result = SepIsChildTokenByPointer(a1, &v18);
    v14 = v18;
    if ( !v18 )
    {
      if ( result < 0 )
        return result;
      result = SepIsSiblingTokenByPointer(a1, &v19);
    }
    if ( result >= 0 )
      goto LABEL_11;
  }
  return result;
}
