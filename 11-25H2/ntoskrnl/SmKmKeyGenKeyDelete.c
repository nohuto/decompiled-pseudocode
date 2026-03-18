/*
 * XREFs of SmKmKeyGenKeyDelete @ 0x14078AB78
 * Callers:
 *     SmKmKeyGenGenerate @ 0x14078AA38 (SmKmKeyGenGenerate.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     CmSiFreeMemory @ 0x14046F140 (CmSiFreeMemory.c)
 */

void __fastcall SmKmKeyGenKeyDelete(unsigned __int64 *BugCheckParameter2, PPRIVILEGE_SET Privileges)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v5; // rax
  __int64 *v6; // rbp
  __int64 v7; // rcx
  PPRIVILEGE_SET *Luid; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v5 = KeAbPreAcquire((__int64)BugCheckParameter2, 0LL);
  v6 = v5;
  if ( _interlockedbittestandset64((volatile signed __int32 *)BugCheckParameter2, 0LL) )
    ExfAcquirePushLockExclusiveEx(BugCheckParameter2, v5, (__int64)BugCheckParameter2);
  if ( v6 )
    *((_BYTE *)v6 + 10) = 1;
  v7 = *(_QWORD *)&Privileges->PrivilegeCount;
  if ( *(PPRIVILEGE_SET *)(*(_QWORD *)&Privileges->PrivilegeCount + 8LL) != Privileges
    || (Luid = (PPRIVILEGE_SET *)Privileges->Privilege[0].Luid, *Luid != Privileges) )
  {
    __fastfail(3u);
  }
  *Luid = (PPRIVILEGE_SET)v7;
  *(_QWORD *)(v7 + 8) = Luid;
  CmSiFreeMemory(Privileges);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)BugCheckParameter2);
  KeAbPostRelease((ULONG_PTR)BugCheckParameter2);
  KeLeaveCriticalRegion();
}
