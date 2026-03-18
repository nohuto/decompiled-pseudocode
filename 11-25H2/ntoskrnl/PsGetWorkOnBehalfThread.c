/*
 * XREFs of PsGetWorkOnBehalfThread @ 0x1404365B0
 * Callers:
 *     NtAlpcImpersonateClientContainerOfPort @ 0x1407358B0 (NtAlpcImpersonateClientContainerOfPort.c)
 *     NtQueryInformationThread @ 0x1409C32F0 (NtQueryInformationThread.c)
 *     AlpcpCaptureWorkOnBehalfAttribute @ 0x1409CE840 (AlpcpCaptureWorkOnBehalfAttribute.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x14029B2A0 (ObfReferenceObjectWithTag.c)
 *     ExAcquireSpinLockShared @ 0x1402BBA30 (ExAcquireSpinLockShared.c)
 *     ExReleaseSpinLockShared @ 0x14035E450 (ExReleaseSpinLockShared.c)
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
