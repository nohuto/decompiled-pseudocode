/*
 * XREFs of VmTerminateMemoryProcess @ 0x14079EF00
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x140325680 (ObfDereferenceObject.c)
 *     PsTerminateMinimalProcess @ 0x140778C58 (PsTerminateMinimalProcess.c)
 *     ObReferenceObjectByHandle @ 0x14084AF40 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __fastcall VmTerminateMemoryProcess(void *a1, int a2)
{
  NTSTATUS result; // eax
  PVOID Object; // [rsp+50h] [rbp+18h] BYREF

  Object = 0LL;
  result = ObReferenceObjectByHandle(a1, 0, (POBJECT_TYPE)PsProcessType, 0, &Object, 0LL);
  if ( result >= 0 )
  {
    PsTerminateMinimalProcess((PRKPROCESS)Object, a2);
    ObfDereferenceObject(Object);
    return 0;
  }
  return result;
}
