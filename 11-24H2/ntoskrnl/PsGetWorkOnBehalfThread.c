/*
 * XREFs of PsGetWorkOnBehalfThread @ 0x140432F80
 * Callers:
 *     NtAlpcImpersonateClientContainerOfPort @ 0x1407418D0 (NtAlpcImpersonateClientContainerOfPort.c)
 *     NtQueryInformationThread @ 0x1409A7C80 (NtQueryInformationThread.c)
 *     AlpcpCaptureWorkOnBehalfAttribute @ 0x1409C4310 (AlpcpCaptureWorkOnBehalfAttribute.c)
 * Callees:
 *     ExReleaseSpinLockShared @ 0x140246D40 (ExReleaseSpinLockShared.c)
 *     ExAcquireSpinLockShared @ 0x14031A1A0 (ExAcquireSpinLockShared.c)
 *     ObfReferenceObjectWithTag @ 0x1403403E0 (ObfReferenceObjectWithTag.c)
 */

PVOID __fastcall PsGetWorkOnBehalfThread(struct _KTHREAD *a1, _DWORD *a2)
{
  PVOID result; // rax
  KIRQL v5; // al
  PVOID Object; // rbx
  KIRQL v7; // si

  result = a1[1].WaitBlock[1].Object;
  *a2 = 0;
  if ( result && a1 != KeGetCurrentThread() )
  {
    v5 = ExAcquireSpinLockShared(&PspThreadWorkOnBehalfLock);
    Object = a1[1].WaitBlock[1].Object;
    v7 = v5;
    if ( Object )
    {
      ObfReferenceObjectWithTag(Object, 0x746C6644u);
      *a2 = 1;
    }
    ExReleaseSpinLockShared(&PspThreadWorkOnBehalfLock, v7);
    return Object;
  }
  return result;
}
