/*
 * XREFs of sub_1409DFA70 @ 0x1409DFA70
 * Callers:
 *     sub_1409DFE38 @ 0x1409DFE38 (sub_1409DFE38.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     KeLeaveGuardedRegion @ 0x1402BB460 (KeLeaveGuardedRegion.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     sub_1408F9924 @ 0x1408F9924 (sub_1408F9924.c)
 *     sub_1408FCCD0 @ 0x1408FCCD0 (sub_1408FCCD0.c)
 *     sub_1408FCD00 @ 0x1408FCD00 (sub_1408FCD00.c)
 *     sub_1408FCD30 @ 0x1408FCD30 (sub_1408FCD30.c)
 *     sub_1409E0124 @ 0x1409E0124 (sub_1409E0124.c)
 *     sub_1409E0378 @ 0x1409E0378 (sub_1409E0378.c)
 */

__int64 __fastcall sub_1409DFA70(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 *v3; // rbp
  __int64 v6; // r14
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v8; // rax
  __int64 v9; // r8
  __int64 v10; // r9
  _QWORD *v11; // rdi
  __int64 v12; // r15
  int v13; // r12d
  int v14; // edi
  unsigned int v15; // esi
  char (__fastcall *v16)(_QWORD *, __int64); // rax
  _QWORD *v17; // rcx
  __int64 v18; // rax
  bool v19; // sf
  unsigned int v20; // eax
  int v21; // eax
  __int64 v22; // rdx
  int v23; // edi
  _QWORD *v24; // rdx
  __int64 v27; // [rsp+40h] [rbp-58h] BYREF
  int v28; // [rsp+48h] [rbp-50h]
  int v29; // [rsp+4Ch] [rbp-4Ch]

  v3 = (unsigned __int64 *)(a1 + 176);
  v28 = *(_DWORD *)(a2 + 24);
  v27 = *(_QWORD *)(a2 + 32);
  v6 = 0LL;
  v29 = 0;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v8 = KeAbPreAcquire(a1 + 176, 0LL);
  v11 = v8;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v3, 0LL) )
    ExfAcquirePushLockExclusiveEx(v3, (__int64)v8, (__int64)v3);
  if ( v11 )
    *((_BYTE *)v11 + 10) = 1;
  v12 = a1 + 136;
  v13 = 0;
  v14 = *(_DWORD *)(v12 + 4) - 1;
  v15 = 0;
  while ( v13 <= v14 )
  {
    v15 = (v14 + v13) / 2;
    v16 = *(char (__fastcall **)(_QWORD *, __int64))(v12 + 32);
    v17 = *(_QWORD **)(*(_DWORD *)v12 * v15 + *(_QWORD *)(v12 + 16));
    if ( v16 == sub_1408FCCD0 )
    {
      LOBYTE(v18) = sub_1408FCCD0(v17, (__int64)&v27);
    }
    else if ( (char *)v16 == (char *)sub_1408FCD00 )
    {
      LOBYTE(v18) = sub_1408FCD00((__int64)v17, (__int64)&v27);
    }
    else if ( v16 == sub_1408FCD30 )
    {
      LOBYTE(v18) = sub_1408FCD30(v17, (__int64)&v27);
    }
    else
    {
      v18 = guard_dispatch_icall_no_overrides(v17, &v27, 16LL, v10);
    }
    v19 = v18 < 0;
    if ( !v18 )
    {
      v21 = sub_1409E0378(*(_QWORD *)(*(_DWORD *)v12 * v15 + *(_QWORD *)(v12 + 16)));
      v23 = v21;
      if ( v21 >= 0 )
        v6 = v22;
      if ( !v21 )
      {
        if ( a3 )
        {
          sub_1409E0378(v6);
          *v24 = v6;
          v6 = 0LL;
        }
        goto LABEL_28;
      }
      if ( v21 != -1073741198 )
        goto LABEL_28;
      break;
    }
    v20 = v15 - 1;
    if ( !v19 )
      v20 = v14;
    v14 = v20;
    if ( !v19 )
      v13 = ++v15;
  }
  v23 = sub_1408F9924((unsigned int *)v12, a2, v9, (int)&v27, 16, v15);
  if ( v23 >= 0 )
    v23 = sub_1409E0378(a2);
LABEL_28:
  sub_1409E0124(v6);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v3, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v3);
  KeAbPostRelease((ULONG_PTR)v3);
  KeLeaveGuardedRegion();
  return (unsigned int)v23;
}
