/*
 * XREFs of MiSynchronizeFastPageInsert @ 0x140217140
 * Callers:
 *     MiInsertPageInList @ 0x14021AFB0 (MiInsertPageInList.c)
 *     MiInsertPagesInList @ 0x14024F050 (MiInsertPagesInList.c)
 * Callees:
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x140212BC0 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     MiWriteStandbyLookasideEntry @ 0x140215EE0 (MiWriteStandbyLookasideEntry.c)
 *     MiGetPfnSlabType @ 0x1402170E0 (MiGetPfnSlabType.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x140217CD0 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiGetStandbyLookaside @ 0x140218780 (MiGetStandbyLookaside.c)
 *     MiPageToChannel @ 0x14023EDC0 (MiPageToChannel.c)
 *     MiIsDecayPfn @ 0x140241130 (MiIsDecayPfn.c)
 *     MiReleasePageListLock @ 0x1402C6160 (MiReleasePageListLock.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x1402FD480 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14031F3B0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 */

void __fastcall MiSynchronizeFastPageInsert(__int64 a1, __int64 a2, unsigned __int64 a3, int a4, __int64 a5, _BYTE *a6)
{
  int v6; // r10d
  __int64 v8; // r11
  ULONG_PTR v9; // r12
  int v10; // eax
  unsigned int v11; // r14d
  unsigned int v12; // eax
  __int64 v13; // rdi
  __int64 v14; // rsi
  __int64 k; // rbx
  unsigned __int64 v16; // rax
  __int64 v17; // rcx
  unsigned __int64 v18; // r13
  unsigned int Number; // esi
  unsigned int v20; // edi
  __int64 v21; // rbx
  unsigned __int64 v22; // r8
  __int64 v23; // rax
  __int64 i; // rdx
  int v25; // ecx
  char *v26; // rax
  int v27; // r9d
  unsigned __int8 v28; // cl
  __int64 v29; // r8
  __int64 v30; // rbx
  __int64 v31; // rax
  unsigned int v32; // eax
  unsigned int v33; // r15d
  __int64 StandbyLookaside; // r10
  __int64 v35; // r9
  unsigned __int64 v36; // r8
  unsigned __int64 v37; // r12
  volatile signed __int64 *v38; // rbx
  __int64 v39; // rdi
  _BYTE *v40; // r11
  __int64 v41; // rcx
  _BYTE *v42; // r13
  _BYTE *v43; // rax
  __int64 v44; // rax
  _BYTE *v45; // r14
  volatile signed __int64 *v46; // rdx
  _DWORD *v47; // rcx
  signed __int32 v48; // eax
  __int64 v49; // rdx
  signed __int32 v50; // ett
  unsigned int v51; // r12d
  __int64 v52; // rdx
  __int64 j; // rax
  unsigned __int64 v54; // rdx
  unsigned int v55; // r14d
  __int64 v56; // rdi
  __int64 v57; // rcx
  __int64 v58; // rsi
  __int64 v59; // r15
  int v60; // eax
  __int64 v61; // rax
  bool v62; // zf
  __int64 v63; // rax
  unsigned int v64; // r10d
  int v65; // edx
  __int64 v66; // rcx
  __int64 v67; // r8
  __int64 v68; // rdx
  __int64 v69; // r8
  volatile LONG *v70; // rcx
  unsigned __int8 v71; // al
  __int64 v72; // r8
  char v73; // r9d^2
  unsigned __int8 v74; // dl
  __int64 v75; // rdx
  unsigned __int8 v76; // cl
  unsigned int v77; // [rsp+30h] [rbp-C8h]
  unsigned int v78; // [rsp+34h] [rbp-C4h]
  int v79; // [rsp+38h] [rbp-C0h]
  unsigned __int64 v80; // [rsp+40h] [rbp-B8h]
  int v81; // [rsp+48h] [rbp-B0h]
  int v82; // [rsp+50h] [rbp-A8h]
  char v83; // [rsp+58h] [rbp-A0h]
  __int64 v84; // [rsp+60h] [rbp-98h]
  ULONG_PTR v85; // [rsp+68h] [rbp-90h]
  __int64 v86; // [rsp+70h] [rbp-88h]
  __int64 v87; // [rsp+78h] [rbp-80h]
  __int64 v88; // [rsp+80h] [rbp-78h]
  __int128 v89; // [rsp+88h] [rbp-70h] BYREF
  __int128 v90; // [rsp+98h] [rbp-60h]
  __int128 v91; // [rsp+A8h] [rbp-50h]
  _DWORD v92[16]; // [rsp+B8h] [rbp-40h]
  int v95; // [rsp+110h] [rbp+18h]
  unsigned __int8 v96; // [rsp+110h] [rbp+18h]
  char v97; // [rsp+113h] [rbp+1Bh]

  v6 = a4;
  v89 = 0LL;
  v90 = 0LL;
  v91 = 0LL;
  v8 = a5;
  v9 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(a3 + 0x220000000000LL) >> 4);
  v85 = v9;
  if ( a5 )
  {
    v18 = 0xAAAAAAAAAAAAAAABuLL * ((a5 + 0x220000000000LL) >> 4);
    v82 = 1;
    v79 = 1;
    v11 = 5;
LABEL_14:
    Number = KeGetPcr()->Prcb.Number;
    v80 = v18;
    if ( (unsigned int)KeNumberProcessors_0 >= 0x40 )
    {
      Number &= 0x3Fu;
    }
    else if ( 0x40 / (unsigned int)KeNumberProcessors_0 > 1 )
    {
      Number *= 0x40 / (unsigned int)KeNumberProcessors_0;
    }
    v20 = 0;
    v83 = Number;
    v78 = 0;
    v81 = 0;
    v21 = 48 * v9;
    v77 = 0;
    v22 = 48 * v9 - 0x220000000000LL;
    v23 = (*(_QWORD *)(v22 + 40) >> 43) & 0x3FFLL;
    *((_QWORD *)&v89 + 1) = v22;
    *(_QWORD *)&v89 = *((_QWORD *)qword_140E2FD48 + v23);
    i = dword_140E2D880;
    v25 = dword_140E2D884;
    if ( dword_140E2D880 > (unsigned int)dword_140E2D884
      || (v26 = (char *)qword_140E2D8E0 + 16 * dword_140E2D880, v9 < *(_QWORD *)v26)
      || dword_140E2D880 != dword_140E2D884 && v9 >= *((_QWORD *)v26 + 2) )
    {
      for ( i = 0LL; ; i = (unsigned int)(v27 + 1) )
      {
        while ( 1 )
        {
          if ( v25 < (int)i )
            KeBugCheckEx(0x1Au, 0x5180uLL, v9, 0LL, 0LL);
          v27 = ((int)i + v25) >> 1;
          v26 = (char *)qword_140E2D8E0 + 16 * v27;
          if ( v9 >= *(_QWORD *)v26 )
            break;
          if ( !v27 )
            KeBugCheckEx(0x1Au, 0x5180uLL, v9, (ULONG_PTR)qword_140E2D8E0, 0LL);
          v25 = v27 - 1;
        }
        if ( v27 == dword_140E2D884 || v9 < *((_QWORD *)v26 + 2) )
          break;
      }
      dword_140E2D880 = ((int)i + v25) >> 1;
    }
    DWORD2(v90) = *((_DWORD *)v26 + 2);
    if ( !v8 )
    {
      v95 = *(_DWORD *)(v22 + 32);
      if ( (v95 & 0x8000000) == 0
        || v22 >= 0xFFFFDE0000000000uLL
        && v22 < 48 * qword_140E2D9A0 - 0x21FFFFFFFFD0LL
        && !(unsigned int)MiIsDecayPfn(0xAAAAAAAAAAAAAAABuLL * (v21 >> 4), i, v22)
        && ((v73 & 7) == 6 || (unsigned int)MiGetPfnSlabType(v72) != 9) )
      {
        v11 = HIBYTE(v95) & 7;
      }
    }
    HIDWORD(v90) = v11;
    if ( qword_140E2D8E8 )
    {
      v71 = MiPageToChannel(0xAAAAAAAAAAAAAAABuLL * (v21 >> 4), i);
      v8 = a5;
      v28 = v71;
      v6 = a4;
    }
    else
    {
      v28 = 0;
    }
    v96 = v28;
    v29 = *(_QWORD *)(v89 + 16) + 57216LL * DWORD2(v90);
    LOBYTE(v91) = v28;
    DWORD1(v91) = v6;
    if ( v6 < 9 )
    {
      if ( v6 == 8 )
        v74 = *(_BYTE *)(qword_140E3CF00 + 2 * ((0xAAAAAAAAAAAAAAABuLL * (v21 >> 4)) >> 9) + 1) & 0x7F;
      else
        v74 = 0;
      BYTE8(v91) = v74;
      v30 = v11;
      v31 = *(_QWORD *)(232LL * v6 + v29 + 15768) + 704LL * v74 + 88LL * v11;
    }
    else
    {
      v30 = v11;
      v31 = v29 + 88 * (v11 + 8LL * v28 + 59);
    }
    *(_QWORD *)&v90 = v31;
    v32 = v79;
    v33 = 0;
    StandbyLookaside = (v30 << 9) + v89 + 11840;
    v86 = v30;
    v35 = 0LL;
    v88 = v30 << 9;
    v84 = 0LL;
    v36 = 0x7FFFFFFFFFFFFFFFLL;
    v87 = StandbyLookaside;
    while ( 1 )
    {
      if ( v33 >= v32 )
      {
        v40 = a6;
        goto LABEL_119;
      }
      if ( v18 != -1LL && !v77 )
        break;
      v37 = *(_QWORD *)(StandbyLookaside + 8LL * Number);
      if ( v37 != -1LL )
      {
        v39 = 48 * v37 - 0x220000000000LL;
        goto LABEL_44;
      }
      v78 = ++v20;
LABEL_40:
      v32 = v79;
LABEL_41:
      v9 = v85;
      ++v33;
      v35 = v84;
      v8 = a5;
      Number = ((_BYTE)Number + 1) & 0x3F;
    }
    v37 = v18;
    v39 = v8;
LABEL_44:
    v40 = a6;
    v41 = 0LL;
    v42 = a6 + 16;
    v43 = a6 + 16;
    while ( v41 < 4 )
    {
      if ( v43[8] && v39 == *(_QWORD *)v43 )
      {
        v44 = 24 * v35;
        v38 = (volatile signed __int64 *)(v39 + 24);
        goto LABEL_50;
      }
      ++v41;
      v43 += 24;
    }
    v38 = (volatile signed __int64 *)(v39 + 24);
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v39 + 24), 0x3FuLL) )
    {
LABEL_39:
      v18 = v80;
      v20 = v78;
      goto LABEL_40;
    }
    v54 = v80;
    if ( v80 != -1LL )
    {
      v55 = v77;
      if ( !v77 && (*(_DWORD *)(v39 + 32) & 0x8000000) == 0 )
      {
        _InterlockedAnd64(v38, 0x7FFFFFFFFFFFFFFFuLL);
        v9 = v85;
        ++v33;
        v20 = v78;
        goto LABEL_70;
      }
    }
    v44 = 24 * v35;
    a6[24 * v35 + 24] = 1;
LABEL_50:
    v45 = &a6[v44];
    *((_QWORD *)v45 + 1) = v37;
    v46 = v38;
    *((_QWORD *)v45 + 2) = v39;
    if ( !v81 )
    {
      v47 = (_DWORD *)(a2 + 32);
      v81 = 1;
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
      {
        _m_prefetchw(v47);
        v48 = *v47 & 0x7FFFFFFF;
        while ( 1 )
        {
          v49 = (unsigned int)(v48 + 1);
          v50 = v48;
          v48 = _InterlockedCompareExchange(v47, v49, v48);
          if ( v50 == v48 )
            break;
          if ( v48 < 0 )
          {
            LOBYTE(v49) = -1;
            ExpWaitForSpinLockSharedAndAcquire(v47, v49);
            v35 = v84;
            StandbyLookaside = v87;
            v40 = a6;
            break;
          }
        }
        v46 = v38;
      }
      else
      {
        ExpAcquireSpinLockSharedAtDpcLevelInstrumented(v47, 0xFFu);
        v35 = v84;
        v46 = (volatile signed __int64 *)(v39 + 24);
        StandbyLookaside = v87;
        v40 = a6;
      }
    }
    if ( v80 == -1LL || (v46 = v38, v77) )
    {
      if ( *(_QWORD *)(StandbyLookaside + 8LL * Number) != v37 )
      {
        v36 = 0x7FFFFFFFFFFFFFFFLL;
        if ( v45[24] )
        {
          _InterlockedAnd64(v46, 0x7FFFFFFFFFFFFFFFuLL);
          v45[24] = 0;
        }
        --v33;
        LOBYTE(Number) = Number - 1;
        goto LABEL_39;
      }
      v51 = v77;
      if ( v80 == -1LL || v77 )
      {
        if ( v35 )
          v36 = (8LL * (*(_DWORD *)(v39 + 36) & 0xFFE00000)) | (((*(_QWORD *)v39 >> 20) | *(_QWORD *)(v39 + 40) & 0xF80000000000000uLL) >> 20);
        else
          v36 = *(_QWORD *)v39 & 0xFFFFFFFFFFLL;
        goto LABEL_59;
      }
    }
    else
    {
      v51 = 0;
    }
    v36 = *(_QWORD *)(v39 + 40) & 0xFFFFFFFFFFLL;
LABEL_59:
    if ( v36 == 0x3FFFFFFFFFLL )
    {
      v52 = a2 + 40;
      if ( v35 )
        v52 = v90 + 40;
    }
    else
    {
      v52 = 48 * v36 - 0x220000000000LL;
    }
    for ( j = 0LL; j < 4; ++j )
    {
      if ( v42[8] && v52 == *(_QWORD *)v42 )
        goto LABEL_80;
      v42 += 24;
    }
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v52 + 24), 0x3FuLL) )
    {
      v36 = 0x7FFFFFFFFFFFFFFFLL;
      if ( v45[24] )
      {
        _InterlockedAnd64(v38, 0x7FFFFFFFFFFFFFFFuLL);
        v45[24] = 0;
      }
      goto LABEL_39;
    }
    v40[24 * v35 + 48] = 1;
LABEL_80:
    v61 = 3 * (v35 + 1);
    *(_QWORD *)&v40[8 * v61 + 8] = v36;
    v62 = v51 == 0;
    *(_QWORD *)&v40[8 * v61 + 16] = v52;
    v63 = v51;
    v9 = v85;
    v84 = v35 + 2;
    v92[v63] = Number;
    if ( v62 && !(unsigned int)MiIsDecayPfn(v85, v52, v36) )
    {
      v77 = v64;
      v20 = 0;
      v18 = v80;
      StandbyLookaside = MiGetStandbyLookaside(&v89, 2LL);
      v87 = StandbyLookaside;
      v33 = -1;
      v32 = 64;
      v78 = 0;
      v79 = 64;
      LOBYTE(Number) = v83 - 1;
      v36 = 0x7FFFFFFFFFFFFFFFLL;
      goto LABEL_41;
    }
    v20 = v78;
LABEL_119:
    v54 = v80;
    v55 = v77;
LABEL_70:
    if ( v33 != 64 && (v33 != 1 || v54 == -1LL || v55) )
    {
      v56 = 0LL;
      v57 = v88;
      v58 = v89;
      v59 = 57216LL * DWORD2(v90);
      *v40 = 1;
      v60 = 1;
      while ( (unsigned int)v56 < 2 )
      {
        if ( v54 == -1LL || v60 != 1 )
        {
          v65 = v82;
          if ( v82 )
          {
            if ( v82 == 1 )
            {
              v67 = v88 + 11840 + v58;
            }
            else
            {
              v66 = *(_QWORD *)(v58 + 16);
              if ( a4 < 9 )
              {
                v75 = v66 + v59;
                v76 = 0;
                if ( a4 == 8 )
                  v76 = BYTE8(v91);
                v67 = *(_QWORD *)(232LL * a4 + v75 + 15760) + ((v86 + 8LL * v76) << 9);
                v65 = v82;
              }
              else
              {
                v67 = v59 + v66 + ((v86 + 8LL * v96 + 13) << 9);
              }
            }
          }
          else
          {
            v67 = v57 + v58 + 7744;
          }
          MiWriteStandbyLookasideEntry((ULONG_PTR *)(v67 + 8LL * (unsigned int)v92[v56]), v65, v9);
          _InterlockedIncrement64((volatile signed __int64 *)(a1 + 8 * (v86 + 8 * v56) + 15936));
          v60 = v82;
          if ( v82 == 1 )
          {
            if ( (unsigned int)MiIsDecayPfn(v9, v68, v69) )
              return;
            v60 = v82;
          }
          v57 = v88;
          v54 = v80;
        }
        v56 = (unsigned int)(v56 + 1);
        v82 = ++v60;
      }
    }
    else
    {
      if ( v81 )
      {
        *v40 = 1;
        MiReleasePageListLock(a2, v40, v36);
        v40 = a6;
        *a6 = 0;
      }
      if ( v33 != 1 || v80 == -1LL || v55 )
      {
        v40[2] = 1;
        if ( v55 )
          v40[2] = 2;
        if ( v20 >= 0x20 )
          v40[1] = 1;
        ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(a2 + 32));
      }
      else
      {
        v40[2] = 3;
        ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(a2 + 32));
      }
    }
    return;
  }
  v10 = *(_DWORD *)(a3 + 32);
  v11 = 5;
  v97 = HIBYTE(v10);
  if ( (v10 & 0x8000000) != 0
    && (a3 < 0xFFFFDE0000000000uLL
     || a3 >= 48 * qword_140E2D9A0 - 0x21FFFFFFFFD0LL
     || v9 >= qword_140E358C0 && v9 < qword_140E358C0 + 2048
     || (BYTE2(v10) & 7) != 6 && (unsigned int)MiGetPfnSlabType(a3) == 9) )
  {
    v12 = 5;
  }
  else
  {
    v12 = v97 & 7;
  }
  v13 = v12;
  v14 = 88LL * v12 + 3296;
  for ( k = 0LL; (unsigned int)k < 2; k = (unsigned int)(k + 1) )
  {
    v16 = *(_QWORD *)(a1 + 8 * (v13 + 8 * k) + 15936);
    if ( v16 >= 0x1000 )
    {
      v70 = (volatile LONG *)(v14 + a1);
      if ( v16 >= 0x2000 )
      {
        ExAcquireSpinLockExclusiveAtDpcLevel(v70);
        goto LABEL_9;
      }
      if ( (unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel(v70) )
        goto LABEL_9;
    }
  }
  if ( (_DWORD)k == 2 )
  {
    v8 = 0LL;
    v18 = -1LL;
    v6 = a4;
    v79 = 64;
    v82 = 1;
    goto LABEL_14;
  }
LABEL_9:
  v17 = v13 + 8 * k;
  if ( *(_QWORD *)(a1 + 8 * v17 + 15936) >= 0x1000uLL )
  {
    *(_QWORD *)(a1 + 8 * v17 + 15936) = 0LL;
    a6[2] = 1;
    if ( (_DWORD)k )
      a6[2] = 2;
    a6[1] = 1;
  }
}
