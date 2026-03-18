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

__int64 __fastcall NtIsProcessInJob(ULONG_PTR a1, void *a2)
{
  struct _KTHREAD *CurrentThread; // rbx
  char PreviousMode; // si
  __int64 result; // rax
  _QWORD *p_Lock; // rbx
  NTSTATUS v8; // eax
  PVOID v9; // rdx
  unsigned int IsProcessInJob; // esi
  void *v11; // rdx
  PVOID Object; // [rsp+50h] [rbp+8h] BYREF

  CurrentThread = KeGetCurrentThread();
  Object = 0LL;
  PreviousMode = CurrentThread->PreviousMode;
  if ( a1 == -1LL )
  {
    p_Lock = &CurrentThread->ApcState.Process->Header.Lock;
    Object = p_Lock;
  }
  else
  {
    result = ObpReferenceObjectByHandleWithTag(
               a1,
               4096,
               (__int64)PsProcessType,
               PreviousMode,
               0x624A7350u,
               &Object,
               0LL,
               0LL);
    if ( (int)result < 0 )
      return result;
    p_Lock = Object;
  }
  if ( !a2 )
  {
    v9 = (PVOID)p_Lock[84];
    p_Lock = Object;
LABEL_6:
    IsProcessInJob = PspIsProcessInJob(p_Lock, v9);
    if ( a2 )
      ObfDereferenceObject(v11);
    goto LABEL_8;
  }
  Object = 0LL;
  v8 = ObReferenceObjectByHandle(a2, 4u, (POBJECT_TYPE)PsJobType, PreviousMode, &Object, 0LL);
  v9 = Object;
  IsProcessInJob = v8;
  if ( v8 >= 0 )
    goto LABEL_6;
LABEL_8:
  if ( a1 != -1LL )
    ObfDereferenceObjectWithTag(p_Lock, 0x624A7350u);
  return IsProcessInJob;
}
