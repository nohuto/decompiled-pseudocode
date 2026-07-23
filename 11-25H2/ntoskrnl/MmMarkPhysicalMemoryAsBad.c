/*
 * XREFs of MmMarkPhysicalMemoryAsBad @ 0x1406690F0
 * Callers:
 *     WheaAttemptRowOffline @ 0x140650B80 (WheaAttemptRowOffline.c)
 *     MiScrubLargePage @ 0x140682174 (MiScrubLargePage.c)
 *     WheapAttemptPhysicalPageOffline @ 0x1407B814C (WheapAttemptPhysicalPageOffline.c)
 * Callees:
 *     MiReleaseNonPagedResources @ 0x14021133C (MiReleaseNonPagedResources.c)
 *     MiGetPfnSlabType @ 0x1402170E0 (MiGetPfnSlabType.c)
 *     MiInsertPageInList @ 0x14021AFB0 (MiInsertPageInList.c)
 *     MiIsPageOnBadList @ 0x14021E29C (MiIsPageOnBadList.c)
 *     MiFindContiguousPagesEx @ 0x14021E3E0 (MiFindContiguousPagesEx.c)
 *     MiIsPfnFromChargedSlabAllocation @ 0x140227668 (MiIsPfnFromChargedSlabAllocation.c)
 *     MiAcquireNonPagedResources @ 0x14022E560 (MiAcquireNonPagedResources.c)
 *     MiSafeLockPage @ 0x140231E30 (MiSafeLockPage.c)
 *     MiAllocatePool @ 0x1402DA740 (MiAllocatePool.c)
 *     PsDereferencePartition @ 0x140302710 (PsDereferencePartition.c)
 *     MiUnlockPage @ 0x14032B850 (MiUnlockPage.c)
 *     MiSetPfnContainingFrame @ 0x14033BD00 (MiSetPfnContainingFrame.c)
 *     MiIsPfnCommitNotCharged @ 0x14033E4E0 (MiIsPfnCommitNotCharged.c)
 *     MiFreeContiguousPages @ 0x14038B910 (MiFreeContiguousPages.c)
 *     MiIsPageInHugePfn @ 0x140392030 (MiIsPageInHugePfn.c)
 *     KeGenericCallDpcEx @ 0x140417AB0 (KeGenericCallDpcEx.c)
 *     MiMarkHugePfnBad @ 0x140665444 (MiMarkHugePfnBad.c)
 *     MiReferencePagePartition @ 0x1406679A4 (MiReferencePagePartition.c)
 *     MiSetPfnRemovalRequested @ 0x140668B70 (MiSetPfnRemovalRequested.c)
 *     MiMarkFileOnlyPfnBad @ 0x14066FCB4 (MiMarkFileOnlyPfnBad.c)
 *     MiStoreDiscardPoisonedPage @ 0x1406806F8 (MiStoreDiscardPoisonedPage.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     ZwUpdateWnfStateData @ 0x14069ED60 (ZwUpdateWnfStateData.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MmMarkPhysicalMemoryAsBad(int *a1, _DWORD *a2)
{
  int v2; // r12d
  ULONG_PTR v4; // rdi
  ULONG_PTR v5; // r15
  int v6; // r12d
  unsigned int v7; // r14d
  __int64 v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // r8
  unsigned int v11; // eax
  char v12; // al
  unsigned __int8 v13; // si
  ULONG *v14; // r15
  __int64 v15; // r13
  _QWORD *Pool; // rsi
  __int64 v17; // rdx
  __int64 v18; // r8
  ULONG *v19; // rcx
  BOOL v20; // esi
  ULONG *v21; // r15
  int ContiguousPages; // esi
  __int64 v23; // rdx
  __int64 v24; // r8
  int v25; // edx
  char v26[8]; // [rsp+70h] [rbp-90h] BYREF
  ULONG *v27; // [rsp+78h] [rbp-88h] BYREF
  int v28; // [rsp+80h] [rbp-80h]
  ULONG_PTR v29; // [rsp+88h] [rbp-78h]
  int v30; // [rsp+90h] [rbp-70h]
  int v31; // [rsp+94h] [rbp-6Ch]
  ULONG_PTR v32; // [rsp+98h] [rbp-68h] BYREF
  __int64 v33; // [rsp+A0h] [rbp-60h]
  _QWORD *v34; // [rsp+A8h] [rbp-58h]
  ULONG *v35; // [rsp+B0h] [rbp-50h] BYREF
  char v36[88]; // [rsp+B8h] [rbp-48h] BYREF
  ULONG_PTR v37; // [rsp+110h] [rbp+10h]

  v2 = *a1;
  v34 = a2;
  v32 = 0LL;
  v27 = 0LL;
  if ( (v2 & 0xFFFu) > 1 )
    return 3221225711LL;
  if ( (*a2 & 0xFFF) != 0 )
    return 3221225712LL;
  if ( (MiFlags & 0x10000000) == 0 )
    return 3221225474LL;
  v4 = *(_QWORD *)a1 >> 12;
  v33 = *(_QWORD *)a2 >> 12;
  v5 = v4 + v33;
  v29 = v4 + v33;
  if ( v4 >= v4 + v33 )
    return 3221225711LL;
  v31 = 0;
  v30 = 0;
  v6 = (((v2 & 1) == 0) << 28) + 739246080;
  v7 = 0;
  v8 = 48 * v4 - 0x220000000000LL;
  while ( v4 < v5 )
  {
    if ( (unsigned int)MiIsPageInHugePfn(v4) )
    {
      v11 = MiMarkHugePfnBad(v4, v6);
    }
    else
    {
      v12 = MiSafeLockPage(v4, v9, v10);
      v13 = v12;
      if ( v12 == 17 )
      {
        v7 = -1073741584;
        goto LABEL_67;
      }
      if ( !_bittest64((const signed __int64 *)(v8 + 40), 0x35u) )
      {
        MiReferencePagePartition(v8, 1LL, &v27);
        MiUnlockPage(v8, v13);
        v14 = v27;
        if ( !v27 )
        {
          v7 = -1073741558;
LABEL_66:
          v5 = v29;
          goto LABEL_67;
        }
        v15 = *((_QWORD *)v27 + 23);
        if ( (int)MiAcquireNonPagedResources(v27, 2uLL, 0LL, 0LL) < 0 )
        {
          v7 = -1073741670;
          ContiguousPages = -1073741670;
          PsDereferencePartition(v15);
          goto LABEL_69;
        }
        Pool = (_QWORD *)MiAllocatePool(0x40uLL, 0x20uLL, 1816291661);
        v26[0] = MiSafeLockPage(v4, v17, v18);
        if ( v26[0] == 17 )
        {
          v7 = -1073741584;
          v19 = v14;
          goto LABEL_22;
        }
        if ( *((ULONG **)qword_140E2FD48 + ((*(_QWORD *)(v8 + 40) >> 43) & 0x3FFLL)) != v27 )
        {
          MiUnlockPage(v8, v26[0]);
          MiReleaseNonPagedResources((__int64)v27, 2uLL);
          PsDereferencePartition(v15);
          if ( Pool )
            ExFreePoolWithTag(Pool, 0);
          --v4;
          v8 -= 48LL;
          goto LABEL_66;
        }
        if ( (v6 & 0x10000000) != 0 && *(char *)(v8 + 35) >= 0 )
        {
          v28 = *(_DWORD *)(v8 + 32);
          HIBYTE(v28) |= 0x80u;
          *(_DWORD *)(v8 + 32) = v28;
        }
        if ( (*(_DWORD *)(v8 + 32) & 0x40000000) != 0 )
        {
          MiUnlockPage(v8, v26[0]);
          MiReleaseNonPagedResources((__int64)v27, 2uLL);
          PsDereferencePartition(v15);
          if ( Pool )
            ExFreePoolWithTag(Pool, 0);
          v7 = 259;
          goto LABEL_66;
        }
        if ( (*(_BYTE *)(v8 + 34) & 7) == 5
          && (_bittest64((const signed __int64 *)(v8 + 40), 0x35u) || MiIsPageOnBadList(v8)) )
        {
          MiUnlockPage(v8, v26[0]);
          v19 = v27;
LABEL_22:
          MiReleaseNonPagedResources((__int64)v19, 2uLL);
          PsDereferencePartition(v15);
          if ( Pool )
            ExFreePoolWithTag(Pool, 0);
          goto LABEL_66;
        }
        MiSetPfnRemovalRequested(v8, 1, 0, Pool);
        v7 = 0;
        v20 = 0;
        if ( (unsigned int)MiGetPfnSlabType(v8) != 9 )
          v20 = MiIsPfnFromChargedSlabAllocation(v8) == 0;
        if ( *(char *)(v8 + 35) >= 0 || v27[301] == -1 )
          goto LABEL_47;
        v21 = v27;
        if ( (v27[427] & 2) == 0 )
          goto LABEL_48;
        if ( *(__int64 *)(v8 + 40) < 0 || !(unsigned int)MiIsPfnCommitNotCharged(v8) )
        {
LABEL_47:
          v21 = v27;
        }
        else
        {
          v21 = v27;
          MiStoreDiscardPoisonedPage(v27, v8, v26);
        }
LABEL_48:
        if ( v26[0] != 17 )
          MiUnlockPage(v8, v26[0]);
        if ( v20 )
        {
          memset_0(v36, 0, sizeof(v36));
          v35 = v21;
          v37 = v4;
          KeGenericCallDpcEx((__int64)MiDemoteSlabEntriesDpc, (__int64)&v35);
        }
        ContiguousPages = MiFindContiguousPagesEx(
                            (__int64)v21,
                            v4,
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
                            &v32);
        v26[0] = MiSafeLockPage(v4, v23, v24);
        if ( v26[0] == 17 )
        {
          v7 = -1073741584;
          goto LABEL_63;
        }
        if ( ContiguousPages >= 0 )
        {
          if ( (*(_DWORD *)(v8 + 32) & 0x40000000) != 0 )
          {
            HIWORD(v28) = HIWORD(*(_DWORD *)(v8 + 32));
            LOWORD(v28) = 0;
            *(_DWORD *)(v8 + 32) = v28;
            MiSetPfnContainingFrame(v8, 0LL);
            MiInsertPageInList(v8, 0x20u);
LABEL_62:
            MiUnlockPage(v8, v26[0]);
            v21 = v27;
LABEL_63:
            MiReleaseNonPagedResources((__int64)v21, 1uLL);
          }
          else
          {
            MiUnlockPage(v8, v26[0]);
            MiFreeContiguousPages(v4, 1uLL, 0);
          }
          PsDereferencePartition(v15);
          if ( ContiguousPages == -1073741523 || ContiguousPages == -1073741670 )
          {
            v7 = ContiguousPages;
LABEL_69:
            v5 = v29;
            goto LABEL_72;
          }
          goto LABEL_66;
        }
        if ( !MiIsPageOnBadList(v8) )
        {
          if ( (*(_DWORD *)(v8 + 32) & 0x40000000) == 0 )
            goto LABEL_62;
          v7 = 259;
          byte_140E2FF08 = 1;
          v30 = 1;
        }
        ContiguousPages = v25;
        goto LABEL_62;
      }
      MiUnlockPage(v8, v12);
      v11 = MiMarkFileOnlyPfnBad(v8);
    }
    v7 = v11;
    if ( v11 == -1073740748 )
    {
      --v4;
      v8 -= 48LL;
    }
LABEL_67:
    ++v4;
    v8 += 48LL;
  }
  ContiguousPages = v31;
LABEL_72:
  if ( v30 && stru_140E2FC68.Header.SignalState && ((unsigned __int8)MiFlags & 0x30u) >= 0x20 )
    ZwUpdateWnfStateData(&WNF_MM_BAD_MEMORY_PENDING_REMOVAL, 0LL, 0, 0LL, 0LL, 0, 0);
  *v34 = (v33 + v4 - v5) << 12;
  if ( v33 == 1 )
    return v7;
  return (unsigned int)ContiguousPages;
}
