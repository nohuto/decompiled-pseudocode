/*
 * XREFs of sub_1408FBE0C @ 0x1408FBE0C
 * Callers:
 *     sub_1408FB650 @ 0x1408FB650 (sub_1408FB650.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x14025DE00 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     KeLeaveGuardedRegion @ 0x1402BB460 (KeLeaveGuardedRegion.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14034050C (ExfAcquirePushLockSharedEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     SddlpFree @ 0x140863910 (SddlpFree.c)
 *     sub_1408FA884 @ 0x1408FA884 (sub_1408FA884.c)
 *     sub_1408FB2A4 @ 0x1408FB2A4 (sub_1408FB2A4.c)
 *     sub_1408FB304 @ 0x1408FB304 (sub_1408FB304.c)
 *     sub_1408FCCD0 @ 0x1408FCCD0 (sub_1408FCCD0.c)
 *     sub_1408FCD00 @ 0x1408FCD00 (sub_1408FCD00.c)
 *     sub_1408FCD30 @ 0x1408FCD30 (sub_1408FCD30.c)
 *     sub_1408FCD58 @ 0x1408FCD58 (sub_1408FCD58.c)
 *     sub_1408FD9E8 @ 0x1408FD9E8 (sub_1408FD9E8.c)
 *     WbCreateHeapExecutedBlock @ 0x1408FDAD8 (WbCreateHeapExecutedBlock.c)
 */

__int64 __fastcall sub_1408FBE0C(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v5; // rdx
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v8; // rdi
  __int64 v9; // r9
  int v10; // esi
  __int64 v11; // r12
  int i; // edi
  int v13; // r15d
  __int64 (__fastcall *v14)(_QWORD, _QWORD, _QWORD); // rax
  __int64 v15; // rcx
  __int64 v16; // rax
  bool v17; // sf
  int v18; // eax
  __int64 v19; // rdx
  int v20; // edi
  __int64 v21; // rbx
  __int64 v23; // rbx
  __int64 v24; // rdx
  __int64 v25; // rbx
  __int64 v26; // rdx
  int v27; // eax
  __int64 v28; // rsi
  __int64 v29; // [rsp+70h] [rbp+40h] BYREF
  __int64 v30; // [rsp+78h] [rbp+48h]
  __int64 v31; // [rsp+88h] [rbp+58h] BYREF

  v30 = a2;
  v29 = 0LL;
  v5 = (unsigned int)(*(_DWORD *)(a1 + 12) - *(_DWORD *)(a1 + 56));
  v31 = 0LL;
  sub_1408FCD58(a1, v5);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v8 = KeAbPreAcquire(a1 + 48, 0LL);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 48), 17LL, 0LL) )
    ExfAcquirePushLockSharedEx((signed __int64 *)(a1 + 48), 0, v8, a1 + 48);
  if ( v8 )
    *((_BYTE *)v8 + 10) = 1;
  v10 = 0;
  v11 = *(_QWORD *)(a2 + 272);
  for ( i = *(_DWORD *)(a1 + 12) - 1; ; i = v18 )
  {
    if ( v10 > i )
    {
      v20 = -1073741198;
      goto LABEL_44;
    }
    v13 = (i + v10) / 2;
    v14 = *(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(a1 + 40);
    v15 = *(_QWORD *)((unsigned int)(*(_DWORD *)(a1 + 8) * v13) + *(_QWORD *)(a1 + 24));
    if ( v14 == sub_1408FCCD0 )
    {
      v16 = sub_1408FCCD0(v15, v11, 8LL);
    }
    else if ( v14 == sub_1408FCD00 )
    {
      v16 = sub_1408FCD00(v15, v11, 8LL);
    }
    else
    {
      v16 = v14 == sub_1408FCD30 ? sub_1408FCD30(v15, v11, 8LL) : guard_dispatch_icall_no_overrides(v15, v11, 8LL, v9);
    }
    v17 = v16 < 0;
    if ( !v16 )
      break;
    if ( v16 >= 0 )
      v10 = v13 + 1;
    v18 = v13 - 1;
    if ( !v17 )
      v18 = i;
  }
  v19 = *(_QWORD *)((unsigned int)(*(_DWORD *)(a1 + 8) * v13) + *(_QWORD *)(a1 + 24));
  if ( v19 && !_InterlockedIncrement64((volatile signed __int64 *)(v19 + 80)) )
  {
    v20 = -1073741595;
  }
  else
  {
    v20 = 0;
    v29 = v19;
  }
LABEL_44:
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 48), 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)(a1 + 48));
  KeAbPostRelease(a1 + 48);
  KeLeaveGuardedRegion();
  if ( v20 == -1073741198 )
  {
    v27 = WbCreateHeapExecutedBlock(a1, v30, &v29);
    v21 = v29;
    v20 = v27;
    if ( v27 < 0 )
      goto LABEL_28;
    v20 = sub_1408FA884(a1, v29, &v31);
    if ( v20 < 0 )
      goto LABEL_28;
    v28 = v31;
    if ( v31 )
    {
      sub_1408FB2A4(a1, v21);
      v21 = v28;
      v31 = 0LL;
      v29 = v28;
    }
  }
  else
  {
    v21 = v29;
    if ( v20 < 0 )
      goto LABEL_28;
  }
  sub_1408FD9E8(a1, v21);
  if ( a3 )
  {
    *a3 = v21;
    v21 = 0LL;
    v29 = 0LL;
  }
LABEL_28:
  if ( v21 && _InterlockedExchangeAdd64((volatile signed __int64 *)(v21 + 80), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
  {
    v23 = v29;
    v24 = *(_QWORD *)(v29 + 40);
    if ( v24 )
    {
      sub_1408FB304(a1, v24);
      *(_QWORD *)(v23 + 40) = 0LL;
      *(_QWORD *)(v23 + 24) = 0LL;
      *(_QWORD *)(v23 + 32) = 0LL;
      *(_DWORD *)(v23 + 72) = 0;
    }
    SddlpFree((void *)v23);
  }
  if ( v31 && _InterlockedExchangeAdd64((volatile signed __int64 *)(v31 + 80), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
  {
    v25 = v31;
    v26 = *(_QWORD *)(v31 + 40);
    if ( v26 )
    {
      sub_1408FB304(a1, v26);
      *(_QWORD *)(v25 + 40) = 0LL;
      *(_QWORD *)(v25 + 24) = 0LL;
      *(_QWORD *)(v25 + 32) = 0LL;
      *(_DWORD *)(v25 + 72) = 0;
    }
    SddlpFree((void *)v25);
  }
  return (unsigned int)v20;
}
