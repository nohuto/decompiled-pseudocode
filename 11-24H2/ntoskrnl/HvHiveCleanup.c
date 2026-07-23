/*
 * XREFs of HvHiveCleanup @ 0x140882B48
 * Callers:
 *     CmShutdownSystem2 @ 0x1406664E4 (CmShutdownSystem2.c)
 *     CmpDestroyHive @ 0x14096495C (CmpDestroyHive.c)
 *     CmpCompleteUnloadKey @ 0x140965368 (CmpCompleteUnloadKey.c)
 * Callees:
 *     CmpFreeBootRegistry @ 0x140669E68 (CmpFreeBootRegistry.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     CmpFree @ 0x140882B20 (CmpFree.c)
 *     CmpReleaseGlobalQuota @ 0x140882D70 (CmpReleaseGlobalQuota.c)
 *     HvpFreeHiveFreeDisplay @ 0x140883428 (HvpFreeHiveFreeDisplay.c)
 *     HvpViewMapCleanup @ 0x140A40EA4 (HvpViewMapCleanup.c)
 *     HvpFreeMap @ 0x140A486DC (HvpFreeMap.c)
 *     HvpFreeBin @ 0x140A634EC (HvpFreeBin.c)
 *     HvpGetCellMap @ 0x140BBB710 (HvpGetCellMap.c)
 */

__int64 __fastcall HvHiveCleanup(__int64 a1)
{
  int v2; // r12d
  unsigned int v3; // ebp
  unsigned int v4; // edi
  __int64 v5; // rsi
  unsigned int v6; // r13d
  unsigned int i; // r14d
  __int64 CellMap; // r15
  __int64 v9; // rax
  _QWORD *v10; // rcx
  __int64 v11; // rdx
  _QWORD *v12; // rax
  __int64 v13; // rcx
  void *v14; // r14
  __int64 v15; // rcx
  void *v16; // rcx
  void *v17; // rcx

  *(_DWORD *)(a1 + 160) &= ~1u;
  v2 = *(_DWORD *)(a1 + 160) & 0x10;
  v3 = 0;
  v4 = 0;
  do
  {
    v5 = 632LL * v3;
    v6 = v4 + *(_DWORD *)(v5 + a1 + 280);
    if ( *(_QWORD *)(v5 + a1 + 288) && v6 != v4 )
    {
      for ( i = v4; i < v6; i += *(_DWORD *)(CellMap + 16) )
      {
        CellMap = HvpGetCellMap(a1, i);
        v9 = *(_QWORD *)(CellMap + 8);
        if ( !v9 )
          break;
        if ( (v9 & 2) != 0 )
        {
          v10 = *(_QWORD **)CellMap;
          if ( *(_QWORD *)CellMap )
          {
            v11 = *v10;
            if ( *(_QWORD **)(*v10 + 8LL) != v10 || (v12 = (_QWORD *)v10[1], (_QWORD *)*v12 != v10) )
              __fastfail(3u);
            *v12 = v11;
            *(_QWORD *)(v11 + 8) = v12;
            if ( *(void (__fastcall **)(PVOID, unsigned int))(a1 + 32) == CmpFree )
              CmpFree(v10, 0x18u);
            else
              guard_dispatch_icall_no_overrides(v10, 24LL);
          }
        }
        v13 = *(unsigned int *)(CellMap + 16);
        if ( (*(_QWORD *)(CellMap + 8) & 8) != 0 )
          HvpFreeBin(a1, (unsigned int)v13);
        else
          CmpReleaseGlobalQuota(v13);
      }
      v14 = *(void **)(v5 + a1 + 288);
      HvpFreeMap(a1, v14, 0LL, (unsigned int)((*(_DWORD *)(v5 + a1 + 280) >> 12) - 1) >> 9);
      if ( v14 != (void *)(v5 + a1 + 296) )
        CmpFree(v14, 0x2000u);
      *(_QWORD *)(v5 + a1 + 288) = 0LL;
      *(_DWORD *)(v5 + a1 + 280) = 0;
    }
    ++v3;
    v4 += 0x80000000;
  }
  while ( v3 < 2 );
  if ( v2 && _InterlockedExchangeAdd(&CmpPreloadedHivesCount, 0xFFFFFFFF) == 1 )
    CmpFreeBootRegistry();
  v15 = *(_QWORD *)(a1 + 64);
  if ( v15 )
  {
    guard_dispatch_icall_no_overrides(v15, *(unsigned int *)(a1 + 132));
    *(_QWORD *)(a1 + 64) = 0LL;
  }
  v16 = *(void **)(a1 + 96);
  if ( v16 )
  {
    CmpFree(v16, *(_DWORD *)(a1 + 108));
    *(_QWORD *)(a1 + 96) = 0LL;
  }
  v17 = *(void **)(a1 + 120);
  if ( v17 )
  {
    CmpFree(v17, *(_DWORD *)(a1 + 108));
    *(_QWORD *)(a1 + 120) = 0LL;
  }
  HvpViewMapCleanup(a1 + 224);
  return HvpFreeHiveFreeDisplay(a1);
}
