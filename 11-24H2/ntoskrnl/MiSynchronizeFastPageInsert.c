/*
 * XREFs of MiSynchronizeFastPageInsert @ 0x140301300
 * Callers:
 *     MiInsertPagesInList @ 0x140226A90 (MiInsertPagesInList.c)
 *     MiInsertPageInList @ 0x140300420 (MiInsertPageInList.c)
 * Callees:
 *     MiReleasePageListLock @ 0x140218800 (MiReleasePageListLock.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x140219B50 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     MiPurgingPageFromLookaside @ 0x140223400 (MiPurgingPageFromLookaside.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x140241380 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     MiPageToChannel @ 0x140258D54 (MiPageToChannel.c)
 *     MiGetPfnSlabType @ 0x140300F20 (MiGetPfnSlabType.c)
 *     MiGetStandbyLookaside @ 0x140301F40 (MiGetStandbyLookaside.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x140302160 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiIsDecayPfn @ 0x1403028E0 (MiIsDecayPfn.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403394D0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 */

void __fastcall MiSynchronizeFastPageInsert(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        int a4,
        __int64 a5,
        _BYTE *a6)
{
  unsigned __int64 v6; // r9
  __int64 v8; // r11
  ULONG_PTR v9; // r12
  int v10; // eax
  unsigned int v11; // r14d
  unsigned int v12; // eax
  __int64 v13; // rdi
  __int64 v14; // rsi
  __int64 i; // rbx
  unsigned __int64 v16; // rax
  __int64 v17; // rcx
  unsigned __int64 v18; // rsi
  unsigned int v19; // edi
  unsigned int Number; // r10d
  unsigned int v21; // ebx
  __int64 v22; // r8
  int v23; // r13d
  unsigned __int64 v24; // r9
  int v25; // ecx
  char *v26; // rax
  int j; // edx
  int v28; // r8d
  __int64 v29; // r8
  unsigned __int8 v30; // cl
  __int64 v31; // r9
  __int64 v32; // r8
  __int64 v33; // rdx
  __int64 v34; // rax
  __int64 StandbyLookaside; // r8
  unsigned int v36; // r15d
  unsigned int v37; // r14d
  __int64 v38; // r10
  unsigned __int64 v39; // r12
  volatile signed __int64 *v40; // rbx
  __int64 v41; // rdi
  _BYTE *v42; // r11
  __int64 v43; // rcx
  _BYTE *v44; // r13
  _BYTE *v45; // rax
  __int64 v46; // rax
  _BYTE *v47; // rsi
  volatile signed __int64 *v48; // rdx
  _DWORD *v49; // rcx
  __int64 v50; // rcx
  __int64 v51; // rbx
  __int64 v52; // rax
  __int64 v53; // rdi
  __int64 v54; // rdx
  int v55; // r10d
  __int64 v56; // r15
  signed __int32 v57; // eax
  __int64 v58; // rdx
  signed __int32 v59; // ett
  unsigned __int64 v60; // rdx
  __int64 k; // rax
  __int64 v62; // rax
  __int64 v63; // rcx
  __int64 v64; // r8
  __int64 v65; // rax
  ULONG_PTR v66; // rdx
  char v67; // r8d^2
  __int64 v68; // r9
  volatile LONG *v69; // rcx
  char v70; // al
  __int64 v71; // rcx
  __int64 v72; // rax
  unsigned __int8 v73; // dl
  __int64 v74; // rdx
  unsigned __int8 v75; // cl
  int v76; // [rsp+30h] [rbp-C8h]
  unsigned int v77; // [rsp+34h] [rbp-C4h]
  int v78; // [rsp+38h] [rbp-C0h]
  unsigned __int64 v79; // [rsp+40h] [rbp-B8h]
  unsigned int v80; // [rsp+48h] [rbp-B0h]
  int v81; // [rsp+4Ch] [rbp-ACh]
  __int64 v82; // [rsp+50h] [rbp-A8h]
  __int64 v83; // [rsp+58h] [rbp-A0h]
  __int64 v84; // [rsp+60h] [rbp-98h]
  __int64 v85; // [rsp+68h] [rbp-90h]
  ULONG_PTR v86; // [rsp+70h] [rbp-88h]
  __int64 v87; // [rsp+78h] [rbp-80h]
  int v88; // [rsp+80h] [rbp-78h]
  __int128 v89; // [rsp+88h] [rbp-70h] BYREF
  __int128 v90; // [rsp+98h] [rbp-60h]
  __int128 v91; // [rsp+A8h] [rbp-50h]
  _DWORD v92[16]; // [rsp+B8h] [rbp-40h]
  __int64 v94; // [rsp+108h] [rbp+10h]
  unsigned __int8 v95; // [rsp+110h] [rbp+18h]
  char v96; // [rsp+113h] [rbp+1Bh]
  char v97; // [rsp+113h] [rbp+1Bh]

  v94 = a2;
  v6 = 0xFFFFDE0000000000uLL;
  v89 = 0LL;
  v90 = 0LL;
  v91 = 0LL;
  v8 = a5;
  v9 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(a3 + 0x220000000000LL) >> 4);
  v86 = v9;
  if ( a5 )
  {
    v18 = 0xAAAAAAAAAAAAAAABuLL * ((a5 + 0x220000000000LL) >> 4);
    v88 = 1;
    v19 = 1;
    v11 = 5;
  }
  else
  {
    v10 = *(_DWORD *)(a3 + 32);
    v11 = 5;
    v96 = HIBYTE(v10);
    if ( (v10 & 0x8000000) != 0
      && (a3 < 0xFFFFDE0000000000uLL
       || (a2 = 48 * qword_140E2DD20 - 0x21FFFFFFFFD0LL, a3 >= a2)
       || v9 >= qword_140E35C40 && v9 < qword_140E35C40 + 2048
       || (BYTE2(v10) & 7) != 6 && (unsigned int)MiGetPfnSlabType(a3) == 9) )
    {
      v12 = 5;
    }
    else
    {
      v12 = v96 & 7;
    }
    v13 = v12;
    v14 = 88LL * v12 + 3296;
    for ( i = 0LL; (unsigned int)i < 2; i = (unsigned int)(i + 1) )
    {
      v16 = *(_QWORD *)(a1 + 8 * (v13 + 8 * i) + 15936);
      if ( v16 >= 0x1000 )
      {
        v69 = (volatile LONG *)(v14 + a1);
        if ( v16 >= 0x2000 )
        {
          ExAcquireSpinLockExclusiveAtDpcLevel(v69);
LABEL_9:
          v17 = v13 + 8 * i;
          if ( *(_QWORD *)(a1 + 8 * v17 + 15936) >= 0x1000uLL )
          {
            *(_QWORD *)(a1 + 8 * v17 + 15936) = 0LL;
            a6[2] = 1;
            if ( (_DWORD)i )
              a6[2] = 2;
            a6[1] = 1;
          }
          return;
        }
        if ( (unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel(v69, a2, a3, v6) )
          goto LABEL_9;
      }
    }
    if ( (_DWORD)i != 2 )
      goto LABEL_9;
    v8 = 0LL;
    v18 = -1LL;
    v88 = 1;
    v19 = 64;
  }
  Number = KeGetPcr()->Prcb.Number;
  v78 = v19;
  v79 = v18;
  if ( (unsigned int)KeNumberProcessors_0 >= 0x40 )
  {
    Number &= 0x3Fu;
  }
  else if ( 0x40 / (unsigned int)KeNumberProcessors_0 > 1 )
  {
    Number *= 0x40 / (unsigned int)KeNumberProcessors_0;
  }
  v21 = 0;
  v80 = Number;
  v77 = 0;
  v22 = 48 * v9;
  v23 = 0;
  v84 = 48 * v9;
  v76 = 0;
  v81 = 0;
  v24 = 48 * v9 - 0x220000000000LL;
  *((_QWORD *)&v89 + 1) = v24;
  *(_QWORD *)&v89 = *((_QWORD *)qword_140E300C8 + ((*(_QWORD *)(48 * v9 - 0x21FFFFFFFFD8LL) >> 43) & 0x3FFLL));
  v25 = dword_140E2DC04;
  if ( dword_140E2DC00 > (unsigned int)dword_140E2DC04
    || (v26 = (char *)qword_140E2DC60 + 16 * dword_140E2DC00, v9 < *(_QWORD *)v26)
    || dword_140E2DC00 != dword_140E2DC04 && v9 >= *((_QWORD *)v26 + 2) )
  {
    for ( j = 0; ; j = v28 + 1 )
    {
      while ( 1 )
      {
        if ( v25 < j )
          KeBugCheckEx(0x1Au, 0x5180uLL, v9, 0LL, 0LL);
        v28 = (j + v25) >> 1;
        v26 = (char *)qword_140E2DC60 + 16 * v28;
        if ( v9 >= *(_QWORD *)v26 )
          break;
        if ( !v28 )
          KeBugCheckEx(0x1Au, 0x5180uLL, v9, (ULONG_PTR)qword_140E2DC60, 0LL);
        v25 = v28 - 1;
      }
      if ( v28 == dword_140E2DC04 || v9 < *((_QWORD *)v26 + 2) )
        break;
    }
    dword_140E2DC00 = (j + v25) >> 1;
    v22 = 48 * v9;
  }
  DWORD2(v90) = *((_DWORD *)v26 + 2);
  if ( !v8 )
  {
    v29 = *(unsigned int *)(v22 - 0x21FFFFFFFFE0LL);
    v97 = BYTE3(v29);
    if ( (*(_DWORD *)(v84 - 0x21FFFFFFFFE0LL) & 0x8000000) == 0
      || v24 >= 0xFFFFDE0000000000uLL
      && v24 < 48 * qword_140E2DD20 - 0x21FFFFFFFFD0LL
      && !(unsigned int)MiIsDecayPfn(0xAAAAAAAAAAAAAAABuLL * (v84 >> 4), v84, v29, v24)
      && ((v67 & 7) == 6 || (unsigned int)MiGetPfnSlabType(v68) != 9) )
    {
      v11 = v97 & 7;
    }
  }
  HIDWORD(v90) = v11;
  if ( qword_140E2DC68 )
  {
    v70 = MiPageToChannel(0xAAAAAAAAAAAAAAABuLL * (v84 >> 4));
    v8 = a5;
    v30 = v70;
    Number = v80;
  }
  else
  {
    v30 = 0;
  }
  v31 = v89;
  v95 = v30;
  v32 = *(_QWORD *)(v89 + 16) + 57216LL * DWORD2(v90);
  LOBYTE(v91) = v30;
  DWORD1(v91) = a4;
  if ( a4 < 9 )
  {
    if ( a4 == 8 )
      v73 = *(_BYTE *)(qword_140E3D280 + 2 * ((0xAAAAAAAAAAAAAAABuLL * (v84 >> 4)) >> 9) + 1) & 0x7F;
    else
      v73 = 0;
    BYTE8(v91) = v73;
    v82 = v11;
    v34 = *(_QWORD *)(232LL * a4 + v32 + 15768) + 704LL * v73 + 88LL * v11;
    v33 = v11;
  }
  else
  {
    v33 = v11;
    v82 = v11;
    v34 = v32 + 88 * (v11 + 8LL * v30 + 59);
  }
  *(_QWORD *)&v90 = v34;
  StandbyLookaside = (v33 << 9) + v89 + 11840;
  v87 = v33 << 9;
  v36 = 0;
  v83 = StandbyLookaside;
  v37 = Number;
  v38 = 0LL;
  v85 = 0LL;
  while ( v36 < v19 )
  {
    if ( v18 == -1LL || v23 )
    {
      v39 = *(_QWORD *)(StandbyLookaside + 8LL * v37);
      if ( v39 == -1LL )
      {
        v77 = ++v21;
        goto LABEL_40;
      }
      v41 = 48 * v39 - 0x220000000000LL;
    }
    else
    {
      v39 = v18;
      v41 = v8;
    }
    v42 = a6;
    v43 = 0LL;
    v44 = a6 + 16;
    v45 = a6 + 16;
    while ( v43 < 4 )
    {
      if ( v45[8] && v41 == *(_QWORD *)v45 )
      {
        v46 = 24 * v38;
        v40 = (volatile signed __int64 *)(v41 + 24);
        goto LABEL_49;
      }
      ++v43;
      v45 += 24;
    }
    v40 = (volatile signed __int64 *)(v41 + 24);
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v41 + 24), 0x3FuLL) )
      goto LABEL_39;
    if ( v18 != -1LL && !v76 && (*(_DWORD *)(v41 + 32) & 0x8000000) == 0 )
    {
      _InterlockedAnd64(v40, 0x7FFFFFFFFFFFFFFFuLL);
      v9 = v86;
      ++v36;
      v21 = v77;
      v23 = 0;
      goto LABEL_58;
    }
    v46 = 24 * v38;
    a6[24 * v38 + 24] = 1;
LABEL_49:
    v47 = &a6[v46];
    *((_QWORD *)v47 + 1) = v39;
    v48 = v40;
    *((_QWORD *)v47 + 2) = v41;
    if ( !v81 )
    {
      v49 = (_DWORD *)(v94 + 32);
      v81 = 1;
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
      {
        _m_prefetchw(v49);
        v57 = *v49 & 0x7FFFFFFF;
        while ( 1 )
        {
          v58 = (unsigned int)(v57 + 1);
          v59 = v57;
          v57 = _InterlockedCompareExchange(v49, v58, v57);
          if ( v59 == v57 )
            break;
          if ( v57 < 0 )
          {
            LOBYTE(v58) = -1;
            ExpWaitForSpinLockSharedAndAcquire(v49, v58, StandbyLookaside, v31);
            v38 = v85;
            StandbyLookaside = v83;
            v42 = a6;
            break;
          }
        }
        v48 = v40;
      }
      else
      {
        ExpAcquireSpinLockSharedAtDpcLevelInstrumented(v49, 0xFFu);
        v38 = v85;
        v48 = (volatile signed __int64 *)(v41 + 24);
        StandbyLookaside = v83;
        v42 = a6;
      }
    }
    v31 = v79;
    if ( v79 != -1LL )
    {
      v48 = v40;
      if ( !v76 )
        goto LABEL_69;
    }
    if ( *(_QWORD *)(StandbyLookaside + 8LL * v37) != v39 )
    {
      if ( v47[24] )
      {
        _InterlockedAnd64(v48, 0x7FFFFFFFFFFFFFFFuLL);
        v47[24] = 0;
      }
      --v36;
      LOBYTE(v37) = v37 - 1;
      v18 = v79;
LABEL_39:
      v23 = v76;
      v19 = v78;
      v21 = v77;
      goto LABEL_40;
    }
    if ( v79 == -1LL || v76 )
    {
      if ( v38 )
        v60 = (8LL * (*(_DWORD *)(v41 + 36) & 0xFFE00000)) | (((*(_QWORD *)v41 >> 20) | *(_QWORD *)(v41 + 40) & 0xF80000000000000uLL) >> 20);
      else
        v60 = *(_QWORD *)v41 & 0xFFFFFFFFFFLL;
    }
    else
    {
LABEL_69:
      v60 = *(_QWORD *)(v41 + 40) & 0xFFFFFFFFFFLL;
    }
    if ( v60 == 0x3FFFFFFFFFLL )
    {
      StandbyLookaside = v94 + 40;
      if ( v38 )
        StandbyLookaside = v90 + 40;
    }
    else
    {
      StandbyLookaside = 48 * v60 - 0x220000000000LL;
    }
    for ( k = 0LL; k < 4; ++k )
    {
      if ( v44[8] && StandbyLookaside == *(_QWORD *)v44 )
        goto LABEL_77;
      v44 += 24;
    }
    if ( _interlockedbittestandset64((volatile signed __int32 *)(StandbyLookaside + 24), 0x3FuLL) )
    {
      StandbyLookaside = v83;
      if ( v47[24] )
      {
        _InterlockedAnd64(v40, 0x7FFFFFFFFFFFFFFFuLL);
        v47[24] = 0;
      }
      v18 = v79;
      goto LABEL_39;
    }
    v42[24 * v38 + 48] = 1;
LABEL_77:
    v23 = v76;
    v9 = v86;
    v92[v76] = v37;
    v62 = 3 * (v38 + 1);
    *(_QWORD *)&v42[8 * v62 + 8] = v60;
    *(_QWORD *)&v42[8 * v62 + 16] = StandbyLookaside;
    v85 = v38 + 2;
    if ( v76 || (unsigned int)MiIsDecayPfn(v86, v60, StandbyLookaside, v79) )
    {
      v21 = v77;
      goto LABEL_59;
    }
    v76 = 1;
    v23 = 1;
    v21 = 0;
    v18 = v79;
    v19 = 64;
    v77 = 0;
    LOBYTE(v37) = v80 - 1;
    v78 = 64;
    StandbyLookaside = MiGetStandbyLookaside(&v89, 2LL);
    v83 = StandbyLookaside;
    v36 = -1;
LABEL_40:
    v9 = v86;
    ++v36;
    v38 = v85;
    v8 = a5;
    v37 = ((_BYTE)v37 + 1) & 0x3F;
  }
  v42 = a6;
LABEL_58:
  v31 = v79;
LABEL_59:
  if ( v36 != 64 && (v36 != 1 || v31 == -1 || v23) )
  {
    v50 = v87;
    v51 = 0LL;
    v52 = DWORD2(v90);
    v53 = v89;
    v54 = v82;
    v55 = 1;
    *v42 = 1;
    v56 = 57216 * v52;
    while ( (unsigned int)v51 < 2 )
    {
      if ( v31 == -1 || v55 != 1 )
      {
        if ( v55 )
        {
          if ( v55 == 1 )
          {
            v64 = v87 + 11840 + v53;
          }
          else
          {
            v63 = *(_QWORD *)(v53 + 16);
            if ( a4 < 9 )
            {
              v74 = v63 + v56;
              v75 = 0;
              if ( a4 == 8 )
                v75 = BYTE8(v91);
              v64 = *(_QWORD *)(232LL * a4 + v74 + 15760) + ((v82 + 8LL * v75) << 9);
            }
            else
            {
              v64 = v56 + v63 + ((v54 + 8LL * v95 + 13) << 9);
            }
          }
        }
        else
        {
          v64 = v50 + v53 + 7744;
        }
        v65 = (unsigned int)v92[v51];
        v66 = *(_QWORD *)(v64 + 8 * v65);
        *(_QWORD *)(v64 + 8 * v65) = v9;
        if ( v66 != -1LL && (v66 < qword_140E35C40 || v66 >= qword_140E35C40 + 2048) )
        {
          MiPurgingPageFromLookaside(v55, v66);
          v31 = v79;
          v55 = v88;
        }
        if ( v9 != -1LL && !(unsigned int)MiIsDecayPfn(v9, v66, v64, v31) )
        {
          v64 = 0xFFFFDE0000000010uLL;
          v71 = 8LL;
          v72 = *(_QWORD *)(v84 - 0x21FFFFFFFFF0LL);
          if ( (v72 & 0x400) == 0 )
            v71 = 0x8000000LL;
          *(_QWORD *)(v84 - 0x21FFFFFFFFF0LL) = v72 | v71;
        }
        v54 = v82;
        _InterlockedIncrement64((volatile signed __int64 *)(a1 + 8 * (v82 + 8 * v51) + 15936));
        if ( v55 == 1 )
        {
          if ( (unsigned int)MiIsDecayPfn(v9, v82, v64, v31) )
            return;
          v54 = v82;
        }
        v50 = v87;
      }
      v51 = (unsigned int)(v51 + 1);
      v88 = ++v55;
    }
  }
  else
  {
    if ( v81 )
    {
      *v42 = 1;
      MiReleasePageListLock(v94, (__int64)v42, StandbyLookaside, v31);
      v42 = a6;
      *a6 = 0;
    }
    if ( v36 != 1 || v79 == -1LL || v23 )
    {
      v42[2] = 1;
      if ( v23 )
        v42[2] = 2;
      if ( v21 >= 0x20 )
        v42[1] = 1;
      ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v94 + 32));
    }
    else
    {
      v42[2] = 3;
      ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v94 + 32));
    }
  }
}
