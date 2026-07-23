/*
 * XREFs of EtwpCovSampContextCleanup @ 0x140ADB73C
 * Callers:
 *     EtwpCoverageSamplerCleanup @ 0x1407B2DD0 (EtwpCoverageSamplerCleanup.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     EtwpCovSampProcessCleanup @ 0x140924B30 (EtwpCovSampProcessCleanup.c)
 *     EtwpCovSampContextRemoveAndFreeModule @ 0x140A0C25C (EtwpCovSampContextRemoveAndFreeModule.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall EtwpCovSampContextCleanup(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  char *v3; // rax
  char *v4; // rdi
  _QWORD **v5; // rdx
  _QWORD *i; // r8
  _QWORD *v7; // rcx
  _QWORD **v8; // rdx
  _QWORD *j; // r8
  _QWORD *v10; // rcx
  _QWORD *v11; // r9
  _QWORD *v12; // rdi
  __int64 v13; // rdx
  _QWORD *v14; // r10
  void *v15; // rcx
  _QWORD *v16; // [rsp+28h] [rbp-18h]
  _QWORD *v17; // [rsp+28h] [rbp-18h]
  _QWORD **v18; // [rsp+30h] [rbp-10h]
  _QWORD **v19; // [rsp+30h] [rbp-10h]

  EtwpCovSampProcessCleanup(a1 + 1248, 0);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v3 = (char *)KeAbPreAcquire(a1 + 1176, 0LL);
  v4 = v3;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 1176), 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a1 + 1176), v3, a1 + 1176);
  if ( v4 )
    v4[10] = 1;
  *(_QWORD *)(a1 + 1184) = KeGetCurrentThread();
  v5 = *(_QWORD ***)(a1 + 1200);
  v18 = v5;
  i = v5;
  v16 = v5;
  while ( i )
  {
    if ( (*i & 0x8000000000000002uLL) == 0x8000000000000002uLL )
    {
      v5 = v18;
      i = v16;
    }
    v7 = (_QWORD *)*i;
    if ( (*i & 1) != 0 )
      break;
LABEL_21:
    v16 = v7;
    if ( !v7 )
      goto LABEL_14;
    v11 = v7;
    if ( (*v7 & 0x8000000000000002uLL) == 0x8000000000000002uLL )
      v5 = v18;
    for ( i = v5; (*i & 1) == 0; i = (_QWORD *)*i )
    {
      if ( (_QWORD *)*i == v7 )
      {
        *i = *v7;
        --*(_DWORD *)(a1 + 1192);
        *v7 |= 0x8000000000000002uLL;
        v16 = i;
        goto LABEL_30;
      }
    }
    v11 = 0LL;
    v5 = v18;
    i = v7;
LABEL_30:
    *v11 = 0LL;
  }
  for ( ++v5;
        (unsigned __int64)v5 < *(_QWORD *)(a1 + 1200) + 8 * ((unsigned __int64)*(unsigned int *)(a1 + 1196) >> 5);
        ++v5 )
  {
    v7 = *v5;
    if ( ((unsigned __int8)*v5 & 1) == 0 )
    {
      v18 = v5;
      goto LABEL_21;
    }
  }
LABEL_14:
  v8 = *(_QWORD ***)(a1 + 1216);
  v19 = v8;
  j = v8;
  v17 = v8;
  while ( j )
  {
    if ( (*j & 0x8000000000000002uLL) == 0x8000000000000002uLL )
    {
      v8 = v19;
      j = v17;
    }
    v10 = (_QWORD *)*j;
    if ( (*j & 1) != 0 )
      break;
LABEL_38:
    v17 = v10;
    if ( !v10 )
      goto LABEL_34;
    v14 = v10;
    if ( (*v10 & 0x8000000000000002uLL) == 0x8000000000000002uLL )
      v8 = v19;
    for ( j = v8; (*j & 1) == 0; j = (_QWORD *)*j )
    {
      if ( (_QWORD *)*j == v10 )
      {
        *j = *v10;
        --*(_DWORD *)(a1 + 1208);
        *v10 |= 0x8000000000000002uLL;
        v17 = j;
        goto LABEL_47;
      }
    }
    v14 = 0LL;
    v8 = v19;
    j = v10;
LABEL_47:
    *v14 = 0LL;
  }
  for ( ++v8;
        (unsigned __int64)v8 < *(_QWORD *)(a1 + 1216) + 8 * ((unsigned __int64)*(unsigned int *)(a1 + 1212) >> 5);
        ++v8 )
  {
    v10 = *v8;
    if ( ((unsigned __int8)*v8 & 1) == 0 )
    {
      v19 = v8;
      goto LABEL_38;
    }
  }
LABEL_34:
  v12 = (_QWORD *)(a1 + 1224);
  while ( (_QWORD *)*v12 != v12 )
  {
    v13 = *v12 - 72LL;
    *(_DWORD *)(v13 + 132) = 0;
    EtwpCovSampContextRemoveAndFreeModule(a1, (__int64 *)v13);
  }
  v15 = *(void **)(a1 + 1200);
  if ( v15 )
    ExFreePoolWithTag(v15, 0x56777445u);
  *(_QWORD *)(a1 + 1184) = 0LL;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 1176), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 1176));
  KeAbPostRelease(a1 + 1176);
  KeLeaveCriticalRegion();
}
