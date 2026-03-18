/*
 * XREFs of PspGetNextChildJob @ 0x1408DCB30
 * Callers:
 *     PspEnumJobsAndProcessesInJobHierarchy @ 0x1408DC8DC (PspEnumJobsAndProcessesInJobHierarchy.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     ExAcquireResourceSharedLite @ 0x140295130 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x140296E10 (ExReleaseResourceLite.c)
 *     ObReferenceObjectSafeWithTag @ 0x140299100 (ObReferenceObjectSafeWithTag.c)
 *     KiCheckForKernelApcDelivery @ 0x140320950 (KiCheckForKernelApcDelivery.c)
 */

_QWORD *__fastcall PspGetNextChildJob(__int64 a1, _QWORD *a2)
{
  struct _KTHREAD *CurrentThread; // rbx
  _QWORD *v3; // rbp
  struct _ERESOURCE *v6; // r12
  _QWORD **v7; // r14
  _QWORD *v8; // rdi

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
    if ( CurrentThread->SpecialApcDisable++ == -1
      && ($727077A9B6E167EAE1398C74674DC5A5 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    {
      KiCheckForKernelApcDelivery();
    }
  }
  if ( a2 )
    ObfDereferenceObjectWithTag(a2, 0x6E457350u);
  return v3;
}
