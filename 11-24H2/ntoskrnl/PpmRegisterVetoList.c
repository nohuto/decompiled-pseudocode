/*
 * XREFs of PpmRegisterVetoList @ 0x14074AA60
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x1403B5EC8 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1404283D4 (PopAcquireRwLockExclusive.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 */

__int64 __fastcall PpmRegisterVetoList(unsigned int *a1)
{
  unsigned int v2; // ebx
  __int64 v3; // rdi
  _DWORD *Pool2; // rax
  _OWORD *v5; // rdx
  __int64 v6; // r9
  __int128 *v7; // r8
  __int128 v8; // xmm0

  PopAcquireRwLockExclusive(&PpmIdlePolicyLock);
  v2 = 0;
  if ( PpmIdleVetoList )
  {
    v2 = -1073741431;
  }
  else
  {
    v3 = *a1;
    Pool2 = (_DWORD *)ExAllocatePool2(0x40uLL);
    if ( Pool2 )
    {
      if ( (_DWORD)v3 )
      {
        v5 = Pool2 + 4;
        v6 = v3;
        v7 = (__int128 *)(a1 + 2);
        do
        {
          v8 = *v7++;
          *v5 = v8;
          v5 = (_OWORD *)((char *)v5 + 24);
          --v6;
        }
        while ( v6 );
      }
      *Pool2 = v3;
      Pool2[1] = v3;
      PpmIdleVetoList = Pool2;
    }
    else
    {
      v2 = -1073741670;
    }
  }
  PopReleaseRwLock((signed __int64 *)&PpmIdlePolicyLock);
  return v2;
}
