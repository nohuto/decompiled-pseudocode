/*
 * XREFs of IopThreadStart @ 0x14098F330
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     PsTerminateSystemThread @ 0x14098F390 (PsTerminateSystemThread.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

NTSTATUS __fastcall IopThreadStart(_QWORD *a1)
{
  PVOID Object[2]; // [rsp+20h] [rbp-38h]
  __int64 v3; // [rsp+40h] [rbp-18h]

  *(_OWORD *)Object = *(_OWORD *)a1;
  v3 = a1[2];
  ExFreePoolWithTag(a1, 0);
  guard_dispatch_icall_no_overrides(v3);
  ObfDereferenceObject(Object[0]);
  return PsTerminateSystemThread(0);
}
