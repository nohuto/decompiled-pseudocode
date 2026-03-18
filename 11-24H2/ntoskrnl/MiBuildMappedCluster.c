/*
 * XREFs of MiBuildMappedCluster @ 0x14036ABB8
 * Callers:
 *     MiGatherMappedPages @ 0x140369B20 (MiGatherMappedPages.c)
 * Callees:
 *     MiMapPageInHyperSpaceWorker @ 0x14021F1A0 (MiMapPageInHyperSpaceWorker.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x140266854 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiLockPageInline @ 0x140291550 (MiLockPageInline.c)
 *     MiUnlockPage @ 0x1402915F0 (MiUnlockPage.c)
 *     HvlNotifyLongSpinWait @ 0x140293260 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140293290 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiAllocatePool @ 0x1402ACA70 (MiAllocatePool.c)
 *     MiReferencePageForModifiedWrite @ 0x14036AA48 (MiReferencePageForModifiedWrite.c)
 *     MiWriteCompletePfn @ 0x14039D574 (MiWriteCompletePfn.c)
 *     MiReleaseWriteInProgressCharges @ 0x14043A500 (MiReleaseWriteInProgressCharges.c)
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
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // r10
  unsigned __int64 v13; // rsi
  __int64 v14; // rcx
  __int64 v15; // r14
  unsigned __int64 v16; // r12
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // rbp
  int v19; // ecx
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rbx
  unsigned __int64 v22; // rax
  ULONG_PTR v23; // rsi
  unsigned int v24; // ebp
  unsigned __int64 v25; // r14
  __int64 v26; // r14
  unsigned __int64 v27; // r14
  __int64 result; // rax
  unsigned __int64 v29; // rax
  int v30; // ecx
  int v31; // eax
  __int64 Pool; // rax
  __int64 v33; // rbx
  unsigned __int64 *v34; // r14
  unsigned __int64 v35; // r12
  unsigned __int64 *v36; // rbp
  unsigned __int64 v37; // rbx
  unsigned __int64 v38; // rcx
  ULONG_PTR v39; // rsi
  unsigned int v40; // r15d
  int v41; // r15d
  unsigned __int64 v42; // rax
  unsigned __int64 v43; // rbx
  unsigned __int64 v44; // r14
  __int64 v45; // rbp
  unsigned __int64 *v46; // r15
  unsigned __int64 v47; // r9
  unsigned __int64 v48; // rcx
  __int64 v49; // rbp
  __int64 v50; // rsi
  unsigned __int8 v51; // bl
  unsigned __int64 v52; // rbx
  __int64 v53; // rsi
  unsigned __int8 v54; // bl
  unsigned __int64 v55; // [rsp+20h] [rbp-A8h]
  unsigned __int64 v56; // [rsp+28h] [rbp-A0h]
  unsigned __int64 *v57; // [rsp+28h] [rbp-A0h]
  unsigned __int64 v58; // [rsp+30h] [rbp-98h]
  __int64 v59; // [rsp+30h] [rbp-98h]
  unsigned __int64 *v60; // [rsp+38h] [rbp-90h]
  unsigned __int64 v61; // [rsp+40h] [rbp-88h]
  unsigned __int64 v62; // [rsp+48h] [rbp-80h]
  unsigned __int64 *v63; // [rsp+50h] [rbp-78h]
  __int64 v64; // [rsp+58h] [rbp-70h]
  __int64 v65; // [rsp+60h] [rbp-68h]
  unsigned __int64 v66; // [rsp+68h] [rbp-60h]
  unsigned __int64 v67; // [rsp+68h] [rbp-60h]
  unsigned __int64 v68; // [rsp+78h] [rbp-50h]
  int v71; // [rsp+D8h] [rbp+10h]
  unsigned __int8 v72; // [rsp+E0h] [rbp+18h] BYREF
  __int64 v73; // [rsp+E8h] [rbp+20h]

  v4 = a2;
  v72 = 0;
  v66 = a2 + 48;
  v60 = (unsigned __int64 *)(a2 + 48);
  v5 = a1[1] | 0x8000000000000000uLL;
  v68 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(a1 + 0x44000000000LL) >> 4);
  v6 = a1[1] & 0x7FFFFFFFFFFFF000LL | 0x8000000000000000uLL;
  v7 = a1[2];
  v58 = v5;
  v8 = *((_QWORD *)qword_140E2FF88 + ((a1[5] >> 43) & 0x3FFLL));
  v64 = v8;
  if ( qword_140E2DB80 && (v7 & 0x10) == 0 )
    v7 &= ~qword_140E2DB80;
  v9 = v7 >> 16;
  if ( v6 < *(_QWORD *)(v9 + 8) )
    v6 = *(_QWORD *)(v9 + 8);
  v10 = v6;
  if ( v6 < v5 - 120 )
    v10 = v5 - 120;
  v65 = a1[5] & 0xFFFFFFFFFFLL;
  v56 = MiMapPageInHyperSpaceWorker(v65, &v72, 0x80000000LL);
  v55 = v5;
  v11 = v56 + (v5 & 0xFFF);
  v12 = v56;
  if ( a3 )
  {
    v47 = v5;
    if ( v5 > v6 )
    {
      do
      {
        v11 -= 8LL;
        if ( (*(_QWORD *)v11 & 0xC01LL) != 0x800 )
          break;
        v48 = (*(_QWORD *)v11 >> 12) & ((unsigned __int64)~qword_140E2DB80 >> 12) & 0xFFFFFFFFFFLL;
        if ( v48 > qword_140E2DBE0
          || ((*(_QWORD *)(48 * v48 - 0x21FFFFFFFFD8LL) >> 54) & 1) == 0
          || (*(_BYTE *)(48 * v48 - 0x220000000000LL + 34) & 0x10) == 0
          || (unsigned __int16)*(_DWORD *)(48 * v48 - 0x220000000000LL + 32)
          || v8 != *((_QWORD *)qword_140E2FF88 + ((*(_QWORD *)(48 * v48 - 0x220000000000LL + 40) >> 43) & 0x3FFLL)) )
        {
          break;
        }
        v5 -= 8LL;
        if ( v5 >= v10 )
          v47 = v5;
      }
      while ( v5 > v6 );
      v4 = a2;
      v12 = v56;
      v55 = v47;
    }
    v13 = v47;
  }
  else
  {
    v13 = v5;
  }
  v14 = *(unsigned int *)(v9 + 44);
  v15 = (v11 & 0xFFFFFFFFFFFFF000uLL) + (v13 & 0xFFF);
  v16 = (v13 & 0xFFFFFFFFFFFFF000uLL) + 4096;
  if ( v16 > *(_QWORD *)(v9 + 8) + 8 * v14 )
    v16 = *(_QWORD *)(v9 + 8) + 8 * v14;
  v17 = v16;
  if ( v16 > v13 + 128 )
    v17 = v13 + 128;
  v62 = v17;
  if ( !a3 )
  {
    v62 = v13 + 8;
    v16 = v13 + 8;
  }
  v61 = v13;
  v18 = v13;
  v19 = 1;
  LODWORD(v73) = 1;
  if ( v13 < v16 )
  {
    v20 = v58;
    do
    {
      if ( v18 == v20 )
      {
        *v60++ = v68;
        goto LABEL_34;
      }
      if ( v19 == 3 )
      {
        v43 = (unsigned __int64)v60;
        if ( (__int64)(((unsigned __int64)v60 - v4 - 48) & 0xFFFFFFFFFFFFFFF8uLL) >= 128 )
          goto LABEL_90;
      }
      v21 = *(_QWORD *)v15;
      if ( (*(_QWORD *)v15 & 0xC01LL) != 0x800 )
        goto LABEL_89;
      v22 = (v21 >> 12) & ((unsigned __int64)~qword_140E2DB80 >> 12) & 0xFFFFFFFFFFLL;
      if ( v22 <= qword_140E2DBE0 && ((*(_QWORD *)(48 * v22 - 0x21FFFFFFFFD8LL) >> 54) & 1) != 0 )
      {
        v23 = 48 * v22 - 0x220000000000LL;
        v24 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v23 + 24), 0x3FuLL) )
        {
          do
          {
            if ( (++v24 & HvlLongSpinCountMask) == 0
              && (HvlEnlightenments & 0x40) != 0
              && KiCheckVpBackingLongSpinWaitHypercall() )
            {
              HvlNotifyLongSpinWait(v24);
            }
            else
            {
              _mm_pause();
            }
          }
          while ( *(__int64 *)(v23 + 24) < 0 );
        }
        if ( v21 == *(_QWORD *)v15 )
        {
          if ( (*(_BYTE *)(v23 + 34) & 0x10) == 0
            || (unsigned __int16)*(_DWORD *)(v23 + 32)
            || v64 != *((_QWORD *)qword_140E2FF88 + ((*(_QWORD *)(v23 + 40) >> 43) & 0x3FFLL)) )
          {
            _InterlockedAnd64((volatile signed __int64 *)(v23 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            v18 = v61;
            v13 = v55;
            v12 = v56;
LABEL_89:
            v43 = (unsigned __int64)v60;
LABEL_90:
            if ( v12 )
              MiUnmapPageInHyperSpaceWorker(v12, v72, 0x80000000);
            v44 = v58;
            if ( v18 >= v58 )
              goto LABEL_37;
            v45 = (__int64)(v43 - v4 - 48) >> 3;
            if ( v45 )
            {
              if ( v43 > v4 + 48 )
              {
                v46 = v60;
                do
                {
                  v50 = 48 * *--v46 - 0x220000000000LL;
                  v51 = MiLockPageInline(v50);
                  MiWriteCompletePfn(v50);
                  MiUnlockPage(v50, v51);
                }
                while ( (unsigned __int64)v46 > v66 );
                v44 = v58;
                v60 = v46;
                v4 = a2;
              }
              MiReleaseWriteInProgressCharges(v64, v45, 1LL);
            }
            v52 = v62;
            if ( v62 == v55 + 8 )
            {
              v16 = v44 + 8;
              v62 = v44 + 8;
            }
            else
            {
              if ( v16 > v44 + 128 )
                v52 = v44 + 128;
              v62 = v52;
            }
            v55 = v44;
            v13 = v44;
            v12 = MiMapPageInHyperSpaceWorker(v65, &v72, 0x80000000LL);
            v56 = v12;
            v15 = (v44 & 0xFFF) + v12 - 8;
            v20 = v58;
            v18 = v58 - 8;
            goto LABEL_33;
          }
          v18 = v61;
          v12 = v56;
          if ( v61 < v62 )
          {
            if ( v56 )
            {
              MiUnmapPageInHyperSpaceWorker(v56, 2u, 0x80000000);
              LODWORD(v73) = MiReferencePageForModifiedWrite(v23, 0);
              v29 = MiMapPageInHyperSpaceWorker(v65, 0LL, 0x80000000LL);
              v30 = v73;
              v15 = v29 + (v15 & 0xFFF);
              v56 = v29;
              v12 = v29;
            }
            else
            {
              v31 = MiReferencePageForModifiedWrite(v23, 0);
              v12 = 0LL;
              v30 = v31;
              LODWORD(v73) = v31;
            }
            if ( !v30 )
            {
              _InterlockedAnd64((volatile signed __int64 *)(v23 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              v13 = v55;
              goto LABEL_89;
            }
            *v60++ = (v21 >> 12) & ((unsigned __int64)~qword_140E2DB80 >> 12) & 0xFFFFFFFFFFLL;
          }
          _InterlockedAnd64((volatile signed __int64 *)(v23 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        }
        else
        {
          _InterlockedAnd64((volatile signed __int64 *)(v23 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          v15 -= 8LL;
          v12 = v56;
          v18 = v61 - 8;
        }
        v13 = v55;
      }
      else
      {
        v15 -= 8LL;
        v18 -= 8LL;
      }
      v20 = v58;
LABEL_33:
      v19 = v73;
LABEL_34:
      v18 += 8LL;
      v15 += 8LL;
      v61 = v18;
    }
    while ( v18 < v16 );
  }
  if ( v12 )
    MiUnmapPageInHyperSpaceWorker(v12, v72, 0x80000000);
LABEL_37:
  v25 = v62;
  if ( v18 <= v62 )
    v25 = v18;
  v26 = (__int64)(v25 - v13) >> 3;
  if ( (_DWORD)v73 != 3 && (v18 > v62 || v5 < v13) )
  {
    Pool = MiAllocatePool(0x40uLL, 8 * ((__int64)(v18 - v5) >> 3) + 48, 1700228429);
    v59 = Pool;
    v33 = Pool;
    if ( Pool )
    {
      v57 = (unsigned __int64 *)(v4 + 48);
      v34 = (unsigned __int64 *)(Pool + 48);
      v67 = Pool + 48;
      v71 = 1;
      v35 = MiMapPageInHyperSpaceWorker(a1[5] & 0xFFFFFFFFFFLL, &v72, 0x80000000LL);
      v36 = (unsigned __int64 *)(v35 + (v5 & 0xFFF));
      if ( v5 < v61 )
      {
        v63 = (unsigned __int64 *)(v4 + 48);
        while ( v5 >= v62 || v5 < v13 )
        {
          if ( v71 != 3 || (__int64)(((unsigned __int64)v34 - v33 - 48) & 0xFFFFFFFFFFFFFFF8uLL) < 128 )
          {
            v37 = *v36;
            if ( (*v36 & 0xC01) == 0x800 )
            {
              v38 = (v37 >> 12) & ((unsigned __int64)~qword_140E2DB80 >> 12) & 0xFFFFFFFFFFLL;
              if ( v38 > qword_140E2DBE0 || ((*(_QWORD *)(48 * v38 - 0x21FFFFFFFFD8LL) >> 54) & 1) == 0 )
                goto LABEL_75;
              v39 = 48 * v38 - 0x220000000000LL;
              v40 = 0;
              while ( _interlockedbittestandset64((volatile signed __int32 *)(v39 + 24), 0x3FuLL) )
              {
                do
                {
                  if ( (++v40 & HvlLongSpinCountMask) == 0
                    && (HvlEnlightenments & 0x40) != 0
                    && KiCheckVpBackingLongSpinWaitHypercall() )
                  {
                    HvlNotifyLongSpinWait(v40);
                  }
                  else
                  {
                    _mm_pause();
                  }
                }
                while ( *(__int64 *)(v39 + 24) < 0 );
              }
              if ( v37 != *v36 )
              {
                _InterlockedAnd64((volatile signed __int64 *)(v39 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                goto LABEL_75;
              }
              if ( (*(_BYTE *)(v39 + 34) & 0x10) != 0
                && !(unsigned __int16)*(_DWORD *)(v39 + 32)
                && v64 == *((_QWORD *)qword_140E2FF88 + ((*(_QWORD *)(v39 + 40) >> 43) & 0x3FFLL)) )
              {
                if ( v35 )
                {
                  MiUnmapPageInHyperSpaceWorker(v35, 2u, 0x80000000);
                  v71 = MiReferencePageForModifiedWrite(v39, 0);
                  v41 = v71;
                  v35 = MiMapPageInHyperSpaceWorker(v65, 0LL, 0x80000000LL);
                  v36 = (unsigned __int64 *)(v35 + ((unsigned __int16)v36 & 0xFFF));
                }
                else
                {
                  v41 = MiReferencePageForModifiedWrite(v39, 0);
                  v71 = v41;
                }
                if ( v41 )
                {
                  *v34 = (v37 >> 12) & ((unsigned __int64)~qword_140E2DB80 >> 12) & 0xFFFFFFFFFFLL;
                  _InterlockedAnd64((volatile signed __int64 *)(v39 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_74:
                  ++v36;
                  v5 += 8LL;
                  ++v34;
                  goto LABEL_75;
                }
              }
              _InterlockedAnd64((volatile signed __int64 *)(v39 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              v13 = v55;
            }
            v33 = v59;
          }
          if ( v35 )
            MiUnmapPageInHyperSpaceWorker(v35, v72, 0x80000000);
          if ( v5 >= v13 )
            goto LABEL_78;
          v49 = ((__int64)v34 - v33 - 48) >> 3;
          v73 = v49;
          if ( v49 )
          {
            if ( (unsigned __int64)v34 > v67 )
            {
              do
              {
                v53 = 48 * *--v34 - 0x220000000000LL;
                v54 = MiLockPageInline(v53);
                MiWriteCompletePfn(v53);
                MiUnlockPage(v53, v54);
              }
              while ( (unsigned __int64)v34 > v67 );
              v49 = v73;
              v13 = v55;
            }
            MiReleaseWriteInProgressCharges(v64, v49, 1LL);
          }
          v57 = v63;
          v5 = v13;
          v35 = MiMapPageInHyperSpaceWorker(a1[5] & 0xFFFFFFFFFFLL, &v72, 0x80000000LL);
          v36 = (unsigned __int64 *)(v35 + (v13 & 0xFFF));
LABEL_75:
          v33 = v59;
          v13 = v55;
          if ( v5 >= v61 )
            goto LABEL_76;
        }
        v42 = *v57++;
        *v34 = v42;
        goto LABEL_74;
      }
LABEL_76:
      if ( v35 )
        MiUnmapPageInHyperSpaceWorker(v35, v72, 0x80000000);
LABEL_78:
      v4 = v33;
      v26 = ((__int64)v34 - v33 - 48) >> 3;
    }
  }
  v27 = v26 << 12;
  *(_QWORD *)v4 = 0LL;
  *(_QWORD *)(v4 + 32) = 0LL;
  *(_WORD *)(v4 + 8) = 8 * ((v27 >> 12) + 6);
  result = v4;
  *(_QWORD *)(v4 + 40) = (unsigned int)v27;
  *(_WORD *)(v4 + 10) = 2;
  return result;
}
