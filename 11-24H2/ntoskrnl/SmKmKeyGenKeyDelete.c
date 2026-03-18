/*
 * XREFs of SmKmKeyGenKeyDelete @ 0x140799F40
 * Callers:
 *     SmKmKeyGenGenerate @ 0x140799E00 (SmKmKeyGenGenerate.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     CmSiFreeMemory @ 0x14046B8D0 (CmSiFreeMemory.c)
 */

void __fastcall SmKmKeyGenKeyDelete(unsigned __int64 *BugCheckParameter2, PPRIVILEGE_SET Privileges)
{
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v5; // rax
  _QWORD *v6; // rbp
  __int64 v7; // rcx
  PPRIVILEGE_SET *Luid; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v5 = KeAbPreAcquire((__int64)BugCheckParameter2, 0LL);
  v6 = v5;
  if ( _interlockedbittestandset64((volatile signed __int32 *)BugCheckParameter2, 0LL) )
    ExfAcquirePushLockExclusiveEx(BugCheckParameter2, (__int64)v5, (__int64)BugCheckParameter2);
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
