/*
 * XREFs of HvHiveCleanup @ 0x14087EC98
 * Callers:
 *     CmShutdownSystem2 @ 0x140667BF4 (CmShutdownSystem2.c)
 *     CmpDestroyHive @ 0x14097C14C (CmpDestroyHive.c)
 *     CmpCompleteUnloadKey @ 0x14097CB58 (CmpCompleteUnloadKey.c)
 * Callees:
 *     CmpFreeBootRegistry @ 0x140668C90 (CmpFreeBootRegistry.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     CmpFree @ 0x14087EC70 (CmpFree.c)
 *     CmpReleaseGlobalQuota @ 0x14087EEC0 (CmpReleaseGlobalQuota.c)
 *     HvpFreeHiveFreeDisplay @ 0x14087F578 (HvpFreeHiveFreeDisplay.c)
 *     HvpViewMapCleanup @ 0x140A4A184 (HvpViewMapCleanup.c)
 *     HvpFreeMap @ 0x140A51610 (HvpFreeMap.c)
 *     HvpFreeBin @ 0x140A6A13C (HvpFreeBin.c)
 *     HvpGetCellMap @ 0x140BB9710 (HvpGetCellMap.c)
 */

__int64 __fastcall HvHiveCleanup(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v5; // r12d
  unsigned int v6; // ebp
  unsigned int v7; // edi
  __int64 v8; // rsi
  unsigned int v9; // r13d
  unsigned int i; // r14d
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 CellMap; // r15
  __int64 v14; // rax
  _QWORD *v15; // rcx
  __int64 v16; // rdx
  _QWORD *v17; // rax
  __int64 v18; // rcx
  void *v19; // r14
  __int64 v20; // rcx
  void *v21; // rcx
  void *v22; // rcx

  *(_DWORD *)(a1 + 160) &= ~1u;
  v5 = *(_DWORD *)(a1 + 160) & 0x10;
  v6 = 0;
  v7 = 0;
  do
  {
    v8 = 632LL * v6;
    v9 = v7 + *(_DWORD *)(v8 + a1 + 280);
    if ( *(_QWORD *)(v8 + a1 + 288) && v9 != v7 )
    {
      for ( i = v7; i < v9; i += *(_DWORD *)(CellMap + 16) )
      {
        CellMap = HvpGetCellMap(a1, i);
        v14 = *(_QWORD *)(CellMap + 8);
        if ( !v14 )
          break;
        if ( (v14 & 2) != 0 )
        {
          v15 = *(_QWORD **)CellMap;
          if ( *(_QWORD *)CellMap )
          {
            v16 = *v15;
            if ( *(_QWORD **)(*v15 + 8LL) != v15 || (v17 = (_QWORD *)v15[1], (_QWORD *)*v17 != v15) )
              __fastfail(3u);
            *v17 = v16;
            *(_QWORD *)(v16 + 8) = v17;
            if ( *(void (__fastcall **)(PVOID, unsigned int))(a1 + 32) == CmpFree )
              CmpFree(v15, 0x18u);
            else
              guard_dispatch_icall_no_overrides(v15, 24LL, v11, v12);
          }
        }
        v18 = *(unsigned int *)(CellMap + 16);
        if ( (*(_QWORD *)(CellMap + 8) & 8) != 0 )
          HvpFreeBin(a1, (unsigned int)v18);
        else
          CmpReleaseGlobalQuota(v18);
      }
      v19 = *(void **)(v8 + a1 + 288);
      HvpFreeMap(a1, v19, 0LL, (unsigned int)((*(_DWORD *)(v8 + a1 + 280) >> 12) - 1) >> 9);
      if ( v19 != (void *)(v8 + a1 + 296) )
        CmpFree(v19, 0x2000u);
      *(_QWORD *)(v8 + a1 + 288) = 0LL;
      *(_DWORD *)(v8 + a1 + 280) = 0;
    }
    ++v6;
    v7 += 0x80000000;
  }
  while ( v6 < 2 );
  if ( v5 && _InterlockedExchangeAdd(&CmpPreloadedHivesCount, 0xFFFFFFFF) == 1 )
    CmpFreeBootRegistry();
  v20 = *(_QWORD *)(a1 + 64);
  if ( v20 )
  {
    guard_dispatch_icall_no_overrides(v20, *(unsigned int *)(a1 + 132), a3, a4);
    *(_QWORD *)(a1 + 64) = 0LL;
  }
  v21 = *(void **)(a1 + 96);
  if ( v21 )
  {
    CmpFree(v21, *(_DWORD *)(a1 + 108));
    *(_QWORD *)(a1 + 96) = 0LL;
  }
  v22 = *(void **)(a1 + 120);
  if ( v22 )
  {
    CmpFree(v22, *(_DWORD *)(a1 + 108));
    *(_QWORD *)(a1 + 120) = 0LL;
  }
  HvpViewMapCleanup(a1 + 224);
  return HvpFreeHiveFreeDisplay(a1);
}
