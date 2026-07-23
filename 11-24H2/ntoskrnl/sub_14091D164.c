/*
 * XREFs of sub_14091D164 @ 0x14091D164
 * Callers:
 *     sub_14091E6EC @ 0x14091E6EC (sub_14091E6EC.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     KeLeaveGuardedRegion @ 0x140362BA0 (KeLeaveGuardedRegion.c)
 *     sub_14091BE98 @ 0x14091BE98 (sub_14091BE98.c)
 *     sub_14091C200 @ 0x14091C200 (sub_14091C200.c)
 *     sub_14091E9C0 @ 0x14091E9C0 (sub_14091E9C0.c)
 *     sub_14091F7AC @ 0x14091F7AC (sub_14091F7AC.c)
 */

__int64 __fastcall sub_14091D164(__int64 a1, __int64 a2, _QWORD *a3)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v4; // rsi
  char *v8; // rax
  char *v9; // rdi
  int v10; // eax
  __int64 v11; // r8
  int v12; // edi
  unsigned int v14; // [rsp+60h] [rbp+8h] BYREF
  __int64 v15; // [rsp+78h] [rbp+20h] BYREF

  CurrentThread = KeGetCurrentThread();
  v4 = (unsigned __int64 *)(a1 + 48);
  v14 = 0;
  v15 = 0LL;
  --CurrentThread->SpecialApcDisable;
  v8 = (char *)KeAbPreAcquire(a1 + 48, 0LL);
  v9 = v8;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v4, 0LL) )
    ExfAcquirePushLockExclusiveEx(v4, v8, (__int64)v4);
  if ( v9 )
    v9[10] = 1;
  v10 = sub_14091E9C0(a1, *(_QWORD *)(a2 + 48), &v15, &v14);
  v12 = v10;
  if ( v10 >= 0 )
  {
    if ( a3 )
      *a3 = v15;
  }
  else if ( v10 == -1073741198 )
  {
    v12 = sub_14091C200((unsigned int *)(a1 + 8), a2, v11, *(_QWORD *)(a2 + 48), 8, v14);
    if ( v12 >= 0 )
    {
      v12 = sub_14091F7AC(a2);
      if ( v12 >= 0 )
      {
        if ( a3 )
          *a3 = 0LL;
        v12 = sub_14091BE98(a1, a2);
      }
    }
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v4, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v4);
  KeAbPostRelease((ULONG_PTR)v4);
  KeLeaveGuardedRegion();
  return (unsigned int)v12;
}
