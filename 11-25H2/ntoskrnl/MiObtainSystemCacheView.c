/*
 * XREFs of MiObtainSystemCacheView @ 0x1402C0010
 * Callers:
 *     MmMapViewInSystemCache @ 0x1403B44EC (MmMapViewInSystemCache.c)
 *     MmReserveViewInSystemCache @ 0x1407DD838 (MmReserveViewInSystemCache.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x1402BEA90 (ExAcquireSpinLockExclusive.c)
 *     MiUnlockWorkingSetOptimal @ 0x1402C04C8 (MiUnlockWorkingSetOptimal.c)
 *     MiSetSystemCacheReverseMap @ 0x1402C0620 (MiSetSystemCacheReverseMap.c)
 *     MiLockWorkingSetOptimal @ 0x1402C0690 (MiLockWorkingSetOptimal.c)
 *     MiReturnSystemVa @ 0x1402C0B88 (MiReturnSystemVa.c)
 *     MiReleaseSpinLockExclusive @ 0x140329B80 (MiReleaseSpinLockExclusive.c)
 *     MiExpandSystemCache @ 0x1403903C8 (MiExpandSystemCache.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x1403A2D94 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     MiReleaseSystemCacheView @ 0x1403B5010 (MiReleaseSystemCacheView.c)
 *     MiInsertReadiedSystemCacheViews @ 0x1403B5224 (MiInsertReadiedSystemCacheViews.c)
 *     MiConsumeSystemCacheTbFlushNeededView @ 0x14042C6C4 (MiConsumeSystemCacheTbFlushNeededView.c)
 *     CcUnmapInactiveViews @ 0x140459BE4 (CcUnmapInactiveViews.c)
 *     MiConsumeSystemCachePde @ 0x14046C778 (MiConsumeSystemCachePde.c)
 *     MiLateInitializeSystemCache @ 0x1404BE284 (MiLateInitializeSystemCache.c)
 *     MiReadyReservedView @ 0x1404C30BC (MiReadyReservedView.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiObtainSystemCacheView(__int64 a1)
{
  _QWORD *v2; // rsi
  __int64 v3; // r13
  int v4; // r12d
  KIRQL v5; // al
  unsigned __int64 v6; // r15
  int v7; // edi
  _QWORD *v8; // rbx
  __int64 v9; // rax
  int v10; // eax
  PVOID ***v11; // rcx
  PVOID **v12; // r8
  PVOID **v13; // rbx
  PVOID *v14; // rax
  unsigned __int64 v15; // rsi
  __int64 v16; // rdi
  __int64 v17; // rcx
  int v19; // ecx
  int v20; // ecx
  int v21; // ecx
  int v22; // eax
  unsigned int v23; // edi
  PVOID **v24; // r9
  PVOID **v25; // r9
  __int64 v26; // rcx
  signed __int32 v27[8]; // [rsp+0h] [rbp-38h] BYREF
  PVOID P; // [rsp+20h] [rbp-18h] BYREF
  PVOID *p_P; // [rsp+28h] [rbp-10h]
  void *retaddr; // [rsp+68h] [rbp+30h]
  unsigned __int8 v31; // [rsp+70h] [rbp+38h] BYREF
  __int64 v32; // [rsp+78h] [rbp+40h] BYREF

  p_P = &P;
  v2 = (_QWORD *)(a1 + 2288);
  v3 = 0LL;
  P = &P;
  v4 = 0;
  v5 = ExAcquireSpinLockExclusive(&dword_140E2F078);
  v6 = v5;
  if ( !*(_BYTE *)(a1 + 18524) )
  {
    MiReleaseSpinLockExclusive(&dword_140E2F078, v5);
    if ( !(unsigned int)MiLateInitializeSystemCache(a1) )
      return 0LL;
    ExAcquireSpinLockExclusive(&dword_140E2F078);
  }
  _InterlockedOr(v27, 0);
  v7 = KiTbFlushTimeStamp;
  if ( *(_QWORD *)(a1 + 2176) )
  {
    v19 = *(_DWORD *)(a1 + 2184);
    if ( (unsigned int)(KiTbFlushTimeStamp - v19) > 2 || (v19 & 1) == 0 && (unsigned int)(KiTbFlushTimeStamp - v19) >= 2 )
      MiInsertReadiedSystemCacheViews(a1, a1 + 2160);
  }
  if ( *(_QWORD *)(a1 + 2208) )
  {
    v20 = *(_DWORD *)(a1 + 2216);
    if ( (unsigned int)(v7 - v20) > 2 || (v20 & 1) == 0 && (unsigned int)(v7 - v20) >= 2 )
      MiInsertReadiedSystemCacheViews(a1, a1 + 2192);
  }
  if ( *(_QWORD *)(a1 + 2240) )
  {
    v21 = *(_DWORD *)(a1 + 2248);
    if ( (unsigned int)(v7 - v21) > 2 || (v21 & 1) == 0 && (unsigned int)(v7 - v21) >= 2 )
      MiInsertReadiedSystemCacheViews(a1, a1 + 2224);
  }
  if ( *(_QWORD *)(a1 + 2272) )
  {
    v22 = *(_DWORD *)(a1 + 2280);
    v23 = v7 - v22;
    if ( v23 > 2 || (v22 & 1) == 0 && v23 >= 2 )
      MiInsertReadiedSystemCacheViews(a1, a1 + 2256);
  }
  if ( v2[2] )
  {
    v8 = (_QWORD *)*v2;
    if ( *(_QWORD **)(*v2 + 8LL) != v2 || (v9 = *v8, *(_QWORD **)(*v8 + 8LL) != v8) )
LABEL_51:
      __fastfail(3u);
    *v2 = v9;
    *(_QWORD *)(v9 + 8) = v2;
    v8[4] = v8[4] & 0x3FFFFFFFFFFFFFFFLL | 0x8000000000000000uLL;
    --v2[2];
LABEL_10:
    v10 = *(_DWORD *)(a1 + 4);
    p_P = &P;
    P = &P;
    v11 = (PVOID ***)(a1 + 2320);
    while ( 1 )
    {
      v12 = *v11;
      if ( *v11 == (PVOID **)v11 || (v10 & 1) == 0 && *(_QWORD *)(a1 + 2336) <= 0x20uLL )
        break;
      if ( v12[1] != (PVOID *)v11 )
        goto LABEL_51;
      v24 = (PVOID **)*v12;
      if ( (*v12)[1] != v12 )
        goto LABEL_51;
      *v11 = v24;
      v24[1] = (PVOID *)v11;
      v25 = (PVOID **)p_P;
      --*(_QWORD *)(a1 + 2336);
      if ( *v25 != &P )
        goto LABEL_51;
      v12[1] = (PVOID *)v25;
      *v12 = &P;
      *v25 = (PVOID *)v12;
      p_P = (PVOID *)v12;
    }
    if ( (_BYTE)v6 == 17 )
    {
      if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
        dword_140E2F078 = 0;
      else
        ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&dword_140E2F078, retaddr);
    }
    else
    {
      if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
        dword_140E2F078 = 0;
      else
        ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&dword_140E2F078, retaddr);
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), (unsigned __int8)v6);
      __writecr8(v6);
    }
    if ( !v8 )
      goto LABEL_22;
    goto LABEL_21;
  }
  v8 = (_QWORD *)MiConsumeSystemCachePde(a1);
  if ( v8 )
    goto LABEL_10;
  v8 = (_QWORD *)MiConsumeSystemCacheTbFlushNeededView(a1, 1024LL);
  if ( v8 )
    goto LABEL_10;
  MiReleaseSpinLockExclusive(&dword_140E2F078, (unsigned __int8)v6);
  v8 = (_QWORD *)MiExpandSystemCache(a1);
  if ( !v8 )
  {
    ExAcquireSpinLockExclusive(&dword_140E2F078);
    v4 = 1;
    v8 = (_QWORD *)MiConsumeSystemCacheTbFlushNeededView(a1, 1LL);
    goto LABEL_10;
  }
LABEL_21:
  v3 = v8[2];
LABEL_22:
  if ( v4 )
  {
    v26 = *(_QWORD *)(a1 + 184);
    v32 = 0LL;
    if ( (unsigned int)CcUnmapInactiveViews(v26, 64LL, 0LL, &v32) )
    {
      if ( v3 )
        MiReleaseSystemCacheView(0LL, v3);
      v3 = v32;
      MiReadyReservedView(a1, v32);
    }
  }
  v13 = (PVOID **)P;
  if ( P != &P )
  {
    v31 = 0;
    while ( v13 != (PVOID **)&P )
    {
      if ( v13[1] != &P )
        goto LABEL_51;
      v14 = *v13;
      if ( (*v13)[1] != v13 )
        goto LABEL_51;
      P = *v13;
      v14[1] = &P;
      v15 = (unsigned __int64)v13[2];
      v16 = MiLockWorkingSetOptimal(a1 + 18816, ((v15 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, &v31);
      MiSetSystemCacheReverseMap(v17, v15, 0LL);
      MiUnlockWorkingSetOptimal(a1 + 18816, v16, v31);
      _InterlockedDecrement((volatile signed __int32 *)(a1 + 2408));
      MiReturnSystemVa(v15, v15 + 0x200000, 7LL);
      ExFreePoolWithTag(v13, 0);
      v13 = (PVOID **)P;
    }
  }
  return v3;
}
