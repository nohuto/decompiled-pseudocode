/*
 * XREFs of NtIsProcessInJob @ 0x140A0EFA0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     ObReferenceObjectByHandle @ 0x14084F190 (ObReferenceObjectByHandle.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x14084FA30 (ObpReferenceObjectByHandleWithTag.c)
 *     PspIsProcessInJob @ 0x140A0F0B8 (PspIsProcessInJob.c)
 */

NTSTATUS __cdecl NtIsProcessInJob(HANDLE ProcessHandle, HANDLE JobHandle)
{
  struct _KTHREAD *CurrentThread; // rbx
  char PreviousMode; // si
  NTSTATUS result; // eax
  _QWORD *p_Lock; // rbx
  NTSTATUS v8; // eax
  PVOID v9; // rdx
  NTSTATUS IsProcessInJob; // esi
  void *v11; // rdx
  PVOID Object; // [rsp+50h] [rbp+8h] BYREF

  CurrentThread = KeGetCurrentThread();
  Object = 0LL;
  PreviousMode = CurrentThread->PreviousMode;
  if ( ProcessHandle == (HANDLE)-1LL )
  {
    p_Lock = &CurrentThread->ApcState.Process->Header.Lock;
    Object = p_Lock;
  }
  else
  {
    result = ObpReferenceObjectByHandleWithTag(
               (ULONG_PTR)ProcessHandle,
               4096,
               (__int64)PsProcessType,
               PreviousMode,
               0x624A7350u,
               &Object,
               0LL,
               0LL);
    if ( result < 0 )
      return result;
    p_Lock = Object;
  }
  if ( !JobHandle )
  {
    v9 = (PVOID)p_Lock[84];
    p_Lock = Object;
LABEL_6:
    IsProcessInJob = PspIsProcessInJob(p_Lock, v9);
    if ( JobHandle )
      ObfDereferenceObject(v11);
    goto LABEL_8;
  }
  Object = 0LL;
  v8 = ObReferenceObjectByHandle(JobHandle, 4u, (POBJECT_TYPE)PsJobType, PreviousMode, &Object, 0LL);
  v9 = Object;
  IsProcessInJob = v8;
  if ( v8 >= 0 )
    goto LABEL_6;
LABEL_8:
  if ( ProcessHandle != (HANDLE)-1LL )
    ObfDereferenceObjectWithTag(p_Lock, 0x624A7350u);
  return IsProcessInJob;
}
