/*
 * XREFs of MiProbeLeafPteAccess @ 0x1402ADF50
 * Callers:
 *     MmProbeAndLockSelectedPages @ 0x1402AABA0 (MmProbeAndLockSelectedPages.c)
 *     MiProbeAndLockPacket @ 0x1402AC750 (MiProbeAndLockPacket.c)
 *     MmStoreProbeAndLockPages @ 0x1402CB0A0 (MmStoreProbeAndLockPages.c)
 * Callees:
 *     MiCanPageMove @ 0x14022A690 (MiCanPageMove.c)
 *     MmAccessFault @ 0x1402B5880 (MmAccessFault.c)
 *     MiUnlockProbePacketWorkingSet @ 0x1402BB270 (MiUnlockProbePacketWorkingSet.c)
 *     MiClearPfnImageVerified @ 0x1402CC5F0 (MiClearPfnImageVerified.c)
 *     MiLockProbePacketWorkingSet @ 0x1402FC680 (MiLockProbePacketWorkingSet.c)
 *     MiIsDriverPage @ 0x14036D6BC (MiIsDriverPage.c)
 *     MiCopyOnWrite @ 0x140386068 (MiCopyOnWrite.c)
 *     MiIsPfnEnclave @ 0x14038D160 (MiIsPfnEnclave.c)
 *     MiLocateCloneAddress @ 0x1403DE800 (MiLocateCloneAddress.c)
 *     MiCopyOnWriteCheckConditions @ 0x1403DE840 (MiCopyOnWriteCheckConditions.c)
 *     MiProcessCommitIntact @ 0x1403FA380 (MiProcessCommitIntact.c)
 *     MiLegitimatePageForDriversToMap @ 0x1404336D0 (MiLegitimatePageForDriversToMap.c)
 *     MiOkToSetPteDirtyForNotValidFault @ 0x1404345B0 (MiOkToSetPteDirtyForNotValidFault.c)
 *     MiSplitReducedCommitClonePage @ 0x1404F6C24 (MiSplitReducedCommitClonePage.c)
 *     MiSplitDriverPage @ 0x1407D8198 (MiSplitDriverPage.c)
 */

__int64 __fastcall MiProbeLeafPteAccess(__int64 a1, _DWORD *a2)
{
  int v2; // esi
  __int64 v3; // rbx
  int v4; // r14d
  ULONG_PTR v5; // r12
  int v7; // r15d
  unsigned __int64 v9; // rax
  __int64 v10; // rdi
  int v11; // ecx
  int v12; // eax
  unsigned __int64 v13; // rdx
  __int64 v14; // r10
  __int64 v15; // r9
  __int64 v16; // r8
  __int64 result; // rax
  int v18; // ebx
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 CloneAddress; // rax
  __int64 v22; // rcx
  unsigned int v23; // r11d
  __int64 v24; // rcx
  int v25; // ebx
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 IsDriverPage; // r14
  int v29; // ebx
  __int64 v30; // [rsp+60h] [rbp+8h] BYREF

  v2 = 0;
  v3 = *(_QWORD *)(a1 + 48);
  v4 = *(_DWORD *)(a1 + 72) & 0xF;
  v5 = *(_QWORD *)(a1 + 8);
  v7 = *(_DWORD *)(a1 + 96);
  *a2 = 0;
  if ( (v3 & 4) == 0 && v4 == 1 )
  {
    ++dword_140E2FEC8;
    return 3221225477LL;
  }
  v9 = ((unsigned __int64)v3 >> 12) & 0xFFFFFFFFFFLL;
  if ( v9 <= qword_140E2D9A0 && (*(_QWORD *)(48 * v9 - 0x21FFFFFFFFD8LL) & 0x40000000000000LL) != 0 )
  {
    v10 = 48 * v9 - 0x220000000000LL;
    if ( (unsigned int)MiIsPfnEnclave(v10) )
    {
      ++dword_140E2FEF4;
      return 3221225477LL;
    }
    if ( (int)MiLegitimatePageForDriversToMap(v10) < 0 )
    {
      ++dword_140E2FEF0;
      return 3221225477LL;
    }
  }
  else
  {
    v10 = 0LL;
  }
  v11 = 0;
  if ( v5 < 0xFFFF800000000000uLL )
    v12 = 0;
  else
    v12 = byte_140E38768[((v5 >> 39) & 0x1FF) - 256];
  if ( v4 == 6 && v12 == 11 )
    v11 = 1;
  v13 = 0x8000000000000000uLL;
  v14 = 0x1000000000000000LL;
  v15 = 0x10000000000LL;
  if ( v7 == 3 )
  {
    if ( v5 > 0x7FFFFFFEFFFFLL )
      return 3221225477LL;
    if ( v3 < 0 && (v3 & 0x800) != 0 )
      return 3221225496LL;
    if ( v10 && (*(_QWORD *)(v10 + 40) & 0x10000000000LL) == 0 && *(__int64 *)(v10 + 8) > 0 )
    {
      if ( (*(_QWORD *)((*(_QWORD *)(v10 + 8) | 0x8000000000000000uLL) + 0x10) & 0x1000000000000000LL) != 0 )
        return 3221225477LL;
      v16 = 0LL;
      goto LABEL_10;
    }
  }
  v16 = 0LL;
  if ( v7 )
  {
LABEL_10:
    if ( (v3 & 0x800) == 0 )
    {
      if ( v7 != 3 && (v4 != 6 || !v11) )
      {
        *a2 = 2;
        return 0LL;
      }
      if ( v10 && *(__int64 *)(v10 + 40) >= 0 )
      {
        if ( (MiFlags & 0x4000) != 0 && ((*(_QWORD *)(v10 + 40) >> 60) & 7) == 3 )
          MiClearPfnImageVerified(v10, 73LL);
        return 0LL;
      }
      goto LABEL_60;
    }
    if ( (v3 & 0x42) == 0 && v4 == 1 && !(unsigned int)MiOkToSetPteDirtyForNotValidFault(v3, v5) )
    {
      MiUnlockProbePacketWorkingSet(a1);
      v18 = MmAccessFault(2uLL, v5);
      MiLockProbePacketWorkingSet(a1);
      if ( v18 < 0 )
      {
        ++dword_140E2FEC0;
        return (unsigned int)v18;
      }
      goto LABEL_69;
    }
    goto LABEL_12;
  }
  if ( v11 )
  {
    if ( !v10 )
      return 0LL;
    if ( *(__int64 *)(v10 + 40) < 0 && (MiCanPageMove(v10) || _bittest64((const signed __int64 *)(v10 + 40), 0x35u)) )
    {
      v20 = *(_QWORD *)(v10 + 16);
      if ( (v20 & 0x400) == 0 )
        goto LABEL_99;
      if ( qword_140E2D940 && (v20 & 0x10) == 0 )
        v20 &= ~qword_140E2D940;
      if ( (*(_DWORD *)(*(_QWORD *)(v20 >> 16) + 56LL) & 0x20) != 0 )
      {
LABEL_99:
        IsDriverPage = MiIsDriverPage(*(_QWORD *)(a1 + 24), 0LL);
        if ( IsDriverPage )
        {
          MiUnlockProbePacketWorkingSet(a1);
          v29 = MiSplitDriverPage(IsDriverPage, *(_QWORD *)(a1 + 24));
          MiLockProbePacketWorkingSet(a1);
          if ( v29 >= 0 )
            goto LABEL_69;
          ++dword_140E2FEEC;
          return (unsigned int)v29;
        }
        v16 = 0LL;
        v15 = 0x10000000000LL;
        v14 = 0x1000000000000000LL;
      }
    }
    goto LABEL_13;
  }
LABEL_12:
  if ( !v10 )
    return 0LL;
LABEL_13:
  if ( (*(_DWORD *)(v10 + 32) & 0x200000) != 0
    && (*(_DWORD *)(v10 + 32) & 0x80000) == 0
    && (*(_QWORD *)(v10 + 24) & 0x3FFFFFFFFFFFFFFFLL) == 0 )
  {
    return 0LL;
  }
  if ( ((*(_QWORD *)(v10 + 40) >> 60) & 7) != 1 && (*(_QWORD *)(v10 + 40) & v15) == 0 && *(__int64 *)(v10 + 8) > 0 )
  {
    if ( (*(_QWORD *)((*(_QWORD *)(v10 + 8) | 0x8000000000000000uLL) + 0x10) & v14) != 0 )
      return 0LL;
    goto LABEL_60;
  }
  if ( v7 || *(__int64 *)(v10 + 40) >= 0 )
    return 0LL;
  v19 = *(_QWORD *)(a1 + 88);
  if ( v19 )
  {
    if ( (*(_DWORD *)(a1 + 72) & 0x10) != 0 )
    {
      CloneAddress = MiLocateCloneAddress(v19, *(_QWORD *)(v10 + 8) | 0x8000000000000000uLL, v16);
      if ( CloneAddress )
      {
        if ( *(_QWORD *)(*(_QWORD *)(v22 + 1040) + 1064LL) > *(_QWORD *)(CloneAddress + 96) )
          goto LABEL_58;
        v16 = v23;
      }
    }
  }
  if ( (*(_DWORD *)(a1 + 72) & 0x40) == 0 )
  {
    if ( (_DWORD)v16 )
      goto LABEL_60;
    return 0LL;
  }
  if ( !(_DWORD)v16 )
  {
    if ( (v3 & 0x200) == 0 )
      return 0LL;
    v30 = 0LL;
    goto LABEL_68;
  }
LABEL_60:
  v30 = 0LL;
  if ( v7 == 3 )
  {
    if ( v3 < 0 )
      return 3221225541LL;
    v24 = *(_QWORD *)(a1 + 88);
    if ( v24 )
    {
      if ( (*(_DWORD *)(a1 + 72) & 0x10) != 0 )
      {
        v26 = MiLocateCloneAddress(v24, *(_QWORD *)(v10 + 8) | 0x8000000000000000uLL, v16);
        if ( v26 )
        {
          if ( *(_QWORD *)(*(_QWORD *)(v27 + 1040) + 1064LL) > *(_QWORD *)(v26 + 96) )
          {
LABEL_58:
            result = MiSplitReducedCommitClonePage(a1);
            if ( (int)result < 0 )
            {
              ++dword_140E2FEE8;
              return result;
            }
LABEL_69:
            *a2 = 1;
            return 0LL;
          }
          goto LABEL_68;
        }
      }
    }
    if ( (v3 & 0x200) == 0 && ((*(_QWORD *)(v10 + 40) & v15) != 0 || *(__int64 *)(v10 + 8) < 0 || !*(_QWORD *)(v10 + 8)) )
    {
      if ( (unsigned int)MiProcessCommitIntact(v5, v13) )
      {
        ++*(_QWORD *)(a1 + 112);
        v2 = 1;
        goto LABEL_68;
      }
      return 3221225477LL;
    }
  }
LABEL_68:
  v25 = MiCopyOnWrite(v5, *(_QWORD *)(a1 + 24), (__int64)&v30);
  if ( v25 >= 0 )
    goto LABEL_69;
  if ( v2 )
    --*(_QWORD *)(a1 + 112);
  if ( *(_BYTE *)(a1 + 76) != 2
    && (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) == 0
    && (*(_DWORD *)(*(_QWORD *)(a1 + 80) + 1444LL) & 0xC) == 0 )
  {
    MiUnlockProbePacketWorkingSet(a1);
    MiCopyOnWriteCheckConditions(*(_QWORD *)(a1 + 104), (unsigned int)v25, v30);
    MiLockProbePacketWorkingSet(a1);
    goto LABEL_69;
  }
  ++dword_140E2FEEC;
  return 3221225495LL;
}
