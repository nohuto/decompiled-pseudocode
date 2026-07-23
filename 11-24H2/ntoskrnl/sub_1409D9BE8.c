/*
 * XREFs of sub_1409D9BE8 @ 0x1409D9BE8
 * Callers:
 *     sub_1409D9D58 @ 0x1409D9D58 (sub_1409D9D58.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x14028E410 (ExfReleasePushLockShared.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14031F9EC (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     KeLeaveGuardedRegion @ 0x140362BA0 (KeLeaveGuardedRegion.c)
 *     sub_14091F4A0 @ 0x14091F4A0 (sub_14091F4A0.c)
 *     sub_1409D9820 @ 0x1409D9820 (sub_1409D9820.c)
 *     sub_1409D9ED4 @ 0x1409D9ED4 (sub_1409D9ED4.c)
 *     sub_1409DA128 @ 0x1409DA128 (sub_1409DA128.c)
 *     sub_1409DA144 @ 0x1409DA144 (sub_1409DA144.c)
 */

__int64 __fastcall sub_1409D9BE8(__int64 a1, __int64 a2, __int64 *a3)
{
  struct _KTHREAD *CurrentThread; // rax
  signed __int64 *v4; // rbx
  char *v8; // rdi
  int v9; // edi
  int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // rbx
  int v13; // eax
  __int64 v15; // rsi
  __int64 v16; // [rsp+30h] [rbp-10h] BYREF
  __int64 v17; // [rsp+38h] [rbp-8h] BYREF
  int v18; // [rsp+80h] [rbp+40h] BYREF
  __int64 v19; // [rsp+98h] [rbp+58h] BYREF

  CurrentThread = KeGetCurrentThread();
  v4 = (signed __int64 *)(a1 + 176);
  v19 = 0LL;
  --CurrentThread->SpecialApcDisable;
  v17 = 0LL;
  v8 = (char *)KeAbPreAcquire(a1 + 176, 0LL);
  if ( _InterlockedCompareExchange64(v4, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v4, 0, v8, (__int64)v4);
  if ( v8 )
    v8[10] = 1;
  v16 = 0LL;
  v9 = sub_14091F4A0(a1 + 136, a2, 0x10u, &v16, &v18);
  if ( v9 >= 0 )
  {
    v10 = sub_1409DA128(v16);
    v11 = v19;
    v9 = v10;
    if ( v10 >= 0 )
      v11 = v16;
    v19 = v11;
  }
  if ( _InterlockedCompareExchange64(v4, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v4);
  KeAbPostRelease((ULONG_PTR)v4);
  KeLeaveGuardedRegion();
  if ( v9 == -1073741198 )
  {
    v13 = sub_1409DA144(a2, &v19);
    v12 = v19;
    v9 = v13;
    if ( v13 < 0 )
      goto LABEL_16;
    v9 = sub_1409D9820(a1, v19, (__int64)&v17);
    if ( v9 < 0 )
      goto LABEL_16;
    v15 = v17;
    if ( v17 )
    {
      sub_1409D9ED4(v12);
      v12 = v15;
    }
  }
  else
  {
    v12 = v19;
    if ( v9 < 0 )
      goto LABEL_16;
  }
  if ( a3 )
  {
    *a3 = v12;
    v12 = 0LL;
  }
LABEL_16:
  sub_1409D9ED4(v12);
  sub_1409D9ED4(v17);
  return (unsigned int)v9;
}
