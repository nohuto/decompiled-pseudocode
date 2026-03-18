/*
 * XREFs of MiFastTrimWorkingSet @ 0x1403C4B40
 * Callers:
 *     MiTrimWorkingSet @ 0x1403C4734 (MiTrimWorkingSet.c)
 * Callees:
 *     MiLockWorkingSetExclusive @ 0x140211FE0 (MiLockWorkingSetExclusive.c)
 *     MiLockWorkingSetShared @ 0x140212A90 (MiLockWorkingSetShared.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140231F50 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetWsleContents @ 0x140239750 (MiGetWsleContents.c)
 *     MiUnlockPageTable @ 0x14028B6B0 (MiUnlockPageTable.c)
 *     KeShouldYieldProcessor @ 0x1402B0440 (KeShouldYieldProcessor.c)
 *     MiUnlockWorkingSetExclusive @ 0x1402B7680 (MiUnlockWorkingSetExclusive.c)
 *     MiUnlockWorkingSetShared @ 0x1402B9D50 (MiUnlockWorkingSetShared.c)
 *     MiAgeTrimListsTail @ 0x1402E8290 (MiAgeTrimListsTail.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14031F3B0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiWorkingSetIsContended @ 0x140338960 (MiWorkingSetIsContended.c)
 *     MiSetPfnOldestWsleLeafAge @ 0x140385A24 (MiSetPfnOldestWsleLeafAge.c)
 *     MiRebuildPageTableAges @ 0x140385AC4 (MiRebuildPageTableAges.c)
 *     MiTrimPte @ 0x140387FA0 (MiTrimPte.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x1403A2D94 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     MiGetSystemCacheReverseMap @ 0x1403B53D0 (MiGetSystemCacheReverseMap.c)
 *     MiLockPageTableInternal @ 0x1403DC310 (MiLockPageTableInternal.c)
 */

void __fastcall MiFastTrimWorkingSet(__int64 a1, unsigned __int8 a2)
{
  __int64 v2; // r13
  __int64 v3; // r15
  __int64 v4; // rbp
  char v5; // r12
  __int64 v6; // rcx
  int v7; // eax
  __int64 v8; // rsi
  _QWORD *v9; // rbx
  unsigned __int64 v10; // rdi
  __int64 v11; // rax
  int v12; // esi
  unsigned __int64 v13; // rbx
  unsigned __int64 v14; // rcx
  int v15; // r12d
  unsigned int v16; // r15d
  unsigned int i; // ebp
  __int64 v18; // rax
  unsigned __int64 v19; // rbx
  _QWORD *v20; // rsi
  __int64 v21; // rbx
  __int64 v22; // rbp
  unsigned __int64 v23; // rax
  int v24; // ebx
  __int64 v25; // rax
  unsigned __int8 v26; // dl
  __int64 v27; // [rsp+30h] [rbp-68h]
  __int64 v28; // [rsp+38h] [rbp-60h]
  unsigned __int64 v29; // [rsp+40h] [rbp-58h]
  __int64 v30; // [rsp+48h] [rbp-50h]
  __int64 retaddr; // [rsp+98h] [rbp+0h]
  char v33; // [rsp+A8h] [rbp+10h]
  int v34; // [rsp+B0h] [rbp+18h]
  __int64 v35; // [rsp+B8h] [rbp+20h]

  v2 = *(_QWORD *)(a1 + 32);
  v3 = a1;
  v27 = v2;
  v4 = *(_QWORD *)(a1 + 184);
  v5 = *(_DWORD *)(v2 + 184) & 0xF;
  v6 = 24LL * a2;
  v33 = v5;
  v35 = v4;
  v30 = v6;
  v7 = *(_DWORD *)(v6 + *(_QWORD *)(v2 + 16) + 68);
  if ( !v7 )
    return;
  while ( 2 )
  {
    v8 = v6 + 64 + *(_QWORD *)(v2 + 16);
    v34 = v7 - 1;
    ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)v8);
    v9 = *(_QWORD **)(v8 + 8);
    if ( !v9 )
    {
LABEL_11:
      if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
        *(_DWORD *)v8 = 0;
      else
        ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented((_DWORD *)v8, retaddr);
      return;
    }
    while ( 1 )
    {
      v10 = v9[1] | 0x8000000000000000uLL;
      if ( (unsigned int)MiLockPageTableInternal(v2, v10, 1LL) )
        break;
      v11 = v9[2] & 0xFFFFFFFFFFLL;
      if ( v11 != 0x3FFFFFFFFFLL )
      {
        v9 = (_QWORD *)(48 * v11 - 0x220000000000LL);
        if ( 48 * v11 != 0x220000000000LL )
          continue;
        if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
          *(_DWORD *)v8 = 0;
        else
          ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented((_DWORD *)v8, retaddr);
        ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)v8);
        v9 = *(_QWORD **)(v8 + 8);
        if ( v9 )
          continue;
      }
      goto LABEL_11;
    }
    MiSetPfnOldestWsleLeafAge(v2, (__int64)v9, (*v9 >> 55) & 7, (*v9 >> 45) & 0x3FF, 1);
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
      *(_DWORD *)v8 = 0;
    else
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented((_DWORD *)v8, retaddr);
    v12 = 0;
    v13 = (__int64)(v10 << 25) >> 16;
    v29 = (__int64)(v13 << 25) >> 16;
    v14 = v29;
    if ( v29 >= 0xFFFFF68000000000uLL )
    {
      do
      {
        if ( v14 > 0xFFFFF6FFFFFFFFFFuLL )
          break;
        ++v12;
        v14 = (__int64)(v14 << 25) >> 16;
      }
      while ( v14 >= 0xFFFFF68000000000uLL );
      v4 = v35;
    }
    if ( !v12 && v5 == 1 && !MiGetSystemCacheReverseMap((__int64)(v10 << 25) >> 16 << 25 >> 16) )
    {
      MiUnlockPageTable(v2, v10);
      goto LABEL_76;
    }
    *(_QWORD *)(v3 + 56) = v10;
    v15 = 0;
    v16 = 256;
    if ( v10 != 0xFFFFF6FB7DBEDF68uLL )
      v16 = 512;
    v28 = *(_QWORD *)(v4 + 16);
    for ( i = 0; i < v16; ++i )
    {
      if ( v12 == 3 )
        LOBYTE(v18) = MI_READ_PTE_LOCK_FREE(v13);
      else
        v18 = *(_QWORD *)v13;
      if ( (v18 & 1) != 0 )
      {
        if ( v12 )
        {
          if ( (v18 & 0x80u) != 0LL )
            goto LABEL_38;
        }
        else if ( (MiGetWsleContents(v14, (__int64)(v13 << 25) >> 16) & 0xF) >= 8 )
        {
          goto LABEL_38;
        }
        v15 = MiTrimPte(a1, v13, v12);
        if ( v15 )
          break;
      }
LABEL_38:
      v13 += 8LL;
    }
    v2 = v27;
    if ( v10 != 0xFFFFF6FB7DBEDF68uLL || v15 )
    {
      v3 = a1;
    }
    else
    {
      v19 = 8 * (((unsigned __int64)qword_140E2F040 >> 39) & 0x1FF) - 0x90482413000LL;
      v3 = a1;
      if ( (MI_READ_PTE_LOCK_FREE(v19) & 1) != 0 )
        MiTrimPte(a1, v19, v12);
    }
    v20 = (_QWORD *)(48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(v10) >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL);
    v21 = *(_QWORD *)(v3 + 184);
    v22 = (*v20 >> 55) & 7LL;
    MiAgeTrimListsTail(
      v3,
      (__int64 *)(v21 + 64),
      (__int64)MiTrimWorkingSetTailHelper,
      0,
      (__int64)MiTrimWorkingSetVpabCallback);
    if ( (*(_DWORD *)v21 & 0x8000) != 0
      && ((v23 = *(_QWORD *)(v21 + 16), v23 == *(_QWORD *)(v21 + 8))
       || (*(_DWORD *)v21 & 0x4000) != 0
       && (v23 >= 0x100 || *(_QWORD *)(*(_QWORD *)(v3 + 32) + 144LL) <= *(_QWORD *)(v21 + 56) - *(_QWORD *)(v21 + 8))) )
    {
      v24 = 5;
    }
    else
    {
      v24 = 0;
    }
    v25 = *(_QWORD *)(v35 + 16);
    if ( v25 == *(_QWORD *)(v35 + 8) )
    {
      v15 = 4;
    }
    else if ( v15 != 4
           && v28 == v25
           && (*(_DWORD *)v35 & 0x600) == 0
           && !*(_QWORD *)(v35 + 80)
           && (*(_DWORD *)(v3 + 4) & 1) == 0
           && v22 )
    {
      *v20 &= 0xFF801FFFFFFFFFFFuLL;
      MiRebuildPageTableAges(v27, v29, 1u);
    }
    if ( (*(_DWORD *)(v3 + 4) & 1) != 0 )
    {
      if ( (*(_DWORD *)v3 & 4) != 0 )
        MiLockWorkingSetShared(v27);
      else
        MiLockWorkingSetExclusive(v27);
      if ( MmOriginalPteRaceFixEnabled )
        *(_DWORD *)(v3 + 4) &= ~1u;
    }
    else
    {
      MiUnlockPageTable(v27, v10);
      if ( (*(_DWORD *)v3 & 2) != 0
        && ((unsigned int)MiWorkingSetIsContended(v27, (*(_DWORD *)v3 & 4) == 0)
         || *(_BYTE *)(v3 + 9) < 2u && KeShouldYieldProcessor()) )
      {
        v26 = *(_BYTE *)(v3 + 9);
        if ( (*(_DWORD *)v3 & 4) != 0 )
        {
          MiUnlockWorkingSetShared(v27, v26);
          MiLockWorkingSetShared(v27);
        }
        else
        {
          MiUnlockWorkingSetExclusive(v27, v26);
          MiLockWorkingSetExclusive(v27);
        }
      }
    }
    if ( !v15 && !v24 )
    {
      v5 = v33;
      v4 = v35;
LABEL_76:
      v7 = v34;
      if ( v34 )
      {
        v6 = v30;
        continue;
      }
    }
    break;
  }
}
