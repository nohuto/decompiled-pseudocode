/*
 * XREFs of sub_14091EE7C @ 0x14091EE7C
 * Callers:
 *     sub_14091DCCC @ 0x14091DCCC (sub_14091DCCC.c)
 *     sub_14091DF30 @ 0x14091DF30 (sub_14091DF30.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x14028E410 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14031F9EC (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     KeLeaveGuardedRegion @ 0x140362BA0 (KeLeaveGuardedRegion.c)
 *     KiCheckForKernelApcDelivery @ 0x140362C10 (KiCheckForKernelApcDelivery.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     SddlpFree @ 0x140867F20 (SddlpFree.c)
 *     sub_14091C200 @ 0x14091C200 (sub_14091C200.c)
 *     sub_14091D9EC @ 0x14091D9EC (sub_14091D9EC.c)
 *     sub_14091DAB0 @ 0x14091DAB0 (sub_14091DAB0.c)
 *     sub_14091F5B0 @ 0x14091F5B0 (sub_14091F5B0.c)
 *     sub_14091F5E0 @ 0x14091F5E0 (sub_14091F5E0.c)
 *     sub_14091F610 @ 0x14091F610 (sub_14091F610.c)
 *     sub_140A0E970 @ 0x140A0E970 (sub_140A0E970.c)
 */

__int64 __fastcall sub_14091EE7C(__int64 a1, __int64 a2, _QWORD *a3)
{
  struct _KTHREAD *CurrentThread; // r15
  signed __int64 *v6; // rbx
  char *v7; // rdi
  int v8; // esi
  int i; // edi
  int v10; // r14d
  __int64 (__fastcall *v11)(_QWORD, _QWORD, _QWORD); // rax
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rcx
  int v15; // eax
  _QWORD *v16; // rdx
  int v17; // edi
  struct _KTHREAD *v18; // rax
  bool v19; // zf
  _QWORD *v20; // rcx
  struct _KTHREAD *v22; // rax
  char *v23; // rax
  __int64 v24; // r8
  char *v25; // rdi
  _QWORD *v26; // rsi
  void **v27; // rbx
  _QWORD *v28; // [rsp+78h] [rbp+10h] BYREF

  CurrentThread = KeGetCurrentThread();
  v28 = 0LL;
  v6 = (signed __int64 *)(a1 + 128);
  --CurrentThread->SpecialApcDisable;
  v7 = (char *)KeAbPreAcquire(a1 + 128, 0LL);
  if ( _InterlockedCompareExchange64(v6, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v6, 0, v7, (__int64)v6);
  if ( v7 )
    v7[10] = 1;
  v8 = 0;
  for ( i = *(_DWORD *)(a1 + 92) - 1; ; i = v15 )
  {
    if ( v8 > i )
    {
      v17 = -1073741198;
      goto LABEL_20;
    }
    v10 = (i + v8) / 2;
    v11 = *(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(a1 + 120);
    v12 = *(_QWORD *)((unsigned int)(*(_DWORD *)(a1 + 88) * v10) + *(_QWORD *)(a1 + 104));
    if ( v11 == sub_14091F5B0 )
    {
      v13 = sub_14091F5B0(v12, CurrentThread, 8LL);
    }
    else if ( v11 == sub_14091F5E0 )
    {
      v13 = sub_14091F5E0(v12, CurrentThread, 8LL);
    }
    else
    {
      v13 = v11 == sub_14091F610
          ? sub_14091F610(v12, CurrentThread, 8LL)
          : guard_dispatch_icall_no_overrides(v12, CurrentThread);
    }
    v14 = v13;
    if ( !v13 )
      break;
    if ( v13 >= 0 )
      v8 = v10 + 1;
    v15 = v10 - 1;
    if ( v14 >= 0 )
      v15 = i;
  }
  v16 = *(_QWORD **)((unsigned int)(*(_DWORD *)(a1 + 88) * v10) + *(_QWORD *)(a1 + 104));
  if ( v16 )
    _InterlockedAdd64(v16 + 1, 1uLL);
  v28 = v16;
  v17 = 0;
LABEL_20:
  if ( _InterlockedCompareExchange64(v6, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v6);
  KeAbPostRelease((ULONG_PTR)v6);
  v18 = KeGetCurrentThread();
  v19 = v18->SpecialApcDisable++ == -1;
  if ( v19 && ($727077A9B6E167EAE1398C74674DC5A5 *)v18->ApcState.ApcListHead[0].Flink != &v18->152 )
    KiCheckForKernelApcDelivery();
  if ( v17 == -1073741198 )
  {
    v17 = sub_14091D9EC(a1, (__int64)CurrentThread, &v28);
    if ( v17 < 0 )
    {
LABEL_37:
      v20 = v28;
      goto LABEL_29;
    }
    v22 = KeGetCurrentThread();
    --v22->SpecialApcDisable;
    v23 = (char *)KeAbPreAcquire((__int64)v6, 0LL);
    v25 = v23;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v6, 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v6, v23, (__int64)v6);
    if ( v25 )
      v25[10] = 1;
    v26 = v28;
    v17 = sub_14091C200((unsigned int *)(a1 + 88), (__int64)v28, v24, *v28, 8, 0xFFFFFFFF);
    if ( v17 >= 0 )
      sub_140A0E970(v26);
    if ( (_InterlockedExchangeAdd64(v6, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v6);
    KeAbPostRelease((ULONG_PTR)v6);
    KeLeaveGuardedRegion();
  }
  if ( v17 < 0 || !a3 )
    goto LABEL_37;
  v20 = 0LL;
  *a3 = v28;
  v28 = 0LL;
LABEL_29:
  if ( v20 )
  {
    if ( _InterlockedExchangeAdd64(v20 + 1, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    {
      v27 = (void **)v28;
      if ( (int)sub_14091DAB0(a1, (__int64)v28, -1) >= 0 )
      {
        SddlpFree(v27[3]);
        SddlpFree(v27);
      }
    }
  }
  return (unsigned int)v17;
}
