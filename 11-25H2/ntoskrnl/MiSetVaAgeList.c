/*
 * XREFs of MiSetVaAgeList @ 0x140249BE0
 * Callers:
 *     MiActOnPte @ 0x140237188 (MiActOnPte.c)
 *     MiUpdateWsleAge @ 0x140248264 (MiUpdateWsleAge.c)
 *     MiAgePteWorker @ 0x140248780 (MiAgePteWorker.c)
 *     MiClearPteAccessed @ 0x1402493D0 (MiClearPteAccessed.c)
 *     MiUnlockWsle @ 0x1402CC3B4 (MiUnlockWsle.c)
 *     MiResetAccessBitPteWorker @ 0x14037CC0C (MiResetAccessBitPteWorker.c)
 *     MiProcessWsInSwapFault @ 0x140388C2C (MiProcessWsInSwapFault.c)
 *     NtLockVirtualMemory @ 0x140388E00 (NtLockVirtualMemory.c)
 *     MiTrimWorkingSetBuildup @ 0x14038A000 (MiTrimWorkingSetBuildup.c)
 * Callees:
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x140212BC0 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     MiGetPagePrivilege @ 0x140230BA0 (MiGetPagePrivilege.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140231F50 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteHasShadow @ 0x14024B550 (MiPteHasShadow.c)
 *     MiUnlockPageTable @ 0x14028B6B0 (MiUnlockPageTable.c)
 *     MiLockNestedPageTable @ 0x1402FB780 (MiLockNestedPageTable.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x1402FD480 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x140323E4C (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 *     MiCheckLinearProtectedPteAccessedBit @ 0x14037CB60 (MiCheckLinearProtectedPteAccessedBit.c)
 *     MiUnlockWorkingSetCoreExclusive @ 0x14037F48C (MiUnlockWorkingSetCoreExclusive.c)
 *     MiVolunteerForTrimFirst @ 0x140385450 (MiVolunteerForTrimFirst.c)
 *     MiInsertActivePageTableLinksTail @ 0x14038556C (MiInsertActivePageTableLinksTail.c)
 *     MiRemoveActivePageTableLinks @ 0x14038573C (MiRemoveActivePageTableLinks.c)
 *     MiSetPfnOldestWsleLeafAge @ 0x140385A24 (MiSetPfnOldestWsleLeafAge.c)
 *     MiRebuildPageTableAges @ 0x140385AC4 (MiRebuildPageTableAges.c)
 *     MiLockWorkingSetCoreExclusive @ 0x1403C3B04 (MiLockWorkingSetCoreExclusive.c)
 */

__int64 __fastcall MiSetVaAgeList(__int64 a1, unsigned __int64 a2, unsigned int a3, unsigned __int8 a4)
{
  __int64 v4; // rdi
  unsigned __int64 v5; // r15
  __int64 v6; // r13
  unsigned __int8 v7; // si
  unsigned __int64 v8; // r14
  unsigned __int64 v9; // rbx
  int v10; // ebp
  volatile signed __int32 *v11; // r12
  unsigned int v12; // ebx
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rsi
  _DWORD *v15; // rcx
  signed __int32 v16; // eax
  __int64 v17; // rdx
  signed __int32 v18; // ett
  __int64 v19; // r8
  unsigned __int8 v20; // r12
  unsigned __int64 v21; // rcx
  unsigned __int64 v22; // rdx
  unsigned __int64 *v23; // rdi
  unsigned __int64 v24; // rax
  int v25; // ebp
  unsigned __int8 v26; // bl
  unsigned __int8 v27; // r15
  unsigned __int64 v28; // rax
  unsigned __int64 v29; // r14
  volatile signed __int64 *v30; // r14
  signed __int64 v31; // rdi
  bool v32; // zf
  signed __int64 v33; // rax
  int v34; // r14d
  unsigned __int64 v35; // rdi
  unsigned __int8 v36; // al
  unsigned __int64 v37; // rdi
  __int64 v38; // rcx
  unsigned __int8 v39; // al
  __int64 HasShadow; // rax
  __int64 v42; // rcx
  __int64 v43; // rax
  unsigned __int64 v44; // rcx
  unsigned __int8 v45; // [rsp+30h] [rbp-78h]
  int v46; // [rsp+34h] [rbp-74h]
  int v47; // [rsp+38h] [rbp-70h]
  int v48; // [rsp+3Ch] [rbp-6Ch]
  __int64 v49; // [rsp+40h] [rbp-68h]
  unsigned __int64 v50; // [rsp+48h] [rbp-60h]
  unsigned __int64 v51; // [rsp+50h] [rbp-58h]
  void *retaddr; // [rsp+A8h] [rbp+0h]
  unsigned __int64 v54; // [rsp+B8h] [rbp+10h]
  unsigned int v55; // [rsp+C0h] [rbp+18h]
  unsigned __int8 v56; // [rsp+C8h] [rbp+20h]

  v56 = a4;
  v55 = a3;
  v54 = a2;
  v4 = a3;
  v5 = a2;
  v6 = a1;
  v7 = 0;
  v8 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v9 = 0LL;
  v49 = *(_QWORD *)(a1 + 16);
  v50 = v8;
  v51 = 0LL;
  v48 = 0;
  v46 = 0;
  if ( a2 < 0xFFFFF68000000000uLL || a2 > 0xFFFFF6FFFFFFFFFFuLL )
  {
    v10 = 1;
    v47 = 1;
  }
  else
  {
    v10 = 0;
    v47 = 0;
    if ( (*(_DWORD *)(a1 + 184) & 0xF) != 0 )
    {
      v46 = 1;
    }
    else
    {
      MiLockNestedPageTable(a1, v8);
      a4 = v56;
      v9 = v8;
      v51 = v8;
    }
  }
  v11 = (volatile signed __int32 *)&unk_140E38540;
  if ( a4 == 8 )
  {
    v48 = 1;
    MiLockWorkingSetCoreExclusive(v6);
    v19 = v49;
    if ( *(_QWORD *)(v6 + 112) < (unsigned __int64)(v4 + *(_QWORD *)(v49 + 32) + 6LL) )
    {
      MiUnlockWorkingSetCoreExclusive(v6);
      if ( v9 )
        MiUnlockPageTable(v6, v9);
      return 0LL;
    }
  }
  else
  {
    v12 = 0;
    if ( (_DWORD)v4 )
    {
      do
      {
        v13 = MI_READ_PTE_LOCK_FREE(v8);
        if ( v10 )
        {
          v14 = v13;
          LOBYTE(v13) = HIBYTE(v13) & 0xF;
          v7 = HIBYTE(v13) & 0xF | (16 * ((v14 >> 60) & 7));
        }
        else
        {
          LOBYTE(v13) = (*(_QWORD *)(48 * ((v13 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL) >> 42) & 7;
        }
        if ( (_BYTE)v13 == 8 )
          break;
        ++v12;
      }
      while ( v12 < (unsigned int)v4 );
      v5 = v54;
      v11 = (volatile signed __int32 *)&unk_140E38540;
    }
    if ( v12 == (_DWORD)v4 )
    {
      if ( (*(_DWORD *)(v6 + 184) & 0xF) == 1 )
        v15 = &unk_140E38540;
      else
        v15 = (_DWORD *)(v6 + 256);
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
      {
        _m_prefetchw(v15);
        v16 = *v15 & 0x7FFFFFFF;
        while ( 1 )
        {
          v17 = (unsigned int)(v16 + 1);
          v18 = v16;
          v16 = _InterlockedCompareExchange(v15, v17, v16);
          if ( v18 == v16 )
            break;
          if ( v16 < 0 )
          {
            LOBYTE(v17) = -1;
            ExpWaitForSpinLockSharedAndAcquire(v15, v17);
            break;
          }
        }
      }
      else
      {
        ExpAcquireSpinLockSharedAtDpcLevelInstrumented(v15, 0xFFu);
      }
    }
    else
    {
      v48 = 1;
      MiLockWorkingSetCoreExclusive(v6);
    }
    v19 = v49;
  }
  if ( !(_DWORD)v4 )
    goto LABEL_56;
  v20 = v56;
  v21 = 0xFFFFF6FB7DBED000uLL;
  do
  {
    v22 = *(_QWORD *)v8;
    if ( v8 >= 0xFFFFF6FB7DBED000uLL && v8 <= 0xFFFFF6FB7DBED7F8uLL && (v22 & 1) != 0 )
    {
      LOBYTE(v21) = (v22 & 0x42) != 0;
      if ( ((unsigned __int8)v21 & ((v22 & 0x20) != 0)) == 0 )
      {
        HasShadow = MiPteHasShadow(v21, v22, v19, 0xFFFFF6FB7DBED7F8uLL);
        if ( HasShadow )
        {
          v42 = *(_QWORD *)(HasShadow + 1288);
          if ( v42 )
          {
            v43 = *(_QWORD *)(v42 + 8 * ((v8 >> 3) & 0x1FF));
            if ( (v43 & 0x20) != 0 )
              v22 |= 0x20uLL;
            v44 = v22;
            v22 |= 0x42uLL;
            if ( (v43 & 0x42) == 0 )
              v22 = v44;
          }
        }
      }
    }
    v23 = (unsigned __int64 *)(48 * ((v22 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL);
    if ( v10 )
    {
      v24 = MI_READ_PTE_LOCK_FREE(((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
      LOBYTE(v25) = HIBYTE(v24) & 0xF;
      v7 = HIBYTE(v24) & 0xF | (16 * ((v24 >> 60) & 7));
      v26 = v7;
      if ( (HIBYTE(v24) & 0xF) == 8 )
      {
        v19 = v49;
        v46 = 1;
        _InterlockedDecrement64((volatile signed __int64 *)(v49 + 32));
      }
      else
      {
        v46 = 0;
      }
    }
    else
    {
      v26 = v7;
      v25 = (*v23 >> 42) & 7;
    }
    v45 = v20;
    v27 = v20;
    if ( (unsigned __int8)(v20 - 1) > 5u || (v28 = MI_READ_PTE_LOCK_FREE(v8), (v28 & 0x20) == 0) )
    {
      v29 = v54;
      goto LABEL_27;
    }
    if ( (*(_DWORD *)(v6 + 184) & 0xF) != 0 )
    {
      if ( !_bittest64(&MiFlags, 0x24u) || (*(_DWORD *)(v6 + 184) & 0x800) == 0 )
      {
LABEL_67:
        v29 = v54;
        goto LABEL_68;
      }
    }
    else if ( !*(_QWORD *)(v6 + 624) )
    {
      goto LABEL_67;
    }
    if ( (*(_DWORD *)(v6 + 184) & 0xF) != 0 )
    {
      v29 = v54;
      if ( (MiGetPagePrivilege(48 * ((v28 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL, 2, 0LL) & 0x41) != 0 )
        goto LABEL_27;
    }
    else
    {
      v29 = v54;
      if ( v54 <= 0x7FFFFFFEFFFFLL )
        goto LABEL_27;
    }
LABEL_68:
    if ( !(_BYTE)v25 )
      goto LABEL_53;
    v27 = 0;
    v45 = 0;
LABEL_27:
    if ( v47 )
    {
      v7 = v26 ^ (v26 ^ v27) & 0xF;
      v30 = (volatile signed __int64 *)(((v29 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
      v31 = *v30;
      do
      {
        if ( (MiFlags & 0x2000000) != 0 )
          _mm_lfence();
        if ( _bittest64(&MiFlags, 0x24u) && (v31 & 0x21) == 1 && (unsigned __int64)v30 >= 0xFFFFF6C000000000uLL )
          MiCheckLinearProtectedPteAccessedBit(
            (ULONG_PTR)v30,
            ((unsigned __int64)v7 << 56) ^ (((unsigned __int64)v7 << 56) ^ v31) & 0x80FFFFFFFFFFFFFFuLL);
        v33 = _InterlockedCompareExchange64(
                v30,
                ((unsigned __int64)v7 << 56) ^ (((unsigned __int64)v7 << 56) ^ v31) & 0x80FFFFFFFFFFFFFFuLL,
                v31);
        v32 = v31 == v33;
        v31 = v33;
      }
      while ( !v32 );
      v6 = a1;
      v27 = v45;
      v20 = v56;
    }
    else
    {
      *v23 = ((unsigned __int64)v27 << 42) ^ (*v23 ^ ((unsigned __int64)v27 << 42)) & 0xFFFFE3FFFFFFFFFFuLL;
    }
    v34 = 0;
    if ( !v46 )
    {
      v35 = 48
          * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(((v54 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL) >> 12) & 0xFFFFFFFFFFLL)
          - 0x220000000000LL;
      v19 = (*(_QWORD *)v35 >> 45) & 0x3FFLL;
      v36 = (*(_QWORD *)v35 >> 55) & 7;
      if ( (_BYTE)v25 == v36 )
      {
        *(_QWORD *)v35 = ((unsigned __int64)(unsigned int)(v19 - 1) << 45) ^ (((unsigned __int64)(unsigned int)(v19 - 1) << 45) ^ *(_QWORD *)v35) & 0xFF801FFFFFFFFFFFuLL;
        if ( v19 == 1 )
        {
          MiRebuildPageTableAges(v6, v54, 0LL);
          v34 = 1;
        }
        else if ( (*(_DWORD *)(v35 + 36) & 0x4000000) == 0 )
        {
          *(_QWORD *)v35 = *(_QWORD *)v35 & 0xFC001FFFFFFFFFFFuLL | ((((_WORD)v19 - 1) & 0x3FF | ((unsigned __int64)(v25 & 7) << 10)) << 45);
          MiInsertActivePageTableLinksTail(v6, v35, (unsigned __int8)v25, 0LL);
        }
      }
      else if ( (unsigned __int8)v25 > v36 )
      {
        MiSetPfnOldestWsleLeafAge(v6, v35, (unsigned __int8)v25, -1, 0);
      }
      _InterlockedDecrement64((volatile signed __int64 *)(v6 + 8LL * (unsigned __int8)v25 + 40));
      if ( (_BYTE)v25 == 7 )
        MiVolunteerForTrimFirst(v6, -1LL, v19);
      v27 = v45;
    }
    if ( v27 < 8u )
    {
      if ( !v34 )
      {
        v37 = 48
            * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(((v54 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL) >> 12) & 0xFFFFFFFFFFLL)
            - 0x220000000000LL;
        v38 = (*(_QWORD *)v37 >> 45) & 0x3FFLL;
        v39 = (*(_QWORD *)v37 >> 55) & 7;
        if ( v27 == v39 )
        {
          *(_QWORD *)v37 = ((unsigned __int64)(unsigned int)(v38 + 1) << 45) ^ (*(_QWORD *)v37 ^ ((unsigned __int64)(unsigned int)(v38 + 1) << 45)) & 0xFF801FFFFFFFFFFFuLL;
          if ( (*(_DWORD *)(v37 + 36) & 0x4000000) == 0 )
          {
            *(_QWORD *)v37 = *(_QWORD *)v37 & 0xFC001FFFFFFFFFFFuLL | ((((_WORD)v38 + 1) & 0x3FF | ((unsigned __int64)(v27 & 7) << 10)) << 45);
            MiInsertActivePageTableLinksTail(v6, v37, v27, 0LL);
          }
        }
        else if ( v27 > v39 )
        {
          MiSetPfnOldestWsleLeafAge(v6, v37, v27, 1, 0);
        }
      }
      _InterlockedIncrement64((volatile signed __int64 *)(v6 + 8LL * v27 + 40));
      if ( v27 == 7 )
        MiVolunteerForTrimFirst(v6, 1LL, v19);
LABEL_53:
      v19 = v49;
      goto LABEL_54;
    }
    if ( v27 != 8 )
      goto LABEL_53;
    v19 = v49;
    _InterlockedIncrement64((volatile signed __int64 *)(v49 + 32));
LABEL_54:
    v8 = v50 + 8;
    v10 = v47;
    v5 = v54 + 4096;
    v32 = v55-- == 1;
    v50 += 8LL;
    v54 += 4096LL;
    v21 = 0xFFFFF6FB7DBED000uLL;
  }
  while ( !v32 );
  v11 = (volatile signed __int32 *)&unk_140E38540;
LABEL_56:
  if ( v48 )
  {
    MiUnlockWorkingSetCoreExclusive(v6);
  }
  else
  {
    if ( (*(_DWORD *)(v6 + 184) & 0xF) != 1 )
      v11 = (volatile signed __int32 *)(v6 + 256);
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
    {
      _InterlockedAnd(v11, 0xBFFFFFFF);
      _InterlockedDecrement(v11);
    }
    else
    {
      ExpReleaseSpinLockSharedFromDpcLevelInstrumented(v11, retaddr, v19);
    }
  }
  if ( v51 )
    MiUnlockPageTable(v6, v51);
  return 1LL;
}
