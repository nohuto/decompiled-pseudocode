/*
 * XREFs of MiSetVaAgeList @ 0x140304F30
 * Callers:
 *     MiProcessWsInSwapFault @ 0x140215CA4 (MiProcessWsInSwapFault.c)
 *     MiResetAccessBitPteWorker @ 0x1402941D8 (MiResetAccessBitPteWorker.c)
 *     MiActOnPte @ 0x14029B3E0 (MiActOnPte.c)
 *     MiTrimWorkingSetBuildup @ 0x1402EA6B0 (MiTrimWorkingSetBuildup.c)
 *     MiUpdateWsleAge @ 0x140303924 (MiUpdateWsleAge.c)
 *     MiAgePteWorker @ 0x1403040A0 (MiAgePteWorker.c)
 *     MiClearPteAccessed @ 0x140304BA0 (MiClearPteAccessed.c)
 *     MiUnlockWsle @ 0x1403DB664 (MiUnlockWsle.c)
 *     NtLockVirtualMemory @ 0x1403DBC30 (NtLockVirtualMemory.c)
 * Callees:
 *     MiLockNestedPageTable @ 0x140201F50 (MiLockNestedPageTable.c)
 *     MiCheckLinearProtectedPteAccessedBit @ 0x140203550 (MiCheckLinearProtectedPteAccessedBit.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x140219638 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x140219B50 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x140241380 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140246FA0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetPagePrivilege @ 0x140249B80 (MiGetPagePrivilege.c)
 *     MiLockWorkingSetCoreExclusive @ 0x140296038 (MiLockWorkingSetCoreExclusive.c)
 *     MiUnlockWorkingSetCoreExclusive @ 0x140296808 (MiUnlockWorkingSetCoreExclusive.c)
 *     MiUnlockPageTableInternal @ 0x1402C9C00 (MiUnlockPageTableInternal.c)
 *     MiVolunteerForTrimFirst @ 0x140303BB0 (MiVolunteerForTrimFirst.c)
 *     MiPteHasShadow @ 0x140307500 (MiPteHasShadow.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140338DA0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403394D0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiInsertActivePageTableLinksTail @ 0x140392798 (MiInsertActivePageTableLinksTail.c)
 *     MiRemoveActivePageTableLinks @ 0x1403929A8 (MiRemoveActivePageTableLinks.c)
 *     MiRebuildPageTableAges @ 0x140392C6C (MiRebuildPageTableAges.c)
 */

__int64 __fastcall MiSetVaAgeList(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbp
  unsigned __int64 v5; // r12
  __int64 v6; // r14
  unsigned __int8 v7; // si
  __int64 v8; // rcx
  ULONG_PTR v9; // r13
  unsigned __int64 v10; // rbx
  int v11; // r15d
  unsigned __int64 v12; // rdx
  volatile signed __int32 *v13; // rdi
  unsigned int v14; // ebx
  unsigned __int64 v15; // rsi
  char v16; // al
  unsigned __int64 v17; // rcx
  signed __int32 v18; // eax
  __int64 v19; // rdx
  signed __int32 v20; // ett
  __int64 v21; // r8
  unsigned __int64 v22; // rdx
  unsigned __int64 *v23; // rdi
  unsigned __int64 v24; // rax
  unsigned __int8 v25; // bp
  unsigned __int8 v26; // bl
  __int64 v27; // r8
  unsigned __int8 v28; // r12
  unsigned __int64 v29; // rdx
  unsigned __int64 v30; // rax
  volatile signed __int64 *v31; // r14
  signed __int64 v32; // rdi
  bool v33; // zf
  signed __int64 v34; // rax
  int v35; // r15d
  unsigned __int64 *v36; // r8
  unsigned __int64 v37; // rdx
  __int64 v38; // rdx
  __int64 v39; // rdi
  __int64 v40; // r8
  unsigned __int8 v41; // al
  unsigned __int64 *v42; // r8
  unsigned __int64 v43; // rdx
  __int64 v44; // rdx
  __int64 v45; // rdi
  unsigned __int8 v46; // al
  __int64 v47; // rbx
  unsigned __int64 v48; // rax
  unsigned __int64 v49; // rcx
  unsigned int v50; // ecx
  unsigned __int64 v51; // rdx
  __int16 v52; // bp
  __int64 v53; // rbp
  __int64 HasShadow; // rax
  __int64 v56; // rax
  __int64 v57; // rax
  __int64 v58; // rax
  __int64 v59; // rax
  unsigned __int64 v60; // r8
  unsigned int v61; // r10d
  __int64 v62; // rax
  __int64 v63; // rax
  __int64 v64; // rax
  unsigned __int64 v65; // r8
  unsigned int v66; // r10d
  __int64 v67; // rax
  __int64 v68; // rax
  unsigned __int64 v69; // rcx
  __int64 v70; // rax
  unsigned int v71; // r8d
  __int64 v72; // rax
  __int64 v73; // r8
  __int64 v74; // rbx
  __int64 *v75; // rdi
  __int64 *v76; // r14
  __int64 v77; // rax
  __int64 **v78; // rcx
  __int64 v79; // rbx
  unsigned __int64 v80; // rax
  __int64 v81; // rax
  _QWORD *v82; // rcx
  unsigned __int8 v83; // [rsp+20h] [rbp-78h]
  unsigned int v84; // [rsp+24h] [rbp-74h]
  int v85; // [rsp+28h] [rbp-70h]
  int v86; // [rsp+2Ch] [rbp-6Ch]
  __int64 v87; // [rsp+30h] [rbp-68h]
  ULONG_PTR v88; // [rsp+38h] [rbp-60h]
  unsigned __int64 v89; // [rsp+40h] [rbp-58h]
  __int64 retaddr; // [rsp+98h] [rbp+0h]
  unsigned __int64 v92; // [rsp+A8h] [rbp+10h]
  int v93; // [rsp+B0h] [rbp+18h]
  unsigned __int8 v94; // [rsp+B8h] [rbp+20h]

  v94 = a4;
  v93 = a3;
  v92 = a2;
  v4 = (unsigned int)a3;
  v5 = a2;
  v6 = a1;
  v7 = 0;
  v8 = 0LL;
  v9 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v10 = 0LL;
  v87 = *(_QWORD *)(v6 + 16);
  v88 = v9;
  v89 = 0LL;
  v86 = 0;
  v84 = 0;
  if ( a2 < 0xFFFFF68000000000uLL || a2 > 0xFFFFF6FFFFFFFFFFuLL )
  {
    v11 = 1;
    v85 = 1;
  }
  else
  {
    v11 = 0;
    v85 = 0;
    if ( (*(_DWORD *)(v6 + 184) & 0xF) != 0 )
    {
      v84 = 1;
    }
    else
    {
      MiLockNestedPageTable(v6, v9);
      a4 = v94;
      v10 = v9;
      v89 = v9;
      v8 = 0LL;
    }
  }
  v12 = 0xFFFFF6FB7DBED7F8uLL;
  v13 = (volatile signed __int32 *)&unk_140E388C0;
  if ( (_BYTE)a4 == 8 )
  {
    v86 = 1;
    MiLockWorkingSetCoreExclusive(v6, 0xFFFFF6FB7DBED7F8uLL, a3, a4);
    v21 = v87;
    v17 = v4 + *(_QWORD *)(v87 + 32) + 6LL;
    if ( *(_QWORD *)(v6 + 112) < v17 )
    {
      MiUnlockWorkingSetCoreExclusive(v6);
      if ( v10 )
        MiUnlockPageTableInternal(v6, v10);
      return 0LL;
    }
  }
  else
  {
    v14 = 0;
    if ( (_DWORD)v4 )
    {
      do
      {
        if ( v11 )
        {
          v15 = *(_QWORD *)v9;
          if ( v9 >= 0xFFFFF6FB7DBED000uLL && v9 <= v12 && (v15 & 1) != 0 )
          {
            LOBYTE(v8) = (v15 & 0x42) != 0;
            if ( ((unsigned __int8)v8 & ((v15 & 0x20) != 0)) == 0 )
            {
              HasShadow = MiPteHasShadow(v8, v12, a3, a4);
              if ( HasShadow )
              {
                v8 = *(_QWORD *)(HasShadow + 1288);
                if ( v8 )
                {
                  v56 = *(_QWORD *)(v8 + 8 * ((v9 >> 3) & 0x1FF));
                  if ( (v56 & 0x20) != 0 )
                    v15 |= 0x20uLL;
                  v8 = v15;
                  v15 |= 0x42uLL;
                  if ( (v56 & 0x42) == 0 )
                    v15 = v8;
                }
              }
            }
          }
          v16 = HIBYTE(v15) & 0xF;
          v7 = HIBYTE(v15) & 0xF | (16 * ((v15 >> 60) & 7));
        }
        else
        {
          v80 = MI_READ_PTE_LOCK_FREE(v9);
          v8 = 6 * ((v80 >> 12) & 0xFFFFFFFFFFLL);
          v16 = (*(_QWORD *)(48 * ((v80 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL) >> 42) & 7;
          v12 = 0xFFFFF6FB7DBED7F8uLL;
        }
        if ( v16 == 8 )
          break;
        ++v14;
      }
      while ( v14 < (unsigned int)v4 );
      v6 = a1;
      v13 = (volatile signed __int32 *)&unk_140E388C0;
      v5 = v92;
    }
    if ( v14 == (_DWORD)v4 )
    {
      if ( (*(_DWORD *)(v6 + 184) & 0xF) == 1 )
        v17 = (unsigned __int64)&unk_140E388C0;
      else
        v17 = v6 + 256;
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
      {
        _m_prefetchw((const void *)v17);
        v18 = *(_DWORD *)v17 & 0x7FFFFFFF;
        while ( 1 )
        {
          v19 = (unsigned int)(v18 + 1);
          v20 = v18;
          v18 = _InterlockedCompareExchange((volatile signed __int32 *)v17, v19, v18);
          if ( v20 == v18 )
            break;
          if ( v18 < 0 )
          {
            LOBYTE(v19) = -1;
            ExpWaitForSpinLockSharedAndAcquire((signed __int32 *)v17, v19, a3, a4);
            break;
          }
        }
      }
      else
      {
        ExpAcquireSpinLockSharedAtDpcLevelInstrumented((_DWORD *)v17, 0xFFu);
      }
    }
    else
    {
      v86 = 1;
      MiLockWorkingSetCoreExclusive(v6, v12, a3, a4);
    }
    v21 = v87;
  }
  if ( !(_DWORD)v4 )
    goto LABEL_74;
  do
  {
    v22 = *(_QWORD *)v9;
    if ( v9 >= 0xFFFFF6FB7DBED000uLL && v9 <= 0xFFFFF6FB7DBED7F8uLL && (v22 & 1) != 0 )
    {
      LOBYTE(v17) = (v22 & 0x42) != 0;
      if ( ((unsigned __int8)v17 & ((v22 & 0x20) != 0)) == 0 )
      {
        v57 = MiPteHasShadow(v17, v22, v21, a4);
        if ( v57 )
        {
          v17 = *(_QWORD *)(v57 + 1288);
          if ( v17 )
          {
            v58 = *(_QWORD *)(v17 + 8 * ((v9 >> 3) & 0x1FF));
            if ( (v58 & 0x20) != 0 )
              v22 |= 0x20uLL;
            v17 = v22;
            v22 |= 0x42uLL;
            if ( (v58 & 0x42) == 0 )
              v22 = v17;
          }
        }
      }
    }
    v23 = (unsigned __int64 *)(48 * ((v22 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL);
    if ( v11 )
    {
      v24 = MI_READ_PTE_LOCK_FREE(((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
      v17 = HIBYTE(v24);
      v25 = HIBYTE(v24) & 0xF;
      v7 = HIBYTE(v24) & 0xF | (16 * ((v24 >> 60) & 7));
      v26 = v7;
      if ( (HIBYTE(v24) & 0xF) == 8 )
      {
        v84 = 1;
        _InterlockedDecrement64((volatile signed __int64 *)(v87 + 32));
        v27 = 1LL;
      }
      else
      {
        v27 = 0LL;
        v84 = 0;
      }
    }
    else
    {
      v26 = v7;
      v25 = (*v23 >> 42) & 7;
      v27 = v84;
    }
    v28 = v94;
    v83 = v94;
    if ( (unsigned __int8)(v94 - 1) > 5u )
      goto LABEL_37;
    v29 = *(_QWORD *)v9;
    if ( v9 >= 0xFFFFF6FB7DBED000uLL && v9 <= 0xFFFFF6FB7DBED7F8uLL && (v29 & 1) != 0 )
    {
      LOBYTE(v17) = (v29 & 0x42) != 0;
      if ( ((unsigned __int8)v17 & ((v29 & 0x20) != 0)) == 0 )
      {
        v70 = MiPteHasShadow(v17, v29, v27, a4);
        if ( v70 )
        {
          v17 = *(_QWORD *)(v70 + 1288);
          if ( v17 )
          {
            v72 = *(_QWORD *)(v17 + 8 * ((v9 >> 3) & 0x1FF));
            if ( (v72 & 0x20) != 0 )
              v29 |= 0x20uLL;
            v17 = v29;
            v84 = v71;
            v29 |= 0x42uLL;
            if ( (v72 & 0x42) == 0 )
              v29 = v17;
          }
        }
      }
    }
    if ( (v29 & 0x20) == 0 )
    {
LABEL_37:
      v30 = v92;
      goto LABEL_38;
    }
    if ( (*(_DWORD *)(v6 + 184) & 0xF) != 0 )
    {
      if ( !_bittest64(&MiFlags, 0x24u) || (*(_DWORD *)(v6 + 184) & 0x800) == 0 )
      {
LABEL_126:
        v30 = v92;
        goto LABEL_127;
      }
    }
    else if ( !*(_QWORD *)(v6 + 624) )
    {
      goto LABEL_126;
    }
    if ( (*(_DWORD *)(v6 + 184) & 0xF) != 0 )
    {
      v33 = (MiGetPagePrivilege(48 * ((v29 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL, 2, 0LL) & 0x41) == 0;
      v30 = v92;
      if ( !v33 )
        goto LABEL_38;
    }
    else
    {
      v30 = v92;
      v17 = 0x7FFFFFFEFFFFLL;
      if ( v92 <= 0x7FFFFFFEFFFFLL )
        goto LABEL_38;
    }
LABEL_127:
    if ( !v25 )
      goto LABEL_71;
    v28 = 0;
    v83 = 0;
LABEL_38:
    if ( v11 )
    {
      v7 = v26 ^ (v26 ^ v28) & 0xF;
      v31 = (volatile signed __int64 *)(((v30 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
      v17 = 0x80FFFFFFFFFFFFFFuLL;
      v32 = *v31;
      do
      {
        if ( (MiFlags & 0x2000000) != 0 )
          _mm_lfence();
        if ( _bittest64(&MiFlags, 0x24u) && (v32 & 0x21) == 1 && (unsigned __int64)v31 >= 0xFFFFF6C000000000uLL )
        {
          MiCheckLinearProtectedPteAccessedBit(
            (ULONG_PTR)v31,
            ((unsigned __int64)v7 << 56) ^ (((unsigned __int64)v7 << 56) ^ v32) & 0x80FFFFFFFFFFFFFFuLL,
            128LL);
          v17 = 0x80FFFFFFFFFFFFFFuLL;
        }
        v34 = _InterlockedCompareExchange64(
                v31,
                ((unsigned __int64)v7 << 56) ^ (((unsigned __int64)v7 << 56) ^ v32) & 0x80FFFFFFFFFFFFFFuLL,
                v32);
        v33 = v32 == v34;
        v32 = v34;
      }
      while ( !v33 );
      v28 = v83;
      v9 = v88;
      v6 = a1;
    }
    else
    {
      v17 = ((unsigned __int64)v28 << 42) ^ (*v23 ^ ((unsigned __int64)v28 << 42)) & 0xFFFFE3FFFFFFFFFFuLL;
      *v23 = v17;
    }
    v35 = 0;
    if ( !v84 )
    {
      a4 = v92;
      v36 = (unsigned __int64 *)(((v92 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL);
      v37 = *v36;
      if ( (unsigned __int64)v36 >= 0xFFFFF6FB7DBED000uLL
        && (unsigned __int64)v36 <= 0xFFFFF6FB7DBED7F8uLL
        && (v37 & 1) != 0 )
      {
        LOBYTE(v17) = (v37 & 0x42) != 0;
        if ( ((unsigned __int8)v17 & ((v37 & 0x20) != 0)) == 0 )
        {
          v59 = MiPteHasShadow(v17, v37, v36, v92);
          if ( v59 )
          {
            v62 = *(_QWORD *)(v59 + 1288);
            if ( v62 )
            {
              v63 = *(_QWORD *)(v62 + 8 * ((v60 >> 3) & 0x1FF));
              if ( (v63 & 0x20) != 0 )
                v37 |= 0x20uLL;
              v17 = v37;
              v84 = v61;
              v37 |= 0x42uLL;
              if ( (v63 & 0x42) == 0 )
                v37 = v17;
            }
          }
        }
      }
      v38 = (v37 >> 12) & 0xFFFFFFFFFFLL;
      v39 = 48 * v38 - 0x220000000000LL;
      v40 = (*(_QWORD *)v39 >> 45) & 0x3FFLL;
      v41 = (*(_QWORD *)v39 >> 55) & 7;
      if ( v25 == v41 )
      {
        v17 = 0xFF801FFFFFFFFFFFuLL;
        *(_QWORD *)v39 = ((unsigned __int64)(unsigned int)(v40 - 1) << 45) ^ (((unsigned __int64)(unsigned int)(v40 - 1) << 45) ^ *(_QWORD *)v39) & 0xFF801FFFFFFFFFFFuLL;
        if ( v40 == 1 )
        {
          v6 = a1;
          MiRebuildPageTableAges(a1, a4, 0LL);
          v35 = 1;
        }
        else
        {
          v6 = a1;
          if ( (*(_DWORD *)(v39 + 36) & 0x4000000) == 0 )
          {
            *(_QWORD *)v39 = *(_QWORD *)v39 & 0xFC001FFFFFFFFFFFuLL | ((((_WORD)v40 - 1) & 0x3FF | ((unsigned __int64)(v25 & 7) << 10)) << 45);
            MiInsertActivePageTableLinksTail(a1, v39, v25, 0LL);
          }
        }
      }
      else if ( v25 > v41 )
      {
        v79 = *(_QWORD *)v39;
        if ( (*(_DWORD *)(v39 + 36) & 0x4000000) != 0 )
          MiRemoveActivePageTableLinks(v6, 48 * v38 - 0x220000000000LL, 0LL);
        *(_QWORD *)v39 = ((unsigned __int64)v25 << 55) ^ (((unsigned __int64)v25 << 55) ^ v79) & 0xFC7FFFFFFFFFFFFFuLL | 0x7FE00000000000LL;
        MiInsertActivePageTableLinksTail(v6, v39, v25, 0LL);
      }
      _InterlockedDecrement64((volatile signed __int64 *)(v6 + 8LL * v25 + 40));
      if ( v25 == 7 )
        MiVolunteerForTrimFirst(v6, -1LL);
    }
    if ( v28 < 8u )
    {
      if ( v35 )
      {
        _InterlockedIncrement64((volatile signed __int64 *)(v6 + 8LL * v28 + 40));
        if ( v28 == 7 )
        {
          v17 = *(unsigned __int16 *)(v6 + 174);
          v73 = *((_QWORD *)qword_140E300C8 + v17);
          v74 = *(_QWORD *)(v73 + 17600);
          if ( *(_QWORD *)(v6 + 96) >= *(_QWORD *)(v74 + 56) )
          {
            v75 = (__int64 *)(v6 + 24);
            if ( *(_QWORD *)(v6 + 24) )
            {
              v76 = (__int64 *)(v73 + 17608);
              if ( *(__int64 **)(v73 + 17608) != v75 )
              {
                ExAcquireSpinLockExclusiveAtDpcLevel(&SpinLock);
                if ( *(_BYTE *)(v74 + 53) || (v77 = *v75) == 0 )
                {
                  *(_BYTE *)(v74 + 54) = 1;
                  ExReleaseSpinLockExclusiveFromDpcLevel(&SpinLock);
                }
                else
                {
                  v78 = (__int64 **)v75[1];
                  if ( *(__int64 **)(v77 + 8) != v75
                    || *v78 != v75
                    || (*v78 = (__int64 *)v77,
                        *(_QWORD *)(v77 + 8) = v78,
                        v81 = *v76,
                        v82 = (_QWORD *)(a1 + 24),
                        *(__int64 **)(*v76 + 8) != v76) )
                  {
                    __fastfail(3u);
                  }
                  *v82 = v81;
                  v75[1] = (__int64)v76;
                  *(_QWORD *)(v81 + 8) = v82;
                  *v76 = (__int64)v82;
                  ExReleaseSpinLockExclusiveFromDpcLevel(&SpinLock);
                }
              }
            }
          }
        }
        goto LABEL_70;
      }
      v42 = (unsigned __int64 *)(((v92 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL);
      v43 = *v42;
      if ( (unsigned __int64)v42 >= 0xFFFFF6FB7DBED000uLL
        && (unsigned __int64)v42 <= 0xFFFFF6FB7DBED7F8uLL
        && (v43 & 1) != 0 )
      {
        LOBYTE(v17) = (v43 & 0x42) != 0;
        if ( ((unsigned __int8)v17 & ((v43 & 0x20) != 0)) == 0 )
        {
          v64 = MiPteHasShadow(v17, v43, v42, a4);
          if ( v64 )
          {
            v67 = *(_QWORD *)(v64 + 1288);
            if ( v67 )
            {
              v68 = *(_QWORD *)(v67 + 8 * ((v65 >> 3) & 0x1FF));
              if ( (v68 & 0x20) != 0 )
                v43 |= 0x20uLL;
              v69 = v43;
              v84 = v66;
              v43 |= 0x42uLL;
              if ( (v68 & 0x42) == 0 )
                v43 = v69;
            }
          }
        }
      }
      v44 = (v43 >> 12) & 0xFFFFFFFFFFLL;
      v45 = 48 * v44 - 0x220000000000LL;
      v17 = (*(_QWORD *)v45 >> 45) & 0x3FFLL;
      v46 = (*(_QWORD *)v45 >> 55) & 7;
      if ( v28 == v46 )
      {
        v50 = v17 + 1;
        v51 = (unsigned __int64)v50 << 45;
        v52 = v50;
        v17 = 0xFF801FFFFFFFFFFFuLL;
        v53 = v52 & 0x3FF;
        *(_QWORD *)v45 = v51 ^ (v51 ^ *(_QWORD *)v45) & 0xFF801FFFFFFFFFFFuLL;
        if ( (*(_DWORD *)(v45 + 36) & 0x4000000) != 0 )
          goto LABEL_68;
        v47 = *(_QWORD *)v45;
        v49 = 0xFC001FFFFFFFFFFFuLL;
        v48 = (v53 | ((unsigned __int64)(v28 & 7) << 10)) << 45;
      }
      else
      {
        if ( v28 <= v46 )
          goto LABEL_68;
        v47 = *(_QWORD *)v45;
        if ( (*(_DWORD *)(v45 + 36) & 0x4000000) != 0 )
          MiRemoveActivePageTableLinks(v6, 48 * v44 - 0x220000000000LL, 0LL);
        v48 = ((unsigned __int64)(v28 & 7) << 55) | 0x200000000000LL;
        v49 = 0xFC003FFFFFFFFFFFuLL;
      }
      *(_QWORD *)v45 = v49 & v47 | v48;
      MiInsertActivePageTableLinksTail(v6, v45, v28, 0LL);
LABEL_68:
      _InterlockedIncrement64((volatile signed __int64 *)(v6 + 8LL * v28 + 40));
      if ( v28 == 7 )
        MiVolunteerForTrimFirst(v6, 1LL);
LABEL_70:
      v11 = v85;
LABEL_71:
      v21 = v87;
      goto LABEL_72;
    }
    v21 = v87;
    v11 = v85;
    if ( v28 == 8 )
      _InterlockedIncrement64((volatile signed __int64 *)(v87 + 32));
LABEL_72:
    v9 += 8LL;
    v6 = a1;
    v5 = v92 + 4096;
    v33 = v93-- == 1;
    v88 = v9;
    v92 += 4096LL;
  }
  while ( !v33 );
  v13 = (volatile signed __int32 *)&unk_140E388C0;
LABEL_74:
  if ( v86 )
  {
    MiUnlockWorkingSetCoreExclusive(v6);
  }
  else
  {
    if ( (*(_DWORD *)(v6 + 184) & 0xF) != 1 )
      v13 = (volatile signed __int32 *)(v6 + 256);
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
    {
      _InterlockedAnd(v13, 0xBFFFFFFF);
      _InterlockedDecrement(v13);
    }
    else
    {
      ExpReleaseSpinLockSharedFromDpcLevelInstrumented(v13, retaddr);
    }
  }
  if ( v89 )
    MiUnlockPageTableInternal(v6, v89);
  return 1LL;
}
