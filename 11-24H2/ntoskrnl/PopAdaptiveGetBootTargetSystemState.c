/*
 * XREFs of PopAdaptiveGetBootTargetSystemState @ 0x1409A0B28
 * Callers:
 *     PopSystemIdleEventHandler @ 0x1409A0AD0 (PopSystemIdleEventHandler.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14022BF50 (ExAcquireResourceExclusiveLite.c)
 *     PopReleaseAdaptiveLock @ 0x1409A183C (PopReleaseAdaptiveLock.c)
 */

__int64 __fastcall PopAdaptiveGetBootTargetSystemState(_DWORD *a1, _DWORD *a2)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v5; // rdx
  _DWORD *v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned int v9; // ebx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&PopAdpmLock, 1u);
  v9 = 0;
  PopAdpmLockThread = (__int64)KeGetCurrentThread();
  PopAdaptiveContext = 0;
  if ( !PopAdaptiveBootContext )
    goto LABEL_2;
  *a2 = 0;
  v5 = qword_140FD81F0 & 7;
  v6 = (_DWORD *)((unsigned int)(qword_140FD81F0 & 7) - 1);
  if ( (qword_140FD81F0 & 7) == 1 )
  {
    *a1 = 2;
    goto LABEL_3;
  }
  if ( (qword_140FD81F0 & 7) == 2
    || (qword_140FD81F0 & 7) == 3
    || (qword_140FD81F0 & 7) == 4
    || (v6 = (_DWORD *)((unsigned int)(qword_140FD81F0 & 7) - 5), (unsigned int)v6 <= 1) )
  {
    v6 = PopAdaptiveBootstateToSystemPowerState;
    *a1 = 10;
    *a2 = PopAdaptiveBootstateToSystemPowerState[v5];
  }
  else
  {
LABEL_2:
    v9 = -1073741275;
  }
LABEL_3:
  PopReleaseAdaptiveLock(v6, v5, v7, v8, 0LL);
  return v9;
}
