/*
 * XREFs of IopThreadStart @ 0x1409D7FA0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x140325680 (ObfDereferenceObject.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     PsTerminateSystemThread @ 0x1409D8000 (PsTerminateSystemThread.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

NTSTATUS __fastcall IopThreadStart(_QWORD *a1)
{
  __int64 v1; // rdx
  __int64 v2; // r8
  __int64 v3; // r9
  PVOID Object[2]; // [rsp+20h] [rbp-38h]
  __int64 v6; // [rsp+40h] [rbp-18h]

  *(_OWORD *)Object = *(_OWORD *)a1;
  v6 = a1[2];
  ExFreePoolWithTag(a1, 0);
  guard_dispatch_icall_no_overrides(v6, v1, v2, v3);
  ObfDereferenceObject(Object[0]);
  return PsTerminateSystemThread(0);
}
