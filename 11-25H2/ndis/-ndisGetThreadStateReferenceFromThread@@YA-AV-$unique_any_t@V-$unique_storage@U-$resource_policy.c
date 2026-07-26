/*
 * XREFs of ?ndisGetThreadStateReferenceFromThread@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUNDIS_THREAD_STATE@@$$A6A_JPEAX@Z$1?ObfDereferenceObject@@YA_J0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@PEAU_ETHREAD@@@Z @ 0x1400EBA68
 * Callers:
 *     NdisRegisterUserThreadExitCallback @ 0x1400EB2D0 (NdisRegisterUserThreadExitCallback.c)
 *     NdisUnregisterUserThreadExitCallback @ 0x1400EB720 (NdisUnregisterUserThreadExitCallback.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall ndisGetThreadStateReferenceFromThread(_QWORD *a1, struct _KTHREAD *a2)
{
  PVOID ThreadProperty; // rax

  ThreadProperty = PsGetThreadProperty(a2, 0x53544345uLL, 1u);
  if ( ThreadProperty )
    *a1 = ThreadProperty;
  else
    *a1 = 0LL;
  return a1;
}
