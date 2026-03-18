/*
 * XREFs of MiPfPutPagesInTransition @ 0x1402E692C
 * Callers:
 *     MmPrefetchPagesEx @ 0x140955430 (MmPrefetchPagesEx.c)
 *     MmPrefetchForCacheManager @ 0x1409561A4 (MmPrefetchForCacheManager.c)
 *     MiPrefetchControlArea @ 0x1409572D4 (MiPrefetchControlArea.c)
 * Callees:
 *     MiLockProtoPoolPageForce @ 0x140215A80 (MiLockProtoPoolPageForce.c)
 *     MiZeroPhysicalPage @ 0x14021EC40 (MiZeroPhysicalPage.c)
 *     MiObtainProtoReference @ 0x14023BBE8 (MiObtainProtoReference.c)
 *     MiPfnZeroingNeeded @ 0x140268E10 (MiPfnZeroingNeeded.c)
 *     PsGetIoPriorityThread @ 0x140276920 (PsGetIoPriorityThread.c)
 *     MiUnlockProtoPoolPage @ 0x14028CBF0 (MiUnlockProtoPoolPage.c)
 *     MiReturnCommit @ 0x14028EF80 (MiReturnCommit.c)
 *     HvlNotifyLongSpinWait @ 0x140293260 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140293290 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiGetInPageSupportBlock @ 0x1402E42D0 (MiGetInPageSupportBlock.c)
 *     MiIsPteInStore @ 0x1402E5460 (MiIsPteInStore.c)
 *     MiGetPagingFileOffset @ 0x1402E5A60 (MiGetPagingFileOffset.c)
 *     MiReturnPfnReferenceCountAtDpc @ 0x1402E6850 (MiReturnPfnReferenceCountAtDpc.c)
 *     MiReferenceControlAreaPfn @ 0x1402E68C4 (MiReferenceControlAreaPfn.c)
 *     MiLockLeafPage @ 0x1402E8100 (MiLockLeafPage.c)
 *     MiUnlinkPageChainHead @ 0x1402E8490 (MiUnlinkPageChainHead.c)
 *     MiUseSlabAllocator @ 0x1402E84B8 (MiUseSlabAllocator.c)
 *     MiFreeInPageSupportBlock @ 0x1402EEC40 (MiFreeInPageSupportBlock.c)
 *     MiInitializePageColorBase @ 0x1402EF8B0 (MiInitializePageColorBase.c)
 *     MiInitializeReadInProgressPfn @ 0x1402EF9B8 (MiInitializeReadInProgressPfn.c)
 *     MiGetSlabPage @ 0x1402F3934 (MiGetSlabPage.c)
 *     MiGetPage @ 0x1402F41B0 (MiGetPage.c)
 *     MiGetPageForHeader @ 0x1403133D4 (MiGetPageForHeader.c)
 *     MiRefillPurgedExtents @ 0x14036F3FC (MiRefillPurgedExtents.c)
 *     MiUpdatePfnPriority @ 0x1403FE790 (MiUpdatePfnPriority.c)
 *     MiReduceMdl @ 0x140445270 (MiReduceMdl.c)
 *     MiPrefetchPagesViable @ 0x1404543E0 (MiPrefetchPagesViable.c)
 *     MiSetInPagePriority @ 0x14046AEC0 (MiSetInPagePriority.c)
 *     MiReturnFaultCharges @ 0x140481AD4 (MiReturnFaultCharges.c)
 *     MiReleasePrefetchGapPages @ 0x1404915EC (MiReleasePrefetchGapPages.c)
 *     memmove @ 0x1406BFC40 (memmove.c)
 *     MiFreeReadListPages @ 0x140956090 (MiFreeReadListPages.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiPfPutPagesInTransition(__int64 a1, int a2, int a3, int a4, volatile signed __int64 *a5)
{
  unsigned int v5; // r9d
  __int64 v6; // r12
  __int64 v7; // rdx
  _KPROCESS *Process; // rdi
  __int64 v9; // rcx
  int v10; // eax
  int IoPriorityThread; // eax
  __int64 v12; // rbx
  __int64 v13; // r10
  char v14; // r9
  struct _SLIST_ENTRY *v15; // r15
  unsigned int v16; // ebx
  __int64 v17; // r13
  int v18; // esi
  int v19; // r14d
  unsigned __int64 v20; // rdx
  int v21; // eax
  _QWORD *v22; // rdi
  __int64 v23; // r11
  __int64 v24; // r8
  unsigned __int64 v25; // r12
  __int64 *v26; // r9
  unsigned __int64 v27; // r10
  PSLIST_ENTRY v28; // rax
  __int64 v29; // rdx
  __int64 v30; // r8
  ULONG_PTR v31; // r12
  ULONG_PTR v32; // rdi
  unsigned __int64 v33; // rdx
  __int64 v34; // rax
  __int64 v35; // rdi
  __int64 v36; // r15
  __int64 v37; // r15
  ULONG_PTR v38; // r15
  __int64 v39; // r15
  __int64 v40; // r12
  __int64 v41; // r13
  __int64 v42; // rax
  __int64 v43; // r11
  __int64 v44; // r8
  __int64 v45; // rdx
  __int64 v46; // rax
  ULONG_PTR v47; // rax
  int v48; // r9d
  ULONG_PTR v49; // r15
  ULONG_PTR v50; // r15
  __int64 v51; // rdi
  __int64 v52; // rcx
  _DWORD *v53; // rdx
  ULONG_PTR v54; // rcx
  unsigned __int64 v55; // rdx
  __int64 v56; // r12
  __int64 v57; // r13
  __int64 v58; // r14
  __int64 v59; // rsi
  __int64 v60; // rdi
  __int64 PageForHeader; // rax
  bool v62; // zf
  ULONG_PTR v63; // rcx
  __int16 *v64; // r15
  __int16 v66; // ax
  _QWORD *v67; // r13
  unsigned int v68; // r12d
  BOOL v69; // eax
  int v70; // ecx
  __int64 v71; // rax
  struct _SLIST_ENTRY *v72; // rcx
  PSLIST_ENTRY *v73; // rdx
  int v74; // eax
  char v75; // al
  unsigned __int32 v76; // eax
  __int64 v77; // r15
  __int64 v78; // rdx
  __int64 Page; // rax
  __int64 v80; // r8
  __int64 v81; // r13
  unsigned int PagingFileOffset; // eax
  __int64 v83; // r15
  BOOL IsPteInStore; // r12d
  bool v85; // cc
  __int64 v86; // rcx
  __int64 v87; // rdi
  __int64 v88; // r8
  unsigned __int64 v89; // rdx
  __int64 v90; // rax
  int v91; // ecx
  ULONG_PTR v92; // rax
  volatile signed __int64 *v93; // rdx
  PSLIST_ENTRY v94; // rax
  __int64 v95; // rdx
  __int64 v96; // r8
  __int64 v97; // [rsp+38h] [rbp-D0h]
  unsigned int v98; // [rsp+40h] [rbp-C8h] BYREF
  int v99; // [rsp+44h] [rbp-C4h]
  __int64 v100; // [rsp+48h] [rbp-C0h]
  __int64 v101; // [rsp+50h] [rbp-B8h]
  __int128 v102; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v103; // [rsp+68h] [rbp-A0h]
  unsigned __int64 v104; // [rsp+70h] [rbp-98h] BYREF
  __int64 v105; // [rsp+78h] [rbp-90h]
  int v106; // [rsp+80h] [rbp-88h]
  unsigned int v107; // [rsp+84h] [rbp-84h]
  int v108; // [rsp+88h] [rbp-80h]
  int v109; // [rsp+8Ch] [rbp-7Ch]
  __int64 v110; // [rsp+90h] [rbp-78h]
  struct _SLIST_ENTRY *v111; // [rsp+98h] [rbp-70h]
  int v112; // [rsp+A0h] [rbp-68h]
  int v113; // [rsp+A4h] [rbp-64h]
  int v114; // [rsp+A8h] [rbp-60h]
  unsigned int v115; // [rsp+ACh] [rbp-5Ch]
  _BYTE *v116; // [rsp+B0h] [rbp-58h]
  ULONG_PTR v117; // [rsp+B8h] [rbp-50h]
  unsigned __int64 v118; // [rsp+C0h] [rbp-48h]
  unsigned __int64 v119; // [rsp+C8h] [rbp-40h]
  void *Src; // [rsp+D0h] [rbp-38h]
  int v121; // [rsp+D8h] [rbp-30h]
  unsigned int v122; // [rsp+DCh] [rbp-2Ch]
  __int64 v123; // [rsp+E0h] [rbp-28h]
  __int64 v124; // [rsp+E8h] [rbp-20h]
  ULONG_PTR v125; // [rsp+F0h] [rbp-18h]
  __int128 v126; // [rsp+F8h] [rbp-10h] BYREF
  unsigned __int64 v127; // [rsp+108h] [rbp+0h]
  unsigned __int64 v128; // [rsp+110h] [rbp+8h]
  PSLIST_ENTRY ListEntry; // [rsp+118h] [rbp+10h]
  int v132; // [rsp+188h] [rbp+80h] BYREF
  int v133; // [rsp+190h] [rbp+88h]

  v133 = a4;
  v132 = a3;
  v5 = *(_DWORD *)(a1 + 184);
  v103 = 0LL;
  v6 = a1;
  v115 = *(_DWORD *)(a1 + 188);
  v7 = *(_QWORD *)(a1 + 8);
  v119 = 0LL;
  v102 = 0LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  v9 = *(_WORD *)(v7 + 60) & 0x3FF;
  v104 = 0LL;
  v126 = 0LL;
  v107 = v5;
  v101 = *((_QWORD *)qword_140E2FF88 + v9);
  v97 = 0LL;
  v121 = *(_DWORD *)(v7 + 56) & 8;
  v10 = *(_DWORD *)(v6 + 192) + 1;
  v124 = 0LL;
  v112 = v10;
  LOBYTE(v132) = 17;
  v98 = 0;
  IoPriorityThread = PsGetIoPriorityThread((__int64)KeGetCurrentThread());
  v12 = *(_QWORD *)(v6 + 8);
  v99 = v13;
  v114 = IoPriorityThread;
  v111 = (struct _SLIST_ENTRY *)v13;
  LODWORD(v12) = *(_DWORD *)(v12 + 56);
  LOBYTE(v99) = v14 & 7 | 0x18;
  v15 = (struct _SLIST_ENTRY *)(unsigned int)v13;
  v16 = ((unsigned int)v12 >> 20) & 0x7F;
  v122 = v16;
  MiInitializePageColorBase(&Process[2].ReadyListHead.Blink, (unsigned int)(v13 + 3), v16, &v126);
  v17 = *(_QWORD *)(v6 + 224);
  v18 = (DWORD2(v126) >> 9) & 0x3F;
  v127 = v6 + 224;
  v113 = v18;
  v105 = v17;
  if ( v17 == v6 + 224 )
    goto LABEL_72;
  v19 = v99;
  do
  {
    v20 = (unsigned __int64)&qword_140E37338;
    ListEntry = (PSLIST_ENTRY)v17;
    if ( v114 < 2 )
    {
      v21 = *(_DWORD *)(v17 + 192) | 0x200;
      goto LABEL_6;
    }
    if ( (*(_DWORD *)(v6 + 208) & 1) != 0 )
    {
      v21 = *(_DWORD *)(v17 + 192) | 0x80;
LABEL_6:
      *(_DWORD *)(v17 + 192) = v21;
    }
    v22 = *(_QWORD **)(v17 + 240);
    v23 = 0LL;
    v24 = 0LL;
    v25 = *(_QWORD *)(v17 + 200) + 8LL;
    v116 = v22;
    v128 = v25;
    *(_QWORD *)(v17 + 240) = *v22 & 0xFFFFFFFFFFFFFFFCuLL;
    v118 = *v22 & 0xFFFFFFFFFFFFFFFCuLL;
    Src = *(void **)(v17 + 256);
    v26 = (__int64 *)((char *)Src + 48);
    v27 = (((*((_DWORD *)Src + 8) + *((_DWORD *)Src + 11)) & 0xFFF)
         + (unsigned __int64)*((unsigned int *)Src + 10)
         + 4095) >> 12;
    if ( v27 >= 2 )
    {
      if ( v26 > &qword_140E37338 || &v26[(unsigned int)(v27 - 1)] < &qword_140E37338 )
      {
        v55 = v27 & 0xFFFFFFFFFFFFFFFEuLL;
        do
          v24 = (unsigned int)(v24 + 2);
        while ( (unsigned int)v24 < v55 );
        v20 = 8 * v55;
        memset64(v26, qword_140E37338, v20 >> 3);
        v26 = (__int64 *)((char *)v26 + v20);
        v22 = v116;
      }
      v23 = 0LL;
    }
    if ( (unsigned int)v24 < v27 )
    {
      do
      {
        v24 = (unsigned int)(v24 + 1);
        *v26++ = qword_140E37338;
      }
      while ( (unsigned int)v24 < v27 );
      v23 = 0LL;
    }
    v109 = 0;
    v117 = 0LL;
    if ( !v15 )
    {
      v28 = MiGetInPageSupportBlock(0, a5);
      v23 = 0LL;
      v111 = v28;
      if ( v28 )
      {
        v29 = v115;
        v30 = v107;
        *((_QWORD *)&v28[15].Next + 1) = 0LL;
        MiSetInPagePriority(v28, v29, v30);
      }
    }
    while ( (unsigned __int64)v22 < v25 )
    {
      v31 = *v22 & 0xFFFFFFFFFFFFFFFCuLL;
      v125 = v31;
      v32 = v31 >> 9;
      v123 = v23;
      if ( v97 )
      {
        v33 = (v32 & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        if ( v124 == v33 )
          goto LABEL_17;
        LOBYTE(v33) = v132;
        MiUnlockProtoPoolPage(v97, v33, v24);
      }
      v124 = (v32 & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v97 = MiLockProtoPoolPageForce(v31, (unsigned __int8 *)&v132);
LABEL_17:
      v34 = MiLockLeafPage(v31, 2LL, v24, v26);
      v35 = *(_QWORD *)v31;
      v23 = 0LL;
      v110 = *(_QWORD *)v31;
      v36 = v34;
      if ( v34 )
      {
        MiUpdatePfnPriority(v34, v107, 0LL);
        _InterlockedAnd64((volatile signed __int64 *)(v36 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_58:
        v23 = 0LL;
        goto LABEL_42;
      }
      if ( (v35 & 0x400) != 0 )
      {
        v37 = v35;
        if ( qword_140E2DB80 )
        {
          if ( (v35 & 0x10) != 0 )
            v37 = v35 & 0xFFFFFFFFFFFFFFEFuLL;
          else
            v37 = v35 & ~qword_140E2DB80;
        }
        v38 = v37 >> 16;
        v123 = v38;
        v106 = 1;
        LOBYTE(v24) = *(_BYTE *)(*(_QWORD *)(a1 + 8) + 62LL) & 0xC;
        if ( (_BYTE)v24 == 4 )
        {
          LOBYTE(v20) = v132;
          MiUnlockProtoPoolPage(v97, v20, v24);
          v97 = 0LL;
          v74 = MiRefillPurgedExtents(v38);
          v23 = 0LL;
          if ( v74 < 0 )
            goto LABEL_107;
          goto LABEL_42;
        }
        if ( (_BYTE)v24 == 8 )
          goto LABEL_42;
      }
      else
      {
        v106 = 2;
        if ( (v35 & 1) == 0 )
        {
          v66 = v35;
          if ( qword_140E2DB80 )
          {
            if ( (v35 & 0x10) != 0 )
              v66 = v35 & 0xFFEF;
            else
              v66 = v35 & ~(_WORD)qword_140E2DB80;
          }
          if ( (v66 & 0x400) == 0 && (v66 & 0x800) == 0 && (v66 & 4) == 0 )
            goto LABEL_42;
        }
        if ( !v111 )
          goto LABEL_42;
      }
      v100 = 0LL;
      v103 = 0LL;
      v102 = 0LL;
      if ( !v117 )
      {
        v52 = (__int64)(v31 - v118) >> 3;
        if ( v52 )
        {
          v53 = Src;
          v118 = v31;
          *((_WORD *)Src + 4) += -8 * v52;
          v53[10] += -4096 * v52;
          *(_QWORD *)(v17 + 96) += v52 << 12;
          *(_QWORD *)(v17 + 240) = v31;
        }
LABEL_26:
        v39 = v102;
        goto LABEL_27;
      }
      if ( !v121 )
        goto LABEL_26;
      v56 = ((__int64)(v31 - v117) >> 3) - 1;
      if ( !v56 )
        goto LABEL_26;
      if ( !(unsigned int)MiPrefetchPagesViable(v101, a2, v112, v56, 0) )
        break;
      v57 = *((_QWORD *)&v102 + 1);
      LODWORD(v20) = 1;
      v39 = v102;
      v58 = 0LL;
      v59 = v100;
      v60 = v101;
      while ( 1 )
      {
        PageForHeader = MiGetPageForHeader(v60, v16, (unsigned int)v20);
        v104 = PageForHeader;
        if ( PageForHeader == -1 )
          break;
        *(_QWORD *)&v102 = 48 * PageForHeader - 0x220000000000LL;
        if ( !v57 )
          v57 = 48 * PageForHeader - 0x220000000000LL;
        v20 = 1LL;
        *(_QWORD *)(48 * PageForHeader - 0x220000000000LL) = v39;
        ++v59;
        *((_QWORD *)&v102 + 1) = v57;
        ++v58;
        v103 = v59;
        v39 = 48 * PageForHeader - 0x220000000000LL;
        if ( v58 == v56 )
          goto LABEL_66;
      }
      v20 = 1LL;
LABEL_66:
      v35 = v110;
      v62 = v58 == v56;
      v19 = v99;
      v100 = v59;
      v18 = v113;
      if ( !v62 )
      {
        while ( 1 )
        {
          v63 = v39;
          if ( !v39 )
            break;
          v39 = *(_QWORD *)v39;
          *(_QWORD *)&v102 = v39;
          *((_QWORD *)&v102 + 1) &= -(__int64)(--v103 != 0);
          MiReturnPfnReferenceCountAtDpc(v63, 1LL, v24);
          v20 = 1LL;
        }
        goto LABEL_120;
      }
LABEL_27:
      v108 = 0;
      if ( v106 == 1 && (unsigned int)MiUseSlabAllocator(v101, v123, v35, v18, (__int64)&v98) && v98 <= 4 )
      {
        v40 = a1 + 8 * (3LL * v98 + 8);
        v41 = a1 + 40;
      }
      else
      {
        v40 = a1 + 40;
        v41 = a1 + 40;
      }
      v42 = MiUnlinkPageChainHead(v40);
      v110 = v42;
      v44 = v42;
      if ( v42 )
      {
        v45 = v42;
        v46 = v100;
        v104 = 0xAAAAAAAAAAAAAAABuLL * ((v45 + 0x220000000000LL) >> 4);
      }
      else
      {
        if ( !(unsigned int)MiPrefetchPagesViable(v101, a2, v112, 1, 1) )
        {
          while ( 1 )
          {
            v54 = v39;
            if ( !v39 )
              break;
            v39 = *(_QWORD *)v39;
            *(_QWORD *)&v102 = v39;
            *((_QWORD *)&v102 + 1) &= -(__int64)(--v103 != 0);
            MiReturnPfnReferenceCountAtDpc(v54, v20, v24);
          }
          goto LABEL_120;
        }
        v76 = _InterlockedExchangeAdd((volatile signed __int32 *)v126, 1u);
        v77 = v101;
        v78 = DWORD2(v126) ^ (unsigned int)(unsigned __int8)(BYTE8(v126) ^ (v76
                                                                          % dword_140E2DBC0[(*((_QWORD *)&v126 + 1) >> 16) & 3LL]));
        if ( v40 == v41 )
        {
          v80 = 49LL;
          if ( (*v116 & 1) == 0 )
            v80 = 1LL;
          Page = MiGetPage(v101, v78, v80);
        }
        else
        {
          Page = MiGetSlabPage(v101, v98, v78, 20, 0LL, 0);
        }
        v104 = Page;
        if ( Page == -1 )
        {
          MiReturnFaultCharges(v77, 1LL, 1LL);
          MiReleasePrefetchGapPages(&v102);
LABEL_120:
          v17 = v105;
          break;
        }
        v39 = v102;
        v44 = 48 * Page - 0x220000000000LL;
        v46 = v103;
        v43 = 0LL;
        v110 = v44;
      }
      if ( v46 )
      {
        v67 = (char *)Src + 8 * ((__int64)(v117 - v118) >> 3) + 56;
        while ( v39 )
        {
          v68 = v43;
          *(_QWORD *)&v102 = *(_QWORD *)v39;
          *((_QWORD *)&v102 + 1) &= -(__int64)(--v103 != 0);
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v39 + 24), 0x3FuLL) )
          {
            do
            {
              if ( (++v68 & HvlLongSpinCountMask) == 0
                && (HvlEnlightenments & 0x40) != 0
                && (v75 = KiCheckVpBackingLongSpinWaitHypercall(), v43 = 0LL, v75) )
              {
                HvlNotifyLongSpinWait(v68);
                v43 = 0LL;
              }
              else
              {
                _mm_pause();
              }
            }
            while ( *(__int64 *)(v39 + 24) < 0 );
          }
          *(_QWORD *)(v39 + 8) = -3LL;
          LODWORD(v100) = *(_DWORD *)(v39 + 32);
          BYTE2(v100) |= 7u;
          *(_DWORD *)(v39 + 32) = v100;
          LODWORD(v100) = *(_DWORD *)(v39 + 32);
          BYTE2(v100) |= 0x20u;
          *(_DWORD *)(v39 + 32) = v100;
          *(_QWORD *)v39 = v43;
          _InterlockedAnd64((volatile signed __int64 *)(v39 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          *v67++ = 0xAAAAAAAAAAAAAAABuLL * ((v39 + 0x220000000000LL) >> 4);
          v39 = v102;
        }
        v16 = v122;
        v18 = v113;
        v19 = v99;
        v44 = v110;
      }
      v47 = v117;
      v48 = v106;
      v49 = v125;
      if ( v106 == 1 )
        v47 = v125;
      v117 = v47;
      if ( (*v116 & 1) != 0 )
      {
        v69 = MiPfnZeroingNeeded(v44, 1);
        v70 = v108;
        if ( v69 )
          v70 = 1;
        v108 = v70;
      }
      if ( v48 == 1 )
      {
        v17 = v105;
        if ( *(_QWORD *)(v105 + 248) == v43 )
          *(_QWORD *)(v105 + 248) = v44;
        ++v109;
        MiInitializeReadInProgressPfn(-1, (unsigned int)&v104, 1, v49, v17, v19);
        MiReferenceControlAreaPfn(*(_QWORD *)(a1 + 8), v123, 1u);
        v23 = 0LL;
        *((_QWORD *)Src + ((__int64)(v49 - v118) >> 3) + 6) = v104;
        v50 = v97;
        if ( *(_QWORD *)(v17 + 160) )
        {
          v51 = v110;
        }
        else
        {
          MiObtainProtoReference(v97, 0);
          v51 = v110;
          v23 = 0LL;
          *(_QWORD *)(v17 + 160) = v97;
        }
      }
      else
      {
        MiReturnCommit(v101, 1LL, 0);
        v81 = (__int64)v111;
        MiInitializeReadInProgressPfn(-1, (unsigned int)&v104, 1, v49, (__int64)v111, v19);
        PagingFileOffset = MiGetPagingFileOffset(v35);
        v83 = PagingFileOffset;
        LODWORD(v119) = PagingFileOffset;
        IsPteInStore = MiIsPteInStore(v101, v35);
        v85 = v114 < 2;
        v87 = *(_QWORD *)(v86 + 8LL * ((unsigned __int16)v35 >> 12) + 18528);
        *(_QWORD *)(v81 + 256) = v81 + 272;
        if ( v85 )
          *(_DWORD *)(v81 + 192) |= 0x200u;
        *(_DWORD *)(v81 + 280) = 56;
        *(_QWORD *)(v81 + 272) = 0LL;
        *(_QWORD *)(v81 + 304) = 0LL;
        *(_QWORD *)(v81 + 312) = 4096LL;
        *(_WORD *)(v81 + 282) |= 0x4042u;
        *(_QWORD *)(v81 + 320) = v104;
        MiObtainProtoReference(v97, 0);
        v89 = v127;
        *(_QWORD *)(v81 + 160) = v97;
        v90 = *(_QWORD *)v89;
        if ( *(_QWORD *)(*(_QWORD *)v89 + 8LL) != v89 )
          goto LABEL_110;
        *(_QWORD *)v81 = v90;
        *(_QWORD *)(v81 + 8) = v89;
        *(_QWORD *)(v90 + 8) = v81;
        *(_QWORD *)v89 = v81;
        LOBYTE(v89) = v132;
        ++*(_DWORD *)(a1 + 212);
        MiUnlockProtoPoolPage(v97, v89, v88);
        *(_QWORD *)(v81 + 224) = 0LL;
        v91 = *(_DWORD *)(v81 + 192);
        v97 = 0LL;
        if ( IsPteInStore )
        {
          *(_QWORD *)(v81 + 96) = v83;
          v91 |= 0x400u;
        }
        else
        {
          v119 = (unsigned __int64)(unsigned int)v119 << 12;
          *(_QWORD *)(v81 + 96) = v119;
        }
        v92 = v125;
        v93 = a5;
        *(_QWORD *)(v81 + 200) = v87;
        v51 = v110;
        *(_DWORD *)(v81 + 192) = v91 | 0x400000;
        *(_QWORD *)(v81 + 240) = v92;
        *(_QWORD *)(v81 + 248) = v51;
        v94 = MiGetInPageSupportBlock(0, v93);
        v23 = 0LL;
        v111 = v94;
        if ( v94 )
        {
          v95 = v115;
          v96 = v107;
          *((_QWORD *)&v94[15].Next + 1) = 0LL;
          MiSetInPagePriority(v94, v95, v96);
        }
        v17 = v105;
        v50 = v23;
      }
      if ( v108 != (_DWORD)v23 )
      {
        if ( v50 )
        {
          LOBYTE(v20) = v132;
          MiUnlockProtoPoolPage(v50, v20, v24);
          v97 = 0LL;
        }
        MiZeroPhysicalPage(0LL, v104, 0, (unsigned __int8)BYTE2(*(_DWORD *)(v51 + 32)) >> 6);
        goto LABEL_58;
      }
LABEL_42:
      v25 = v128;
      v22 = v116 + 8;
      v116 += 8;
    }
    if ( v97 )
    {
      LOBYTE(v20) = v132;
      MiUnlockProtoPoolPage(v97, v20, v24);
      v97 = 0LL;
    }
LABEL_107:
    if ( v109 )
    {
      v64 = (__int16 *)Src;
      MiReduceMdl(Src);
      if ( v64 != (__int16 *)(v17 + 272) && *((_DWORD *)v64 + 10) <= 0x10000u )
      {
        memmove((void *)(v17 + 272), v64, v64[4]);
        ExFreePoolWithTag(v64, 0);
        *(_QWORD *)(v17 + 256) = v17 + 272;
      }
      v17 = *(_QWORD *)v17;
      v6 = a1;
      v105 = v17;
    }
    else
    {
      v71 = *(_QWORD *)v17;
      v72 = ListEntry;
      v17 = v71;
      v105 = v71;
      if ( *(PSLIST_ENTRY *)(v71 + 8) != ListEntry
        || (v73 = (PSLIST_ENTRY *)*((_QWORD *)&ListEntry->Next + 1), *v73 != ListEntry) )
      {
LABEL_110:
        __fastfail(3u);
      }
      v6 = a1;
      *v73 = (PSLIST_ENTRY)v71;
      *(_QWORD *)(v71 + 8) = v73;
      --*(_DWORD *)(a1 + 212);
      MiFreeInPageSupportBlock(v72);
    }
    v15 = v111;
  }
  while ( v17 != v6 + 224 );
LABEL_72:
  MiFreeReadListPages(v6);
  if ( v15 )
    MiFreeInPageSupportBlock(v15);
  return 0LL;
}
