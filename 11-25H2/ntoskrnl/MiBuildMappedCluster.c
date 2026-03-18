/*
 * XREFs of MiBuildMappedCluster @ 0x14040DB84
 * Callers:
 *     MiGatherMappedPages @ 0x14040CB20 (MiGatherMappedPages.c)
 * Callees:
 *     MiWriteCompletePfn @ 0x14020D42C (MiWriteCompletePfn.c)
 *     MiMapPageInHyperSpaceWorker @ 0x14024DAC0 (MiMapPageInHyperSpaceWorker.c)
 *     MiAllocatePool @ 0x1402DA740 (MiAllocatePool.c)
 *     MiUnlockPage @ 0x14032B850 (MiUnlockPage.c)
 *     MiLockPageInline @ 0x14032B8A0 (MiLockPageInline.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiReleaseWriteInProgressCharges @ 0x14040AC14 (MiReleaseWriteInProgressCharges.c)
 *     MiReferencePageForModifiedWrite @ 0x14040DA18 (MiReferencePageForModifiedWrite.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x14040FDB8 (MiUnmapPageInHyperSpaceWorker.c)
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
  unsigned __int64 v19; // rdx
  unsigned __int64 v20; // rbp
  int v21; // ecx
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rbx
  unsigned __int64 v24; // rax
  ULONG_PTR v25; // rsi
  int v26; // ebp
  unsigned __int64 v27; // r14
  __int64 v28; // r14
  unsigned __int64 v29; // r14
  __int64 result; // rax
  __int64 v31; // r8
  __int64 v32; // r9
  unsigned __int64 v33; // rax
  int v34; // ecx
  unsigned __int64 v35; // rcx
  int v36; // eax
  unsigned __int64 v37; // rbx
  unsigned __int64 v38; // r14
  unsigned __int64 v39; // rbp
  unsigned __int64 *v40; // r15
  __int64 Pool; // rax
  __int64 v42; // rbx
  unsigned __int64 *v43; // r14
  __int64 v44; // rdx
  __int64 v45; // r9
  unsigned __int64 v46; // r12
  unsigned __int64 *v47; // rbp
  unsigned __int64 v48; // rax
  unsigned __int64 v49; // rbx
  unsigned __int64 v50; // rcx
  ULONG_PTR v51; // rsi
  int v52; // r15d
  __int64 v53; // r8
  __int64 v54; // r9
  int v55; // r15d
  unsigned __int64 v56; // rbp
  __int64 v57; // rsi
  unsigned __int8 v58; // bl
  unsigned __int64 v59; // rbx
  __int64 v60; // rsi
  unsigned __int8 v61; // bl
  unsigned __int64 v62; // [rsp+20h] [rbp-A8h]
  unsigned __int64 v63; // [rsp+28h] [rbp-A0h]
  unsigned __int64 *v64; // [rsp+28h] [rbp-A0h]
  unsigned __int64 v65; // [rsp+30h] [rbp-98h]
  __int64 v66; // [rsp+30h] [rbp-98h]
  unsigned __int64 *v67; // [rsp+38h] [rbp-90h]
  unsigned __int64 v68; // [rsp+40h] [rbp-88h]
  unsigned __int64 v69; // [rsp+48h] [rbp-80h]
  unsigned __int64 *v70; // [rsp+50h] [rbp-78h]
  __int64 v71; // [rsp+58h] [rbp-70h]
  __int64 v72; // [rsp+60h] [rbp-68h]
  unsigned __int64 v73; // [rsp+68h] [rbp-60h]
  unsigned __int64 v74; // [rsp+68h] [rbp-60h]
  unsigned __int64 v75; // [rsp+78h] [rbp-50h]
  int v78; // [rsp+D8h] [rbp+10h]
  unsigned __int8 v79; // [rsp+E0h] [rbp+18h] BYREF
  unsigned __int64 v80; // [rsp+E8h] [rbp+20h]

  v4 = a2;
  v79 = 0;
  v73 = a2 + 48;
  v67 = (unsigned __int64 *)(a2 + 48);
  v5 = a1[1] | 0x8000000000000000uLL;
  v75 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(a1 + 0x44000000000LL) >> 4);
  v6 = a1[1] & 0x7FFFFFFFFFFFF000LL | 0x8000000000000000uLL;
  v7 = a1[2];
  v65 = v5;
  v8 = *((_QWORD *)qword_140E2FD48 + ((a1[5] >> 43) & 0x3FFLL));
  v71 = v8;
  if ( qword_140E2D940 && (v7 & 0x10) == 0 )
    v7 &= ~qword_140E2D940;
  v9 = v7 >> 16;
  if ( v6 < *(_QWORD *)(v9 + 8) )
    v6 = *(_QWORD *)(v9 + 8);
  v10 = v6;
  if ( v6 < v5 - 120 )
    v10 = v5 - 120;
  v72 = a1[5] & 0xFFFFFFFFFFLL;
  v63 = MiMapPageInHyperSpaceWorker(v72, &v79, 0x80000000);
  v62 = v5;
  v12 = v63 + (v5 & 0xFFF);
  v13 = v63;
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
        v35 = (*(_QWORD *)v12 >> 12) & ((unsigned __int64)~qword_140E2D940 >> 12) & 0xFFFFFFFFFFLL;
        if ( v35 > qword_140E2D9A0
          || ((*(_QWORD *)(48 * v35 - 0x21FFFFFFFFD8LL) >> 54) & 1) == 0
          || (*(_BYTE *)(48 * v35 - 0x220000000000LL + 34) & 0x10) == 0
          || (unsigned __int16)*(_DWORD *)(48 * v35 - 0x220000000000LL + 32)
          || v8 != *((_QWORD *)qword_140E2FD48 + ((*(_QWORD *)(48 * v35 - 0x220000000000LL + 40) >> 43) & 0x3FFLL)) )
        {
          break;
        }
        v5 -= 8LL;
        if ( v5 >= v10 )
          v11 = v5;
      }
      while ( v5 > v6 );
      v4 = a2;
      v13 = v63;
      v62 = v11;
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
  v69 = v19;
  if ( !a3 )
  {
    v19 = v14 + 8;
    v69 = v14 + 8;
    v18 = v14 + 8;
  }
  v68 = v14;
  v20 = v14;
  v21 = 1;
  LODWORD(v80) = 1;
  if ( v14 < v18 )
  {
    v22 = v65;
    do
    {
      if ( v20 == v22 )
      {
        v19 = v75;
        *v67++ = v75;
        goto LABEL_34;
      }
      if ( v21 == 3 )
      {
        v37 = (unsigned __int64)v67;
        if ( (__int64)(((unsigned __int64)v67 - v4 - 48) & 0xFFFFFFFFFFFFFFF8uLL) >= 128 )
          goto LABEL_66;
      }
      v23 = *(_QWORD *)v17;
      if ( (*(_QWORD *)v17 & 0xC01LL) != 0x800 )
        goto LABEL_65;
      v24 = (v23 >> 12) & ((unsigned __int64)~qword_140E2D940 >> 12) & 0xFFFFFFFFFFLL;
      if ( v24 <= qword_140E2D9A0 && ((*(_QWORD *)(48 * v24 - 0x21FFFFFFFFD8LL) >> 54) & 1) != 0 )
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
              HvlNotifyLongSpinWait();
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
            || (v19 = v71, v71 != *((_QWORD *)qword_140E2FD48 + ((*(_QWORD *)(v25 + 40) >> 43) & 0x3FFLL))) )
          {
            _InterlockedAnd64((volatile signed __int64 *)(v25 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            v20 = v68;
            v14 = v62;
            v13 = v63;
LABEL_65:
            v37 = (unsigned __int64)v67;
LABEL_66:
            if ( v13 )
            {
              LOBYTE(v19) = v79;
              MiUnmapPageInHyperSpaceWorker(v13, v19, 0x80000000LL);
            }
            v38 = v65;
            if ( v20 >= v65 )
              goto LABEL_37;
            v39 = (__int64)(v37 - v4 - 48) >> 3;
            if ( v39 )
            {
              if ( v37 > v4 + 48 )
              {
                v40 = v67;
                do
                {
                  v57 = 48 * *--v40 - 0x220000000000LL;
                  v58 = MiLockPageInline(v57);
                  MiWriteCompletePfn(v57, 129, 0LL);
                  MiUnlockPage(v57, v58);
                }
                while ( (unsigned __int64)v40 > v73 );
                v38 = v65;
                v67 = v40;
                v4 = a2;
              }
              MiReleaseWriteInProgressCharges(v71, v39, 1);
            }
            v59 = v69;
            if ( v69 == v62 + 8 )
            {
              v18 = v38 + 8;
              v69 = v38 + 8;
            }
            else
            {
              if ( v18 > v38 + 128 )
                v59 = v38 + 128;
              v69 = v59;
            }
            v62 = v38;
            v14 = v38;
            v13 = MiMapPageInHyperSpaceWorker(v72, &v79, 0x80000000);
            v63 = v13;
            v17 = (v38 & 0xFFF) + v13 - 8;
            v22 = v65;
            v20 = v65 - 8;
            goto LABEL_33;
          }
          v20 = v68;
          v13 = v63;
          if ( v68 < v69 )
          {
            if ( v63 )
            {
              LOBYTE(v19) = 2;
              MiUnmapPageInHyperSpaceWorker(v63, v19, 0x80000000LL);
              LODWORD(v80) = MiReferencePageForModifiedWrite(v25, 0, v31, v32);
              v33 = MiMapPageInHyperSpaceWorker(v72, 0LL, 0x80000000);
              v34 = v80;
              v17 = v33 + (v17 & 0xFFF);
              v63 = v33;
              v13 = v33;
            }
            else
            {
              v36 = MiReferencePageForModifiedWrite(v25, 0, v15, v11);
              v13 = 0LL;
              v34 = v36;
              LODWORD(v80) = v36;
            }
            if ( !v34 )
            {
              _InterlockedAnd64((volatile signed __int64 *)(v25 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              v14 = v62;
              goto LABEL_65;
            }
            *v67++ = (v23 >> 12) & ((unsigned __int64)~qword_140E2D940 >> 12) & 0xFFFFFFFFFFLL;
          }
          _InterlockedAnd64((volatile signed __int64 *)(v25 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        }
        else
        {
          _InterlockedAnd64((volatile signed __int64 *)(v25 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          v17 -= 8LL;
          v13 = v63;
          v20 = v68 - 8;
        }
        v14 = v62;
      }
      else
      {
        v17 -= 8LL;
        v20 -= 8LL;
      }
      v22 = v65;
LABEL_33:
      v21 = v80;
LABEL_34:
      v20 += 8LL;
      v17 += 8LL;
      v68 = v20;
    }
    while ( v20 < v18 );
  }
  if ( v13 )
  {
    LOBYTE(v19) = v79;
    MiUnmapPageInHyperSpaceWorker(v13, v19, 0x80000000LL);
  }
LABEL_37:
  v27 = v69;
  if ( v20 <= v69 )
    v27 = v20;
  v28 = (__int64)(v27 - v14) >> 3;
  if ( (_DWORD)v80 != 3 && (v20 > v69 || v5 < v14) )
  {
    Pool = MiAllocatePool(0x40uLL, 8 * ((__int64)(v20 - v5) >> 3) + 48, 1700228429);
    v66 = Pool;
    v42 = Pool;
    if ( Pool )
    {
      v64 = (unsigned __int64 *)(v4 + 48);
      v43 = (unsigned __int64 *)(Pool + 48);
      v74 = Pool + 48;
      v78 = 1;
      v46 = MiMapPageInHyperSpaceWorker(a1[5] & 0xFFFFFFFFFFLL, &v79, 0x80000000);
      v47 = (unsigned __int64 *)(v46 + (v5 & 0xFFF));
      if ( v5 < v68 )
      {
        v70 = (unsigned __int64 *)(v4 + 48);
        while ( v5 < v14 || v5 >= v69 )
        {
          if ( v78 != 3 || (__int64)(((unsigned __int64)v43 - v42 - 48) & 0xFFFFFFFFFFFFFFF8uLL) < 128 )
          {
            v49 = *v47;
            if ( (*v47 & 0xC01) == 0x800 )
            {
              v50 = (v49 >> 12) & ((unsigned __int64)~qword_140E2D940 >> 12) & 0xFFFFFFFFFFLL;
              if ( v50 > qword_140E2D9A0 )
                goto LABEL_79;
              v44 = 6 * v50;
              if ( ((*(_QWORD *)(48 * v50 - 0x21FFFFFFFFD8LL) >> 54) & 1) == 0 )
                goto LABEL_79;
              v51 = 48 * v50 - 0x220000000000LL;
              v52 = 0;
              while ( _interlockedbittestandset64((volatile signed __int32 *)(v51 + 24), 0x3FuLL) )
              {
                do
                {
                  if ( (++v52 & HvlLongSpinCountMask) == 0
                    && (HvlEnlightenments & 0x40) != 0
                    && KiCheckVpBackingLongSpinWaitHypercall() )
                  {
                    HvlNotifyLongSpinWait();
                  }
                  else
                  {
                    _mm_pause();
                  }
                }
                while ( *(__int64 *)(v51 + 24) < 0 );
              }
              if ( v49 != *v47 )
              {
                _InterlockedAnd64((volatile signed __int64 *)(v51 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                goto LABEL_79;
              }
              if ( (*(_BYTE *)(v51 + 34) & 0x10) != 0 && !(unsigned __int16)*(_DWORD *)(v51 + 32) )
              {
                v44 = v71;
                if ( v71 == *((_QWORD *)qword_140E2FD48 + ((*(_QWORD *)(v51 + 40) >> 43) & 0x3FFLL)) )
                {
                  if ( v46 )
                  {
                    LOBYTE(v44) = 2;
                    MiUnmapPageInHyperSpaceWorker(v46, v44, 0x80000000LL);
                    v78 = MiReferencePageForModifiedWrite(v51, 0, v53, v54);
                    v55 = v78;
                    v46 = MiMapPageInHyperSpaceWorker(v72, 0LL, 0x80000000);
                    v47 = (unsigned __int64 *)(v46 + ((unsigned __int16)v47 & 0xFFF));
                  }
                  else
                  {
                    v55 = MiReferencePageForModifiedWrite(v51, 0, 0LL, v45);
                    v78 = v55;
                  }
                  if ( v55 )
                  {
                    *v43 = (v49 >> 12) & ((unsigned __int64)~qword_140E2D940 >> 12) & 0xFFFFFFFFFFLL;
                    _InterlockedAnd64((volatile signed __int64 *)(v51 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                    goto LABEL_78;
                  }
                }
              }
              _InterlockedAnd64((volatile signed __int64 *)(v51 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              v14 = v62;
            }
            v42 = v66;
          }
          if ( v46 )
          {
            LOBYTE(v44) = v79;
            MiUnmapPageInHyperSpaceWorker(v46, v44, 0x80000000LL);
          }
          if ( v5 >= v14 )
            goto LABEL_106;
          v56 = ((__int64)v43 - v42 - 48) >> 3;
          v80 = v56;
          if ( v56 )
          {
            if ( (unsigned __int64)v43 > v74 )
            {
              do
              {
                v60 = 48 * *--v43 - 0x220000000000LL;
                v61 = MiLockPageInline(v60);
                MiWriteCompletePfn(v60, 129, 0LL);
                MiUnlockPage(v60, v61);
              }
              while ( (unsigned __int64)v43 > v74 );
              v56 = v80;
              v14 = v62;
            }
            MiReleaseWriteInProgressCharges(v71, v56, 1);
          }
          v64 = v70;
          v5 = v14;
          v46 = MiMapPageInHyperSpaceWorker(a1[5] & 0xFFFFFFFFFFLL, &v79, 0x80000000);
          v47 = (unsigned __int64 *)(v46 + (v14 & 0xFFF));
LABEL_79:
          v42 = v66;
          v14 = v62;
          if ( v5 >= v68 )
            goto LABEL_80;
        }
        v48 = *v64++;
        *v43 = v48;
LABEL_78:
        ++v47;
        v5 += 8LL;
        ++v43;
        goto LABEL_79;
      }
LABEL_80:
      if ( v46 )
      {
        LOBYTE(v44) = v79;
        MiUnmapPageInHyperSpaceWorker(v46, v44, 0x80000000LL);
      }
LABEL_106:
      v4 = v42;
      v28 = ((__int64)v43 - v42 - 48) >> 3;
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
