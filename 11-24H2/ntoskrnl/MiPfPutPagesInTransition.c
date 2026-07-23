/*
 * XREFs of MiPfPutPagesInTransition @ 0x140347F6C
 * Callers:
 *     MmPrefetchPagesEx @ 0x140938DE0 (MmPrefetchPagesEx.c)
 *     MmPrefetchForCacheManager @ 0x140939B54 (MmPrefetchForCacheManager.c)
 *     MiPrefetchControlArea @ 0x14093AC84 (MiPrefetchControlArea.c)
 * Callees:
 *     MiGetSlabPage @ 0x14021CE24 (MiGetSlabPage.c)
 *     PsGetIoPriorityThread @ 0x14022BEB0 (PsGetIoPriorityThread.c)
 *     MiZeroPhysicalPage @ 0x14024B990 (MiZeroPhysicalPage.c)
 *     MiInitializeReadInProgressPfn @ 0x1402558FC (MiInitializeReadInProgressPfn.c)
 *     MiUnlockProtoPoolPage @ 0x14029C7F0 (MiUnlockProtoPoolPage.c)
 *     MiReturnCommit @ 0x14029EB80 (MiReturnCommit.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiLockProtoPoolPageForce @ 0x140333E20 (MiLockProtoPoolPageForce.c)
 *     MiGetPage @ 0x14033BF40 (MiGetPage.c)
 *     MiGetPagingFileOffset @ 0x140341C00 (MiGetPagingFileOffset.c)
 *     MiInitializePageColorBase @ 0x140342940 (MiInitializePageColorBase.c)
 *     MiObtainProtoReference @ 0x14034594C (MiObtainProtoReference.c)
 *     MiReturnPfnReferenceCountAtDpc @ 0x140347E90 (MiReturnPfnReferenceCountAtDpc.c)
 *     MiReferenceControlAreaPfn @ 0x140347F04 (MiReferenceControlAreaPfn.c)
 *     MiLockLeafPage @ 0x140349740 (MiLockLeafPage.c)
 *     MiUnlinkPageChainHead @ 0x140349AD0 (MiUnlinkPageChainHead.c)
 *     MiUseSlabAllocator @ 0x140349AF8 (MiUseSlabAllocator.c)
 *     MiPfnZeroingNeeded @ 0x1403934B0 (MiPfnZeroingNeeded.c)
 *     MiGetInPageSupportBlock @ 0x1403DC710 (MiGetInPageSupportBlock.c)
 *     MiUpdatePfnPriority @ 0x1403DCE10 (MiUpdatePfnPriority.c)
 *     MiGetPageForHeader @ 0x1403F2A54 (MiGetPageForHeader.c)
 *     MiIsPteInStore @ 0x140423310 (MiIsPteInStore.c)
 *     MiFreeInPageSupportBlock @ 0x140427430 (MiFreeInPageSupportBlock.c)
 *     MiRefillPurgedExtents @ 0x1404276E4 (MiRefillPurgedExtents.c)
 *     MiReduceMdl @ 0x14043D420 (MiReduceMdl.c)
 *     MiPrefetchPagesViable @ 0x140449280 (MiPrefetchPagesViable.c)
 *     MiSetInPagePriority @ 0x14046393C (MiSetInPagePriority.c)
 *     MiReturnFaultCharges @ 0x14047CD94 (MiReturnFaultCharges.c)
 *     MiReleasePrefetchGapPages @ 0x14048C0E4 (MiReleasePrefetchGapPages.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     MiFreeReadListPages @ 0x140939A40 (MiFreeReadListPages.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiPfPutPagesInTransition(__int64 a1, int a2, int a3, int a4, __int64 a5)
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
  _SLIST_ENTRY *v15; // r15
  unsigned int v16; // ebx
  __int64 v17; // r13
  int v18; // esi
  char v19; // r14
  unsigned __int64 v20; // rdx
  int v21; // eax
  _QWORD *v22; // rdi
  __int64 v23; // r11
  __int64 v24; // r8
  unsigned __int64 v25; // r12
  __int64 *v26; // r9
  unsigned __int64 v27; // r10
  __int64 v28; // rax
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
  unsigned __int64 *v47; // rax
  int v48; // r9d
  unsigned __int64 *v49; // r15
  __int64 v50; // r15
  __int64 v51; // rdi
  __int64 v52; // rcx
  _DWORD *v53; // rdx
  __int64 v54; // rcx
  unsigned __int64 v55; // rdx
  __int64 v56; // r12
  __int64 v57; // r13
  __int64 v58; // r14
  __int64 v59; // rsi
  __int64 v60; // rdi
  __int64 PageForHeader; // rax
  bool v62; // zf
  __int64 v63; // rcx
  __int16 *v64; // r15
  __int16 v66; // ax
  _QWORD *v67; // r13
  unsigned int v68; // r12d
  int v69; // eax
  int v70; // ecx
  __int64 v71; // rax
  _SLIST_ENTRY *v72; // rcx
  PSLIST_ENTRY *v73; // rdx
  int v74; // eax
  char v75; // al
  unsigned __int32 v76; // eax
  __int64 v77; // r15
  unsigned int v78; // edx
  __int64 Page; // rax
  unsigned int v80; // r8d
  __int64 v81; // r13
  unsigned int PagingFileOffset; // eax
  __int64 v83; // r15
  int IsPteInStore; // r12d
  bool v85; // cc
  __int64 v86; // rcx
  __int64 v87; // rdi
  __int64 v88; // r8
  __int64 v89; // r9
  unsigned __int64 v90; // rdx
  __int64 v91; // rax
  int v92; // ecx
  unsigned __int64 *v93; // rax
  __int64 v94; // rdx
  __int64 v95; // rax
  __int64 v96; // rdx
  __int64 v97; // r8
  __int64 v98; // [rsp+38h] [rbp-D0h]
  unsigned int v99; // [rsp+40h] [rbp-C8h] BYREF
  int v100; // [rsp+44h] [rbp-C4h]
  __int64 v101; // [rsp+48h] [rbp-C0h]
  __int64 v102; // [rsp+50h] [rbp-B8h]
  __int128 v103; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v104; // [rsp+68h] [rbp-A0h]
  unsigned __int64 v105; // [rsp+70h] [rbp-98h] BYREF
  __int64 v106; // [rsp+78h] [rbp-90h]
  int v107; // [rsp+80h] [rbp-88h]
  unsigned int v108; // [rsp+84h] [rbp-84h]
  int v109; // [rsp+88h] [rbp-80h]
  int v110; // [rsp+8Ch] [rbp-7Ch]
  __int64 v111; // [rsp+90h] [rbp-78h]
  _SLIST_ENTRY *v112; // [rsp+98h] [rbp-70h]
  int v113; // [rsp+A0h] [rbp-68h]
  int v114; // [rsp+A4h] [rbp-64h]
  int v115; // [rsp+A8h] [rbp-60h]
  unsigned int v116; // [rsp+ACh] [rbp-5Ch]
  _BYTE *v117; // [rsp+B0h] [rbp-58h]
  unsigned __int64 *v118; // [rsp+B8h] [rbp-50h]
  unsigned __int64 v119; // [rsp+C0h] [rbp-48h]
  unsigned __int64 v120; // [rsp+C8h] [rbp-40h]
  void *Src; // [rsp+D0h] [rbp-38h]
  int v122; // [rsp+D8h] [rbp-30h]
  unsigned int v123; // [rsp+DCh] [rbp-2Ch]
  __int64 v124; // [rsp+E0h] [rbp-28h]
  __int64 v125; // [rsp+E8h] [rbp-20h]
  unsigned __int64 *v126; // [rsp+F0h] [rbp-18h]
  __int128 v127; // [rsp+F8h] [rbp-10h] BYREF
  unsigned __int64 v128; // [rsp+108h] [rbp+0h]
  unsigned __int64 v129; // [rsp+110h] [rbp+8h]
  PSLIST_ENTRY ListEntry; // [rsp+118h] [rbp+10h]
  int v133; // [rsp+188h] [rbp+80h] BYREF
  int v134; // [rsp+190h] [rbp+88h]

  v134 = a4;
  v133 = a3;
  v5 = *(_DWORD *)(a1 + 184);
  v104 = 0LL;
  v6 = a1;
  v116 = *(_DWORD *)(a1 + 188);
  v7 = *(_QWORD *)(a1 + 8);
  v120 = 0LL;
  v103 = 0LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  v9 = *(_WORD *)(v7 + 60) & 0x3FF;
  v105 = 0LL;
  v127 = 0LL;
  v108 = v5;
  v102 = *((_QWORD *)qword_140E300C8 + v9);
  v98 = 0LL;
  v122 = *(_DWORD *)(v7 + 56) & 8;
  v10 = *(_DWORD *)(v6 + 192) + 1;
  v125 = 0LL;
  v113 = v10;
  LOBYTE(v133) = 17;
  v99 = 0;
  IoPriorityThread = PsGetIoPriorityThread((__int64)KeGetCurrentThread());
  v12 = *(_QWORD *)(v6 + 8);
  v100 = v13;
  v115 = IoPriorityThread;
  v112 = (_SLIST_ENTRY *)v13;
  LODWORD(v12) = *(_DWORD *)(v12 + 56);
  LOBYTE(v100) = v14 & 7 | 0x18;
  v15 = (_SLIST_ENTRY *)(unsigned int)v13;
  v16 = ((unsigned int)v12 >> 20) & 0x7F;
  v123 = v16;
  MiInitializePageColorBase((__int64)&Process[2].ReadyListHead.Blink, v13 + 3, v16, (__int64)&v127);
  v17 = *(_QWORD *)(v6 + 224);
  v18 = (DWORD2(v127) >> 9) & 0x3F;
  v128 = v6 + 224;
  v114 = v18;
  v106 = v17;
  if ( v17 == v6 + 224 )
    goto LABEL_72;
  v19 = v100;
  do
  {
    v20 = (unsigned __int64)&qword_140E37478;
    ListEntry = (PSLIST_ENTRY)v17;
    if ( v115 < 2 )
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
    v117 = v22;
    v129 = v25;
    *(_QWORD *)(v17 + 240) = *v22 & 0xFFFFFFFFFFFFFFFCuLL;
    v119 = *v22 & 0xFFFFFFFFFFFFFFFCuLL;
    Src = *(void **)(v17 + 256);
    v26 = (__int64 *)((char *)Src + 48);
    v27 = (((*((_DWORD *)Src + 8) + *((_DWORD *)Src + 11)) & 0xFFF)
         + (unsigned __int64)*((unsigned int *)Src + 10)
         + 4095) >> 12;
    if ( v27 >= 2 )
    {
      if ( v26 > &qword_140E37478 || &v26[(unsigned int)(v27 - 1)] < &qword_140E37478 )
      {
        v55 = v27 & 0xFFFFFFFFFFFFFFFEuLL;
        do
          v24 = (unsigned int)(v24 + 2);
        while ( (unsigned int)v24 < v55 );
        v20 = 8 * v55;
        memset64(v26, qword_140E37478, v20 >> 3);
        v26 = (__int64 *)((char *)v26 + v20);
        v22 = v117;
      }
      v23 = 0LL;
    }
    if ( (unsigned int)v24 < v27 )
    {
      do
      {
        v24 = (unsigned int)(v24 + 1);
        *v26++ = qword_140E37478;
      }
      while ( (unsigned int)v24 < v27 );
      v23 = 0LL;
    }
    v110 = 0;
    v118 = 0LL;
    if ( !v15 )
    {
      v28 = MiGetInPageSupportBlock(0LL, a5);
      v23 = 0LL;
      v112 = (_SLIST_ENTRY *)v28;
      if ( v28 )
      {
        v29 = v116;
        v30 = v108;
        *(_QWORD *)(v28 + 248) = 0LL;
        MiSetInPagePriority(v28, v29, v30);
      }
    }
    while ( (unsigned __int64)v22 < v25 )
    {
      v31 = *v22 & 0xFFFFFFFFFFFFFFFCuLL;
      v126 = (unsigned __int64 *)v31;
      v32 = v31 >> 9;
      v124 = v23;
      if ( v98 )
      {
        v33 = (v32 & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        if ( v125 == v33 )
          goto LABEL_17;
        LOBYTE(v33) = v133;
        MiUnlockProtoPoolPage(v98, v33, v24, (__int64)v26);
      }
      v125 = (v32 & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v98 = MiLockProtoPoolPageForce(v31, (unsigned __int8 *)&v133);
LABEL_17:
      v34 = MiLockLeafPage(v31, 2LL, v24, v26);
      v35 = *(_QWORD *)v31;
      v23 = 0LL;
      v111 = *(_QWORD *)v31;
      v36 = v34;
      if ( v34 )
      {
        MiUpdatePfnPriority(v34, v108, 0LL);
        _InterlockedAnd64((volatile signed __int64 *)(v36 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_58:
        v23 = 0LL;
        goto LABEL_42;
      }
      if ( (v35 & 0x400) != 0 )
      {
        v37 = v35;
        if ( qword_140E2DCC0 )
        {
          if ( (v35 & 0x10) != 0 )
            v37 = v35 & 0xFFFFFFFFFFFFFFEFuLL;
          else
            v37 = v35 & ~qword_140E2DCC0;
        }
        v38 = v37 >> 16;
        v124 = v38;
        v107 = 1;
        LOBYTE(v24) = *(_BYTE *)(*(_QWORD *)(a1 + 8) + 62LL) & 0xC;
        if ( (_BYTE)v24 == 4 )
        {
          LOBYTE(v20) = v133;
          MiUnlockProtoPoolPage(v98, v20, v24, (__int64)v26);
          v98 = 0LL;
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
        v107 = 2;
        if ( (v35 & 1) == 0 )
        {
          v66 = v35;
          if ( qword_140E2DCC0 )
          {
            if ( (v35 & 0x10) != 0 )
              v66 = v35 & 0xFFEF;
            else
              v66 = v35 & ~(_WORD)qword_140E2DCC0;
          }
          if ( (v66 & 0x400) == 0 && (v66 & 0x800) == 0 && (v66 & 4) == 0 )
            goto LABEL_42;
        }
        if ( !v112 )
          goto LABEL_42;
      }
      v101 = 0LL;
      v104 = 0LL;
      v103 = 0LL;
      if ( !v118 )
      {
        v52 = (__int64)(v31 - v119) >> 3;
        if ( v52 )
        {
          v53 = Src;
          v119 = v31;
          *((_WORD *)Src + 4) += -8 * v52;
          v53[10] += -4096 * v52;
          *(_QWORD *)(v17 + 96) += v52 << 12;
          *(_QWORD *)(v17 + 240) = v31;
        }
LABEL_26:
        v39 = v103;
        goto LABEL_27;
      }
      if ( !v122 )
        goto LABEL_26;
      v56 = ((__int64)(v31 - (_QWORD)v118) >> 3) - 1;
      if ( !v56 )
        goto LABEL_26;
      if ( !(unsigned int)MiPrefetchPagesViable(v102, a2, v113, v56, 0) )
        break;
      v57 = *((_QWORD *)&v103 + 1);
      LODWORD(v20) = 1;
      v39 = v103;
      v58 = 0LL;
      v59 = v101;
      v60 = v102;
      while ( 1 )
      {
        PageForHeader = MiGetPageForHeader(v60, v16, (unsigned int)v20);
        v105 = PageForHeader;
        if ( PageForHeader == -1 )
          break;
        *(_QWORD *)&v103 = 48 * PageForHeader - 0x220000000000LL;
        if ( !v57 )
          v57 = 48 * PageForHeader - 0x220000000000LL;
        v20 = 1LL;
        *(_QWORD *)(48 * PageForHeader - 0x220000000000LL) = v39;
        ++v59;
        *((_QWORD *)&v103 + 1) = v57;
        ++v58;
        v104 = v59;
        v39 = 48 * PageForHeader - 0x220000000000LL;
        if ( v58 == v56 )
          goto LABEL_66;
      }
      v20 = 1LL;
LABEL_66:
      v35 = v111;
      v62 = v58 == v56;
      v19 = v100;
      v101 = v59;
      v18 = v114;
      if ( !v62 )
      {
        while ( 1 )
        {
          v63 = v39;
          if ( !v39 )
            break;
          v39 = *(_QWORD *)v39;
          *(_QWORD *)&v103 = v39;
          *((_QWORD *)&v103 + 1) &= -(__int64)(--v104 != 0);
          MiReturnPfnReferenceCountAtDpc(v63, 1LL, v24, (__int64)v26);
          v20 = 1LL;
        }
        goto LABEL_120;
      }
LABEL_27:
      v109 = 0;
      if ( v107 == 1 && (unsigned int)MiUseSlabAllocator(v102, v124, v35, v18, (__int64)&v99) && v99 <= 4 )
      {
        v40 = a1 + 8 * (3LL * v99 + 8);
        v41 = a1 + 40;
      }
      else
      {
        v40 = a1 + 40;
        v41 = a1 + 40;
      }
      v42 = MiUnlinkPageChainHead(v40);
      v111 = v42;
      v44 = v42;
      if ( v42 )
      {
        v45 = v42;
        v46 = v101;
        v105 = 0xAAAAAAAAAAAAAAABuLL * ((v45 + 0x220000000000LL) >> 4);
      }
      else
      {
        if ( !(unsigned int)MiPrefetchPagesViable(v102, a2, v113, 1, 1) )
        {
          while ( 1 )
          {
            v54 = v39;
            if ( !v39 )
              break;
            v39 = *(_QWORD *)v39;
            *(_QWORD *)&v103 = v39;
            *((_QWORD *)&v103 + 1) &= -(__int64)(--v104 != 0);
            MiReturnPfnReferenceCountAtDpc(v54, v20, v24, (__int64)v26);
          }
          goto LABEL_120;
        }
        v76 = _InterlockedExchangeAdd((volatile signed __int32 *)v127, 1u);
        v77 = v102;
        v78 = DWORD2(v127) ^ (unsigned __int8)(BYTE8(v127) ^ (v76 % dword_140E2DD00[(*((_QWORD *)&v127 + 1) >> 16) & 3LL]));
        if ( v40 == v41 )
        {
          v80 = 49;
          if ( (*v117 & 1) == 0 )
            v80 = 1;
          Page = MiGetPage(v102, v78, v80);
        }
        else
        {
          Page = MiGetSlabPage(v102, v99, v78, 0x14u, 0LL, 0);
        }
        v105 = Page;
        if ( Page == -1 )
        {
          MiReturnFaultCharges(v77, 1LL, 1LL);
          MiReleasePrefetchGapPages(&v103);
LABEL_120:
          v17 = v106;
          break;
        }
        v39 = v103;
        v44 = 48 * Page - 0x220000000000LL;
        v46 = v104;
        v43 = 0LL;
        v111 = v44;
      }
      if ( v46 )
      {
        v67 = (char *)Src + 8 * ((__int64)((__int64)v118 - v119) >> 3) + 56;
        while ( v39 )
        {
          v68 = v43;
          *(_QWORD *)&v103 = *(_QWORD *)v39;
          *((_QWORD *)&v103 + 1) &= -(__int64)(--v104 != 0);
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
          LODWORD(v101) = *(_DWORD *)(v39 + 32);
          BYTE2(v101) |= 7u;
          *(_DWORD *)(v39 + 32) = v101;
          LODWORD(v101) = *(_DWORD *)(v39 + 32);
          BYTE2(v101) |= 0x20u;
          *(_DWORD *)(v39 + 32) = v101;
          *(_QWORD *)v39 = v43;
          _InterlockedAnd64((volatile signed __int64 *)(v39 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          *v67++ = 0xAAAAAAAAAAAAAAABuLL * ((v39 + 0x220000000000LL) >> 4);
          v39 = v103;
        }
        v16 = v123;
        v18 = v114;
        v19 = v100;
        v44 = v111;
      }
      v47 = v118;
      v48 = v107;
      v49 = v126;
      if ( v107 == 1 )
        v47 = v126;
      v118 = v47;
      if ( (*v117 & 1) != 0 )
      {
        v69 = MiPfnZeroingNeeded(v44, 1LL);
        v70 = v109;
        if ( v69 )
          v70 = 1;
        v109 = v70;
      }
      if ( v48 == 1 )
      {
        v17 = v106;
        if ( *(_QWORD *)(v106 + 248) == v43 )
          *(_QWORD *)(v106 + 248) = v44;
        ++v110;
        MiInitializeReadInProgressPfn(0xFFFFFFFFFFFFFFFFuLL, &v105, 1LL, v49, v17, v19);
        MiReferenceControlAreaPfn(*(_QWORD *)(a1 + 8), v124, 1u);
        v23 = 0LL;
        *((_QWORD *)Src + ((__int64)((__int64)v49 - v119) >> 3) + 6) = v105;
        v50 = v98;
        if ( *(_QWORD *)(v17 + 160) )
        {
          v51 = v111;
        }
        else
        {
          MiObtainProtoReference(v98, 0);
          v51 = v111;
          v23 = 0LL;
          *(_QWORD *)(v17 + 160) = v98;
        }
      }
      else
      {
        MiReturnCommit(v102, 1LL, 0);
        v81 = (__int64)v112;
        MiInitializeReadInProgressPfn(0xFFFFFFFFFFFFFFFFuLL, &v105, 1LL, v49, (__int64)v112, v19);
        PagingFileOffset = MiGetPagingFileOffset(v35);
        v83 = PagingFileOffset;
        LODWORD(v120) = PagingFileOffset;
        IsPteInStore = MiIsPteInStore(v102, v35);
        v85 = v115 < 2;
        v87 = *(_QWORD *)(v86 + 8LL * ((unsigned __int16)v35 >> 12) + 18528);
        *(_QWORD *)(v81 + 256) = v81 + 272;
        if ( v85 )
          *(_DWORD *)(v81 + 192) |= 0x200u;
        *(_DWORD *)(v81 + 280) = 56;
        *(_QWORD *)(v81 + 272) = 0LL;
        *(_QWORD *)(v81 + 304) = 0LL;
        *(_QWORD *)(v81 + 312) = 4096LL;
        *(_WORD *)(v81 + 282) |= 0x4042u;
        *(_QWORD *)(v81 + 320) = v105;
        MiObtainProtoReference(v98, 0);
        v90 = v128;
        *(_QWORD *)(v81 + 160) = v98;
        v91 = *(_QWORD *)v90;
        if ( *(_QWORD *)(*(_QWORD *)v90 + 8LL) != v90 )
          goto LABEL_110;
        *(_QWORD *)v81 = v91;
        *(_QWORD *)(v81 + 8) = v90;
        *(_QWORD *)(v91 + 8) = v81;
        *(_QWORD *)v90 = v81;
        LOBYTE(v90) = v133;
        ++*(_DWORD *)(a1 + 212);
        MiUnlockProtoPoolPage(v98, v90, v88, v89);
        *(_QWORD *)(v81 + 224) = 0LL;
        v92 = *(_DWORD *)(v81 + 192);
        v98 = 0LL;
        if ( IsPteInStore )
        {
          *(_QWORD *)(v81 + 96) = v83;
          v92 |= 0x400u;
        }
        else
        {
          v120 = (unsigned __int64)(unsigned int)v120 << 12;
          *(_QWORD *)(v81 + 96) = v120;
        }
        v93 = v126;
        v94 = a5;
        *(_QWORD *)(v81 + 200) = v87;
        v51 = v111;
        *(_DWORD *)(v81 + 192) = v92 | 0x400000;
        *(_QWORD *)(v81 + 240) = v93;
        *(_QWORD *)(v81 + 248) = v51;
        v95 = MiGetInPageSupportBlock(0LL, v94);
        v23 = 0LL;
        v112 = (_SLIST_ENTRY *)v95;
        if ( v95 )
        {
          v96 = v116;
          v97 = v108;
          *(_QWORD *)(v95 + 248) = 0LL;
          MiSetInPagePriority(v95, v96, v97);
        }
        v17 = v106;
        v50 = v23;
      }
      if ( v109 != (_DWORD)v23 )
      {
        if ( v50 )
        {
          LOBYTE(v20) = v133;
          MiUnlockProtoPoolPage(v50, v20, v24, (__int64)v26);
          v98 = 0LL;
        }
        MiZeroPhysicalPage(0LL, v105, 0, (unsigned __int8)BYTE2(*(_DWORD *)(v51 + 32)) >> 6);
        goto LABEL_58;
      }
LABEL_42:
      v25 = v129;
      v22 = v117 + 8;
      v117 += 8;
    }
    if ( v98 )
    {
      LOBYTE(v20) = v133;
      MiUnlockProtoPoolPage(v98, v20, v24, (__int64)v26);
      v98 = 0LL;
    }
LABEL_107:
    if ( v110 )
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
      v106 = v17;
    }
    else
    {
      v71 = *(_QWORD *)v17;
      v72 = ListEntry;
      v17 = v71;
      v106 = v71;
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
    v15 = v112;
  }
  while ( v17 != v6 + 224 );
LABEL_72:
  MiFreeReadListPages(v6);
  if ( v15 )
    MiFreeInPageSupportBlock(v15);
  return 0LL;
}
