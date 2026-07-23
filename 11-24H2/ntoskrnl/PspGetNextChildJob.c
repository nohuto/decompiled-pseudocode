/*
 * XREFs of PspGetNextChildJob @ 0x14085D730
 * Callers:
 *     PspEnumJobsAndProcessesInJobHierarchy @ 0x14085D4DC (PspEnumJobsAndProcessesInJobHierarchy.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14028AA60 (ExReleaseResourceLite.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     ObReferenceObjectSafeWithTag @ 0x14031DCB0 (ObReferenceObjectSafeWithTag.c)
 *     ExAcquireResourceSharedLite @ 0x140321360 (ExAcquireResourceSharedLite.c)
 *     KiCheckForKernelApcDelivery @ 0x140362C10 (KiCheckForKernelApcDelivery.c)
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
