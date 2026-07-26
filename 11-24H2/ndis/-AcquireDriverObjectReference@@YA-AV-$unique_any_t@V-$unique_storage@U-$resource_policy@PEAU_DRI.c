/*
 * XREFs of ?AcquireDriverObjectReference@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_DRIVER_OBJECT@@$$A6A_JPEAX@Z$1?ObfDereferenceObject@@YA_J0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@PEAU_DRIVER_OBJECT@@@Z @ 0x1400E4030
 * Callers:
 *     NdisRegisterUserThreadExitCallback @ 0x1400E40C0 (NdisRegisterUserThreadExitCallback.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall AcquireDriverObjectReference(_QWORD *a1, void *a2)
{
  ObfReferenceObject(a2);
  *a1 = a2;
  return a1;
}
