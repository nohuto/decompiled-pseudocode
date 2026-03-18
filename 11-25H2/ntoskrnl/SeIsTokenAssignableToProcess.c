/*
 * XREFs of SeIsTokenAssignableToProcess @ 0x140A2AC34
 * Callers:
 *     PspAssignPrimaryToken @ 0x1407676A0 (PspAssignPrimaryToken.c)
 *     PspAllocateProcess @ 0x1409BE78C (PspAllocateProcess.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     ObFastDereferenceObject @ 0x1402930B0 (ObFastDereferenceObject.c)
 *     ExAcquireResourceSharedLite @ 0x140295130 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x140296E10 (ExReleaseResourceLite.c)
 *     PsReferencePrimaryTokenWithTag @ 0x14029AE50 (PsReferencePrimaryTokenWithTag.c)
 *     RtlSidDominatesForTrust @ 0x140361640 (RtlSidDominatesForTrust.c)
 *     RtlSidDominates @ 0x1403F2890 (RtlSidDominates.c)
 *     SepCopyTokenIntegrity @ 0x14041C6A0 (SepCopyTokenIntegrity.c)
 *     SepIsChildTokenByPointer @ 0x140A2ADEC (SepIsChildTokenByPointer.c)
 *     SepIsSiblingTokenByPointer @ 0x140A2AE88 (SepIsSiblingTokenByPointer.c)
 */

__int64 __fastcall SeIsTokenAssignableToProcess(__int64 a1, char *a2)
{
  char v2; // di
  _KPROCESS *Process; // r15
  ULONG_PTR v6; // rbx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v8; // r12
  struct _KTHREAD *v9; // rax
  int v10; // ebx
  int v11; // r15d
  __int64 v12; // r13
  __int64 result; // rax
  char v14; // bl
  void *Buf2[2]; // [rsp+20h] [rbp-20h] BYREF
  void *Buf1[2]; // [rsp+30h] [rbp-10h] BYREF
  bool v17; // [rsp+88h] [rbp+48h] BYREF
  char v18; // [rsp+90h] [rbp+50h] BYREF
  char v19; // [rsp+98h] [rbp+58h] BYREF

  v2 = 0;
  *a2 = 0;
  v18 = 0;
  v19 = 0;
  v17 = 0;
  Process = KeGetCurrentThread()->ApcState.Process;
  *(_OWORD *)Buf2 = 0LL;
  *(_OWORD *)Buf1 = 0LL;
  v6 = PsReferencePrimaryTokenWithTag((__int64)Process, 0x746C6644u);
  if ( !v6 )
    return 3221225473LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(*(PERESOURCE *)(v6 + 48), 1u);
  SepCopyTokenIntegrity(v6, (__int64)Buf1);
  v8 = *(_QWORD *)(v6 + 1104);
  ExReleaseResourceLite(*(PERESOURCE *)(v6 + 48));
  KeLeaveCriticalRegion();
  ObFastDereferenceObject((__int64 *)&Process[1].ActiveProcessors, v6, 1953261124LL);
  v9 = KeGetCurrentThread();
  --v9->KernelApcDisable;
  ExAcquireResourceSharedLite(*(PERESOURCE *)(a1 + 48), 1u);
  SepCopyTokenIntegrity(a1, (__int64)Buf2);
  v10 = *(_DWORD *)(a1 + 192);
  v11 = *(_DWORD *)(a1 + 196);
  v12 = *(_QWORD *)(a1 + 1104);
  ExReleaseResourceLite(*(PERESOURCE *)(a1 + 48));
  KeLeaveCriticalRegion();
  if ( v10 == 2 && v11 < 2 )
    return 3221225637LL;
  result = RtlSidDominates((char *)Buf1[0], (char *)Buf2[0], &v17);
  if ( (int)result >= 0 )
  {
    if ( !v17 )
      goto LABEL_17;
    v17 = 0;
    result = RtlSidDominatesForTrust(v8, v12, &v17);
    if ( (int)result < 0 )
      return result;
    if ( !v17 )
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
      if ( (int)result < 0 )
        return result;
      result = SepIsSiblingTokenByPointer(a1, &v19);
    }
    if ( (int)result >= 0 )
      goto LABEL_11;
  }
  return result;
}
