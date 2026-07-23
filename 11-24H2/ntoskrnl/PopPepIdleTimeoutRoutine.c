/*
 * XREFs of PopPepIdleTimeoutRoutine @ 0x140447B60
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExfReleasePushLockShared @ 0x14028E410 (ExfReleasePushLockShared.c)
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 *     PopPepUpdateIdleState @ 0x1402BF8D0 (PopPepUpdateIdleState.c)
 *     PopPepRequestWork @ 0x1402BFC80 (PopPepRequestWork.c)
 *     PopPepPromoteActivities @ 0x1402C2120 (PopPepPromoteActivities.c)
 *     PopPepArmIdleTimer @ 0x1402E6CD8 (PopPepArmIdleTimer.c)
 *     ExReleaseSpinLockExclusive @ 0x1402E6E40 (ExReleaseSpinLockExclusive.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14031F9EC (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     PopPepComponentGetResidencyIdleState @ 0x140447D50 (PopPepComponentGetResidencyIdleState.c)
 */

void PopPepIdleTimeoutRoutine()
{
  __int64 v0; // rbx
  struct _KTHREAD *CurrentThread; // rax
  char *v2; // rdi
  __int64 i; // rdi
  KIRQL v4; // r15
  unsigned int v5; // ecx
  unsigned int v6; // esi
  _DWORD *v7; // rax
  __int64 v8; // rdx
  unsigned int v9; // ebp
  __int64 v10; // r10
  __int64 v11; // rcx
  unsigned int v12; // r8d
  _DWORD *v13; // rax
  __int64 v14; // rax
  int ResidencyIdleState; // eax
  __int64 v16; // r10

  v0 = MEMORY[0xFFFFF78000000008];
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v2 = (char *)KeAbPreAcquire((__int64)&PopPepDeviceListLock, 0LL);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopPepDeviceListLock, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx((signed __int64 *)&PopPepDeviceListLock, 0, v2, (__int64)&PopPepDeviceListLock);
  if ( v2 )
    v2[10] = 1;
  for ( i = PopPepDeviceList; (__int64 *)i != &PopPepDeviceList; i = *(_QWORD *)i )
  {
    if ( (*(_BYTE *)(i + 16) & 1) == 0 )
    {
      v4 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(i + 64));
      if ( *(_BYTE *)(i + 136) )
      {
        v5 = *(_DWORD *)(i + 180);
        v6 = *(_DWORD *)(i + 120);
        if ( v5 )
        {
          v7 = (_DWORD *)(i + 296);
          v8 = v5;
          do
          {
            v6 += *v7;
            v7 += 52;
            --v8;
          }
          while ( v8 );
          v9 = 0;
          do
          {
            v10 = i + 208LL * v9 + 192;
            if ( *(_DWORD *)(v10 + 176) != *(_DWORD *)(v10 + 188) - 1
              && !**(_DWORD **)(v10 + 72)
              && !**(_DWORD **)(v10 + 80) )
            {
              v14 = *(_QWORD *)(v10 + 136);
              if ( v0 > v14 && (unsigned __int64)(v0 - v14) > *(_QWORD *)(v10 + 120) )
              {
                *(_QWORD *)(v10 + 120) = v0 - v14;
                ResidencyIdleState = PopPepComponentGetResidencyIdleState(i + 208LL * v9 + 192);
                if ( *(_DWORD *)(v16 + 160) != ResidencyIdleState )
                {
                  *(_DWORD *)(v16 + 160) = ResidencyIdleState;
                  PopPepUpdateIdleState(i, v16, 1);
                }
              }
            }
            ++v9;
          }
          while ( v9 < *(_DWORD *)(i + 180) );
        }
        PopPepPromoteActivities(i, 0LL, 3);
        v11 = *(unsigned int *)(i + 180);
        v12 = *(_DWORD *)(i + 120);
        if ( (_DWORD)v11 )
        {
          v13 = (_DWORD *)(i + 296);
          do
          {
            v12 += *v13;
            v13 += 52;
            --v11;
          }
          while ( v11 );
        }
        PopPepRequestWork(i, v6, v12);
      }
      ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(i + 64), v4);
    }
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopPepDeviceListLock, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&PopPepDeviceListLock);
  KeAbPostRelease((ULONG_PTR)&PopPepDeviceListLock);
  KeLeaveCriticalRegion();
  PopPepArmIdleTimer(1);
}
