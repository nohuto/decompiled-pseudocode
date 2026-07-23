/*
 * XREFs of PsGetWorkOnBehalfThread @ 0x1404250C0
 * Callers:
 *     NtAlpcImpersonateClientContainerOfPort @ 0x14073F800 (NtAlpcImpersonateClientContainerOfPort.c)
 *     NtQueryInformationThread @ 0x1409910D0 (NtQueryInformationThread.c)
 *     AlpcpCaptureWorkOnBehalfAttribute @ 0x1409C1630 (AlpcpCaptureWorkOnBehalfAttribute.c)
 * Callees:
 *     ExReleaseSpinLockShared @ 0x1402195E0 (ExReleaseSpinLockShared.c)
 *     ExAcquireSpinLockShared @ 0x1402C2D30 (ExAcquireSpinLockShared.c)
 *     ObfReferenceObjectWithTag @ 0x14031F8C0 (ObfReferenceObjectWithTag.c)
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
