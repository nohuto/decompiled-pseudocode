/*
 * XREFs of PopShutdownListenerInsertCallback @ 0x1404CFAE0
 * Callers:
 *     NtPowerInformation @ 0x14096E740 (NtPowerInformation.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402535A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeReleaseSpinLock @ 0x1402EA780 (KeReleaseSpinLock.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 */

__int64 __fastcall PopShutdownListenerInsertCallback(_QWORD *a1)
{
  _QWORD *Pool2; // rax
  unsigned int v3; // edi
  _QWORD *v4; // rbx
  KIRQL v5; // al
  _QWORD *v6; // rcx

  Pool2 = (_QWORD *)ExAllocatePool2(0x40uLL);
  v3 = 0;
  v4 = Pool2;
  if ( Pool2 )
  {
    Pool2[2] = *a1;
    Pool2[3] = a1[1];
    Pool2[4] = a1[2];
    v5 = KeAcquireSpinLockRaiseToDpc(&PopShutdownNotificationCallbackLock);
    v6 = (_QWORD *)qword_140F07DF8;
    if ( *(PVOID **)qword_140F07DF8 != &PopShutdownNotificationCallbackList )
      __fastfail(3u);
    *v4 = &PopShutdownNotificationCallbackList;
    v4[1] = v6;
    *v6 = v4;
    qword_140F07DF8 = (__int64)v4;
    KeReleaseSpinLock(&PopShutdownNotificationCallbackLock, v5);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v3;
}
