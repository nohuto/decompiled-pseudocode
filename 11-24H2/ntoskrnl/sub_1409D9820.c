/*
 * XREFs of sub_1409D9820 @ 0x1409D9820
 * Callers:
 *     sub_1409D9BE8 @ 0x1409D9BE8 (sub_1409D9BE8.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     KeLeaveGuardedRegion @ 0x140362BA0 (KeLeaveGuardedRegion.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     sub_14091C200 @ 0x14091C200 (sub_14091C200.c)
 *     sub_14091F5B0 @ 0x14091F5B0 (sub_14091F5B0.c)
 *     sub_14091F5E0 @ 0x14091F5E0 (sub_14091F5E0.c)
 *     sub_14091F610 @ 0x14091F610 (sub_14091F610.c)
 *     sub_1409D9ED4 @ 0x1409D9ED4 (sub_1409D9ED4.c)
 *     sub_1409DA128 @ 0x1409DA128 (sub_1409DA128.c)
 */

__int64 __fastcall sub_1409D9820(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 *v3; // rbp
  __int64 v6; // r14
  struct _KTHREAD *CurrentThread; // rax
  char *v8; // rax
  __int64 v9; // r8
  char *v10; // rdi
  __int64 v11; // r15
  int v12; // r12d
  int v13; // edi
  unsigned int v14; // esi
  char (__fastcall *v15)(_QWORD *, __int64); // rax
  _QWORD *v16; // rcx
  __int64 v17; // rax
  bool v18; // sf
  unsigned int v19; // eax
  int v20; // eax
  __int64 v21; // rdx
  int v22; // edi
  _QWORD *v23; // rdx
  __int64 v26; // [rsp+40h] [rbp-58h] BYREF
  int v27; // [rsp+48h] [rbp-50h]
  int v28; // [rsp+4Ch] [rbp-4Ch]

  v3 = (unsigned __int64 *)(a1 + 176);
  v27 = *(_DWORD *)(a2 + 24);
  v26 = *(_QWORD *)(a2 + 32);
  v6 = 0LL;
  v28 = 0;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v8 = (char *)KeAbPreAcquire(a1 + 176, 0LL);
  v10 = v8;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v3, 0LL) )
    ExfAcquirePushLockExclusiveEx(v3, v8, (__int64)v3);
  if ( v10 )
    v10[10] = 1;
  v11 = a1 + 136;
  v12 = 0;
  v13 = *(_DWORD *)(v11 + 4) - 1;
  v14 = 0;
  while ( v12 <= v13 )
  {
    v14 = (v13 + v12) / 2;
    v15 = *(char (__fastcall **)(_QWORD *, __int64))(v11 + 32);
    v16 = *(_QWORD **)(*(_DWORD *)v11 * v14 + *(_QWORD *)(v11 + 16));
    if ( v15 == sub_14091F5B0 )
    {
      LOBYTE(v17) = sub_14091F5B0(v16, (__int64)&v26);
    }
    else if ( (char *)v15 == (char *)sub_14091F5E0 )
    {
      LOBYTE(v17) = sub_14091F5E0((__int64)v16, (__int64)&v26);
    }
    else if ( v15 == sub_14091F610 )
    {
      LOBYTE(v17) = sub_14091F610(v16, (__int64)&v26);
    }
    else
    {
      v17 = guard_dispatch_icall_no_overrides(v16, &v26);
    }
    v18 = v17 < 0;
    if ( !v17 )
    {
      v20 = sub_1409DA128(*(_QWORD *)(*(_DWORD *)v11 * v14 + *(_QWORD *)(v11 + 16)));
      v22 = v20;
      if ( v20 >= 0 )
        v6 = v21;
      if ( !v20 )
      {
        if ( a3 )
        {
          sub_1409DA128(v6);
          *v23 = v6;
          v6 = 0LL;
        }
        goto LABEL_28;
      }
      if ( v20 != -1073741198 )
        goto LABEL_28;
      break;
    }
    v19 = v14 - 1;
    if ( !v18 )
      v19 = v13;
    v13 = v19;
    if ( !v18 )
      v12 = ++v14;
  }
  v22 = sub_14091C200((unsigned int *)v11, a2, v9, (int)&v26, 16, v14);
  if ( v22 >= 0 )
    v22 = sub_1409DA128(a2);
LABEL_28:
  sub_1409D9ED4(v6);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v3, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v3);
  KeAbPostRelease((ULONG_PTR)v3);
  KeLeaveGuardedRegion();
  return (unsigned int)v22;
}
