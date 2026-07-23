/*
 * XREFs of MiProbeLeafPteAccess @ 0x1402394D0
 * Callers:
 *     MiProbeAndLockPacket @ 0x140237CC0 (MiProbeAndLockPacket.c)
 *     MmStoreProbeAndLockPages @ 0x1402E9990 (MmStoreProbeAndLockPages.c)
 *     MmProbeAndLockSelectedPages @ 0x140390AC0 (MmProbeAndLockSelectedPages.c)
 * Callees:
 *     MiLockProbePacketWorkingSet @ 0x14020AFF0 (MiLockProbePacketWorkingSet.c)
 *     MiUnlockProbePacketWorkingSet @ 0x14020BCC0 (MiUnlockProbePacketWorkingSet.c)
 *     MmAccessFault @ 0x140243610 (MmAccessFault.c)
 *     MiIsDriverPage @ 0x1402BA964 (MiIsDriverPage.c)
 *     MiClearPfnImageVerified @ 0x1402EAB40 (MiClearPfnImageVerified.c)
 *     MiCanPageMove @ 0x14033FB90 (MiCanPageMove.c)
 *     MiCopyOnWrite @ 0x140346A74 (MiCopyOnWrite.c)
 *     MiCopyOnWriteCheckConditions @ 0x1403C927C (MiCopyOnWriteCheckConditions.c)
 *     MiLocateCloneAddress @ 0x1403C9CE8 (MiLocateCloneAddress.c)
 *     MiProcessCommitIntact @ 0x1403FC8C0 (MiProcessCommitIntact.c)
 *     MiLegitimatePageForDriversToMap @ 0x14041DB10 (MiLegitimatePageForDriversToMap.c)
 *     MiOkToSetPteDirtyForNotValidFault @ 0x140422570 (MiOkToSetPteDirtyForNotValidFault.c)
 *     MiSplitReducedCommitClonePage @ 0x1404F6C58 (MiSplitReducedCommitClonePage.c)
 *     MiSplitDriverPage @ 0x1407E8628 (MiSplitDriverPage.c)
 */

__int64 __fastcall MiProbeLeafPteAccess(__int64 a1, _DWORD *a2)
{
  int v2; // esi
  __int64 v3; // rbx
  int v4; // r14d
  ULONG_PTR v5; // r13
  _DWORD *v6; // r8
  int v7; // r15d
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rdi
  int v12; // ecx
  int v13; // eax
  unsigned __int64 v14; // rdx
  __int64 v15; // r10
  __int64 v16; // r9
  int v17; // r12d
  __int64 result; // rax
  unsigned __int64 v19; // r8
  _QWORD *v20; // rcx
  int v21; // ebx
  __int64 v22; // rcx
  unsigned __int64 v23; // r8
  __int64 v24; // rcx
  int v25; // ebx
  __int64 v26; // rax
  __int64 CloneAddress; // rax
  __int64 v28; // rcx
  int v29; // r11d
  __int64 v30; // rax
  __int64 v31; // rcx
  __int64 IsDriverPage; // r14
  int v33; // ebx
  __int64 v34; // [rsp+70h] [rbp+8h] BYREF
  _DWORD *v35; // [rsp+78h] [rbp+10h]

  v35 = a2;
  v2 = 0;
  v3 = *(_QWORD *)(a1 + 48);
  v4 = *(_DWORD *)(a1 + 72) & 0xF;
  v5 = *(_QWORD *)(a1 + 8);
  v6 = a2;
  v7 = *(_DWORD *)(a1 + 96);
  *a2 = 0;
  if ( (v3 & 4) == 0 && v4 == 1 )
  {
    ++dword_140E30250;
    return 3221225477LL;
  }
  v9 = ((unsigned __int64)v3 >> 12) & 0xFFFFFFFFFFLL;
  if ( v9 <= qword_140E2DD20 && (v10 = 48 * v9, (*(_QWORD *)(48 * v9 - 0x21FFFFFFFFD8LL) & 0x40000000000000LL) != 0) )
  {
    v20 = (_QWORD *)qword_140E375F8;
    v11 = v10 - 0x220000000000LL;
    if ( qword_140E375F8 )
    {
      if ( ((*(_QWORD *)(v11 + 40) >> 60) & 7) == 1 )
      {
        v10 /= 0x30uLL;
        if ( qword_140E375F8 )
        {
          do
          {
            v19 = v20[3];
            if ( v10 < v19 )
            {
              v20 = (_QWORD *)*v20;
            }
            else
            {
              if ( v10 - v19 < v20[4] )
              {
                ++dword_140E3027C;
                return 3221225477LL;
              }
              v20 = (_QWORD *)v20[1];
            }
          }
          while ( v20 );
        }
      }
    }
    if ( (int)MiLegitimatePageForDriversToMap(v11, v10) < 0 )
    {
      ++dword_140E30278;
      return 3221225477LL;
    }
    v6 = v35;
  }
  else
  {
    v11 = 0LL;
  }
  v12 = 0;
  if ( v5 < 0xFFFF800000000000uLL )
    v13 = 0;
  else
    v13 = byte_140E38AE8[((v5 >> 39) & 0x1FF) - 256];
  if ( v4 == 6 && v13 == 11 )
    v12 = 1;
  v14 = 0x8000000000000000uLL;
  v15 = 0x1000000000000000LL;
  v16 = 0x10000000000LL;
  if ( v7 == 3 )
  {
    if ( v5 > 0x7FFFFFFEFFFFLL )
      return 3221225477LL;
    if ( v3 < 0 && (v3 & 0x800) != 0 )
      return 3221225496LL;
    if ( v11 && (*(_QWORD *)(v11 + 40) & 0x10000000000LL) == 0 && *(__int64 *)(v11 + 8) > 0 )
    {
      if ( (*(_QWORD *)((*(_QWORD *)(v11 + 8) | 0x8000000000000000uLL) + 0x10) & 0x1000000000000000LL) != 0 )
        return 3221225477LL;
      v17 = 0;
      goto LABEL_10;
    }
  }
  v17 = 0;
  if ( v7 )
  {
LABEL_10:
    if ( (v3 & 0x800) == 0 )
    {
      if ( v7 != 3 && (v4 != 6 || !v12) )
      {
        result = 0LL;
        *v6 = 2;
        return result;
      }
      if ( !v11 || *(__int64 *)(v11 + 40) < 0 )
      {
        v23 = 0x8000000000000000uLL;
        goto LABEL_46;
      }
      if ( (MiFlags & 0x4000) != 0 && ((*(_QWORD *)(v11 + 40) >> 60) & 7) == 3 )
      {
        MiClearPfnImageVerified(v11, 73LL);
        return 0LL;
      }
      return 0LL;
    }
    if ( (v3 & 0x42) == 0 && v4 == 1 && !(unsigned int)MiOkToSetPteDirtyForNotValidFault(v3, v5, v6, 0x10000000000LL) )
    {
      MiUnlockProbePacketWorkingSet(a1);
      v21 = MmAccessFault(2uLL, v5);
      MiLockProbePacketWorkingSet(a1);
      if ( v21 < 0 )
      {
        ++dword_140E30248;
        return (unsigned int)v21;
      }
      goto LABEL_56;
    }
    goto LABEL_12;
  }
  if ( v12 )
  {
    if ( !v11 )
      return 0LL;
    if ( *(__int64 *)(v11 + 40) < 0
      && ((unsigned int)MiCanPageMove(v11) || _bittest64((const signed __int64 *)(v11 + 40), 0x35u)) )
    {
      v26 = *(_QWORD *)(v11 + 16);
      if ( (v26 & 0x400) == 0 )
        goto LABEL_109;
      if ( qword_140E2DCC0 && (v26 & 0x10) == 0 )
        v26 &= ~qword_140E2DCC0;
      if ( (*(_DWORD *)(*(_QWORD *)(v26 >> 16) + 56LL) & 0x20) != 0 )
      {
LABEL_109:
        IsDriverPage = MiIsDriverPage(*(_QWORD *)(a1 + 24), 0LL);
        if ( IsDriverPage )
        {
          MiUnlockProbePacketWorkingSet(a1);
          v33 = MiSplitDriverPage(IsDriverPage, *(_QWORD *)(a1 + 24));
          MiLockProbePacketWorkingSet(a1);
          if ( v33 >= 0 )
            goto LABEL_56;
          ++dword_140E30274;
          return (unsigned int)v33;
        }
        v16 = 0x10000000000LL;
        v15 = 0x1000000000000000LL;
      }
    }
    goto LABEL_13;
  }
LABEL_12:
  if ( !v11 )
    return 0LL;
LABEL_13:
  if ( (*(_DWORD *)(v11 + 32) & 0x200000) != 0
    && (*(_DWORD *)(v11 + 32) & 0x80000) == 0
    && (*(_QWORD *)(v11 + 24) & 0x3FFFFFFFFFFFFFFFLL) == 0 )
  {
    return 0LL;
  }
  if ( ((*(_QWORD *)(v11 + 40) >> 60) & 7) != 1 && (*(_QWORD *)(v11 + 40) & v16) == 0 && *(__int64 *)(v11 + 8) > 0 )
  {
    v23 = 0x8000000000000000uLL;
    if ( (*(_QWORD *)((*(_QWORD *)(v11 + 8) | 0x8000000000000000uLL) + 0x10) & v15) != 0 )
      return 0LL;
    goto LABEL_46;
  }
  if ( v7 || *(__int64 *)(v11 + 40) >= 0 )
    return 0LL;
  v22 = *(_QWORD *)(a1 + 88);
  v23 = 0x8000000000000000uLL;
  if ( v22 )
  {
    if ( (*(_DWORD *)(a1 + 72) & 0x10) != 0 )
    {
      CloneAddress = MiLocateCloneAddress(v22, *(_QWORD *)(v11 + 8) | 0x8000000000000000uLL);
      if ( CloneAddress )
      {
        if ( *(_QWORD *)(*(_QWORD *)(v28 + 1040) + 1064LL) > *(_QWORD *)(CloneAddress + 96) )
          goto LABEL_81;
        v17 = v29;
      }
    }
  }
  if ( (*(_DWORD *)(a1 + 72) & 0x40) == 0 )
  {
    if ( v17 )
      goto LABEL_46;
    return 0LL;
  }
  if ( !v17 )
  {
    if ( (v3 & 0x200) == 0 )
      return 0LL;
    v34 = 0LL;
    goto LABEL_55;
  }
LABEL_46:
  v34 = 0LL;
  if ( v7 == 3 )
  {
    if ( v3 < 0 )
      return 3221225541LL;
    v24 = *(_QWORD *)(a1 + 88);
    if ( v24 )
    {
      if ( (*(_DWORD *)(a1 + 72) & 0x10) != 0 )
      {
        v30 = MiLocateCloneAddress(v24, v23 | *(_QWORD *)(v11 + 8));
        if ( v30 )
        {
          if ( *(_QWORD *)(*(_QWORD *)(v31 + 1040) + 1064LL) > *(_QWORD *)(v30 + 96) )
          {
LABEL_81:
            result = MiSplitReducedCommitClonePage(a1);
            if ( (int)result < 0 )
            {
              ++dword_140E30270;
              return result;
            }
LABEL_56:
            *v35 = 1;
            return 0LL;
          }
          goto LABEL_55;
        }
      }
    }
    if ( (v3 & 0x200) == 0 && ((*(_QWORD *)(v11 + 40) & v16) != 0 || *(__int64 *)(v11 + 8) < 0 || !*(_QWORD *)(v11 + 8)) )
    {
      if ( (unsigned int)MiProcessCommitIntact(v5, v14, v23) )
      {
        ++*(_QWORD *)(a1 + 112);
        v2 = 1;
        goto LABEL_55;
      }
      return 3221225477LL;
    }
  }
LABEL_55:
  v25 = MiCopyOnWrite(v5, *(_QWORD *)(a1 + 24), (__int64)&v34);
  if ( v25 >= 0 )
    goto LABEL_56;
  if ( v2 )
    --*(_QWORD *)(a1 + 112);
  if ( *(_BYTE *)(a1 + 76) != 2
    && (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) == 0
    && (*(_DWORD *)(*(_QWORD *)(a1 + 80) + 1444LL) & 0xC) == 0 )
  {
    MiUnlockProbePacketWorkingSet(a1);
    MiCopyOnWriteCheckConditions(*(_QWORD *)(a1 + 104), (unsigned int)v25, v34);
    MiLockProbePacketWorkingSet(a1);
    goto LABEL_56;
  }
  ++dword_140E30274;
  return 3221225495LL;
}
