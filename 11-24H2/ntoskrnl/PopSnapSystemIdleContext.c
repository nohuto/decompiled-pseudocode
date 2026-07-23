/*
 * XREFs of PopSnapSystemIdleContext @ 0x140A6E360
 * Callers:
 *     PopIdlePhaseWatchdogCallback @ 0x1404BA980 (PopIdlePhaseWatchdogCallback.c)
 *     PopArmIdlePhaseWatchdog @ 0x140A6E20C (PopArmIdlePhaseWatchdog.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1402AE8FC (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14041C564 (PopAcquireRwLockExclusive.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

__int64 __fastcall PopSnapSystemIdleContext(__int64 *a1, unsigned int *a2)
{
  __int64 Pool2; // rax
  __int64 v5; // rdx
  _OWORD *v6; // rcx
  char *v7; // rax
  __int128 v8; // xmm1
  _DWORD *v10; // rcx
  __int64 v11; // r8
  unsigned int v12; // edx

  PopAcquireRwLockExclusive((unsigned __int64 *)&PopSystemIdleLock);
  Pool2 = ExAllocatePool2(0x100uLL, 0x148uLL, 0x67696450u);
  v5 = 2LL;
  *a1 = Pool2;
  v6 = (_OWORD *)Pool2;
  v7 = &PopSystemIdleContext;
  do
  {
    *v6 = *(_OWORD *)v7;
    v6[1] = *((_OWORD *)v7 + 1);
    v6[2] = *((_OWORD *)v7 + 2);
    v6[3] = *((_OWORD *)v7 + 3);
    v6[4] = *((_OWORD *)v7 + 4);
    v6[5] = *((_OWORD *)v7 + 5);
    v6[6] = *((_OWORD *)v7 + 6);
    v6 += 8;
    v8 = *((_OWORD *)v7 + 7);
    v7 += 128;
    *(v6 - 1) = v8;
    --v5;
  }
  while ( v5 );
  *v6 = *(_OWORD *)v7;
  v6[1] = *((_OWORD *)v7 + 1);
  v6[2] = *((_OWORD *)v7 + 2);
  v6[3] = *((_OWORD *)v7 + 3);
  *((_QWORD *)v6 + 8) = *((_QWORD *)v7 + 8);
  *a2 = 0;
  if ( dword_140E0B804 )
  {
    v10 = &unk_140E0B72C;
    v11 = 4LL;
    do
    {
      if ( !*((_BYTE *)v10 - 4) )
      {
        if ( *v10 )
        {
          if ( *v10 == 1 )
            v12 = *(v10 - 3) - *(v10 - 5);
          else
            v12 = -1;
        }
        else
        {
          v12 = 0;
        }
        if ( v12 > *a2 )
          *a2 = v12;
      }
      v10 += 14;
      --v11;
    }
    while ( v11 );
  }
  return PopReleaseRwLock(&PopSystemIdleLock);
}
