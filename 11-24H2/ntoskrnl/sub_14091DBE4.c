/*
 * XREFs of sub_14091DBE4 @ 0x14091DBE4
 * Callers:
 *     sub_14091DAB0 @ 0x14091DAB0 (sub_14091DAB0.c)
 *     sub_14091DB84 @ 0x14091DB84 (sub_14091DB84.c)
 *     sub_14091DCCC @ 0x14091DCCC (sub_14091DCCC.c)
 *     sub_14091DF30 @ 0x14091DF30 (sub_14091DF30.c)
 *     sub_14091E6EC @ 0x14091E6EC (sub_14091E6EC.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x14028E410 (ExfReleasePushLockShared.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14031F9EC (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     KeLeaveGuardedRegion @ 0x140362BA0 (KeLeaveGuardedRegion.c)
 *     sub_14091F4A0 @ 0x14091F4A0 (sub_14091F4A0.c)
 *     sub_140A2EEA0 @ 0x140A2EEA0 (sub_140A2EEA0.c)
 */

__int64 __fastcall sub_14091DBE4(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rax
  signed __int64 *v3; // rbx
  int v5; // esi
  char *v6; // rdi
  int v7; // eax
  __int64 v8; // rsi
  int v9; // edi
  char v11; // [rsp+60h] [rbp+8h] BYREF
  __int64 v12; // [rsp+70h] [rbp+18h] BYREF

  CurrentThread = KeGetCurrentThread();
  v3 = (signed __int64 *)(a1 + 224);
  v5 = a1;
  --CurrentThread->SpecialApcDisable;
  v6 = (char *)KeAbPreAcquire(a1 + 224, 0LL);
  if ( _InterlockedCompareExchange64(v3, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v3, 0, v6, (__int64)v3);
  if ( v6 )
    v6[10] = 1;
  v12 = 0LL;
  v7 = sub_14091F4A0(v5 + 184, a2, 8, (unsigned int)&v12, (__int64)&v11);
  v8 = 0LL;
  v9 = v7;
  if ( v7 >= 0 )
    v8 = v12;
  if ( _InterlockedCompareExchange64(v3, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v3);
  KeAbPostRelease((ULONG_PTR)v3);
  KeLeaveGuardedRegion();
  if ( v9 >= 0 )
    return (unsigned int)sub_140A2EEA0(v8, a2);
  return (unsigned int)v9;
}
