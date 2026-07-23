/*
 * XREFs of sub_14091F638 @ 0x14091F638
 * Callers:
 *     sub_14091E6EC @ 0x14091E6EC (sub_14091E6EC.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     KeLeaveGuardedRegion @ 0x140362BA0 (KeLeaveGuardedRegion.c)
 *     sub_14091BDAC @ 0x14091BDAC (sub_14091BDAC.c)
 *     sub_14091DB84 @ 0x14091DB84 (sub_14091DB84.c)
 */

void __fastcall sub_14091F638(unsigned __int64 *a1, int a2)
{
  int v4; // eax
  struct _KTHREAD *CurrentThread; // rax
  char *v6; // rax
  char *v7; // rbx
  char *v8; // rax
  char *v9; // rbx
  unsigned __int64 *v10; // rcx
  unsigned __int64 *v11; // rax
  unsigned __int64 v12; // rdx
  __int64 v13; // rbx

  while ( 1 )
  {
    v4 = a2--;
    if ( v4 <= 0 )
      break;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
    v6 = (char *)KeAbPreAcquire((__int64)(a1 + 6), 0LL);
    v7 = v6;
    if ( _interlockedbittestandset64((volatile signed __int32 *)a1 + 12, 0LL) )
      ExfAcquirePushLockExclusiveEx(a1 + 6, v6, (__int64)(a1 + 6));
    if ( v7 )
      v7[10] = 1;
    v8 = (char *)KeAbPreAcquire((__int64)(a1 + 10), 0LL);
    v9 = v8;
    if ( _interlockedbittestandset64((volatile signed __int32 *)a1 + 20, 0LL) )
      ExfAcquirePushLockExclusiveEx(a1 + 10, v8, (__int64)(a1 + 10));
    if ( v9 )
      v9[10] = 1;
    v10 = a1 + 8;
    v11 = (unsigned __int64 *)a1[8];
    if ( v11 == a1 + 8 )
    {
      v13 = 0LL;
    }
    else
    {
      if ( (unsigned __int64 *)v11[1] != v10 || (v12 = *v11, *(unsigned __int64 **)(*v11 + 8) != v11) )
        __fastfail(3u);
      v13 = 0LL;
      *v10 = v12;
      *(_QWORD *)(v12 + 8) = v10;
      if ( v11 )
      {
        *((_DWORD *)v11 + 4) &= ~1u;
        v13 = (__int64)v11;
      }
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)a1 + 10, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)a1 + 10);
    KeAbPostRelease((ULONG_PTR)(a1 + 10));
    if ( v13 )
      sub_14091BDAC((__int64)a1, v13);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)a1 + 6, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)a1 + 6);
    KeAbPostRelease((ULONG_PTR)(a1 + 6));
    KeLeaveGuardedRegion();
    if ( !v13 )
      break;
    sub_14091DB84((__int64)a1, v13);
  }
}
