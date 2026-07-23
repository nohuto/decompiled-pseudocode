/*
 * XREFs of CcAllocateInitializeBcb @ 0x1403EA890
 * Callers:
 *     CcPinFileData @ 0x1402282C0 (CcPinFileData.c)
 * Callees:
 *     ExfReleasePushLock @ 0x14028E870 (ExfReleasePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     ExInitializeResourceLite2 @ 0x1403EAA00 (ExInitializeResourceLite2.c)
 *     ExDisableResourceBoostLite @ 0x1403EAB30 (ExDisableResourceBoostLite.c)
 *     CcAdjustVacbLevelLockCount @ 0x1403EAB94 (CcAdjustVacbLevelLockCount.c)
 *     ExAllocatePoolWithTag @ 0x140B74010 (ExAllocatePoolWithTag.c)
 */

_QWORD *__fastcall CcAllocateInitializeBcb(__int64 a1, __int64 a2, _QWORD *a3, _DWORD *a4)
{
  _QWORD *result; // rax
  _QWORD *v9; // rsi
  char *v10; // rcx
  __int64 v11; // rax
  signed __int64 *v12; // rbx
  char *v13; // rax
  char *v14; // rbp
  _QWORD *v15; // rdx
  _QWORD *v16; // rax
  signed __int64 v17; // rax
  signed __int64 v18; // rdx
  signed __int64 v19; // rtt

  result = ExAllocatePoolWithTag((POOL_TYPE)1536, 0xC0uLL, 0x63426343u);
  v9 = result;
  if ( result )
  {
    *(_WORD *)result = 765;
    v10 = (char *)(result + 9);
    result[1] = *a3;
    *((_DWORD *)result + 1) = *a4;
    v11 = *(_QWORD *)a4 + *a3;
    ++*((_DWORD *)v9 + 16);
    v9[4] = v11;
    v9[22] = a1;
    ExInitializeResourceLite2(v10, 0xFFFFFFFFLL);
    v12 = (signed __int64 *)(a1 + 104);
    v13 = (char *)KeAbPreAcquire(a1 + 104, 0LL);
    v14 = v13;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 104), 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a1 + 104), v13, a1 + 104);
    if ( v14 )
      v14[10] = 1;
    v15 = *(_QWORD **)(a2 + 24);
    v16 = v9 + 2;
    if ( *v15 != a2 + 16 )
      __fastfail(3u);
    *v16 = a2 + 16;
    v9[3] = v15;
    *v15 = v16;
    *(_QWORD *)(a2 + 24) = v16;
    if ( *(__int64 *)(a1 + 32) > 0x2000000 && (*(_DWORD *)(a1 + 152) & 0x200) != 0 )
      CcAdjustVacbLevelLockCount(a1, *a3, 1LL);
    _m_prefetchw(v12);
    v17 = *v12;
    v18 = *v12 - 16;
    if ( (*v12 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
      v18 = 0LL;
    if ( (v17 & 2) != 0 || (v19 = *v12, v19 != _InterlockedCompareExchange64(v12, v18, v17)) )
      ExfReleasePushLock((_QWORD *)(a1 + 104));
    KeAbPostRelease(a1 + 104);
    if ( (*(_DWORD *)(a1 + 152) & 2) != 0 )
      ExDisableResourceBoostLite((PERESOURCE)(v9 + 9));
    return v9;
  }
  return result;
}
