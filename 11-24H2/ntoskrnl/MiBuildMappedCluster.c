/*
 * XREFs of MiBuildMappedCluster @ 0x1402EC958
 * Callers:
 *     MiGatherMappedPages @ 0x1402EB8C0 (MiGatherMappedPages.c)
 * Callees:
 *     MiMapPageInHyperSpaceWorker @ 0x14024BEF0 (MiMapPageInHyperSpaceWorker.c)
 *     MiAllocatePool @ 0x140277450 (MiAllocatePool.c)
 *     MiLockPageInline @ 0x1402A1150 (MiLockPageInline.c)
 *     MiUnlockPage @ 0x1402A11F0 (MiUnlockPage.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiReferencePageForModifiedWrite @ 0x1402EC7E8 (MiReferencePageForModifiedWrite.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x1402EEA94 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiWriteCompletePfn @ 0x1402FA874 (MiWriteCompletePfn.c)
 *     MiReleaseWriteInProgressCharges @ 0x14042CD34 (MiReleaseWriteInProgressCharges.c)
 */

__int64 __fastcall MiBuildMappedCluster(_QWORD *a1, __int64 a2, int a3)
{
  __int64 v4; // r15
  unsigned __int64 v5; // r13
  unsigned __int64 v6; // rdi
  __int64 v7; // rbx
  __int64 v8; // r14
  __int64 v9; // rbx
  unsigned __int64 v10; // rsi
  __int64 v11; // r9
  unsigned __int64 v12; // r8
  unsigned __int64 v13; // r10
  unsigned __int64 v14; // rsi
  unsigned __int64 v15; // r8
  __int64 v16; // rcx
  __int64 v17; // r14
  unsigned __int64 v18; // r12
  __int64 v19; // rdx
  unsigned __int64 v20; // rbp
  int v21; // ecx
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rbx
  unsigned __int64 v24; // rax
  ULONG_PTR v25; // rsi
  unsigned int v26; // ebp
  unsigned __int64 v27; // r14
  __int64 v28; // r14
  unsigned __int64 v29; // r14
  __int64 result; // rax
  unsigned __int64 v31; // rax
  int v32; // ecx
  int v33; // eax
  __int64 Pool; // rax
  __int64 v35; // rbx
  unsigned __int64 *v36; // r14
  __int64 v37; // rdx
  __int64 v38; // r8
  __int64 v39; // r9
  unsigned __int64 v40; // r12
  unsigned __int64 *v41; // rbp
  unsigned __int64 v42; // rbx
  unsigned __int64 v43; // rcx
  ULONG_PTR v44; // rsi
  unsigned int v45; // r15d
  int v46; // r15d
  unsigned __int64 v47; // rax
  unsigned __int64 v48; // rbx
  unsigned __int64 v49; // r14
  __int64 v50; // rbp
  unsigned __int64 *v51; // r15
  unsigned __int64 v52; // rcx
  __int64 v53; // rbp
  char v54; // al
  __int64 v55; // rsi
  unsigned __int8 v56; // bl
  unsigned __int64 v57; // rbx
  __int64 v58; // rsi
  unsigned __int8 v59; // bl
  unsigned __int64 v60; // [rsp+20h] [rbp-A8h]
  unsigned __int64 v61; // [rsp+28h] [rbp-A0h]
  unsigned __int64 *v62; // [rsp+28h] [rbp-A0h]
  unsigned __int64 v63; // [rsp+30h] [rbp-98h]
  __int64 v64; // [rsp+30h] [rbp-98h]
  unsigned __int64 *v65; // [rsp+38h] [rbp-90h]
  unsigned __int64 v66; // [rsp+40h] [rbp-88h]
  unsigned __int64 v67; // [rsp+48h] [rbp-80h]
  unsigned __int64 *v68; // [rsp+50h] [rbp-78h]
  __int64 v69; // [rsp+58h] [rbp-70h]
  __int64 v70; // [rsp+60h] [rbp-68h]
  unsigned __int64 v71; // [rsp+68h] [rbp-60h]
  unsigned __int64 v72; // [rsp+68h] [rbp-60h]
  unsigned __int64 v73; // [rsp+78h] [rbp-50h]
  int v76; // [rsp+D8h] [rbp+10h]
  unsigned __int8 v77; // [rsp+E0h] [rbp+18h] BYREF
  __int64 v78; // [rsp+E8h] [rbp+20h]

  v4 = a2;
  v77 = 0;
  v71 = a2 + 48;
  v65 = (unsigned __int64 *)(a2 + 48);
  v5 = a1[1] | 0x8000000000000000uLL;
  v73 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(a1 + 0x44000000000LL) >> 4);
  v6 = a1[1] & 0x7FFFFFFFFFFFF000LL | 0x8000000000000000uLL;
  v7 = a1[2];
  v63 = v5;
  v8 = *((_QWORD *)qword_140E300C8 + ((a1[5] >> 43) & 0x3FFLL));
  v69 = v8;
  if ( qword_140E2DCC0 && (v7 & 0x10) == 0 )
    v7 &= ~qword_140E2DCC0;
  v9 = v7 >> 16;
  if ( v6 < *(_QWORD *)(v9 + 8) )
    v6 = *(_QWORD *)(v9 + 8);
  v10 = v6;
  if ( v6 < v5 - 120 )
    v10 = v5 - 120;
  v70 = a1[5] & 0xFFFFFFFFFFLL;
  v61 = MiMapPageInHyperSpaceWorker(v70, &v77, 0x80000000);
  v60 = v5;
  v12 = v61 + (v5 & 0xFFF);
  v13 = v61;
  if ( a3 )
  {
    v11 = v5;
    if ( v5 > v6 )
    {
      do
      {
        v12 -= 8LL;
        if ( (*(_QWORD *)v12 & 0xC01LL) != 0x800 )
          break;
        v52 = (*(_QWORD *)v12 >> 12) & ((unsigned __int64)~qword_140E2DCC0 >> 12) & 0xFFFFFFFFFFLL;
        if ( v52 > qword_140E2DD20
          || ((*(_QWORD *)(48 * v52 - 0x21FFFFFFFFD8LL) >> 54) & 1) == 0
          || (*(_BYTE *)(48 * v52 - 0x220000000000LL + 34) & 0x10) == 0
          || (unsigned __int16)*(_DWORD *)(48 * v52 - 0x220000000000LL + 32)
          || v8 != *((_QWORD *)qword_140E300C8 + ((*(_QWORD *)(48 * v52 - 0x220000000000LL + 40) >> 43) & 0x3FFLL)) )
        {
          break;
        }
        v5 -= 8LL;
        if ( v5 >= v10 )
          v11 = v5;
      }
      while ( v5 > v6 );
      v4 = a2;
      v13 = v61;
      v60 = v11;
    }
    v14 = v11;
  }
  else
  {
    v14 = v5;
  }
  v15 = v12 & 0xFFFFFFFFFFFFF000uLL;
  v16 = *(unsigned int *)(v9 + 44);
  v17 = v15 + (v14 & 0xFFF);
  v18 = (v14 & 0xFFFFFFFFFFFFF000uLL) + 4096;
  if ( v18 > *(_QWORD *)(v9 + 8) + 8 * v16 )
    v18 = *(_QWORD *)(v9 + 8) + 8 * v16;
  v19 = v18;
  if ( v18 > v14 + 128 )
    v19 = v14 + 128;
  v67 = v19;
  if ( !a3 )
  {
    v19 = v14 + 8;
    v67 = v14 + 8;
    v18 = v14 + 8;
  }
  v66 = v14;
  v20 = v14;
  v21 = 1;
  LODWORD(v78) = 1;
  if ( v14 < v18 )
  {
    v22 = v63;
    do
    {
      if ( v20 == v22 )
      {
        v19 = v73;
        *v65++ = v73;
        goto LABEL_34;
      }
      if ( v21 == 3 )
      {
        v48 = (unsigned __int64)v65;
        if ( (__int64)(((unsigned __int64)v65 - v4 - 48) & 0xFFFFFFFFFFFFFFF8uLL) >= 128 )
          goto LABEL_90;
      }
      v23 = *(_QWORD *)v17;
      if ( (*(_QWORD *)v17 & 0xC01LL) != 0x800 )
        goto LABEL_89;
      v24 = (v23 >> 12) & ((unsigned __int64)~qword_140E2DCC0 >> 12) & 0xFFFFFFFFFFLL;
      if ( v24 <= qword_140E2DD20 && ((*(_QWORD *)(48 * v24 - 0x21FFFFFFFFD8LL) >> 54) & 1) != 0 )
      {
        v25 = 48 * v24 - 0x220000000000LL;
        v26 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v25 + 24), 0x3FuLL) )
        {
          do
          {
            if ( (++v26 & HvlLongSpinCountMask) == 0
              && (HvlEnlightenments & 0x40) != 0
              && KiCheckVpBackingLongSpinWaitHypercall() )
            {
              HvlNotifyLongSpinWait(v26);
            }
            else
            {
              _mm_pause();
            }
          }
          while ( *(__int64 *)(v25 + 24) < 0 );
        }
        if ( v23 == *(_QWORD *)v17 )
        {
          if ( (*(_BYTE *)(v25 + 34) & 0x10) == 0
            || (unsigned __int16)*(_DWORD *)(v25 + 32)
            || (v19 = v69, v69 != *((_QWORD *)qword_140E300C8 + ((*(_QWORD *)(v25 + 40) >> 43) & 0x3FFLL))) )
          {
            _InterlockedAnd64((volatile signed __int64 *)(v25 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            v20 = v66;
            v14 = v60;
            v13 = v61;
LABEL_89:
            v48 = (unsigned __int64)v65;
LABEL_90:
            if ( v13 )
            {
              LOBYTE(v19) = v77;
              MiUnmapPageInHyperSpaceWorker(v13, v19, 0x80000000LL);
            }
            v49 = v63;
            if ( v20 >= v63 )
              goto LABEL_37;
            v50 = (__int64)(v48 - v4 - 48) >> 3;
            if ( v50 )
            {
              if ( v48 > v4 + 48 )
              {
                v51 = v65;
                do
                {
                  v55 = 48 * *--v51 - 0x220000000000LL;
                  v56 = MiLockPageInline(v55, v19, v15, v11);
                  MiWriteCompletePfn(v55, 129LL, 0LL);
                  MiUnlockPage(v55, v56);
                }
                while ( (unsigned __int64)v51 > v71 );
                v49 = v63;
                v65 = v51;
                v4 = a2;
              }
              MiReleaseWriteInProgressCharges(v69, v50, 1LL);
            }
            v57 = v67;
            if ( v67 == v60 + 8 )
            {
              v18 = v49 + 8;
              v67 = v49 + 8;
            }
            else
            {
              if ( v18 > v49 + 128 )
                v57 = v49 + 128;
              v67 = v57;
            }
            v60 = v49;
            v14 = v49;
            v13 = MiMapPageInHyperSpaceWorker(v70, &v77, 0x80000000);
            v61 = v13;
            v17 = (v49 & 0xFFF) + v13 - 8;
            v22 = v63;
            v20 = v63 - 8;
            goto LABEL_33;
          }
          v20 = v66;
          v13 = v61;
          if ( v66 < v67 )
          {
            if ( v61 )
            {
              LOBYTE(v19) = 2;
              MiUnmapPageInHyperSpaceWorker(v61, v19, 0x80000000LL);
              LODWORD(v78) = MiReferencePageForModifiedWrite(v25, 0);
              v31 = MiMapPageInHyperSpaceWorker(v70, 0LL, 0x80000000);
              v32 = v78;
              v17 = v31 + (v17 & 0xFFF);
              v61 = v31;
              v13 = v31;
            }
            else
            {
              v33 = MiReferencePageForModifiedWrite(v25, 0);
              v13 = 0LL;
              v32 = v33;
              LODWORD(v78) = v33;
            }
            if ( !v32 )
            {
              _InterlockedAnd64((volatile signed __int64 *)(v25 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              v14 = v60;
              goto LABEL_89;
            }
            *v65++ = (v23 >> 12) & ((unsigned __int64)~qword_140E2DCC0 >> 12) & 0xFFFFFFFFFFLL;
          }
          _InterlockedAnd64((volatile signed __int64 *)(v25 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        }
        else
        {
          _InterlockedAnd64((volatile signed __int64 *)(v25 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          v17 -= 8LL;
          v13 = v61;
          v20 = v66 - 8;
        }
        v14 = v60;
      }
      else
      {
        v17 -= 8LL;
        v20 -= 8LL;
      }
      v22 = v63;
LABEL_33:
      v21 = v78;
LABEL_34:
      v20 += 8LL;
      v17 += 8LL;
      v66 = v20;
    }
    while ( v20 < v18 );
  }
  if ( v13 )
  {
    LOBYTE(v19) = v77;
    MiUnmapPageInHyperSpaceWorker(v13, v19, 0x80000000LL);
  }
LABEL_37:
  v27 = v67;
  if ( v20 <= v67 )
    v27 = v20;
  v28 = (__int64)(v27 - v14) >> 3;
  if ( (_DWORD)v78 != 3 && (v20 > v67 || v5 < v14) )
  {
    Pool = MiAllocatePool(0x40uLL, 8 * ((__int64)(v20 - v5) >> 3) + 48, 1700228429);
    v64 = Pool;
    v35 = Pool;
    if ( Pool )
    {
      v62 = (unsigned __int64 *)(v4 + 48);
      v36 = (unsigned __int64 *)(Pool + 48);
      v72 = Pool + 48;
      v76 = 1;
      v40 = MiMapPageInHyperSpaceWorker(a1[5] & 0xFFFFFFFFFFLL, &v77, 0x80000000);
      v41 = (unsigned __int64 *)(v40 + (v5 & 0xFFF));
      if ( v5 < v66 )
      {
        v68 = (unsigned __int64 *)(v4 + 48);
        while ( v5 >= v67 || v5 < v14 )
        {
          if ( v76 != 3 || (__int64)(((unsigned __int64)v36 - v35 - 48) & 0xFFFFFFFFFFFFFFF8uLL) < 128 )
          {
            v42 = *v41;
            if ( (*v41 & 0xC01) == 0x800 )
            {
              v43 = (v42 >> 12) & ((unsigned __int64)~qword_140E2DCC0 >> 12) & 0xFFFFFFFFFFLL;
              if ( v43 > qword_140E2DD20 )
                goto LABEL_75;
              v37 = 6 * v43;
              if ( ((*(_QWORD *)(48 * v43 - 0x21FFFFFFFFD8LL) >> 54) & 1) == 0 )
                goto LABEL_75;
              v38 = 0LL;
              v44 = 48 * v43 - 0x220000000000LL;
              v45 = 0;
              while ( _interlockedbittestandset64((volatile signed __int32 *)(v44 + 24), 0x3FuLL) )
              {
                do
                {
                  if ( (++v45 & HvlLongSpinCountMask) == 0
                    && (HvlEnlightenments & 0x40) != 0
                    && (v54 = KiCheckVpBackingLongSpinWaitHypercall(), v38 = 0LL, v54) )
                  {
                    HvlNotifyLongSpinWait(v45);
                    v38 = 0LL;
                  }
                  else
                  {
                    _mm_pause();
                  }
                }
                while ( *(__int64 *)(v44 + 24) < 0 );
              }
              if ( v42 != *v41 )
              {
                _InterlockedAnd64((volatile signed __int64 *)(v44 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                goto LABEL_75;
              }
              if ( (*(_BYTE *)(v44 + 34) & 0x10) != 0 && !(unsigned __int16)*(_DWORD *)(v44 + 32) )
              {
                v37 = v69;
                if ( v69 == *((_QWORD *)qword_140E300C8 + ((*(_QWORD *)(v44 + 40) >> 43) & 0x3FFLL)) )
                {
                  if ( v40 )
                  {
                    LOBYTE(v37) = 2;
                    MiUnmapPageInHyperSpaceWorker(v40, v37, 0x80000000LL);
                    v76 = MiReferencePageForModifiedWrite(v44, 0);
                    v46 = v76;
                    v40 = MiMapPageInHyperSpaceWorker(v70, 0LL, 0x80000000);
                    v41 = (unsigned __int64 *)(v40 + ((unsigned __int16)v41 & 0xFFF));
                  }
                  else
                  {
                    v46 = MiReferencePageForModifiedWrite(v44, 0);
                    v76 = v46;
                  }
                  if ( v46 )
                  {
                    *v36 = (v42 >> 12) & ((unsigned __int64)~qword_140E2DCC0 >> 12) & 0xFFFFFFFFFFLL;
                    _InterlockedAnd64((volatile signed __int64 *)(v44 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_74:
                    ++v41;
                    v5 += 8LL;
                    ++v36;
                    goto LABEL_75;
                  }
                }
              }
              _InterlockedAnd64((volatile signed __int64 *)(v44 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              v14 = v60;
            }
            v35 = v64;
          }
          if ( v40 )
          {
            LOBYTE(v37) = v77;
            MiUnmapPageInHyperSpaceWorker(v40, v37, 0x80000000LL);
          }
          if ( v5 >= v14 )
            goto LABEL_78;
          v53 = ((__int64)v36 - v35 - 48) >> 3;
          v78 = v53;
          if ( v53 )
          {
            if ( (unsigned __int64)v36 > v72 )
            {
              do
              {
                v58 = 48 * *--v36 - 0x220000000000LL;
                v59 = MiLockPageInline(v58, v37, v38, v39);
                MiWriteCompletePfn(v58, 129LL, 0LL);
                MiUnlockPage(v58, v59);
              }
              while ( (unsigned __int64)v36 > v72 );
              v53 = v78;
              v14 = v60;
            }
            MiReleaseWriteInProgressCharges(v69, v53, 1LL);
          }
          v62 = v68;
          v5 = v14;
          v40 = MiMapPageInHyperSpaceWorker(a1[5] & 0xFFFFFFFFFFLL, &v77, 0x80000000);
          v41 = (unsigned __int64 *)(v40 + (v14 & 0xFFF));
LABEL_75:
          v35 = v64;
          v14 = v60;
          if ( v5 >= v66 )
            goto LABEL_76;
        }
        v47 = *v62++;
        *v36 = v47;
        goto LABEL_74;
      }
LABEL_76:
      if ( v40 )
      {
        LOBYTE(v37) = v77;
        MiUnmapPageInHyperSpaceWorker(v40, v37, 0x80000000LL);
      }
LABEL_78:
      v4 = v35;
      v28 = ((__int64)v36 - v35 - 48) >> 3;
    }
  }
  v29 = v28 << 12;
  *(_QWORD *)v4 = 0LL;
  *(_QWORD *)(v4 + 32) = 0LL;
  *(_WORD *)(v4 + 8) = 8 * ((v29 >> 12) + 6);
  result = v4;
  *(_QWORD *)(v4 + 40) = (unsigned int)v29;
  *(_WORD *)(v4 + 10) = 2;
  return result;
}
