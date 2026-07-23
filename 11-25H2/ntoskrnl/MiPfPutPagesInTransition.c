/*
 * XREFs of MiPfPutPagesInTransition @ 0x14033A50C
 * Callers:
 *     MmPrefetchPagesEx @ 0x1409C8D00 (MmPrefetchPagesEx.c)
 *     MmPrefetchForCacheManager @ 0x1409C9A84 (MmPrefetchForCacheManager.c)
 *     MiPrefetchControlArea @ 0x1409CABB4 (MiPrefetchControlArea.c)
 * Callees:
 *     MiPfnZeroingNeeded @ 0x140224750 (MiPfnZeroingNeeded.c)
 *     MiGetSlabPage @ 0x14022BC70 (MiGetSlabPage.c)
 *     MiGetPage @ 0x14022CE00 (MiGetPage.c)
 *     MiLockProtoPoolPageForce @ 0x140231620 (MiLockProtoPoolPageForce.c)
 *     MiUnlockProtoPoolPage @ 0x1402353A0 (MiUnlockProtoPoolPage.c)
 *     MiInitializePageColorBase @ 0x14023A610 (MiInitializePageColorBase.c)
 *     MiFreeInPageSupportBlock @ 0x14023B4B0 (MiFreeInPageSupportBlock.c)
 *     MiInitializeReadInProgressPfn @ 0x14023B62C (MiInitializeReadInProgressPfn.c)
 *     MiZeroPhysicalPage @ 0x14024D560 (MiZeroPhysicalPage.c)
 *     PsGetIoPriorityThread @ 0x1403031B0 (PsGetIoPriorityThread.c)
 *     MiReturnCommit @ 0x140329900 (MiReturnCommit.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiLockLeafPage @ 0x14033B770 (MiLockLeafPage.c)
 *     MiUnlinkPageChainHead @ 0x14033BAF0 (MiUnlinkPageChainHead.c)
 *     MiUseSlabAllocator @ 0x14033BB18 (MiUseSlabAllocator.c)
 *     MiReturnPfnReferenceCountAtDpc @ 0x14033BC20 (MiReturnPfnReferenceCountAtDpc.c)
 *     MiReferenceControlAreaPfn @ 0x14033BC94 (MiReferenceControlAreaPfn.c)
 *     MiObtainProtoReference @ 0x14033DEAC (MiObtainProtoReference.c)
 *     MiGetPagingFileOffset @ 0x14037C4CC (MiGetPagingFileOffset.c)
 *     MiIsPteInStore @ 0x14037C500 (MiIsPteInStore.c)
 *     MiGetInPageSupportBlock @ 0x140387260 (MiGetInPageSupportBlock.c)
 *     MiUpdatePfnPriority @ 0x140389C80 (MiUpdatePfnPriority.c)
 *     MiReduceMdl @ 0x140447900 (MiReduceMdl.c)
 *     MiPrefetchPagesViable @ 0x140452B14 (MiPrefetchPagesViable.c)
 *     MiGetPageForHeader @ 0x140453C9C (MiGetPageForHeader.c)
 *     MiSetInPagePriority @ 0x14046C6A8 (MiSetInPagePriority.c)
 *     MiRefillPurgedExtents @ 0x14046FCD0 (MiRefillPurgedExtents.c)
 *     MiReturnFaultCharges @ 0x140480970 (MiReturnFaultCharges.c)
 *     MiReleasePrefetchGapPages @ 0x1404921E0 (MiReleasePrefetchGapPages.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     MiFreeReadListPages @ 0x1409C98F0 (MiFreeReadListPages.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiPfPutPagesInTransition(__int64 a1, int a2, int a3, int a4, __int64 a5)
{
  unsigned int v5; // r9d
  __int64 v6; // r13
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
  __int64 v17; // r12
  int v18; // esi
  char v19; // r14
  int v20; // eax
  _QWORD *v21; // rdi
  ULONG_PTR v22; // r11
  __int64 v23; // r8
  unsigned __int64 v24; // r13
  __int64 *v25; // r9
  unsigned __int64 v26; // r10
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // r8
  ULONG_PTR v30; // r13
  ULONG_PTR v31; // rdi
  __int64 v32; // rax
  __int64 v33; // rdi
  __int64 v34; // r15
  __int64 v35; // r15
  ULONG_PTR v36; // r15
  __int64 v37; // r15
  __int64 v38; // r12
  __int64 v39; // r13
  __int64 v40; // rax
  __int64 v41; // r11
  __int64 v42; // r8
  __int64 v43; // rdx
  __int64 v44; // rax
  unsigned __int64 *v45; // rax
  int v46; // r9d
  unsigned __int64 *v47; // r15
  ULONG_PTR v48; // r15
  __int64 v49; // rdi
  __int64 v50; // rcx
  _DWORD *v51; // rdx
  __int64 v52; // rcx
  unsigned __int64 v53; // rdx
  unsigned __int64 v54; // rdx
  __int64 v55; // r12
  __int64 v56; // r13
  __int64 v57; // r14
  __int64 v58; // rsi
  __int64 v59; // rdi
  __int64 PageForHeader; // rax
  bool v61; // zf
  __int16 *v62; // r15
  __int16 v64; // ax
  _QWORD *v65; // r13
  int v66; // r12d
  BOOL v67; // eax
  int v68; // ecx
  int v69; // eax
  __int64 v70; // rax
  _SLIST_ENTRY *v71; // rcx
  PSLIST_ENTRY *v72; // rdx
  char v73; // al
  unsigned __int32 v74; // eax
  __int64 v75; // r15
  unsigned int v76; // edx
  __int64 Page; // rax
  unsigned int v78; // r8d
  __int64 v79; // r13
  unsigned int PagingFileOffset; // eax
  __int64 v81; // r15
  int IsPteInStore; // r12d
  bool v83; // cc
  __int64 v84; // rcx
  __int64 v85; // rdi
  __int64 v86; // r8
  unsigned __int64 v87; // r9
  __int64 *v88; // rdx
  __int64 v89; // rax
  unsigned __int8 v90; // dl
  int v91; // ecx
  unsigned __int64 *v92; // rax
  __int64 v93; // rdx
  __int64 v94; // rax
  __int64 v95; // rdx
  __int64 v96; // r8
  ULONG_PTR v97; // [rsp+38h] [rbp-D0h]
  unsigned int v98; // [rsp+40h] [rbp-C8h] BYREF
  int v99; // [rsp+44h] [rbp-C4h]
  __int64 v100; // [rsp+48h] [rbp-C0h]
  __int64 v101; // [rsp+50h] [rbp-B8h]
  __int64 v102; // [rsp+58h] [rbp-B0h]
  unsigned __int64 v103; // [rsp+60h] [rbp-A8h] BYREF
  __int128 v104; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v105; // [rsp+78h] [rbp-90h]
  int v106; // [rsp+80h] [rbp-88h]
  unsigned int v107; // [rsp+84h] [rbp-84h]
  int v108; // [rsp+88h] [rbp-80h]
  int v109; // [rsp+8Ch] [rbp-7Ch]
  __int64 v110; // [rsp+90h] [rbp-78h]
  _SLIST_ENTRY *v111; // [rsp+98h] [rbp-70h]
  int v112; // [rsp+A0h] [rbp-68h]
  int v113; // [rsp+A4h] [rbp-64h]
  int v114; // [rsp+A8h] [rbp-60h]
  unsigned int v115; // [rsp+ACh] [rbp-5Ch]
  _BYTE *v116; // [rsp+B0h] [rbp-58h]
  unsigned __int64 *v117; // [rsp+B8h] [rbp-50h]
  unsigned __int64 v118; // [rsp+C0h] [rbp-48h]
  unsigned __int64 v119; // [rsp+C8h] [rbp-40h]
  void *Src; // [rsp+D0h] [rbp-38h]
  int v121; // [rsp+D8h] [rbp-30h]
  unsigned int v122; // [rsp+DCh] [rbp-2Ch]
  ULONG_PTR v123; // [rsp+E0h] [rbp-28h]
  __int64 v124; // [rsp+E8h] [rbp-20h]
  unsigned __int64 *v125; // [rsp+F0h] [rbp-18h]
  __int128 v126; // [rsp+F8h] [rbp-10h] BYREF
  __int64 *v127; // [rsp+108h] [rbp+0h]
  unsigned __int64 v128; // [rsp+110h] [rbp+8h]
  PSLIST_ENTRY ListEntry; // [rsp+118h] [rbp+10h]
  int v132; // [rsp+188h] [rbp+80h] BYREF
  int v133; // [rsp+190h] [rbp+88h]

  v133 = a4;
  v132 = a3;
  v5 = *(_DWORD *)(a1 + 184);
  v105 = 0LL;
  v6 = a1;
  v115 = *(_DWORD *)(a1 + 188);
  v7 = *(_QWORD *)(a1 + 8);
  v119 = 0LL;
  v104 = 0LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  v9 = *(_WORD *)(v7 + 60) & 0x3FF;
  v103 = 0LL;
  v126 = 0LL;
  v107 = v5;
  v101 = *((_QWORD *)qword_140E2FD48 + v9);
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
  v111 = (_SLIST_ENTRY *)v13;
  LODWORD(v12) = *(_DWORD *)(v12 + 56);
  LOBYTE(v99) = v14 & 7 | 0x18;
  v15 = (_SLIST_ENTRY *)(unsigned int)v13;
  v16 = ((unsigned int)v12 >> 20) & 0x7F;
  v122 = v16;
  MiInitializePageColorBase((__int64)&Process[2].ReadyListHead.Blink, v13 + 3, v16, (__int64)&v126);
  v17 = *(_QWORD *)(v6 + 224);
  v18 = (DWORD2(v126) >> 9) & 0x3F;
  v127 = (__int64 *)(v6 + 224);
  v113 = v18;
  v102 = v17;
  if ( v17 == v6 + 224 )
    goto LABEL_71;
  v19 = v99;
  do
  {
    ListEntry = (PSLIST_ENTRY)v17;
    if ( v114 < 2 )
    {
      v20 = *(_DWORD *)(v17 + 192) | 0x200;
      goto LABEL_6;
    }
    if ( (*(_DWORD *)(v6 + 208) & 1) != 0 )
    {
      v20 = *(_DWORD *)(v17 + 192) | 0x80;
LABEL_6:
      *(_DWORD *)(v17 + 192) = v20;
    }
    v21 = *(_QWORD **)(v17 + 240);
    v22 = 0LL;
    v23 = 0LL;
    v24 = *(_QWORD *)(v17 + 200) + 8LL;
    v116 = v21;
    v128 = v24;
    *(_QWORD *)(v17 + 240) = *v21 & 0xFFFFFFFFFFFFFFFCuLL;
    v118 = *v21 & 0xFFFFFFFFFFFFFFFCuLL;
    Src = *(void **)(v17 + 256);
    v25 = (__int64 *)((char *)Src + 48);
    v26 = (((*((_DWORD *)Src + 8) + *((_DWORD *)Src + 11)) & 0xFFF)
         + (unsigned __int64)*((unsigned int *)Src + 10)
         + 4095) >> 12;
    if ( v26 >= 2 )
    {
      if ( v25 > &qword_140E370F8 || &v25[(unsigned int)(v26 - 1)] < &qword_140E370F8 )
      {
        v53 = v26 & 0xFFFFFFFFFFFFFFFEuLL;
        do
          v23 = (unsigned int)(v23 + 2);
        while ( (unsigned int)v23 < v53 );
        v54 = 8 * v53;
        memset64(v25, qword_140E370F8, v54 >> 3);
        v25 = (__int64 *)((char *)v25 + v54);
        v21 = v116;
      }
      v22 = 0LL;
    }
    if ( (unsigned int)v23 < v26 )
    {
      do
      {
        v23 = (unsigned int)(v23 + 1);
        *v25++ = qword_140E370F8;
      }
      while ( (unsigned int)v23 < v26 );
      v22 = 0LL;
    }
    v109 = 0;
    v117 = 0LL;
    if ( !v15 )
    {
      v27 = MiGetInPageSupportBlock(0LL, a5);
      v22 = 0LL;
      v111 = (_SLIST_ENTRY *)v27;
      if ( v27 )
      {
        v28 = v115;
        v29 = v107;
        *(_QWORD *)(v27 + 248) = 0LL;
        MiSetInPagePriority(v27, v28, v29);
      }
    }
    while ( (unsigned __int64)v21 < v24 )
    {
      v30 = *v21 & 0xFFFFFFFFFFFFFFFCuLL;
      v125 = (unsigned __int64 *)v30;
      v31 = v30 >> 9;
      v123 = v22;
      if ( v97 )
      {
        if ( v124 == (v31 & 0x7FFFFFFFF8LL) - 0x98000000000LL )
          goto LABEL_17;
        MiUnlockProtoPoolPage(v97, v132, v23, (unsigned __int64)v25);
      }
      v124 = (v31 & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v97 = MiLockProtoPoolPageForce(v30, (unsigned __int8 *)&v132);
LABEL_17:
      v32 = MiLockLeafPage(v30, 2LL);
      v33 = *(_QWORD *)v30;
      v22 = 0LL;
      v110 = *(_QWORD *)v30;
      v34 = v32;
      if ( v32 )
      {
        MiUpdatePfnPriority(v32, v107, 0LL);
        _InterlockedAnd64((volatile signed __int64 *)(v34 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_58:
        v22 = 0LL;
        goto LABEL_42;
      }
      if ( (v33 & 0x400) != 0 )
      {
        v35 = v33;
        if ( qword_140E2D940 )
        {
          if ( (v33 & 0x10) != 0 )
            v35 = v33 & 0xFFFFFFFFFFFFFFEFuLL;
          else
            v35 = v33 & ~qword_140E2D940;
        }
        v36 = v35 >> 16;
        v123 = v36;
        v106 = 1;
        LOBYTE(v23) = *(_BYTE *)(*(_QWORD *)(a1 + 8) + 62LL) & 0xC;
        if ( (_BYTE)v23 == 4 )
        {
          MiUnlockProtoPoolPage(v97, v132, v23, (unsigned __int64)v25);
          v97 = 0LL;
          v69 = MiRefillPurgedExtents(v36);
          v22 = 0LL;
          if ( v69 < 0 )
            goto LABEL_108;
          goto LABEL_42;
        }
        if ( (_BYTE)v23 == 8 )
          goto LABEL_42;
      }
      else
      {
        v106 = 2;
        if ( (v33 & 1) == 0 )
        {
          v64 = v33;
          if ( qword_140E2D940 )
          {
            if ( (v33 & 0x10) != 0 )
              v64 = v33 & 0xFFEF;
            else
              v64 = v33 & ~(_WORD)qword_140E2D940;
          }
          if ( (v64 & 0x400) == 0 && (v64 & 0x800) == 0 && (v64 & 4) == 0 )
            goto LABEL_42;
        }
        if ( !v111 )
          goto LABEL_42;
      }
      v100 = 0LL;
      v105 = 0LL;
      v104 = 0LL;
      if ( !v117 )
      {
        v50 = (__int64)(v30 - v118) >> 3;
        if ( v50 )
        {
          v51 = Src;
          v118 = v30;
          *((_WORD *)Src + 4) += -8 * v50;
          v51[10] += -4096 * v50;
          *(_QWORD *)(v17 + 96) += v50 << 12;
          *(_QWORD *)(v17 + 240) = v30;
        }
LABEL_26:
        v37 = v104;
        goto LABEL_27;
      }
      if ( !v121 )
        goto LABEL_26;
      v55 = ((__int64)(v30 - (_QWORD)v117) >> 3) - 1;
      if ( (__int64)(v30 - (_QWORD)v117) >> 3 == 1 )
        goto LABEL_26;
      if ( !(unsigned int)MiPrefetchPagesViable(v101, a2, v112, v55, 0) )
        goto LABEL_121;
      v56 = *((_QWORD *)&v104 + 1);
      v37 = v104;
      v57 = 0LL;
      v58 = v100;
      v59 = v101;
      do
      {
        PageForHeader = MiGetPageForHeader(v59, v16, 1LL);
        v103 = PageForHeader;
        if ( PageForHeader == -1 )
          break;
        *(_QWORD *)&v104 = 48 * PageForHeader - 0x220000000000LL;
        if ( !v56 )
          v56 = 48 * PageForHeader - 0x220000000000LL;
        *(_QWORD *)(48 * PageForHeader - 0x220000000000LL) = v37;
        ++v58;
        *((_QWORD *)&v104 + 1) = v56;
        ++v57;
        v105 = v58;
        v37 = 48 * PageForHeader - 0x220000000000LL;
      }
      while ( v57 != v55 );
      v33 = v110;
      v61 = v57 == v55;
      v19 = v99;
      v100 = v58;
      v18 = v113;
      if ( !v61 )
        goto LABEL_120;
LABEL_27:
      v108 = 0;
      if ( v106 == 1 && (unsigned int)MiUseSlabAllocator(v101, v123, v33, v18, (__int64)&v98) && v98 <= 4 )
      {
        v38 = a1 + 8 * (3LL * v98 + 8);
        v39 = a1 + 40;
      }
      else
      {
        v38 = a1 + 40;
        v39 = a1 + 40;
      }
      v40 = MiUnlinkPageChainHead(v38);
      v110 = v40;
      v42 = v40;
      if ( v40 )
      {
        v43 = v40;
        v44 = v100;
        v103 = 0xAAAAAAAAAAAAAAABuLL * ((v43 + 0x220000000000LL) >> 4);
      }
      else
      {
        if ( !(unsigned int)MiPrefetchPagesViable(v101, a2, v112, 1, 1) )
        {
          while ( 1 )
          {
            v52 = v37;
            if ( !v37 )
              break;
            v37 = *(_QWORD *)v37;
            *(_QWORD *)&v104 = v37;
            *((_QWORD *)&v104 + 1) &= -(__int64)(--v105 != 0);
            MiReturnPfnReferenceCountAtDpc(v52);
          }
          goto LABEL_121;
        }
        v74 = _InterlockedExchangeAdd((volatile signed __int32 *)v126, 1u);
        v75 = v101;
        v76 = DWORD2(v126) ^ (unsigned __int8)(BYTE8(v126) ^ (v74 % dword_140E2D980[(*((_QWORD *)&v126 + 1) >> 16) & 3LL]));
        if ( v38 == v39 )
        {
          v78 = 49;
          if ( (*v116 & 1) == 0 )
            v78 = 1;
          Page = MiGetPage(v101, v76, v78);
        }
        else
        {
          Page = MiGetSlabPage(v101, v98, v76, 0x14u, 0LL, 0);
        }
        v103 = Page;
        if ( Page == -1 )
        {
          MiReturnFaultCharges(v75, 1LL, 1LL);
LABEL_120:
          MiReleasePrefetchGapPages(&v104);
LABEL_121:
          v17 = v102;
          break;
        }
        v37 = v104;
        v42 = 48 * Page - 0x220000000000LL;
        v44 = v105;
        v41 = 0LL;
        v110 = v42;
      }
      if ( v44 )
      {
        v65 = (char *)Src + 8 * ((__int64)((__int64)v117 - v118) >> 3) + 56;
        while ( v37 )
        {
          v66 = v41;
          *(_QWORD *)&v104 = *(_QWORD *)v37;
          *((_QWORD *)&v104 + 1) &= -(__int64)(--v105 != 0);
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v37 + 24), 0x3FuLL) )
          {
            do
            {
              if ( (++v66 & HvlLongSpinCountMask) == 0
                && (HvlEnlightenments & 0x40) != 0
                && (v73 = KiCheckVpBackingLongSpinWaitHypercall(), v41 = 0LL, v73) )
              {
                HvlNotifyLongSpinWait();
                v41 = 0LL;
              }
              else
              {
                _mm_pause();
              }
            }
            while ( *(__int64 *)(v37 + 24) < 0 );
          }
          *(_QWORD *)(v37 + 8) = -3LL;
          LODWORD(v100) = *(_DWORD *)(v37 + 32);
          BYTE2(v100) |= 7u;
          *(_DWORD *)(v37 + 32) = v100;
          LODWORD(v100) = *(_DWORD *)(v37 + 32);
          BYTE2(v100) |= 0x20u;
          *(_DWORD *)(v37 + 32) = v100;
          *(_QWORD *)v37 = v41;
          _InterlockedAnd64((volatile signed __int64 *)(v37 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          *v65++ = 0xAAAAAAAAAAAAAAABuLL * ((v37 + 0x220000000000LL) >> 4);
          v37 = v104;
        }
        v16 = v122;
        v18 = v113;
        v19 = v99;
        v42 = v110;
      }
      v45 = v117;
      v46 = v106;
      v47 = v125;
      if ( v106 == 1 )
        v45 = v125;
      v117 = v45;
      if ( (*v116 & 1) != 0 )
      {
        v67 = MiPfnZeroingNeeded(v42, 1);
        v68 = v108;
        if ( v67 )
          v68 = 1;
        v108 = v68;
      }
      if ( v46 == 1 )
      {
        v17 = v102;
        if ( *(_QWORD *)(v102 + 248) == v41 )
          *(_QWORD *)(v102 + 248) = v42;
        ++v109;
        MiInitializeReadInProgressPfn(0xFFFFFFFFFFFFFFFFuLL, &v103, 1LL, v47, v17, v19);
        MiReferenceControlAreaPfn(*(_QWORD *)(a1 + 8), v123, 1LL);
        v22 = 0LL;
        *((_QWORD *)Src + ((__int64)((__int64)v47 - v118) >> 3) + 6) = v103;
        v48 = v97;
        if ( *(_QWORD *)(v17 + 160) )
        {
          v49 = v110;
        }
        else
        {
          MiObtainProtoReference(v97, 0LL);
          v49 = v110;
          v22 = 0LL;
          *(_QWORD *)(v17 + 160) = v97;
        }
      }
      else
      {
        MiReturnCommit(v101, 1LL, 0);
        v79 = (__int64)v111;
        MiInitializeReadInProgressPfn(0xFFFFFFFFFFFFFFFFuLL, &v103, 1LL, v47, (__int64)v111, v19);
        PagingFileOffset = MiGetPagingFileOffset(v33);
        v81 = PagingFileOffset;
        LODWORD(v119) = PagingFileOffset;
        IsPteInStore = MiIsPteInStore(v101, v33);
        v83 = v114 < 2;
        v85 = *(_QWORD *)(v84 + 8LL * ((unsigned __int16)v33 >> 12) + 18528);
        *(_QWORD *)(v79 + 256) = v79 + 272;
        if ( v83 )
          *(_DWORD *)(v79 + 192) |= 0x200u;
        *(_DWORD *)(v79 + 280) = 56;
        *(_QWORD *)(v79 + 272) = 0LL;
        *(_QWORD *)(v79 + 304) = 0LL;
        *(_QWORD *)(v79 + 312) = 4096LL;
        *(_WORD *)(v79 + 282) |= 0x4042u;
        *(_QWORD *)(v79 + 320) = v103;
        MiObtainProtoReference(v97, 0LL);
        v88 = v127;
        *(_QWORD *)(v79 + 160) = v97;
        v89 = *v88;
        if ( *(__int64 **)(*v88 + 8) != v88 )
          goto LABEL_111;
        *(_QWORD *)v79 = v89;
        *(_QWORD *)(v79 + 8) = v88;
        *(_QWORD *)(v89 + 8) = v79;
        *v88 = v79;
        v90 = v132;
        ++*(_DWORD *)(a1 + 212);
        MiUnlockProtoPoolPage(v97, v90, v86, v87);
        *(_QWORD *)(v79 + 224) = 0LL;
        v91 = *(_DWORD *)(v79 + 192);
        v97 = 0LL;
        if ( IsPteInStore )
        {
          *(_QWORD *)(v79 + 96) = v81;
          v91 |= 0x400u;
        }
        else
        {
          v119 = (unsigned __int64)(unsigned int)v119 << 12;
          *(_QWORD *)(v79 + 96) = v119;
        }
        v92 = v125;
        v93 = a5;
        *(_QWORD *)(v79 + 200) = v85;
        v49 = v110;
        *(_DWORD *)(v79 + 192) = v91 | 0x400000;
        *(_QWORD *)(v79 + 240) = v92;
        *(_QWORD *)(v79 + 248) = v49;
        v94 = MiGetInPageSupportBlock(0LL, v93);
        v22 = 0LL;
        v111 = (_SLIST_ENTRY *)v94;
        if ( v94 )
        {
          v95 = v115;
          v96 = v107;
          *(_QWORD *)(v94 + 248) = 0LL;
          MiSetInPagePriority(v94, v95, v96);
        }
        v17 = v102;
        v48 = v22;
      }
      if ( v108 != (_DWORD)v22 )
      {
        if ( v48 )
        {
          MiUnlockProtoPoolPage(v48, v132, v23, (unsigned __int64)v25);
          v97 = 0LL;
        }
        MiZeroPhysicalPage(0LL, v103, 0, (unsigned __int8)BYTE2(*(_DWORD *)(v49 + 32)) >> 6);
        goto LABEL_58;
      }
LABEL_42:
      v24 = v128;
      v21 = v116 + 8;
      v116 += 8;
    }
    if ( v97 )
    {
      MiUnlockProtoPoolPage(v97, v132, v23, (unsigned __int64)v25);
      v97 = 0LL;
    }
LABEL_108:
    if ( v109 )
    {
      v62 = (__int16 *)Src;
      MiReduceMdl(Src);
      if ( v62 != (__int16 *)(v17 + 272) && *((_DWORD *)v62 + 10) <= 0x10000u )
      {
        memmove((void *)(v17 + 272), v62, v62[4]);
        ExFreePoolWithTag(v62, 0);
        *(_QWORD *)(v17 + 256) = v17 + 272;
      }
      v17 = *(_QWORD *)v17;
      v6 = a1;
      v102 = v17;
    }
    else
    {
      v70 = *(_QWORD *)v17;
      v71 = ListEntry;
      v17 = v70;
      v102 = v70;
      if ( *(PSLIST_ENTRY *)(v70 + 8) != ListEntry
        || (v72 = (PSLIST_ENTRY *)*((_QWORD *)&ListEntry->Next + 1), *v72 != ListEntry) )
      {
LABEL_111:
        __fastfail(3u);
      }
      v6 = a1;
      *v72 = (PSLIST_ENTRY)v70;
      *(_QWORD *)(v70 + 8) = v72;
      --*(_DWORD *)(a1 + 212);
      MiFreeInPageSupportBlock(v71);
    }
    v15 = v111;
  }
  while ( v17 != v6 + 224 );
LABEL_71:
  MiFreeReadListPages(v6);
  if ( v15 )
    MiFreeInPageSupportBlock(v15);
  return 0LL;
}
