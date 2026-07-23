/*
 * XREFs of sub_14091F17C @ 0x14091F17C
 * Callers:
 *     sub_14091EB00 @ 0x14091EB00 (sub_14091EB00.c)
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
 *     sub_14091C0E8 @ 0x14091C0E8 (sub_14091C0E8.c)
 *     sub_14091F4A0 @ 0x14091F4A0 (sub_14091F4A0.c)
 *     sub_14091F5B0 @ 0x14091F5B0 (sub_14091F5B0.c)
 *     sub_14091F5E0 @ 0x14091F5E0 (sub_14091F5E0.c)
 *     sub_14091F610 @ 0x14091F610 (sub_14091F610.c)
 *     sub_14091F8F8 @ 0x14091F8F8 (sub_14091F8F8.c)
 *     sub_140A11EF8 @ 0x140A11EF8 (sub_140A11EF8.c)
 *     sub_140A714D0 @ 0x140A714D0 (sub_140A714D0.c)
 */

__int64 __fastcall sub_14091F17C(__int64 a1, int a2, _QWORD *a3)
{
  struct _KTHREAD *CurrentThread; // rax
  char *v7; // rbx
  int v8; // edi
  int v9; // r14d
  int v10; // ebx
  int v11; // esi
  __int64 v12; // rcx
  __int64 v13; // rax
  bool v14; // sf
  int v15; // eax
  __int64 v16; // rdx
  struct _KTHREAD *v17; // rax
  bool v18; // zf
  _QWORD *v19; // rcx
  struct _KTHREAD *v21; // rax
  char *v22; // rax
  signed __int8 v23; // cf
  char *v24; // rbx
  __int64 v25; // rdi
  __int64 v26; // r8
  _QWORD *v27; // [rsp+30h] [rbp-38h] BYREF
  unsigned int v28; // [rsp+88h] [rbp+20h] BYREF

  v27 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v7 = (char *)KeAbPreAcquire((__int64)&qword_140E3EAA8, 0LL);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140E3EAA8, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx((signed __int64 *)&qword_140E3EAA8, 0, v7, (__int64)&qword_140E3EAA8);
  if ( v7 )
    v7[10] = 1;
  v8 = 0;
  v9 = HIDWORD(qword_140E3EA80) - 1;
  v10 = -1073741198;
  while ( v8 <= v9 )
  {
    v11 = (v9 + v8) / 2;
    v12 = *(_QWORD *)((unsigned int)(qword_140E3EA80 * v11) + qword_140E3EA90);
    if ( (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))qword_140E3EAA0 == sub_14091F5B0 )
    {
      v13 = sub_14091F5B0(v12, a1, 8LL);
    }
    else if ( (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))qword_140E3EAA0 == sub_14091F5E0 )
    {
      v13 = sub_14091F5E0(v12, a1, 8LL);
    }
    else if ( (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))qword_140E3EAA0 == sub_14091F610 )
    {
      v13 = sub_14091F610(v12, a1, 8LL);
    }
    else
    {
      v13 = guard_dispatch_icall_no_overrides(v12, a1);
    }
    v14 = v13 < 0;
    if ( !v13 )
    {
      v10 = 0;
      v16 = *(_QWORD *)((unsigned int)(qword_140E3EA80 * v11) + qword_140E3EA90);
      if ( v16 )
        _InterlockedAdd64((volatile signed __int64 *)(v16 + 232), 1uLL);
      v27 = (_QWORD *)v16;
      break;
    }
    if ( v13 >= 0 )
      v8 = v11 + 1;
    v15 = v11 - 1;
    if ( !v14 )
      v15 = v9;
    v9 = v15;
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140E3EAA8, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&qword_140E3EAA8);
  KeAbPostRelease((ULONG_PTR)&qword_140E3EAA8);
  v17 = KeGetCurrentThread();
  v18 = v17->SpecialApcDisable++ == -1;
  if ( v18 && ($727077A9B6E167EAE1398C74674DC5A5 *)v17->ApcState.ApcListHead[0].Flink != &v17->152 )
    KiCheckForKernelApcDelivery();
  if ( v10 == -1073741198 )
  {
    if ( !a2 )
      goto LABEL_38;
    v10 = sub_140A714D0(a1, &v27);
    if ( v10 < 0 )
      goto LABEL_38;
    v21 = KeGetCurrentThread();
    --v21->SpecialApcDisable;
    v22 = (char *)KeAbPreAcquire((__int64)&qword_140E3EAA8, 0LL);
    v23 = _interlockedbittestandset64((volatile signed __int32 *)&qword_140E3EAA8, 0LL);
    v24 = v22;
    if ( v23 )
      ExfAcquirePushLockExclusiveEx(&qword_140E3EAA8, v22, (__int64)&qword_140E3EAA8);
    if ( v24 )
      v24[10] = 1;
    v25 = (__int64)v27;
    v28 = -1;
    sub_14091F4A0((unsigned int)&qword_140E3EA80, *v27, 8, 0, (__int64)&v28);
    v10 = sub_14091C0E8((unsigned int *)&qword_140E3EA80, v25, v26, v28);
    if ( v10 >= 0 )
      sub_140A11EF8(v25);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140E3EAA8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_140E3EAA8);
    KeAbPostRelease((ULONG_PTR)&qword_140E3EAA8);
    KeLeaveGuardedRegion();
  }
  if ( v10 < 0 || !a3 )
  {
LABEL_38:
    v19 = v27;
    goto LABEL_29;
  }
  v19 = 0LL;
  *a3 = v27;
  v27 = 0LL;
LABEL_29:
  if ( v19 && _InterlockedExchangeAdd64(v19 + 29, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    sub_14091F8F8(v27);
  return (unsigned int)v10;
}
