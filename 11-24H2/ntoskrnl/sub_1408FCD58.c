/*
 * XREFs of sub_1408FCD58 @ 0x1408FCD58
 * Callers:
 *     sub_1408FBE0C @ 0x1408FBE0C (sub_1408FBE0C.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     KeLeaveGuardedRegion @ 0x1402BB460 (KeLeaveGuardedRegion.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     sub_1408F94D0 @ 0x1408F94D0 (sub_1408F94D0.c)
 *     sub_1408FB2A4 @ 0x1408FB2A4 (sub_1408FB2A4.c)
 */

void __fastcall sub_1408FCD58(unsigned __int64 *a1, int a2)
{
  int v4; // eax
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v6; // rax
  _QWORD *v7; // rbx
  _QWORD *v8; // rax
  _QWORD *v9; // rbx
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
    v6 = KeAbPreAcquire((__int64)(a1 + 6), 0LL);
    v7 = v6;
    if ( _interlockedbittestandset64((volatile signed __int32 *)a1 + 12, 0LL) )
      ExfAcquirePushLockExclusiveEx(a1 + 6, (__int64)v6, (__int64)(a1 + 6));
    if ( v7 )
      *((_BYTE *)v7 + 10) = 1;
    v8 = KeAbPreAcquire((__int64)(a1 + 10), 0LL);
    v9 = v8;
    if ( _interlockedbittestandset64((volatile signed __int32 *)a1 + 20, 0LL) )
      ExfAcquirePushLockExclusiveEx(a1 + 10, (__int64)v8, (__int64)(a1 + 10));
    if ( v9 )
      *((_BYTE *)v9 + 10) = 1;
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
      sub_1408F94D0((__int64)a1, v13);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)a1 + 6, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)a1 + 6);
    KeAbPostRelease((ULONG_PTR)(a1 + 6));
    KeLeaveGuardedRegion();
    if ( !v13 )
      break;
    sub_1408FB2A4((__int64)a1, v13);
  }
}
