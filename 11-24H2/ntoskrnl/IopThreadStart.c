/*
 * XREFs of IopThreadStart @ 0x1409D1690
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     PsTerminateSystemThread @ 0x1409D16F0 (PsTerminateSystemThread.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

NTSTATUS __fastcall IopThreadStart(_QWORD *a1)
{
  __int64 v1; // rdx
  PVOID Object[2]; // [rsp+20h] [rbp-38h]
  __int64 v4; // [rsp+40h] [rbp-18h]

  *(_OWORD *)Object = *(_OWORD *)a1;
  v4 = a1[2];
  ExFreePoolWithTag(a1, 0);
  guard_dispatch_icall_no_overrides(v4, v1);
  ObfDereferenceObject(Object[0]);
  return PsTerminateSystemThread(0);
}
