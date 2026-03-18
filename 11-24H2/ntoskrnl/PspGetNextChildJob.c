/*
 * XREFs of PspGetNextChildJob @ 0x1408EBF00
 * Callers:
 *     PspEnumJobsAndProcessesInJobHierarchy @ 0x1408EBCAC (PspEnumJobsAndProcessesInJobHierarchy.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14025A450 (ExReleaseResourceLite.c)
 *     KiCheckForKernelApcDelivery @ 0x1402BB4D0 (KiCheckForKernelApcDelivery.c)
 *     ObfDereferenceObjectWithTag @ 0x1403254A0 (ObfDereferenceObjectWithTag.c)
 *     ObReferenceObjectSafeWithTag @ 0x14033E7D0 (ObReferenceObjectSafeWithTag.c)
 *     ExAcquireResourceSharedLite @ 0x140341E80 (ExAcquireResourceSharedLite.c)
 */

_QWORD *__fastcall PspGetNextChildJob(__int64 a1, _QWORD *a2)
{
  struct _KTHREAD *CurrentThread; // rbx
  _QWORD *v3; // rbp
  struct _ERESOURCE *v6; // r12
  _QWORD **v7; // r14
  _QWORD *v8; // rdi
  __int64 v9; // rdx
  $81B80DCEA5A02D890AB7B2872B48AC01 *v11; // rcx

  CurrentThread = KeGetCurrentThread();
  v3 = 0LL;
  if ( CurrentThread )
    --CurrentThread->SpecialApcDisable;
  v6 = (struct _ERESOURCE *)(a1 + 56);
  ExAcquireResourceSharedLite((PERESOURCE)(a1 + 56), 1u);
  v7 = (_QWORD **)(a1 + 1288);
  if ( a2 )
    v8 = (_QWORD *)a2[159];
  else
    v8 = *v7;
  while ( v8 != v7 )
  {
    if ( ObReferenceObjectSafeWithTag((__int64)(v8 - 159), 0x6E457350u) )
    {
      v3 = v8 - 159;
      break;
    }
    v8 = (_QWORD *)*v8;
  }
  ExReleaseResourceLite(v6);
  if ( CurrentThread )
  {
    if ( CurrentThread->SpecialApcDisable++ == -1 )
    {
      v11 = &CurrentThread->152;
      if ( ($81B80DCEA5A02D890AB7B2872B48AC01 *)v11->ApcState.ApcListHead[0].Flink != v11 )
        KiCheckForKernelApcDelivery((__int64)v11, v9);
    }
  }
  if ( a2 )
    ObfDereferenceObjectWithTag(a2, 0x6E457350u);
  return v3;
}
