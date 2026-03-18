/*
 * XREFs of MiSynchronizeFastPageInsert @ 0x14022D9F0
 * Callers:
 *     MiInsertPageInList @ 0x14022CB10 (MiInsertPageInList.c)
 *     MiInsertPagesInList @ 0x140271500 (MiInsertPagesInList.c)
 * Callees:
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140210170 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiReleasePageListLock @ 0x1402262E0 (MiReleasePageListLock.c)
 *     MiGetPfnSlabType @ 0x14022D610 (MiGetPfnSlabType.c)
 *     MiGetStandbyLookaside @ 0x14022E630 (MiGetStandbyLookaside.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x14022E850 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiIsDecayPfn @ 0x14022EFD0 (MiIsDecayPfn.c)
 *     MiPurgingPageFromLookaside @ 0x14026DE70 (MiPurgingPageFromLookaside.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x1402C4AD0 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x1402DFAA0 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     MiPageToChannel @ 0x1402F3214 (MiPageToChannel.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 */

void __fastcall MiSynchronizeFastPageInsert(__int64 a1, __int64 a2, unsigned __int64 a3, int a4, __int64 a5, _BYTE *a6)
{
  __int64 v7; // r11
  ULONG_PTR v8; // r12
  int v9; // eax
  unsigned int v10; // r14d
  unsigned int v11; // eax
  __int64 v12; // rdi
  __int64 v13; // rsi
  __int64 i; // rbx
  unsigned __int64 v15; // rax
  __int64 v16; // rcx
  unsigned __int64 v17; // rsi
  unsigned int v18; // edi
  unsigned int Number; // r10d
  unsigned int v20; // ebx
  __int64 v21; // r8
  int v22; // r13d
  unsigned __int64 v23; // r9
  int v24; // ecx
  char *v25; // rax
  int j; // edx
  int v27; // r8d
  unsigned __int8 v28; // cl
  __int64 v29; // r8
  __int64 v30; // rdx
  __int64 v31; // rax
  __int64 StandbyLookaside; // r8
  unsigned int v33; // r15d
  unsigned int v34; // r14d
  __int64 v35; // r10
  unsigned __int64 v36; // r12
  volatile signed __int64 *v37; // rbx
  __int64 v38; // rdi
  _BYTE *v39; // r11
  __int64 v40; // rcx
  _BYTE *v41; // r13
  _BYTE *v42; // rax
  __int64 v43; // rax
  _BYTE *v44; // rsi
  volatile signed __int64 *v45; // rdx
  _DWORD *v46; // rcx
  unsigned __int64 v47; // r9
  __int64 v48; // rcx
  __int64 v49; // rbx
  __int64 v50; // rax
  __int64 v51; // rdi
  __int64 v52; // rdx
  unsigned int v53; // r10d
  __int64 v54; // r15
  signed __int32 v55; // eax
  __int64 v56; // rdx
  signed __int32 v57; // ett
  unsigned __int64 v58; // rdx
  __int64 v59; // r8
  __int64 k; // rax
  __int64 v61; // rax
  __int64 v62; // rcx
  __int64 v63; // r8
  __int64 v64; // rax
  ULONG_PTR v65; // rdx
  char v66; // r8d^2
  __int64 v67; // r9
  volatile LONG *v68; // rcx
  unsigned __int8 v69; // al
  __int64 v70; // rcx
  __int64 v71; // rax
  unsigned __int8 v72; // dl
  __int64 v73; // rdx
  unsigned __int8 v74; // cl
  int v75; // [rsp+30h] [rbp-C8h]
  unsigned int v76; // [rsp+34h] [rbp-C4h]
  int v77; // [rsp+38h] [rbp-C0h]
  unsigned __int64 v78; // [rsp+40h] [rbp-B8h]
  unsigned int v79; // [rsp+48h] [rbp-B0h]
  int v80; // [rsp+4Ch] [rbp-ACh]
  __int64 v81; // [rsp+50h] [rbp-A8h]
  __int64 v82; // [rsp+58h] [rbp-A0h]
  __int64 v83; // [rsp+60h] [rbp-98h]
  __int64 v84; // [rsp+68h] [rbp-90h]
  ULONG_PTR v85; // [rsp+70h] [rbp-88h]
  __int64 v86; // [rsp+78h] [rbp-80h]
  int v87; // [rsp+80h] [rbp-78h]
  __int128 v88; // [rsp+88h] [rbp-70h] BYREF
  __int128 v89; // [rsp+98h] [rbp-60h]
  __int128 v90; // [rsp+A8h] [rbp-50h]
  _DWORD v91[16]; // [rsp+B8h] [rbp-40h]
  int v94; // [rsp+110h] [rbp+18h]
  unsigned __int8 v95; // [rsp+110h] [rbp+18h]
  char v96; // [rsp+113h] [rbp+1Bh]

  v88 = 0LL;
  v89 = 0LL;
  v90 = 0LL;
  v7 = a5;
  v8 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(a3 + 0x220000000000LL) >> 4);
  v85 = v8;
  if ( a5 )
  {
    v17 = 0xAAAAAAAAAAAAAAABuLL * ((a5 + 0x220000000000LL) >> 4);
    v87 = 1;
    v18 = 1;
    v10 = 5;
  }
  else
  {
    v9 = *(_DWORD *)(a3 + 32);
    v10 = 5;
    v96 = HIBYTE(v9);
    if ( (v9 & 0x8000000) != 0
      && (a3 < 0xFFFFDE0000000000uLL
       || a3 >= 48 * qword_140E2DBE0 - 0x21FFFFFFFFD0LL
       || v8 >= qword_140E35B00 && v8 < qword_140E35B00 + 2048
       || (BYTE2(v9) & 7) != 6 && (unsigned int)MiGetPfnSlabType(a3) == 9) )
    {
      v11 = 5;
    }
    else
    {
      v11 = v96 & 7;
    }
    v12 = v11;
    v13 = 88LL * v11 + 3296;
    for ( i = 0LL; (unsigned int)i < 2; i = (unsigned int)(i + 1) )
    {
      v15 = *(_QWORD *)(a1 + 8 * (v12 + 8 * i) + 15936);
      if ( v15 >= 0x1000 )
      {
        v68 = (volatile LONG *)(v13 + a1);
        if ( v15 >= 0x2000 )
        {
          ExAcquireSpinLockExclusiveAtDpcLevel(v68);
LABEL_9:
          v16 = v12 + 8 * i;
          if ( *(_QWORD *)(a1 + 8 * v16 + 15936) >= 0x1000uLL )
          {
            *(_QWORD *)(a1 + 8 * v16 + 15936) = 0LL;
            a6[2] = 1;
            if ( (_DWORD)i )
              a6[2] = 2;
            a6[1] = 1;
          }
          return;
        }
        if ( (unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel(v68) )
          goto LABEL_9;
      }
    }
    if ( (_DWORD)i != 2 )
      goto LABEL_9;
    v7 = 0LL;
    v17 = -1LL;
    v87 = 1;
    v18 = 64;
  }
  Number = KeGetPcr()->Prcb.Number;
  v77 = v18;
  v78 = v17;
  if ( (unsigned int)KeNumberProcessors_0 >= 0x40 )
  {
    Number &= 0x3Fu;
  }
  else if ( 0x40 / (unsigned int)KeNumberProcessors_0 > 1 )
  {
    Number *= 0x40 / (unsigned int)KeNumberProcessors_0;
  }
  v20 = 0;
  v79 = Number;
  v76 = 0;
  v21 = 48 * v8;
  v22 = 0;
  v83 = 48 * v8;
  v75 = 0;
  v80 = 0;
  v23 = 48 * v8 - 0x220000000000LL;
  *((_QWORD *)&v88 + 1) = v23;
  *(_QWORD *)&v88 = *((_QWORD *)qword_140E2FF88 + ((*(_QWORD *)(48 * v8 - 0x21FFFFFFFFD8LL) >> 43) & 0x3FFLL));
  v24 = dword_140E2DAC4;
  if ( dword_140E2DAC0 > (unsigned int)dword_140E2DAC4
    || (v25 = (char *)qword_140E2DB20 + 16 * dword_140E2DAC0, v8 < *(_QWORD *)v25)
    || dword_140E2DAC0 != dword_140E2DAC4 && v8 >= *((_QWORD *)v25 + 2) )
  {
    for ( j = 0; ; j = v27 + 1 )
    {
      while ( 1 )
      {
        if ( v24 < j )
          KeBugCheckEx(0x1Au, 0x5180uLL, v8, 0LL, 0LL);
        v27 = (j + v24) >> 1;
        v25 = (char *)qword_140E2DB20 + 16 * v27;
        if ( v8 >= *(_QWORD *)v25 )
          break;
        if ( !v27 )
          KeBugCheckEx(0x1Au, 0x5180uLL, v8, (ULONG_PTR)qword_140E2DB20, 0LL);
        v24 = v27 - 1;
      }
      if ( v27 == dword_140E2DAC4 || v8 < *((_QWORD *)v25 + 2) )
        break;
    }
    dword_140E2DAC0 = (j + v24) >> 1;
    v21 = 48 * v8;
  }
  DWORD2(v89) = *((_DWORD *)v25 + 2);
  if ( !v7 )
  {
    v94 = *(_DWORD *)(v21 - 0x21FFFFFFFFE0LL);
    if ( (*(_DWORD *)(v83 - 0x21FFFFFFFFE0LL) & 0x8000000) == 0
      || v23 >= 0xFFFFDE0000000000uLL
      && v23 < 48 * qword_140E2DBE0 - 0x21FFFFFFFFD0LL
      && !(unsigned int)MiIsDecayPfn(0xAAAAAAAAAAAAAAABuLL * (v83 >> 4))
      && ((v66 & 7) == 6 || (unsigned int)MiGetPfnSlabType(v67) != 9) )
    {
      v10 = HIBYTE(v94) & 7;
    }
  }
  HIDWORD(v89) = v10;
  if ( qword_140E2DB28 )
  {
    v69 = MiPageToChannel(0xAAAAAAAAAAAAAAABuLL * (v83 >> 4));
    v7 = a5;
    v28 = v69;
    Number = v79;
  }
  else
  {
    v28 = 0;
  }
  v95 = v28;
  v29 = *(_QWORD *)(v88 + 16) + 57216LL * DWORD2(v89);
  LOBYTE(v90) = v28;
  DWORD1(v90) = a4;
  if ( a4 < 9 )
  {
    if ( a4 == 8 )
      v72 = *(_BYTE *)(qword_140E3D140 + 2 * ((0xAAAAAAAAAAAAAAABuLL * (v83 >> 4)) >> 9) + 1) & 0x7F;
    else
      v72 = 0;
    BYTE8(v90) = v72;
    v81 = v10;
    v31 = *(_QWORD *)(232LL * a4 + v29 + 15768) + 704LL * v72 + 88LL * v10;
    v30 = v10;
  }
  else
  {
    v30 = v10;
    v81 = v10;
    v31 = v29 + 88 * (v10 + 8LL * v28 + 59);
  }
  *(_QWORD *)&v89 = v31;
  StandbyLookaside = (v30 << 9) + v88 + 11840;
  v86 = v30 << 9;
  v33 = 0;
  v82 = StandbyLookaside;
  v34 = Number;
  v35 = 0LL;
  v84 = 0LL;
  while ( v33 < v18 )
  {
    if ( v17 == -1LL || v22 )
    {
      v36 = *(_QWORD *)(StandbyLookaside + 8LL * v34);
      if ( v36 == -1LL )
      {
        v76 = ++v20;
        goto LABEL_40;
      }
      v38 = 48 * v36 - 0x220000000000LL;
    }
    else
    {
      v36 = v17;
      v38 = v7;
    }
    v39 = a6;
    v40 = 0LL;
    v41 = a6 + 16;
    v42 = a6 + 16;
    while ( v40 < 4 )
    {
      if ( v42[8] && v38 == *(_QWORD *)v42 )
      {
        v43 = 24 * v35;
        v37 = (volatile signed __int64 *)(v38 + 24);
        goto LABEL_49;
      }
      ++v40;
      v42 += 24;
    }
    v37 = (volatile signed __int64 *)(v38 + 24);
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v38 + 24), 0x3FuLL) )
      goto LABEL_39;
    if ( v17 != -1LL && !v75 && (*(_DWORD *)(v38 + 32) & 0x8000000) == 0 )
    {
      _InterlockedAnd64(v37, 0x7FFFFFFFFFFFFFFFuLL);
      v8 = v85;
      ++v33;
      v20 = v76;
      v22 = 0;
      goto LABEL_58;
    }
    v43 = 24 * v35;
    a6[24 * v35 + 24] = 1;
LABEL_49:
    v44 = &a6[v43];
    *((_QWORD *)v44 + 1) = v36;
    v45 = v37;
    *((_QWORD *)v44 + 2) = v38;
    if ( !v80 )
    {
      v46 = (_DWORD *)(a2 + 32);
      v80 = 1;
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
      {
        _m_prefetchw(v46);
        v55 = *v46 & 0x7FFFFFFF;
        while ( 1 )
        {
          v56 = (unsigned int)(v55 + 1);
          v57 = v55;
          v55 = _InterlockedCompareExchange(v46, v56, v55);
          if ( v57 == v55 )
            break;
          if ( v55 < 0 )
          {
            LOBYTE(v56) = -1;
            ExpWaitForSpinLockSharedAndAcquire(v46, v56);
            v35 = v84;
            StandbyLookaside = v82;
            v39 = a6;
            break;
          }
        }
        v45 = v37;
      }
      else
      {
        LOBYTE(v45) = -1;
        ExpAcquireSpinLockSharedAtDpcLevelInstrumented(v46, v45);
        v35 = v84;
        v45 = (volatile signed __int64 *)(v38 + 24);
        StandbyLookaside = v82;
        v39 = a6;
      }
    }
    v47 = v78;
    if ( v78 != -1LL )
    {
      v45 = v37;
      if ( !v75 )
        goto LABEL_69;
    }
    if ( *(_QWORD *)(StandbyLookaside + 8LL * v34) != v36 )
    {
      if ( v44[24] )
      {
        _InterlockedAnd64(v45, 0x7FFFFFFFFFFFFFFFuLL);
        v44[24] = 0;
      }
      --v33;
      LOBYTE(v34) = v34 - 1;
      v17 = v78;
LABEL_39:
      v22 = v75;
      v18 = v77;
      v20 = v76;
      goto LABEL_40;
    }
    if ( v78 == -1LL || v75 )
    {
      if ( v35 )
        v58 = (8LL * (*(_DWORD *)(v38 + 36) & 0xFFE00000)) | (((*(_QWORD *)v38 >> 20) | *(_QWORD *)(v38 + 40) & 0xF80000000000000uLL) >> 20);
      else
        v58 = *(_QWORD *)v38 & 0xFFFFFFFFFFLL;
    }
    else
    {
LABEL_69:
      v58 = *(_QWORD *)(v38 + 40) & 0xFFFFFFFFFFLL;
    }
    if ( v58 == 0x3FFFFFFFFFLL )
    {
      v59 = a2 + 40;
      if ( v35 )
        v59 = v89 + 40;
    }
    else
    {
      v59 = 48 * v58 - 0x220000000000LL;
    }
    for ( k = 0LL; k < 4; ++k )
    {
      if ( v41[8] && v59 == *(_QWORD *)v41 )
        goto LABEL_77;
      v41 += 24;
    }
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v59 + 24), 0x3FuLL) )
    {
      StandbyLookaside = v82;
      if ( v44[24] )
      {
        _InterlockedAnd64(v37, 0x7FFFFFFFFFFFFFFFuLL);
        v44[24] = 0;
      }
      v17 = v78;
      goto LABEL_39;
    }
    v39[24 * v35 + 48] = 1;
LABEL_77:
    v22 = v75;
    v8 = v85;
    v91[v75] = v34;
    v61 = 3 * (v35 + 1);
    *(_QWORD *)&v39[8 * v61 + 8] = v58;
    *(_QWORD *)&v39[8 * v61 + 16] = v59;
    v84 = v35 + 2;
    if ( v75 || (unsigned int)MiIsDecayPfn(v85) )
    {
      v20 = v76;
      goto LABEL_59;
    }
    v75 = 1;
    v22 = 1;
    v20 = 0;
    v17 = v78;
    v18 = 64;
    v76 = 0;
    LOBYTE(v34) = v79 - 1;
    v77 = 64;
    StandbyLookaside = MiGetStandbyLookaside(&v88, 2LL);
    v82 = StandbyLookaside;
    v33 = -1;
LABEL_40:
    v8 = v85;
    ++v33;
    v35 = v84;
    v7 = a5;
    v34 = ((_BYTE)v34 + 1) & 0x3F;
  }
  v39 = a6;
LABEL_58:
  v47 = v78;
LABEL_59:
  if ( v33 != 64 && (v33 != 1 || v47 == -1LL || v22) )
  {
    v48 = v86;
    v49 = 0LL;
    v50 = DWORD2(v89);
    v51 = v88;
    v52 = v81;
    v53 = 1;
    *v39 = 1;
    v54 = 57216 * v50;
    while ( (unsigned int)v49 < 2 )
    {
      if ( v47 == -1LL || v53 != 1 )
      {
        if ( v53 )
        {
          if ( v53 == 1 )
          {
            v63 = v86 + 11840 + v51;
          }
          else
          {
            v62 = *(_QWORD *)(v51 + 16);
            if ( a4 < 9 )
            {
              v73 = v62 + v54;
              v74 = 0;
              if ( a4 == 8 )
                v74 = BYTE8(v90);
              v63 = *(_QWORD *)(232LL * a4 + v73 + 15760) + ((v81 + 8LL * v74) << 9);
            }
            else
            {
              v63 = v54 + v62 + ((v52 + 8LL * v95 + 13) << 9);
            }
          }
        }
        else
        {
          v63 = v48 + v51 + 7744;
        }
        v64 = (unsigned int)v91[v49];
        v65 = *(_QWORD *)(v63 + 8 * v64);
        *(_QWORD *)(v63 + 8 * v64) = v8;
        if ( v65 != -1LL && (v65 < qword_140E35B00 || v65 >= qword_140E35B00 + 2048) )
        {
          MiPurgingPageFromLookaside(v53);
          v47 = v78;
          v53 = v87;
        }
        if ( v8 != -1LL && !(unsigned int)MiIsDecayPfn(v8) )
        {
          v70 = 8LL;
          v71 = *(_QWORD *)(v83 - 0x21FFFFFFFFF0LL);
          if ( (v71 & 0x400) == 0 )
            v70 = 0x8000000LL;
          *(_QWORD *)(v83 - 0x21FFFFFFFFF0LL) = v71 | v70;
        }
        v52 = v81;
        _InterlockedIncrement64((volatile signed __int64 *)(a1 + 8 * (v81 + 8 * v49) + 15936));
        if ( v53 == 1 )
        {
          if ( (unsigned int)MiIsDecayPfn(v8) )
            return;
          v52 = v81;
        }
        v48 = v86;
      }
      v49 = (unsigned int)(v49 + 1);
      v87 = ++v53;
    }
  }
  else
  {
    if ( v80 )
    {
      *v39 = 1;
      MiReleasePageListLock(a2, (__int64)v39);
      v39 = a6;
      *a6 = 0;
    }
    if ( v33 != 1 || v78 == -1LL || v22 )
    {
      v39[2] = 1;
      if ( v22 )
        v39[2] = 2;
      if ( v20 >= 0x20 )
        v39[1] = 1;
      ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(a2 + 32));
    }
    else
    {
      v39[2] = 3;
      ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(a2 + 32));
    }
  }
}
