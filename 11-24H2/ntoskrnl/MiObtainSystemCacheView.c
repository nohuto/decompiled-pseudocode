/*
 * XREFs of MiObtainSystemCacheView @ 0x140241D90
 * Callers:
 *     MmMapViewInSystemCache @ 0x1402D5CA4 (MmMapViewInSystemCache.c)
 *     MmReserveViewInSystemCache @ 0x1407ED6D8 (MmReserveViewInSystemCache.c)
 * Callees:
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14020D580 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x14020D650 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     MiUnlockWorkingSetOptimal @ 0x14024231C (MiUnlockWorkingSetOptimal.c)
 *     MiSetSystemCacheReverseMap @ 0x140242480 (MiSetSystemCacheReverseMap.c)
 *     MiLockWorkingSetOptimal @ 0x1402424F0 (MiLockWorkingSetOptimal.c)
 *     MiReturnSystemVa @ 0x1402429F4 (MiReturnSystemVa.c)
 *     MiReleaseSpinLockExclusive @ 0x14028EE30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14028F370 (ExAcquireSpinLockExclusive.c)
 *     HvlNotifyLongSpinWait @ 0x140293260 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140293290 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiReleaseSystemCacheView @ 0x1402D4388 (MiReleaseSystemCacheView.c)
 *     MiInsertReadiedSystemCacheViews @ 0x1402D4594 (MiInsertReadiedSystemCacheViews.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140379F24 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     MiExpandSystemCache @ 0x1403A7378 (MiExpandSystemCache.c)
 *     CcUnmapInactiveViews @ 0x1403F8634 (CcUnmapInactiveViews.c)
 *     MiConsumeSystemCacheTbFlushNeededView @ 0x140424738 (MiConsumeSystemCacheTbFlushNeededView.c)
 *     MiConsumeSystemCachePde @ 0x14046AF08 (MiConsumeSystemCachePde.c)
 *     MiLateInitializeSystemCache @ 0x1404BC914 (MiLateInitializeSystemCache.c)
 *     MiReadyReservedView @ 0x1404C04A8 (MiReadyReservedView.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiObtainSystemCacheView(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r13
  _QWORD *v4; // rsi
  int v6; // r12d
  unsigned __int8 CurrentIrql; // r15
  unsigned int v8; // ebx
  LONG v9; // edx
  __int64 v10; // rcx
  int v11; // edi
  _QWORD *v12; // rbx
  __int64 v13; // rax
  int v14; // eax
  PVOID ***v15; // rcx
  PVOID **v16; // r8
  PVOID **v17; // rbx
  PVOID *v18; // rax
  unsigned __int64 v19; // rsi
  __int64 v20; // rdi
  __int64 v21; // rcx
  int v23; // ecx
  int v24; // ecx
  int v25; // ecx
  int v26; // eax
  unsigned int v27; // edi
  PVOID **v28; // r9
  PVOID **v29; // r9
  __int64 v30; // rcx
  signed __int32 v31[8]; // [rsp+0h] [rbp-38h] BYREF
  PVOID P; // [rsp+20h] [rbp-18h] BYREF
  PVOID *p_P; // [rsp+28h] [rbp-10h]
  void *retaddr; // [rsp+68h] [rbp+30h]
  unsigned __int8 v35; // [rsp+70h] [rbp+38h] BYREF
  __int64 v36; // [rsp+80h] [rbp+48h] BYREF

  v3 = 0LL;
  p_P = &P;
  v4 = (_QWORD *)(a1 + 2288);
  P = &P;
  v6 = 0;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL, a3);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
  {
    v8 = 0;
    if ( _interlockedbittestandset(&dword_140E2F2B8, 0x1Fu) )
      v8 = ExpWaitForSpinLockExclusiveAndAcquire(&dword_140E2F2B8, CurrentIrql, a3);
    v9 = dword_140E2F2B8;
    v10 = (unsigned int)dword_140E2F2B8;
    for ( LODWORD(v10) = dword_140E2F2B8 & 0xBFFFFFFF; (dword_140E2F2B8 & 0xBFFFFFFF) != 0x80000000; v9 = dword_140E2F2B8 )
    {
      if ( (v9 & 0x40000000) == 0 )
        _InterlockedOr(&dword_140E2F2B8, 0x40000000u);
      if ( (++v8 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v10) )
      {
        HvlNotifyLongSpinWait(v8);
      }
      else
      {
        _mm_pause();
      }
    }
  }
  else
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(&dword_140E2F2B8, CurrentIrql);
  }
  if ( !*(_BYTE *)(a1 + 18524) )
  {
    MiReleaseSpinLockExclusive(&dword_140E2F2B8, CurrentIrql);
    if ( !(unsigned int)MiLateInitializeSystemCache(a1) )
      return 0LL;
    ExAcquireSpinLockExclusive(&dword_140E2F2B8);
  }
  _InterlockedOr(v31, 0);
  v11 = KiTbFlushTimeStamp;
  if ( *(_QWORD *)(a1 + 2176) )
  {
    v23 = *(_DWORD *)(a1 + 2184);
    if ( (unsigned int)(KiTbFlushTimeStamp - v23) > 2 || (v23 & 1) == 0 && (unsigned int)(KiTbFlushTimeStamp - v23) >= 2 )
      MiInsertReadiedSystemCacheViews(a1, a1 + 2160);
  }
  if ( *(_QWORD *)(a1 + 2208) )
  {
    v24 = *(_DWORD *)(a1 + 2216);
    if ( (unsigned int)(v11 - v24) > 2 || (v24 & 1) == 0 && (unsigned int)(v11 - v24) >= 2 )
      MiInsertReadiedSystemCacheViews(a1, a1 + 2192);
  }
  if ( *(_QWORD *)(a1 + 2240) )
  {
    v25 = *(_DWORD *)(a1 + 2248);
    if ( (unsigned int)(v11 - v25) > 2 || (v25 & 1) == 0 && (unsigned int)(v11 - v25) >= 2 )
      MiInsertReadiedSystemCacheViews(a1, a1 + 2224);
  }
  if ( *(_QWORD *)(a1 + 2272) )
  {
    v26 = *(_DWORD *)(a1 + 2280);
    v27 = v11 - v26;
    if ( v27 > 2 || (v26 & 1) == 0 && v27 >= 2 )
      MiInsertReadiedSystemCacheViews(a1, a1 + 2256);
  }
  if ( v4[2] )
  {
    v12 = (_QWORD *)*v4;
    if ( *(_QWORD **)(*v4 + 8LL) != v4 || (v13 = *v12, *(_QWORD **)(*v12 + 8LL) != v12) )
LABEL_62:
      __fastfail(3u);
    *v4 = v13;
    *(_QWORD *)(v13 + 8) = v4;
    v12[4] = v12[4] & 0x3FFFFFFFFFFFFFFFLL | 0x8000000000000000uLL;
    --v4[2];
LABEL_21:
    v14 = *(_DWORD *)(a1 + 4);
    p_P = &P;
    P = &P;
    v15 = (PVOID ***)(a1 + 2320);
    while ( 1 )
    {
      v16 = *v15;
      if ( *v15 == (PVOID **)v15 || (v14 & 1) == 0 && *(_QWORD *)(a1 + 2336) <= 0x20uLL )
        break;
      if ( v16[1] != (PVOID *)v15 )
        goto LABEL_62;
      v28 = (PVOID **)*v16;
      if ( (*v16)[1] != v16 )
        goto LABEL_62;
      *v15 = v28;
      v28[1] = (PVOID *)v15;
      v29 = (PVOID **)p_P;
      --*(_QWORD *)(a1 + 2336);
      if ( *v29 != &P )
        goto LABEL_62;
      v16[1] = (PVOID *)v29;
      *v16 = &P;
      *v29 = (PVOID *)v16;
      p_P = (PVOID *)v16;
    }
    if ( CurrentIrql == 17 )
    {
      if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
        dword_140E2F2B8 = 0;
      else
        ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&dword_140E2F2B8, retaddr);
    }
    else
    {
      if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
        dword_140E2F2B8 = 0;
      else
        ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&dword_140E2F2B8, retaddr);
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
      __writecr8(CurrentIrql);
    }
    if ( !v12 )
      goto LABEL_33;
    goto LABEL_32;
  }
  v12 = (_QWORD *)MiConsumeSystemCachePde(a1);
  if ( v12 )
    goto LABEL_21;
  v12 = (_QWORD *)MiConsumeSystemCacheTbFlushNeededView(a1, 1024LL);
  if ( v12 )
    goto LABEL_21;
  MiReleaseSpinLockExclusive(&dword_140E2F2B8, CurrentIrql);
  v12 = (_QWORD *)MiExpandSystemCache(a1);
  if ( !v12 )
  {
    ExAcquireSpinLockExclusive(&dword_140E2F2B8);
    v6 = 1;
    v12 = (_QWORD *)MiConsumeSystemCacheTbFlushNeededView(a1, 1LL);
    goto LABEL_21;
  }
LABEL_32:
  v3 = v12[2];
LABEL_33:
  if ( v6 )
  {
    v30 = *(_QWORD *)(a1 + 184);
    v36 = 0LL;
    if ( (unsigned int)CcUnmapInactiveViews(v30, 64LL, 0LL, &v36) )
    {
      if ( v3 )
        MiReleaseSystemCacheView(0LL, v3);
      v3 = v36;
      MiReadyReservedView(a1, v36);
    }
  }
  v17 = (PVOID **)P;
  if ( P != &P )
  {
    v35 = 0;
    while ( v17 != (PVOID **)&P )
    {
      if ( v17[1] != &P )
        goto LABEL_62;
      v18 = *v17;
      if ( (*v17)[1] != v17 )
        goto LABEL_62;
      P = *v17;
      v18[1] = &P;
      v19 = (unsigned __int64)v17[2];
      v20 = MiLockWorkingSetOptimal(a1 + 18816, ((v19 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, &v35);
      MiSetSystemCacheReverseMap(v21, v19, 0LL);
      MiUnlockWorkingSetOptimal(a1 + 18816, v20, v35);
      _InterlockedDecrement((volatile signed __int32 *)(a1 + 2408));
      MiReturnSystemVa(v19, v19 + 0x200000, 7LL);
      ExFreePoolWithTag(v17, 0);
      v17 = (PVOID **)P;
    }
  }
  return v3;
}
