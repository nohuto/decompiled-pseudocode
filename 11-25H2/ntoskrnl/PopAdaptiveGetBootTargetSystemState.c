/*
 * XREFs of PopAdaptiveGetBootTargetSystemState @ 0x140A8AC28
 * Callers:
 *     PopSystemIdleEventHandler @ 0x140A8ABD0 (PopSystemIdleEventHandler.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14028A9E0 (ExAcquireResourceExclusiveLite.c)
 *     PopReleaseAdaptiveLock @ 0x1409635F4 (PopReleaseAdaptiveLock.c)
 */

__int64 __fastcall PopAdaptiveGetBootTargetSystemState(_DWORD *a1, _DWORD *a2)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v5; // ebx
  __int64 v7; // rdx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&PopAdpmLock, 1u);
  v5 = 0;
  PopAdpmLockThread = (__int64)KeGetCurrentThread();
  PopAdaptiveContext = 0;
  if ( !PopAdaptiveBootContext )
    goto LABEL_2;
  *a2 = 0;
  v7 = qword_140FD7240 & 7;
  if ( (qword_140FD7240 & 7) == 1 )
  {
    *a1 = 2;
    goto LABEL_3;
  }
  if ( (qword_140FD7240 & 7) == 2
    || (qword_140FD7240 & 7) == 3
    || (qword_140FD7240 & 7) == 4
    || (unsigned int)(qword_140FD7240 & 7) - 5 <= 1 )
  {
    *a1 = 10;
    *a2 = PopAdaptiveBootstateToSystemPowerState[v7];
  }
  else
  {
LABEL_2:
    v5 = -1073741275;
  }
LABEL_3:
  PopReleaseAdaptiveLock();
  return v5;
}
