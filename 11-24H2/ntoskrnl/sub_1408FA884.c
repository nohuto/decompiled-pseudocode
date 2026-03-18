/*
 * XREFs of sub_1408FA884 @ 0x1408FA884
 * Callers:
 *     sub_1408FBE0C @ 0x1408FBE0C (sub_1408FBE0C.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     KeLeaveGuardedRegion @ 0x1402BB460 (KeLeaveGuardedRegion.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     sub_1408F95BC @ 0x1408F95BC (sub_1408F95BC.c)
 *     sub_1408F9924 @ 0x1408F9924 (sub_1408F9924.c)
 *     sub_1408FC0E0 @ 0x1408FC0E0 (sub_1408FC0E0.c)
 *     sub_1408FCECC @ 0x1408FCECC (sub_1408FCECC.c)
 */

__int64 __fastcall sub_1408FA884(__int64 a1, __int64 a2, _QWORD *a3)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v4; // rsi
  _QWORD *v8; // rax
  _QWORD *v9; // rdi
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
  v8 = KeAbPreAcquire(a1 + 48, 0LL);
  v9 = v8;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v4, 0LL) )
    ExfAcquirePushLockExclusiveEx(v4, (__int64)v8, (__int64)v4);
  if ( v9 )
    *((_BYTE *)v9 + 10) = 1;
  v10 = sub_1408FC0E0(a1, *(_QWORD *)(a2 + 48), &v15, &v14);
  v12 = v10;
  if ( v10 >= 0 )
  {
    if ( a3 )
      *a3 = v15;
  }
  else if ( v10 == -1073741198 )
  {
    v12 = sub_1408F9924((unsigned int *)(a1 + 8), a2, v11, *(_QWORD *)(a2 + 48), 8, v14);
    if ( v12 >= 0 )
    {
      v12 = sub_1408FCECC(a2);
      if ( v12 >= 0 )
      {
        if ( a3 )
          *a3 = 0LL;
        v12 = sub_1408F95BC(a1, a2);
      }
    }
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v4, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v4);
  KeAbPostRelease((ULONG_PTR)v4);
  KeLeaveGuardedRegion();
  return (unsigned int)v12;
}
