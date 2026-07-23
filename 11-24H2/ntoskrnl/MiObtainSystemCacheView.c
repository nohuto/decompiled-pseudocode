/*
 * XREFs of MiObtainSystemCacheView @ 0x140209EE0
 * Callers:
 *     MmMapViewInSystemCache @ 0x140356F24 (MmMapViewInSystemCache.c)
 *     MmReserveViewInSystemCache @ 0x1407EDCA8 (MmReserveViewInSystemCache.c)
 * Callees:
 *     MiUnlockWorkingSetOptimal @ 0x14020A46C (MiUnlockWorkingSetOptimal.c)
 *     MiSetSystemCacheReverseMap @ 0x14020A5D0 (MiSetSystemCacheReverseMap.c)
 *     MiLockWorkingSetOptimal @ 0x14020A640 (MiLockWorkingSetOptimal.c)
 *     MiReturnSystemVa @ 0x14020AB44 (MiReturnSystemVa.c)
 *     MiExpandSystemCache @ 0x14026B918 (MiExpandSystemCache.c)
 *     MiReleaseSpinLockExclusive @ 0x14029EA30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x1402E6E94 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x1403368E0 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x1403369B0 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     MiReleaseSystemCacheView @ 0x140355608 (MiReleaseSystemCacheView.c)
 *     MiInsertReadiedSystemCacheViews @ 0x140355814 (MiInsertReadiedSystemCacheViews.c)
 *     CcUnmapInactiveViews @ 0x1403EE744 (CcUnmapInactiveViews.c)
 *     MiConsumeSystemCacheTbFlushNeededView @ 0x1404185E8 (MiConsumeSystemCacheTbFlushNeededView.c)
 *     MiReadyReservedView @ 0x14044D858 (MiReadyReservedView.c)
 *     MiConsumeSystemCachePde @ 0x140463984 (MiConsumeSystemCachePde.c)
 *     MiLateInitializeSystemCache @ 0x1404B7A84 (MiLateInitializeSystemCache.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiObtainSystemCacheView(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r13
  _QWORD *v5; // rsi
  int v7; // r12d
  unsigned __int8 CurrentIrql; // r15
  unsigned int v9; // ebx
  __int64 v10; // rdx
  __int64 v11; // rcx
  int v12; // edi
  _QWORD *v13; // rbx
  __int64 v14; // rax
  int v15; // eax
  PVOID ***v16; // rcx
  PVOID **v17; // r8
  PVOID **v18; // rbx
  PVOID *v19; // rax
  unsigned __int64 v20; // rsi
  __int64 v21; // rdi
  __int64 v22; // rcx
  int v24; // ecx
  int v25; // ecx
  int v26; // ecx
  int v27; // eax
  unsigned int v28; // edi
  PVOID **v29; // r9
  PVOID **v30; // r9
  __int64 v31; // rcx
  signed __int32 v32[8]; // [rsp+0h] [rbp-38h] BYREF
  PVOID P; // [rsp+20h] [rbp-18h] BYREF
  PVOID *p_P; // [rsp+28h] [rbp-10h]
  void *retaddr; // [rsp+68h] [rbp+30h]
  unsigned __int8 v36; // [rsp+70h] [rbp+38h] BYREF
  __int64 v37; // [rsp+80h] [rbp+48h] BYREF

  v4 = 0LL;
  p_P = &P;
  v5 = (_QWORD *)(a1 + 2288);
  P = &P;
  v7 = 0;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
  {
    v9 = 0;
    if ( _interlockedbittestandset(&dword_140E2F3F8, 0x1Fu) )
      v9 = ExpWaitForSpinLockExclusiveAndAcquire(&dword_140E2F3F8, CurrentIrql);
    v10 = (unsigned int)dword_140E2F3F8;
    v11 = (unsigned int)dword_140E2F3F8;
    for ( LODWORD(v11) = dword_140E2F3F8 & 0xBFFFFFFF;
          (dword_140E2F3F8 & 0xBFFFFFFF) != 0x80000000;
          v10 = (unsigned int)dword_140E2F3F8 )
    {
      if ( (v10 & 0x40000000) == 0 )
        _InterlockedOr(&dword_140E2F3F8, 0x40000000u);
      if ( (++v9 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v11, v10, a3, a4) )
      {
        HvlNotifyLongSpinWait(v9);
      }
      else
      {
        _mm_pause();
      }
    }
  }
  else
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(&dword_140E2F3F8, CurrentIrql);
  }
  if ( !*(_BYTE *)(a1 + 18524) )
  {
    MiReleaseSpinLockExclusive(&dword_140E2F3F8, CurrentIrql);
    if ( !(unsigned int)MiLateInitializeSystemCache(a1) )
      return 0LL;
    ExAcquireSpinLockExclusive(&dword_140E2F3F8);
  }
  _InterlockedOr(v32, 0);
  v12 = KiTbFlushTimeStamp;
  if ( *(_QWORD *)(a1 + 2176) )
  {
    v24 = *(_DWORD *)(a1 + 2184);
    if ( (unsigned int)(KiTbFlushTimeStamp - v24) > 2 || (v24 & 1) == 0 && (unsigned int)(KiTbFlushTimeStamp - v24) >= 2 )
      MiInsertReadiedSystemCacheViews(a1, a1 + 2160);
  }
  if ( *(_QWORD *)(a1 + 2208) )
  {
    v25 = *(_DWORD *)(a1 + 2216);
    if ( (unsigned int)(v12 - v25) > 2 || (v25 & 1) == 0 && (unsigned int)(v12 - v25) >= 2 )
      MiInsertReadiedSystemCacheViews(a1, a1 + 2192);
  }
  if ( *(_QWORD *)(a1 + 2240) )
  {
    v26 = *(_DWORD *)(a1 + 2248);
    if ( (unsigned int)(v12 - v26) > 2 || (v26 & 1) == 0 && (unsigned int)(v12 - v26) >= 2 )
      MiInsertReadiedSystemCacheViews(a1, a1 + 2224);
  }
  if ( *(_QWORD *)(a1 + 2272) )
  {
    v27 = *(_DWORD *)(a1 + 2280);
    v28 = v12 - v27;
    if ( v28 > 2 || (v27 & 1) == 0 && v28 >= 2 )
      MiInsertReadiedSystemCacheViews(a1, a1 + 2256);
  }
  if ( v5[2] )
  {
    v13 = (_QWORD *)*v5;
    if ( *(_QWORD **)(*v5 + 8LL) != v5 || (v14 = *v13, *(_QWORD **)(*v13 + 8LL) != v13) )
LABEL_62:
      __fastfail(3u);
    *v5 = v14;
    *(_QWORD *)(v14 + 8) = v5;
    v13[4] = v13[4] & 0x3FFFFFFFFFFFFFFFLL | 0x8000000000000000uLL;
    --v5[2];
LABEL_21:
    v15 = *(_DWORD *)(a1 + 4);
    p_P = &P;
    P = &P;
    v16 = (PVOID ***)(a1 + 2320);
    while ( 1 )
    {
      v17 = *v16;
      if ( *v16 == (PVOID **)v16 || (v15 & 1) == 0 && *(_QWORD *)(a1 + 2336) <= 0x20uLL )
        break;
      if ( v17[1] != (PVOID *)v16 )
        goto LABEL_62;
      v29 = (PVOID **)*v17;
      if ( (*v17)[1] != v17 )
        goto LABEL_62;
      *v16 = v29;
      v29[1] = (PVOID *)v16;
      v30 = (PVOID **)p_P;
      --*(_QWORD *)(a1 + 2336);
      if ( *v30 != &P )
        goto LABEL_62;
      v17[1] = (PVOID *)v30;
      *v17 = &P;
      *v30 = (PVOID *)v17;
      p_P = (PVOID *)v17;
    }
    if ( CurrentIrql == 17 )
    {
      if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
        dword_140E2F3F8 = 0;
      else
        ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&dword_140E2F3F8, retaddr);
    }
    else
    {
      if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
        dword_140E2F3F8 = 0;
      else
        ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&dword_140E2F3F8, retaddr);
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
      __writecr8(CurrentIrql);
    }
    if ( !v13 )
      goto LABEL_33;
    goto LABEL_32;
  }
  v13 = (_QWORD *)MiConsumeSystemCachePde(a1);
  if ( v13 )
    goto LABEL_21;
  v13 = (_QWORD *)MiConsumeSystemCacheTbFlushNeededView(a1, 1024LL);
  if ( v13 )
    goto LABEL_21;
  MiReleaseSpinLockExclusive(&dword_140E2F3F8, CurrentIrql);
  v13 = (_QWORD *)MiExpandSystemCache(a1);
  if ( !v13 )
  {
    ExAcquireSpinLockExclusive(&dword_140E2F3F8);
    v7 = 1;
    v13 = (_QWORD *)MiConsumeSystemCacheTbFlushNeededView(a1, 1LL);
    goto LABEL_21;
  }
LABEL_32:
  v4 = v13[2];
LABEL_33:
  if ( v7 )
  {
    v31 = *(_QWORD *)(a1 + 184);
    v37 = 0LL;
    if ( (unsigned int)CcUnmapInactiveViews(v31, 64LL, 0LL, &v37) )
    {
      if ( v4 )
        MiReleaseSystemCacheView(0LL, v4);
      v4 = v37;
      MiReadyReservedView(a1, v37);
    }
  }
  v18 = (PVOID **)P;
  if ( P != &P )
  {
    v36 = 0;
    while ( v18 != (PVOID **)&P )
    {
      if ( v18[1] != &P )
        goto LABEL_62;
      v19 = *v18;
      if ( (*v18)[1] != v18 )
        goto LABEL_62;
      P = *v18;
      v19[1] = &P;
      v20 = (unsigned __int64)v18[2];
      v21 = MiLockWorkingSetOptimal(a1 + 18816, ((v20 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, &v36);
      MiSetSystemCacheReverseMap(v22, v20, 0LL);
      MiUnlockWorkingSetOptimal(a1 + 18816, v21, v36);
      _InterlockedDecrement((volatile signed __int32 *)(a1 + 2408));
      MiReturnSystemVa(v20, v20 + 0x200000, 7LL);
      ExFreePoolWithTag(v18, 0);
      v18 = (PVOID **)P;
    }
  }
  return v4;
}
