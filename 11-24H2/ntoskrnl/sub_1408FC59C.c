/*
 * XREFs of sub_1408FC59C @ 0x1408FC59C
 * Callers:
 *     sub_1408FB3EC @ 0x1408FB3EC (sub_1408FB3EC.c)
 *     sub_1408FB650 @ 0x1408FB650 (sub_1408FB650.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x14025DE00 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     KeLeaveGuardedRegion @ 0x1402BB460 (KeLeaveGuardedRegion.c)
 *     KiCheckForKernelApcDelivery @ 0x1402BB4D0 (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14034050C (ExfAcquirePushLockSharedEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     SddlpFree @ 0x140863910 (SddlpFree.c)
 *     sub_1408F9924 @ 0x1408F9924 (sub_1408F9924.c)
 *     sub_1408FB10C @ 0x1408FB10C (sub_1408FB10C.c)
 *     sub_1408FB1D0 @ 0x1408FB1D0 (sub_1408FB1D0.c)
 *     sub_1408FCCD0 @ 0x1408FCCD0 (sub_1408FCCD0.c)
 *     sub_1408FCD00 @ 0x1408FCD00 (sub_1408FCD00.c)
 *     sub_1408FCD30 @ 0x1408FCD30 (sub_1408FCD30.c)
 *     sub_140A15790 @ 0x140A15790 (sub_140A15790.c)
 */

__int64 __fastcall sub_1408FC59C(__int64 a1, __int64 a2, _QWORD *a3)
{
  struct _KTHREAD *CurrentThread; // r15
  signed __int64 *v6; // rbx
  _QWORD *v7; // rdi
  __int64 v8; // r9
  int v9; // esi
  int i; // edi
  int v11; // r14d
  __int64 (__fastcall *v12)(_QWORD, _QWORD, _QWORD); // rax
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rcx
  int v16; // eax
  _QWORD *v17; // rdx
  int v18; // edi
  __int64 v19; // rdx
  __int64 v20; // rcx
  struct _KTHREAD *v21; // rax
  bool v22; // zf
  _QWORD *v23; // rcx
  struct _KTHREAD *v25; // rax
  _QWORD *v26; // rax
  __int64 v27; // r8
  _QWORD *v28; // rdi
  _QWORD *v29; // rsi
  void **v30; // rbx
  _QWORD *v31; // [rsp+78h] [rbp+10h] BYREF

  CurrentThread = KeGetCurrentThread();
  v31 = 0LL;
  v6 = (signed __int64 *)(a1 + 128);
  --CurrentThread->SpecialApcDisable;
  v7 = KeAbPreAcquire(a1 + 128, 0LL);
  if ( _InterlockedCompareExchange64(v6, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v6, 0, v7, (__int64)v6);
  if ( v7 )
    *((_BYTE *)v7 + 10) = 1;
  v9 = 0;
  for ( i = *(_DWORD *)(a1 + 92) - 1; ; i = v16 )
  {
    if ( v9 > i )
    {
      v18 = -1073741198;
      goto LABEL_20;
    }
    v11 = (i + v9) / 2;
    v12 = *(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(a1 + 120);
    v13 = *(_QWORD *)((unsigned int)(*(_DWORD *)(a1 + 88) * v11) + *(_QWORD *)(a1 + 104));
    if ( v12 == sub_1408FCCD0 )
    {
      v14 = sub_1408FCCD0(v13, CurrentThread, 8LL);
    }
    else if ( v12 == sub_1408FCD00 )
    {
      v14 = sub_1408FCD00(v13, CurrentThread, 8LL);
    }
    else
    {
      v14 = v12 == sub_1408FCD30
          ? sub_1408FCD30(v13, CurrentThread, 8LL)
          : guard_dispatch_icall_no_overrides(v13, CurrentThread, 8LL, v8);
    }
    v15 = v14;
    if ( !v14 )
      break;
    if ( v14 >= 0 )
      v9 = v11 + 1;
    v16 = v11 - 1;
    if ( v15 >= 0 )
      v16 = i;
  }
  v17 = *(_QWORD **)((unsigned int)(*(_DWORD *)(a1 + 88) * v11) + *(_QWORD *)(a1 + 104));
  if ( v17 )
    _InterlockedAdd64(v17 + 1, 1uLL);
  v31 = v17;
  v18 = 0;
LABEL_20:
  if ( _InterlockedCompareExchange64(v6, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v6);
  KeAbPostRelease((ULONG_PTR)v6);
  v21 = KeGetCurrentThread();
  v22 = v21->SpecialApcDisable++ == -1;
  if ( v22 && ($81B80DCEA5A02D890AB7B2872B48AC01 *)v21->ApcState.ApcListHead[0].Flink != &v21->152 )
    KiCheckForKernelApcDelivery(v20, v19);
  if ( v18 == -1073741198 )
  {
    v18 = sub_1408FB10C(a1, (__int64)CurrentThread, &v31);
    if ( v18 < 0 )
    {
LABEL_37:
      v23 = v31;
      goto LABEL_29;
    }
    v25 = KeGetCurrentThread();
    --v25->SpecialApcDisable;
    v26 = KeAbPreAcquire((__int64)v6, 0LL);
    v28 = v26;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v6, 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v6, (__int64)v26, (__int64)v6);
    if ( v28 )
      *((_BYTE *)v28 + 10) = 1;
    v29 = v31;
    v18 = sub_1408F9924((unsigned int *)(a1 + 88), (__int64)v31, v27, *v31, 8, 0xFFFFFFFF);
    if ( v18 >= 0 )
      sub_140A15790(v29);
    if ( (_InterlockedExchangeAdd64(v6, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v6);
    KeAbPostRelease((ULONG_PTR)v6);
    KeLeaveGuardedRegion();
  }
  if ( v18 < 0 || !a3 )
    goto LABEL_37;
  v23 = 0LL;
  *a3 = v31;
  v31 = 0LL;
LABEL_29:
  if ( v23 )
  {
    if ( _InterlockedExchangeAdd64(v23 + 1, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    {
      v30 = (void **)v31;
      if ( (int)sub_1408FB1D0(a1, (__int64)v31, -1) >= 0 )
      {
        SddlpFree(v30[3]);
        SddlpFree(v30);
      }
    }
  }
  return (unsigned int)v18;
}
