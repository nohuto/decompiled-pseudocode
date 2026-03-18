/*
 * XREFs of sub_1408FC89C @ 0x1408FC89C
 * Callers:
 *     sub_1408FC220 @ 0x1408FC220 (sub_1408FC220.c)
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
 *     sub_1408F980C @ 0x1408F980C (sub_1408F980C.c)
 *     sub_1408FCBC0 @ 0x1408FCBC0 (sub_1408FCBC0.c)
 *     sub_1408FCCD0 @ 0x1408FCCD0 (sub_1408FCCD0.c)
 *     sub_1408FCD00 @ 0x1408FCD00 (sub_1408FCD00.c)
 *     sub_1408FCD30 @ 0x1408FCD30 (sub_1408FCD30.c)
 *     sub_1408FD018 @ 0x1408FD018 (sub_1408FD018.c)
 *     sub_140A18D88 @ 0x140A18D88 (sub_140A18D88.c)
 *     sub_140A773B0 @ 0x140A773B0 (sub_140A773B0.c)
 */

__int64 __fastcall sub_1408FC89C(__int64 a1, int a2, _QWORD *a3)
{
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v7; // rbx
  __int64 v8; // r9
  int v9; // edi
  int v10; // r14d
  int v11; // ebx
  int v12; // esi
  __int64 v13; // rcx
  __int64 v14; // rax
  bool v15; // sf
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rdx
  __int64 v19; // rcx
  struct _KTHREAD *v20; // rax
  bool v21; // zf
  _QWORD *v22; // rcx
  struct _KTHREAD *v24; // rax
  _QWORD *v25; // rax
  signed __int8 v26; // cf
  _QWORD *v27; // rbx
  __int64 v28; // rdi
  __int64 v29; // r8
  _QWORD *v30; // [rsp+30h] [rbp-38h] BYREF
  unsigned int v31; // [rsp+88h] [rbp+20h] BYREF

  v30 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v7 = KeAbPreAcquire((__int64)&qword_140E3E968, 0LL);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140E3E968, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx((signed __int64 *)&qword_140E3E968, 0, v7, (__int64)&qword_140E3E968);
  if ( v7 )
    *((_BYTE *)v7 + 10) = 1;
  v9 = 0;
  v10 = HIDWORD(qword_140E3E940) - 1;
  v11 = -1073741198;
  while ( v9 <= v10 )
  {
    v12 = (v10 + v9) / 2;
    v13 = *(_QWORD *)((unsigned int)(qword_140E3E940 * v12) + qword_140E3E950);
    if ( (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))qword_140E3E960 == sub_1408FCCD0 )
    {
      v14 = sub_1408FCCD0(v13, a1, 8LL);
    }
    else if ( (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))qword_140E3E960 == sub_1408FCD00 )
    {
      v14 = sub_1408FCD00(v13, a1, 8LL);
    }
    else if ( (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))qword_140E3E960 == sub_1408FCD30 )
    {
      v14 = sub_1408FCD30(v13, a1, 8LL);
    }
    else
    {
      v14 = guard_dispatch_icall_no_overrides(v13, a1, 8LL, v8);
    }
    v15 = v14 < 0;
    if ( !v14 )
    {
      v11 = 0;
      v17 = *(_QWORD *)((unsigned int)(qword_140E3E940 * v12) + qword_140E3E950);
      if ( v17 )
        _InterlockedAdd64((volatile signed __int64 *)(v17 + 232), 1uLL);
      v30 = (_QWORD *)v17;
      break;
    }
    if ( v14 >= 0 )
      v9 = v12 + 1;
    v16 = v12 - 1;
    if ( !v15 )
      v16 = v10;
    v10 = v16;
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140E3E968, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&qword_140E3E968);
  KeAbPostRelease((ULONG_PTR)&qword_140E3E968);
  v20 = KeGetCurrentThread();
  v21 = v20->SpecialApcDisable++ == -1;
  if ( v21 && ($81B80DCEA5A02D890AB7B2872B48AC01 *)v20->ApcState.ApcListHead[0].Flink != &v20->152 )
    KiCheckForKernelApcDelivery(v19, v18);
  if ( v11 == -1073741198 )
  {
    if ( !a2 )
      goto LABEL_38;
    v11 = sub_140A773B0(a1, &v30);
    if ( v11 < 0 )
      goto LABEL_38;
    v24 = KeGetCurrentThread();
    --v24->SpecialApcDisable;
    v25 = KeAbPreAcquire((__int64)&qword_140E3E968, 0LL);
    v26 = _interlockedbittestandset64((volatile signed __int32 *)&qword_140E3E968, 0LL);
    v27 = v25;
    if ( v26 )
      ExfAcquirePushLockExclusiveEx(&qword_140E3E968, (__int64)v25, (__int64)&qword_140E3E968);
    if ( v27 )
      *((_BYTE *)v27 + 10) = 1;
    v28 = (__int64)v30;
    v31 = -1;
    sub_1408FCBC0((unsigned int)&qword_140E3E940, *v30, 8, 0, (__int64)&v31);
    v11 = sub_1408F980C((unsigned int *)&qword_140E3E940, v28, v29, v31);
    if ( v11 >= 0 )
      sub_140A18D88(v28);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140E3E968, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_140E3E968);
    KeAbPostRelease((ULONG_PTR)&qword_140E3E968);
    KeLeaveGuardedRegion();
  }
  if ( v11 < 0 || !a3 )
  {
LABEL_38:
    v22 = v30;
    goto LABEL_29;
  }
  v22 = 0LL;
  *a3 = v30;
  v30 = 0LL;
LABEL_29:
  if ( v22 && _InterlockedExchangeAdd64(v22 + 29, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    sub_1408FD018(v30);
  return (unsigned int)v11;
}
