/*
 * XREFs of PiRegisterKernelSoftRestartNotification @ 0x140727DA0
 * Callers:
 *     IoRegisterPlugPlayNotification @ 0x14096BD60 (IoRegisterPlugPlayNotification.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140286F40 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14029C580 (ExAcquireFastMutex.c)
 *     PnpDeferNotification @ 0x14096A28C (PnpDeferNotification.c)
 *     PnpInitializeNotifyEntry @ 0x140A30D60 (PnpInitializeNotifyEntry.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiRegisterKernelSoftRestartNotification(__int64 a1, int a2, int a3, _QWORD *a4)
{
  int v8; // ebx
  __int64 Pool2; // rax
  _QWORD *v10; // rdi
  _QWORD *v11; // rax

  if ( PnpKsrEnabled )
  {
    if ( !PnpKsrPrepared || PnpKsrIsHhrPrepare )
    {
      Pool2 = ExAllocatePool2(0x100uLL);
      v10 = (_QWORD *)Pool2;
      if ( Pool2 )
      {
        v8 = PnpInitializeNotifyEntry(Pool2, 4, a2, a3, a1, (__int64)&PnpKsrNotifyLock);
        if ( v8 < 0 || (v8 = PnpDeferNotification(v10), v8 < 0) )
        {
          ExFreePoolWithTag(v10, 0x61706E50u);
        }
        else
        {
          ExAcquireFastMutex(&PnpKsrNotifyLock);
          v11 = (_QWORD *)qword_140F89338;
          if ( *(PVOID **)qword_140F89338 != &PnpKsrNotifyList )
            __fastfail(3u);
          *v10 = &PnpKsrNotifyList;
          v10[1] = v11;
          *v11 = v10;
          qword_140F89338 = (__int64)v10;
          KeReleaseGuardedMutex(&PnpKsrNotifyLock);
          *a4 = v10;
        }
      }
      else
      {
        return (unsigned int)-1073741670;
      }
    }
    else
    {
      return (unsigned int)-1073741058;
    }
  }
  else
  {
    return (unsigned int)-1073741637;
  }
  return (unsigned int)v8;
}
