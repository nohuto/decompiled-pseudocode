/*
 * XREFs of MmMarkPhysicalMemoryAsBad @ 0x140675D20
 * Callers:
 *     WheaAttemptRowOffline @ 0x14065B230 (WheaAttemptRowOffline.c)
 *     MiScrubLargePage @ 0x14068EB34 (MiScrubLargePage.c)
 *     WheapAttemptPhysicalPageOffline @ 0x1407C7DBC (WheapAttemptPhysicalPageOffline.c)
 * Callees:
 *     MiIsPfnFromChargedSlabAllocation @ 0x14021D558 (MiIsPfnFromChargedSlabAllocation.c)
 *     PsDereferencePartition @ 0x14022B3F0 (PsDereferencePartition.c)
 *     KeGenericCallDpcEx @ 0x140270AE8 (KeGenericCallDpcEx.c)
 *     MiAllocatePool @ 0x140277450 (MiAllocatePool.c)
 *     MiUnlockPage @ 0x1402A11F0 (MiUnlockPage.c)
 *     MiInsertPageInList @ 0x140300420 (MiInsertPageInList.c)
 *     MiGetPfnSlabType @ 0x140300F20 (MiGetPfnSlabType.c)
 *     MiIsPageOnBadList @ 0x14030E80C (MiIsPageOnBadList.c)
 *     MiFindContiguousPagesEx @ 0x14030E840 (MiFindContiguousPagesEx.c)
 *     MiSafeLockPage @ 0x140334630 (MiSafeLockPage.c)
 *     MiReleaseNonPagedResources @ 0x1403358DC (MiReleaseNonPagedResources.c)
 *     MiAcquireNonPagedResources @ 0x14033A560 (MiAcquireNonPagedResources.c)
 *     MiIsPfnCommitNotCharged @ 0x140345F70 (MiIsPfnCommitNotCharged.c)
 *     MiSetPfnContainingFrame @ 0x140347E40 (MiSetPfnContainingFrame.c)
 *     MiIsPageInHugePfn @ 0x14038ED20 (MiIsPageInHugePfn.c)
 *     MiFreeContiguousPages @ 0x140398278 (MiFreeContiguousPages.c)
 *     MiMarkHugePfnBad @ 0x1406720BC (MiMarkHugePfnBad.c)
 *     MiReferencePagePartition @ 0x1406745D4 (MiReferencePagePartition.c)
 *     MiSetPfnRemovalRequested @ 0x1406757A0 (MiSetPfnRemovalRequested.c)
 *     MiMarkFileOnlyPfnBad @ 0x14067C654 (MiMarkFileOnlyPfnBad.c)
 *     MiStoreDiscardPoisonedPage @ 0x14068D0B8 (MiStoreDiscardPoisonedPage.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ZwUpdateWnfStateData @ 0x1406AAFD0 (ZwUpdateWnfStateData.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MmMarkPhysicalMemoryAsBad(int *a1, _DWORD *a2)
{
  int v2; // r12d
  ULONG_PTR v4; // rdi
  ULONG_PTR v5; // r15
  int v6; // r12d
  unsigned int v7; // r14d
  __int64 v8; // rbx
  unsigned int v9; // eax
  char v10; // al
  unsigned __int8 v11; // si
  ULONG *v12; // r15
  __int64 v13; // r13
  _QWORD *Pool; // rsi
  ULONG *v15; // rcx
  BOOL v16; // esi
  ULONG *v17; // r15
  int ContiguousPages; // esi
  int v19; // edx
  char v20[8]; // [rsp+70h] [rbp-90h] BYREF
  ULONG *v21; // [rsp+78h] [rbp-88h] BYREF
  int v22; // [rsp+80h] [rbp-80h]
  ULONG_PTR v23; // [rsp+88h] [rbp-78h]
  int v24; // [rsp+90h] [rbp-70h]
  int v25; // [rsp+94h] [rbp-6Ch]
  ULONG_PTR v26; // [rsp+98h] [rbp-68h] BYREF
  __int64 v27; // [rsp+A0h] [rbp-60h]
  _QWORD *v28; // [rsp+A8h] [rbp-58h]
  ULONG *v29; // [rsp+B0h] [rbp-50h] BYREF
  char v30[88]; // [rsp+B8h] [rbp-48h] BYREF
  ULONG_PTR v31; // [rsp+110h] [rbp+10h]

  v2 = *a1;
  v28 = a2;
  v26 = 0LL;
  v21 = 0LL;
  if ( (v2 & 0xFFFu) > 1 )
    return 3221225711LL;
  if ( (*a2 & 0xFFF) != 0 )
    return 3221225712LL;
  if ( (MiFlags & 0x10000000) == 0 )
    return 3221225474LL;
  v4 = *(_QWORD *)a1 >> 12;
  v27 = *(_QWORD *)a2 >> 12;
  v5 = v4 + v27;
  v23 = v4 + v27;
  if ( v4 >= v4 + v27 )
    return 3221225711LL;
  v25 = 0;
  v24 = 0;
  v6 = (((v2 & 1) == 0) << 28) + 739246080;
  v7 = 0;
  v8 = 48 * v4 - 0x220000000000LL;
  while ( v4 < v5 )
  {
    if ( (unsigned int)MiIsPageInHugePfn(v4) )
    {
      v9 = MiMarkHugePfnBad(v4, v6);
    }
    else
    {
      v10 = MiSafeLockPage(v4);
      v11 = v10;
      if ( v10 == 17 )
      {
        v7 = -1073741584;
        goto LABEL_67;
      }
      if ( !_bittest64((const signed __int64 *)(v8 + 40), 0x35u) )
      {
        MiReferencePagePartition(v8, 1, &v21);
        MiUnlockPage(v8, v11);
        v12 = v21;
        if ( !v21 )
        {
          v7 = -1073741558;
LABEL_66:
          v5 = v23;
          goto LABEL_67;
        }
        v13 = *((_QWORD *)v21 + 23);
        if ( (int)MiAcquireNonPagedResources(v21, 2uLL, 0LL, 0LL) < 0 )
        {
          v7 = -1073741670;
          ContiguousPages = -1073741670;
          PsDereferencePartition(v13);
          goto LABEL_69;
        }
        Pool = (_QWORD *)MiAllocatePool(0x40uLL, 0x20uLL, 1816291661);
        v20[0] = MiSafeLockPage(v4);
        if ( v20[0] == 17 )
        {
          v7 = -1073741584;
          v15 = v12;
          goto LABEL_22;
        }
        if ( *((ULONG **)qword_140E300C8 + ((*(_QWORD *)(v8 + 40) >> 43) & 0x3FFLL)) != v21 )
        {
          MiUnlockPage(v8, v20[0]);
          MiReleaseNonPagedResources((__int64)v21, 2uLL);
          PsDereferencePartition(v13);
          if ( Pool )
            ExFreePoolWithTag(Pool, 0);
          --v4;
          v8 -= 48LL;
          goto LABEL_66;
        }
        if ( (v6 & 0x10000000) != 0 && *(char *)(v8 + 35) >= 0 )
        {
          v22 = *(_DWORD *)(v8 + 32);
          HIBYTE(v22) |= 0x80u;
          *(_DWORD *)(v8 + 32) = v22;
        }
        if ( (*(_DWORD *)(v8 + 32) & 0x40000000) != 0 )
        {
          MiUnlockPage(v8, v20[0]);
          MiReleaseNonPagedResources((__int64)v21, 2uLL);
          PsDereferencePartition(v13);
          if ( Pool )
            ExFreePoolWithTag(Pool, 0);
          v7 = 259;
          goto LABEL_66;
        }
        if ( (*(_BYTE *)(v8 + 34) & 7) == 5
          && (_bittest64((const signed __int64 *)(v8 + 40), 0x35u) || MiIsPageOnBadList(v8)) )
        {
          MiUnlockPage(v8, v20[0]);
          v15 = v21;
LABEL_22:
          MiReleaseNonPagedResources((__int64)v15, 2uLL);
          PsDereferencePartition(v13);
          if ( Pool )
            ExFreePoolWithTag(Pool, 0);
          goto LABEL_66;
        }
        MiSetPfnRemovalRequested(v8, 1, 0, Pool);
        v7 = 0;
        v16 = 0;
        if ( (unsigned int)MiGetPfnSlabType(v8) != 9 )
          v16 = MiIsPfnFromChargedSlabAllocation(v8) == 0;
        if ( *(char *)(v8 + 35) >= 0 || v21[301] == -1 )
          goto LABEL_47;
        v17 = v21;
        if ( (v21[427] & 2) == 0 )
          goto LABEL_48;
        if ( *(__int64 *)(v8 + 40) < 0 || !(unsigned int)MiIsPfnCommitNotCharged(v8) )
        {
LABEL_47:
          v17 = v21;
        }
        else
        {
          v17 = v21;
          MiStoreDiscardPoisonedPage(v21, v8, v20);
        }
LABEL_48:
        if ( v20[0] != 17 )
          MiUnlockPage(v8, v20[0]);
        if ( v16 )
        {
          memset_0(v30, 0, sizeof(v30));
          v29 = v17;
          v31 = v4;
          KeGenericCallDpcEx((__int64)MiDemoteSlabEntriesDpc, (__int64)&v29);
        }
        ContiguousPages = MiFindContiguousPagesEx(
                            (unsigned __int64)v17,
                            (_BYTE *)v4,
                            v4,
                            0LL,
                            0,
                            1LL,
                            1u,
                            0x80000000,
                            255,
                            v6 | 0x10000000u,
                            0,
                            0LL,
                            0LL,
                            &v26);
        v20[0] = MiSafeLockPage(v4);
        if ( v20[0] == 17 )
        {
          v7 = -1073741584;
          goto LABEL_63;
        }
        if ( ContiguousPages >= 0 )
        {
          if ( (*(_DWORD *)(v8 + 32) & 0x40000000) != 0 )
          {
            HIWORD(v22) = HIWORD(*(_DWORD *)(v8 + 32));
            LOWORD(v22) = 0;
            *(_DWORD *)(v8 + 32) = v22;
            MiSetPfnContainingFrame(v8, 0LL);
            MiInsertPageInList(v8, 0x20u);
LABEL_62:
            MiUnlockPage(v8, v20[0]);
            v17 = v21;
LABEL_63:
            MiReleaseNonPagedResources((__int64)v17, 1uLL);
          }
          else
          {
            MiUnlockPage(v8, v20[0]);
            MiFreeContiguousPages(v4, 1uLL, 0LL);
          }
          PsDereferencePartition(v13);
          if ( ContiguousPages == -1073741523 || ContiguousPages == -1073741670 )
          {
            v7 = ContiguousPages;
LABEL_69:
            v5 = v23;
            goto LABEL_72;
          }
          goto LABEL_66;
        }
        if ( !MiIsPageOnBadList(v8) )
        {
          if ( (*(_DWORD *)(v8 + 32) & 0x40000000) == 0 )
            goto LABEL_62;
          v7 = 259;
          byte_140E30290 = 1;
          v24 = 1;
        }
        ContiguousPages = v19;
        goto LABEL_62;
      }
      MiUnlockPage(v8, v10);
      v9 = MiMarkFileOnlyPfnBad(v8);
    }
    v7 = v9;
    if ( v9 == -1073740748 )
    {
      --v4;
      v8 -= 48LL;
    }
LABEL_67:
    ++v4;
    v8 += 48LL;
  }
  ContiguousPages = v25;
LABEL_72:
  if ( v24 && stru_140E2FFE8.Header.SignalState && ((unsigned __int8)MiFlags & 0x30u) >= 0x20 )
    ZwUpdateWnfStateData(&WNF_MM_BAD_MEMORY_PENDING_REMOVAL, 0LL, 0, 0LL, 0LL, 0, 0);
  *v28 = (v27 + v4 - v5) << 12;
  if ( v27 == 1 )
    return v7;
  return (unsigned int)ContiguousPages;
}
