/*
 * XREFs of MiSetVaAgeList @ 0x140230FB0
 * Callers:
 *     MiUpdateWsleAge @ 0x14022F78C (MiUpdateWsleAge.c)
 *     MiAgePteWorker @ 0x14022FCA0 (MiAgePteWorker.c)
 *     MiClearPteAccessed @ 0x1402307A0 (MiClearPteAccessed.c)
 *     MiActOnPte @ 0x14028B7E0 (MiActOnPte.c)
 *     MiUnlockWsle @ 0x1402C7B94 (MiUnlockWsle.c)
 *     MiTrimWorkingSetBuildup @ 0x14037D1A0 (MiTrimWorkingSetBuildup.c)
 *     MiResetAccessBitPteWorker @ 0x1403FB050 (MiResetAccessBitPteWorker.c)
 *     NtLockVirtualMemory @ 0x1403FD910 (NtLockVirtualMemory.c)
 *     MiProcessWsInSwapFault @ 0x14046DEB4 (MiProcessWsInSwapFault.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14020FA40 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140210170 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiPteHasShadow @ 0x1402141A0 (MiPteHasShadow.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021A250 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetPagePrivilege @ 0x14021CE30 (MiGetPagePrivilege.c)
 *     MiVolunteerForTrimFirst @ 0x140231CFC (MiVolunteerForTrimFirst.c)
 *     MiCheckLinearProtectedPteAccessedBit @ 0x140232A20 (MiCheckLinearProtectedPteAccessedBit.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x1402465FC (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 *     MiLockNestedPageTable @ 0x140285190 (MiLockNestedPageTable.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x1402C4AD0 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x1402DFAA0 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     MiInsertActivePageTableLinksTail @ 0x1402E24F8 (MiInsertActivePageTableLinksTail.c)
 *     MiRemoveActivePageTableLinks @ 0x1402E2CB8 (MiRemoveActivePageTableLinks.c)
 *     MiRebuildPageTableAges @ 0x1402E3D14 (MiRebuildPageTableAges.c)
 *     MiUnlockPageTableInternal @ 0x140321070 (MiUnlockPageTableInternal.c)
 *     MiLockWorkingSetCoreExclusive @ 0x140379CE4 (MiLockWorkingSetCoreExclusive.c)
 *     MiUnlockWorkingSetCoreExclusive @ 0x140379DAC (MiUnlockWorkingSetCoreExclusive.c)
 */

__int64 __fastcall MiSetVaAgeList(__int64 a1, unsigned __int64 a2, unsigned int a3, unsigned __int8 a4)
{
  __int64 v4; // rbp
  unsigned __int64 v5; // r12
  __int64 v6; // r14
  unsigned __int8 v7; // si
  unsigned __int64 v8; // r13
  unsigned __int64 v9; // rbx
  int v10; // r15d
  unsigned __int64 v11; // rdx
  volatile signed __int32 *v12; // rdi
  unsigned int v13; // ebx
  unsigned __int64 v14; // rsi
  char v15; // al
  _DWORD *v16; // rcx
  signed __int32 v17; // eax
  __int64 v18; // rdx
  signed __int32 v19; // ett
  unsigned __int64 v20; // rdx
  unsigned __int64 *v21; // rdi
  unsigned __int64 v22; // rax
  unsigned __int8 v23; // bp
  unsigned __int8 v24; // bl
  unsigned __int8 v25; // r12
  unsigned __int64 v26; // rdx
  unsigned __int64 v27; // rax
  volatile signed __int64 *v28; // r14
  signed __int64 v29; // rdi
  bool v30; // zf
  signed __int64 v31; // rax
  int v32; // r15d
  unsigned __int64 v33; // r9
  unsigned __int64 *v34; // r8
  unsigned __int64 v35; // rdx
  __int64 v36; // rdx
  __int64 v37; // rdi
  __int64 v38; // r8
  unsigned __int8 v39; // al
  unsigned __int64 v40; // r8
  unsigned __int64 v41; // rdx
  __int64 v42; // rdx
  __int64 v43; // rdi
  unsigned __int8 v44; // al
  __int64 v45; // rbx
  unsigned __int64 v46; // rax
  unsigned __int64 v47; // rcx
  unsigned int v48; // ecx
  __int64 v49; // rbp
  _KPROCESS *v51; // rax
  unsigned __int64 KernelWaitTime; // rcx
  __int64 v53; // rax
  unsigned __int64 v54; // rcx
  _KPROCESS *v55; // rax
  unsigned __int64 v56; // rcx
  __int64 v57; // rax
  unsigned __int64 v58; // rcx
  _KPROCESS *v59; // rax
  unsigned __int64 v60; // r8
  int v61; // r10d
  unsigned __int64 v62; // rax
  __int64 v63; // rax
  unsigned __int64 v64; // rcx
  _KPROCESS *v65; // rax
  int v66; // r10d
  unsigned __int64 v67; // rax
  __int64 v68; // rax
  unsigned __int64 v69; // rcx
  _KPROCESS *v70; // rax
  int v71; // r8d
  unsigned __int64 v72; // rcx
  __int64 v73; // rax
  unsigned __int64 v74; // rcx
  __int64 v75; // r8
  __int64 v76; // rbx
  __int64 *v77; // rdi
  __int64 *v78; // r14
  __int64 v79; // rax
  __int64 **v80; // rcx
  __int64 v81; // rbx
  __int64 v82; // rax
  _QWORD *v83; // rcx
  unsigned __int8 v84; // [rsp+20h] [rbp-78h]
  int v85; // [rsp+24h] [rbp-74h]
  int v86; // [rsp+28h] [rbp-70h]
  int v87; // [rsp+2Ch] [rbp-6Ch]
  __int64 v88; // [rsp+30h] [rbp-68h]
  unsigned __int64 v89; // [rsp+38h] [rbp-60h]
  unsigned __int64 v90; // [rsp+40h] [rbp-58h]
  void *retaddr; // [rsp+98h] [rbp+0h]
  unsigned __int64 v93; // [rsp+A8h] [rbp+10h]
  unsigned int v94; // [rsp+B0h] [rbp+18h]
  unsigned __int8 v95; // [rsp+B8h] [rbp+20h]

  v95 = a4;
  v94 = a3;
  v93 = a2;
  v4 = a3;
  v5 = a2;
  v6 = a1;
  v7 = 0;
  v8 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v9 = 0LL;
  v88 = *(_QWORD *)(a1 + 16);
  v89 = v8;
  v90 = 0LL;
  v87 = 0;
  v85 = 0;
  if ( a2 < 0xFFFFF68000000000uLL || a2 > 0xFFFFF6FFFFFFFFFFuLL )
  {
    v10 = 1;
    v86 = 1;
  }
  else
  {
    v10 = 0;
    v86 = 0;
    if ( (*(_DWORD *)(a1 + 184) & 0xF) != 0 )
    {
      v85 = 1;
    }
    else
    {
      MiLockNestedPageTable(a1, v8);
      a4 = v95;
      v9 = v8;
      v90 = v8;
    }
  }
  v11 = 0xFFFFF6FB7DBED7F8uLL;
  v12 = (volatile signed __int32 *)&unk_140E38780;
  if ( a4 == 8 )
  {
    v87 = 1;
    MiLockWorkingSetCoreExclusive(v6, 0xFFFFF6FB7DBED7F8uLL);
    if ( *(_QWORD *)(v6 + 112) < (unsigned __int64)(v4 + *(_QWORD *)(v88 + 32) + 6LL) )
    {
      MiUnlockWorkingSetCoreExclusive(v6);
      if ( v9 )
        MiUnlockPageTableInternal(v6, v9);
      return 0LL;
    }
  }
  else
  {
    v13 = 0;
    if ( (_DWORD)v4 )
    {
      do
      {
        if ( v10 )
        {
          v14 = *(_QWORD *)v8;
          if ( v8 >= 0xFFFFF6FB7DBED000uLL && v8 <= v11 && (v14 & 1) != 0 && ((v14 & 0x42) == 0 || (v14 & 0x20) == 0) )
          {
            v51 = MiPteHasShadow();
            if ( v51 )
            {
              KernelWaitTime = v51[2].KernelWaitTime;
              if ( KernelWaitTime )
              {
                v53 = *(_QWORD *)(KernelWaitTime + 8 * ((v8 >> 3) & 0x1FF));
                if ( (v53 & 0x20) != 0 )
                  v14 |= 0x20uLL;
                v54 = v14;
                v14 |= 0x42uLL;
                if ( (v53 & 0x42) == 0 )
                  v14 = v54;
              }
            }
          }
          v15 = HIBYTE(v14) & 0xF;
          v7 = HIBYTE(v14) & 0xF | (16 * ((v14 >> 60) & 7));
        }
        else
        {
          v15 = (*(_QWORD *)(48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(v8) >> 12) & 0xFFFFFFFFFFLL)
                           - 0x220000000000LL) >> 42) & 7;
          v11 = 0xFFFFF6FB7DBED7F8uLL;
        }
        if ( v15 == 8 )
          break;
        ++v13;
      }
      while ( v13 < (unsigned int)v4 );
      v6 = a1;
      v12 = (volatile signed __int32 *)&unk_140E38780;
      v5 = v93;
    }
    if ( v13 == (_DWORD)v4 )
    {
      if ( (*(_DWORD *)(v6 + 184) & 0xF) == 1 )
        v16 = &unk_140E38780;
      else
        v16 = (_DWORD *)(v6 + 256);
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
      {
        _m_prefetchw(v16);
        v17 = *v16 & 0x7FFFFFFF;
        while ( 1 )
        {
          v18 = (unsigned int)(v17 + 1);
          v19 = v17;
          v17 = _InterlockedCompareExchange(v16, v18, v17);
          if ( v19 == v17 )
            break;
          if ( v17 < 0 )
          {
            LOBYTE(v18) = -1;
            ExpWaitForSpinLockSharedAndAcquire(v16, v18);
            break;
          }
        }
      }
      else
      {
        LOBYTE(v11) = -1;
        ExpAcquireSpinLockSharedAtDpcLevelInstrumented(v16, v11);
      }
    }
    else
    {
      v87 = 1;
      MiLockWorkingSetCoreExclusive(v6, v11);
    }
  }
  if ( !(_DWORD)v4 )
    goto LABEL_72;
  do
  {
    v20 = *(_QWORD *)v8;
    if ( v8 >= 0xFFFFF6FB7DBED000uLL
      && v8 <= 0xFFFFF6FB7DBED7F8uLL
      && (v20 & 1) != 0
      && ((v20 & 0x42) == 0 || (v20 & 0x20) == 0) )
    {
      v55 = MiPteHasShadow();
      if ( v55 )
      {
        v56 = v55[2].KernelWaitTime;
        if ( v56 )
        {
          v57 = *(_QWORD *)(v56 + 8 * ((v8 >> 3) & 0x1FF));
          if ( (v57 & 0x20) != 0 )
            v20 |= 0x20uLL;
          v58 = v20;
          v20 |= 0x42uLL;
          if ( (v57 & 0x42) == 0 )
            v20 = v58;
        }
      }
    }
    v21 = (unsigned __int64 *)(48 * ((v20 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL);
    if ( v10 )
    {
      v22 = MI_READ_PTE_LOCK_FREE(((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
      v23 = HIBYTE(v22) & 0xF;
      v7 = HIBYTE(v22) & 0xF | (16 * ((v22 >> 60) & 7));
      v24 = v7;
      if ( (HIBYTE(v22) & 0xF) == 8 )
      {
        v85 = 1;
        _InterlockedDecrement64((volatile signed __int64 *)(v88 + 32));
      }
      else
      {
        v85 = 0;
      }
    }
    else
    {
      v24 = v7;
      v23 = (*v21 >> 42) & 7;
    }
    v25 = v95;
    v84 = v95;
    if ( (unsigned __int8)(v95 - 1) > 5u )
      goto LABEL_36;
    v26 = *(_QWORD *)v8;
    if ( v8 >= 0xFFFFF6FB7DBED000uLL
      && v8 <= 0xFFFFF6FB7DBED7F8uLL
      && (v26 & 1) != 0
      && ((v26 & 0x42) == 0 || (v26 & 0x20) == 0) )
    {
      v70 = MiPteHasShadow();
      if ( v70 )
      {
        v72 = v70[2].KernelWaitTime;
        if ( v72 )
        {
          v73 = *(_QWORD *)(v72 + 8 * ((v8 >> 3) & 0x1FF));
          if ( (v73 & 0x20) != 0 )
            v26 |= 0x20uLL;
          v74 = v26;
          v85 = v71;
          v26 |= 0x42uLL;
          if ( (v73 & 0x42) == 0 )
            v26 = v74;
        }
      }
    }
    if ( (v26 & 0x20) == 0 )
    {
LABEL_36:
      v27 = v93;
      goto LABEL_37;
    }
    if ( (*(_DWORD *)(v6 + 184) & 0xF) != 0 )
    {
      if ( _bittest64(&MiFlags, 0x24u) && (*(_DWORD *)(v6 + 184) & 0x800) != 0 )
      {
LABEL_155:
        if ( (*(_DWORD *)(v6 + 184) & 0xF) != 0 )
        {
          v30 = (MiGetPagePrivilege(48 * ((v26 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL, 2, 0LL) & 0x41) == 0;
          v27 = v93;
          if ( !v30 )
            goto LABEL_37;
        }
        else
        {
          v27 = v93;
          if ( v93 <= 0x7FFFFFFEFFFFLL )
            goto LABEL_37;
        }
        goto LABEL_125;
      }
    }
    else if ( *(_QWORD *)(v6 + 624) )
    {
      goto LABEL_155;
    }
    v27 = v93;
LABEL_125:
    if ( !v23 )
      goto LABEL_70;
    v25 = 0;
    v84 = 0;
LABEL_37:
    if ( v10 )
    {
      v7 = v24 ^ (v24 ^ v25) & 0xF;
      v28 = (volatile signed __int64 *)(((v27 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
      v29 = *v28;
      do
      {
        if ( (MiFlags & 0x2000000) != 0 )
          _mm_lfence();
        if ( _bittest64(&MiFlags, 0x24u) && (v29 & 0x21) == 1 && (unsigned __int64)v28 >= 0xFFFFF6C000000000uLL )
          MiCheckLinearProtectedPteAccessedBit(
            (ULONG_PTR)v28,
            ((unsigned __int64)v7 << 56) ^ (((unsigned __int64)v7 << 56) ^ v29) & 0x80FFFFFFFFFFFFFFuLL);
        v31 = _InterlockedCompareExchange64(
                v28,
                ((unsigned __int64)v7 << 56) ^ (((unsigned __int64)v7 << 56) ^ v29) & 0x80FFFFFFFFFFFFFFuLL,
                v29);
        v30 = v29 == v31;
        v29 = v31;
      }
      while ( !v30 );
      v25 = v84;
      v8 = v89;
      v6 = a1;
    }
    else
    {
      *v21 = ((unsigned __int64)v25 << 42) ^ (*v21 ^ ((unsigned __int64)v25 << 42)) & 0xFFFFE3FFFFFFFFFFuLL;
    }
    v32 = 0;
    if ( !v85 )
    {
      v33 = v93;
      v34 = (unsigned __int64 *)(((v93 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL);
      v35 = *v34;
      if ( (unsigned __int64)v34 >= 0xFFFFF6FB7DBED000uLL
        && (unsigned __int64)v34 <= 0xFFFFF6FB7DBED7F8uLL
        && (v35 & 1) != 0
        && ((v35 & 0x42) == 0 || (v35 & 0x20) == 0) )
      {
        v59 = MiPteHasShadow();
        if ( v59 )
        {
          v62 = v59[2].KernelWaitTime;
          if ( v62 )
          {
            v63 = *(_QWORD *)(v62 + 8 * ((v60 >> 3) & 0x1FF));
            if ( (v63 & 0x20) != 0 )
              v35 |= 0x20uLL;
            v64 = v35;
            v85 = v61;
            v35 |= 0x42uLL;
            if ( (v63 & 0x42) == 0 )
              v35 = v64;
          }
        }
      }
      v36 = (v35 >> 12) & 0xFFFFFFFFFFLL;
      v37 = 48 * v36 - 0x220000000000LL;
      v38 = (*(_QWORD *)v37 >> 45) & 0x3FFLL;
      v39 = (*(_QWORD *)v37 >> 55) & 7;
      if ( v23 == v39 )
      {
        *(_QWORD *)v37 = ((unsigned __int64)(unsigned int)(v38 - 1) << 45) ^ (((unsigned __int64)(unsigned int)(v38 - 1) << 45) ^ *(_QWORD *)v37) & 0xFF801FFFFFFFFFFFuLL;
        if ( v38 == 1 )
        {
          v6 = a1;
          MiRebuildPageTableAges(a1, v33, 0LL);
          v32 = 1;
        }
        else
        {
          v6 = a1;
          if ( (*(_DWORD *)(v37 + 36) & 0x4000000) == 0 )
          {
            *(_QWORD *)v37 = *(_QWORD *)v37 & 0xFC001FFFFFFFFFFFuLL | ((((_WORD)v38 - 1) & 0x3FF | ((unsigned __int64)(v23 & 7) << 10)) << 45);
            MiInsertActivePageTableLinksTail(a1, v37, v23, 0LL);
          }
        }
      }
      else if ( v23 > v39 )
      {
        v81 = *(_QWORD *)v37;
        if ( (*(_DWORD *)(v37 + 36) & 0x4000000) != 0 )
          MiRemoveActivePageTableLinks(v6, 48 * v36 - 0x220000000000LL, 0LL);
        *(_QWORD *)v37 = ((unsigned __int64)v23 << 55) ^ (((unsigned __int64)v23 << 55) ^ v81) & 0xFC7FFFFFFFFFFFFFuLL | 0x7FE00000000000LL;
        MiInsertActivePageTableLinksTail(v6, v37, v23, 0LL);
      }
      _InterlockedDecrement64((volatile signed __int64 *)(v6 + 8LL * v23 + 40));
      if ( v23 == 7 )
        MiVolunteerForTrimFirst(v6, -1LL, v38);
    }
    if ( v25 < 8u )
    {
      if ( v32 )
      {
        _InterlockedIncrement64((volatile signed __int64 *)(v6 + 8LL * v25 + 40));
        if ( v25 == 7 )
        {
          v75 = *((_QWORD *)qword_140E2FF88 + *(unsigned __int16 *)(v6 + 174));
          v76 = *(_QWORD *)(v75 + 17600);
          if ( *(_QWORD *)(v6 + 96) >= *(_QWORD *)(v76 + 56) )
          {
            v77 = (__int64 *)(v6 + 24);
            if ( *(_QWORD *)(v6 + 24) )
            {
              v78 = (__int64 *)(v75 + 17608);
              if ( *(__int64 **)(v75 + 17608) != v77 )
              {
                ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140E373C0);
                if ( *(_BYTE *)(v76 + 53) || (v79 = *v77) == 0 )
                {
                  *(_BYTE *)(v76 + 54) = 1;
                  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140E373C0);
                }
                else
                {
                  v80 = (__int64 **)v77[1];
                  if ( *(__int64 **)(v79 + 8) != v77
                    || *v80 != v77
                    || (*v80 = (__int64 *)v79,
                        *(_QWORD *)(v79 + 8) = v80,
                        v82 = *v78,
                        v83 = (_QWORD *)(a1 + 24),
                        *(__int64 **)(*v78 + 8) != v78) )
                  {
                    __fastfail(3u);
                  }
                  *v83 = v82;
                  v77[1] = (__int64)v78;
                  *(_QWORD *)(v82 + 8) = v83;
                  *v78 = (__int64)v83;
                  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140E373C0);
                }
              }
            }
          }
        }
      }
      else
      {
        v40 = ((v93 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
        v41 = *(_QWORD *)v40;
        if ( v40 >= 0xFFFFF6FB7DBED000uLL
          && v40 <= 0xFFFFF6FB7DBED7F8uLL
          && (v41 & 1) != 0
          && ((v41 & 0x42) == 0 || (v41 & 0x20) == 0) )
        {
          v65 = MiPteHasShadow();
          if ( v65 )
          {
            v67 = v65[2].KernelWaitTime;
            if ( v67 )
            {
              v40 = (v40 >> 3) & 0x1FF;
              v68 = *(_QWORD *)(v67 + 8 * v40);
              if ( (v68 & 0x20) != 0 )
                v41 |= 0x20uLL;
              v69 = v41;
              v85 = v66;
              v41 |= 0x42uLL;
              if ( (v68 & 0x42) == 0 )
                v41 = v69;
            }
          }
        }
        v42 = (v41 >> 12) & 0xFFFFFFFFFFLL;
        v43 = 48 * v42 - 0x220000000000LL;
        v44 = (*(_QWORD *)v43 >> 55) & 7;
        if ( v25 == v44 )
        {
          v48 = ((*(_QWORD *)v43 >> 45) & 0x3FF) + 1;
          v49 = v48 & 0x3FF;
          *(_QWORD *)v43 = ((unsigned __int64)v48 << 45) ^ (((unsigned __int64)v48 << 45) ^ *(_QWORD *)v43) & 0xFF801FFFFFFFFFFFuLL;
          if ( (*(_DWORD *)(v43 + 36) & 0x4000000) == 0 )
          {
            v45 = *(_QWORD *)v43;
            v47 = 0xFC001FFFFFFFFFFFuLL;
            v46 = (v49 | ((unsigned __int64)(v25 & 7) << 10)) << 45;
            goto LABEL_66;
          }
        }
        else if ( v25 > v44 )
        {
          v45 = *(_QWORD *)v43;
          if ( (*(_DWORD *)(v43 + 36) & 0x4000000) != 0 )
            MiRemoveActivePageTableLinks(v6, 48 * v42 - 0x220000000000LL, 0LL);
          v46 = ((unsigned __int64)(v25 & 7) << 55) | 0x200000000000LL;
          v47 = 0xFC003FFFFFFFFFFFuLL;
LABEL_66:
          *(_QWORD *)v43 = v47 & v45 | v46;
          MiInsertActivePageTableLinksTail(v6, v43, v25, 0LL);
        }
        _InterlockedIncrement64((volatile signed __int64 *)(v6 + 8LL * v25 + 40));
        if ( v25 == 7 )
          MiVolunteerForTrimFirst(v6, 1LL, v40);
      }
      v10 = v86;
      goto LABEL_70;
    }
    v10 = v86;
    if ( v25 == 8 )
      _InterlockedIncrement64((volatile signed __int64 *)(v88 + 32));
LABEL_70:
    v8 += 8LL;
    v6 = a1;
    v5 = v93 + 4096;
    v30 = v94-- == 1;
    v89 = v8;
    v93 += 4096LL;
  }
  while ( !v30 );
  v12 = (volatile signed __int32 *)&unk_140E38780;
LABEL_72:
  if ( v87 )
  {
    MiUnlockWorkingSetCoreExclusive(v6);
  }
  else
  {
    if ( (*(_DWORD *)(v6 + 184) & 0xF) != 1 )
      v12 = (volatile signed __int32 *)(v6 + 256);
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
    {
      _InterlockedAnd(v12, 0xBFFFFFFF);
      _InterlockedDecrement(v12);
    }
    else
    {
      ExpReleaseSpinLockSharedFromDpcLevelInstrumented(v12, retaddr);
    }
  }
  if ( v90 )
    MiUnlockPageTableInternal(v6, v90);
  return 1LL;
}
