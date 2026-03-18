/*
 * XREFs of MiPrefetchVirtualMemory @ 0x1402A98D0
 * Callers:
 *     MiBuildForkPte @ 0x1402C53E8 (MiBuildForkPte.c)
 *     MmCopyMemory @ 0x140395E40 (MmCopyMemory.c)
 *     MiInPageSingleKernelStack @ 0x14046A150 (MiInPageSingleKernelStack.c)
 *     MiPrefetchRestOfCluster @ 0x14047AE34 (MiPrefetchRestOfCluster.c)
 *     MmPrefetchVirtualMemory @ 0x140953128 (MmPrefetchVirtualMemory.c)
 *     NtSetInformationVirtualMemory @ 0x1409E8FB0 (NtSetInformationVirtualMemory.c)
 *     MiPrefetchDriverPages @ 0x1409ED0BC (MiPrefetchDriverPages.c)
 * Callees:
 *     MiReleaseNonPagedResources @ 0x14020C57C (MiReleaseNonPagedResources.c)
 *     MmAccessFault @ 0x140216750 (MmAccessFault.c)
 *     KeLeaveCriticalRegionThread @ 0x1402595A0 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostReleaseEx @ 0x14025CCE0 (KeAbPostReleaseEx.c)
 *     MiSufficientAvailablePages @ 0x1402AA420 (MiSufficientAvailablePages.c)
 *     MiPfCoalesceAndIssueIOs @ 0x1402AA4C8 (MiPfCoalesceAndIssueIOs.c)
 *     MiDereferenceInPageAutoBoostLock @ 0x1402AA708 (MiDereferenceInPageAutoBoostLock.c)
 *     MiGetInPageAutoBoostLock @ 0x1402ABE68 (MiGetInPageAutoBoostLock.c)
 *     MiGetLeafVa @ 0x1402DEE20 (MiGetLeafVa.c)
 *     MiAdvanceFaultList @ 0x1402E5FE0 (MiAdvanceFaultList.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     MiVaIsUltra @ 0x140395710 (MiVaIsUltra.c)
 *     MiPfCompleteInPageSupport @ 0x140397338 (MiPfCompleteInPageSupport.c)
 *     MiPfCompleteCoalescedIo @ 0x140397438 (MiPfCompleteCoalescedIo.c)
 *     MiIssueHardFaultIo @ 0x140398DC4 (MiIssueHardFaultIo.c)
 *     MiFreePageChain @ 0x14045AD80 (MiFreePageChain.c)
 *     MiPfIssueCoalesceCandidates @ 0x14047E4E8 (MiPfIssueCoalesceCandidates.c)
 *     MiPfIssueCoalescedSupport @ 0x14047E5A4 (MiPfIssueCoalescedSupport.c)
 *     MiLeapPrefetch @ 0x1404BF28C (MiLeapPrefetch.c)
 *     MiPrefetchPreallocatePages @ 0x1404D5620 (MiPrefetchPreallocatePages.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 */

__int64 __fastcall MiPrefetchVirtualMemory(unsigned __int64 a1, unsigned __int64 a2, __int64 a3, int a4)
{
  __int128 v4; // xmm0
  ULONG_PTR v5; // r13
  __int64 v6; // r15
  unsigned __int64 LeafVa; // r8
  struct _KTHREAD *CurrentThread; // r14
  bool v9; // cf
  __int64 Process; // rdx
  int v11; // ebx
  int v12; // edi
  ULONG *v13; // r12
  unsigned __int64 v14; // r11
  unsigned __int64 v15; // r9
  unsigned __int64 v16; // r10
  __int64 v17; // r14
  unsigned __int64 v18; // rsi
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rcx
  unsigned __int64 v21; // r14
  unsigned __int64 v22; // r15
  __int64 v23; // rcx
  ULONG_PTR v24; // rsi
  int v25; // r8d
  int v26; // eax
  _QWORD *v27; // rcx
  unsigned __int64 v28; // r10
  int v29; // esi
  int v30; // ebx
  ULONG_PTR v31; // rcx
  ULONG_PTR v33; // rax
  __int64 v34; // rax
  ULONG_PTR v35; // rax
  int v36; // eax
  int v37; // esi
  ULONG_PTR v38; // rcx
  unsigned int v39; // r12d
  ULONG_PTR **v40; // r14
  __int64 v41; // r15
  __int64 v42; // r13
  ULONG_PTR *v43; // rax
  ULONG_PTR *v44; // rax
  int v45; // r10d
  _DWORD *v46; // r9
  __int64 v47; // rcx
  __int64 i; // rdi
  unsigned __int64 v49; // rcx
  __int64 v50; // rcx
  unsigned __int64 v51; // rcx
  unsigned int v52; // r8d
  __int64 v53; // rcx
  _QWORD *v54; // rax
  ULONG_PTR **v55; // rax
  __int64 v56; // rcx
  _QWORD *v57; // rax
  ULONG_PTR *v58; // rax
  ULONG_PTR **v59; // rax
  ULONG_PTR *v60; // rcx
  __int64 v61; // rax
  int v62; // eax
  int v63; // eax
  int v64; // [rsp+40h] [rbp-C0h]
  struct _KTHREAD *v65; // [rsp+48h] [rbp-B8h]
  ULONG_PTR **v67; // [rsp+58h] [rbp-A8h] BYREF
  ULONG_PTR **v68; // [rsp+60h] [rbp-A0h]
  __int64 v69; // [rsp+68h] [rbp-98h]
  __int16 v70; // [rsp+70h] [rbp-90h] BYREF
  int v71; // [rsp+72h] [rbp-8Eh]
  __int16 v72; // [rsp+76h] [rbp-8Ah]
  unsigned __int64 v73; // [rsp+78h] [rbp-88h]
  unsigned __int64 v74; // [rsp+80h] [rbp-80h]
  unsigned __int64 v75; // [rsp+88h] [rbp-78h]
  unsigned __int64 v76; // [rsp+90h] [rbp-70h]
  ULONG_PTR BugCheckParameter4; // [rsp+98h] [rbp-68h] BYREF
  ULONG_PTR *p_BugCheckParameter4; // [rsp+A0h] [rbp-60h]
  _QWORD v79[2]; // [rsp+A8h] [rbp-58h] BYREF
  unsigned __int64 v80; // [rsp+B8h] [rbp-48h]
  int v81; // [rsp+C0h] [rbp-40h]
  _BYTE v82[28]; // [rsp+C4h] [rbp-3Ch] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+E0h] [rbp-20h]
  __int64 v84; // [rsp+F0h] [rbp-10h]
  int v85; // [rsp+F8h] [rbp-8h]
  _QWORD v86[2]; // [rsp+100h] [rbp+0h] BYREF
  __int128 v87; // [rsp+110h] [rbp+10h] BYREF
  __int128 v88; // [rsp+120h] [rbp+20h]
  __int128 v89; // [rsp+130h] [rbp+30h]
  _OWORD v90[2]; // [rsp+140h] [rbp+40h] BYREF
  __int128 v91; // [rsp+160h] [rbp+60h]
  __int128 v92; // [rsp+170h] [rbp+70h]

  v69 = a3;
  v4 = 0LL;
  v71 = 0;
  v72 = 0;
  v5 = 0LL;
  memset(v82, 0, sizeof(v82));
  v6 = a3;
  LeafVa = a2;
  memset(v90, 0, sizeof(v90));
  *(_QWORD *)&v92 = 0LL;
  DWORD2(v92) = 0;
  v91 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v64 = 0;
  v85 = 0;
  v9 = BYTE6(CurrentThread[1].Queue) < 2u;
  Process = (__int64)CurrentThread->ApcState.Process;
  v84 = 0LL;
  v65 = CurrentThread;
  if ( !v9 || (a4 & 0x80u) == 0 && stru_140E30068.Parameter != (void *)-1LL )
    return 3221225626LL;
  v75 = 0LL;
  v76 = 0LL;
  p_BugCheckParameter4 = &BugCheckParameter4;
  BugCheckParameter4 = (ULONG_PTR)&BugCheckParameter4;
  v79[1] = v79;
  v79[0] = v79;
  v81 = a4;
  v70 = 1;
  v73 = LeafVa;
  v74 = a1;
  v80 = 0LL;
  BugCheckParameter2 = 0LL;
  memset(&v82[4], 0, 24);
  v11 = a4 & 0x10000;
  if ( (a4 & 0x10000) != 0 )
  {
    v45 = (unsigned __int16)KeNumberNodes;
    if ( (((unsigned __int8)v86 + 64) & 4) != 0 )
      LODWORD(v90[0]) = (unsigned __int16)KeNumberNodes;
    v46 = v90;
    if ( (((unsigned __int8)v86 + 64) & 4) != 0 )
      v46 = (_DWORD *)v90 + 1;
    memset64(v46, ((unsigned __int64)(unsigned __int16)KeNumberNodes << 32) | (unsigned __int16)KeNumberNodes, 1uLL);
    if ( (((unsigned __int8)v86 + 64) & 4) == 0 )
      v46[2] = v45;
    v47 = 0LL;
    for ( i = 0LL; (unsigned int)i < 3; i = (unsigned int)(i + 1) )
    {
      if ( MiPageSizes[i] == 512 )
      {
        v47 = MiDemandLargePageCoalesceTimeBounds[i];
        break;
      }
    }
    LeafVa = a2;
    v49 = v47 << 7;
    v4 = 0LL;
    v92 = 0LL;
    if ( v49 >= 0xF4240 )
      v49 = 1000000LL;
    *((_QWORD *)&v91 + 1) = v49;
  }
  if ( v6 == 1 )
  {
    v13 = &MiSystemPartition;
    LOBYTE(v12) = 0;
  }
  else
  {
    v12 = *(_DWORD *)(v6 + 184);
    if ( (v12 & 0xF) != 0 )
      return 3221225485LL;
    v13 = (ULONG *)*((_QWORD *)qword_140E2FF88 + *(unsigned __int16 *)(Process + 1198));
  }
  ++BYTE6(CurrentThread[1].Queue);
  --CurrentThread->KernelApcDisable;
  v86[0] = v13;
  v87 = v4;
  v88 = v4;
  v89 = v4;
LABEL_9:
  v14 = 0xFFFFF6FFFFFFFFFFuLL;
  while ( 2 )
  {
    v15 = 0xFFFF800000000000uLL;
    v16 = 0xFFFFF68000000000uLL;
LABEL_11:
    if ( v75 >= v74 )
      goto LABEL_57;
    if ( (v81 & 0x20000) != 0 && (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 1) != 0 )
    {
      v29 = -1073741749;
      v64 = -1073741749;
      goto LABEL_58;
    }
    v17 = LeafVa + 16 * v75;
    Process = *(_QWORD *)(v17 + 8);
    if ( v76 >= ((unsigned __int64)(*(_DWORD *)v17 & 0xFFF) + Process + 4095) >> 12 )
      goto LABEL_53;
    if ( Process )
    {
      v18 = *(_QWORD *)v17 + (v76 << 12);
      LeafVa = v18;
      if ( v18 >= qword_140E2F280 && v18 <= qword_140E2F290
        || v18 >= 0xFFFF800000000000uLL && (unsigned int)MiVaIsUltra(*(_QWORD *)v17 + (v76 << 12)) )
      {
        goto LABEL_53;
      }
      if ( v18 >= v16 && v18 <= v14 )
      {
        if ( v18 >= v16 + 0x4000000000LL )
          goto LABEL_53;
        LeafVa = MiGetLeafVa(v18);
      }
      if ( LeafVa >= v15 )
      {
        if ( v6 == 1 )
          goto LABEL_22;
      }
      else if ( v6 != 1 && (v12 & 0xF) == 0 )
      {
LABEL_22:
        if ( (v81 & 0x80u) == 0 )
        {
          if ( !(unsigned int)MiSufficientAvailablePages(v13, 288LL) )
            goto LABEL_56;
          v19 = *((_QWORD *)v13 + 2451);
          v20 = *((_QWORD *)v13 + 2408);
          if ( v20 >= v19 || v19 - v20 < 0x1080 || *((_QWORD *)v13 + 2344) < Process )
            goto LABEL_56;
        }
        if ( v11 )
          MiPrefetchPreallocatePages((unsigned int)&v87, (unsigned int)&v70, (_DWORD)v13, v6, v17, v18, (__int64)v90);
        if ( !v5 )
        {
          v33 = MiGetInPageAutoBoostLock();
          BugCheckParameter2 = v33;
          if ( v33 )
          {
            v34 = KeAbPreAcquire(v33, 0LL, 0LL);
            v84 = v34;
            v5 = v34;
            if ( v34 )
            {
              *(_BYTE *)(v34 + 10) = 1;
              goto LABEL_30;
            }
            if ( BugCheckParameter2 )
            {
              MiDereferenceInPageAutoBoostLock(BugCheckParameter2);
              BugCheckParameter2 = 0LL;
            }
          }
          v5 = 1LL;
          v84 = 1LL;
        }
LABEL_30:
        v21 = v75;
        v22 = v76;
        LeafVa = (unsigned int)MmAccessFault(0LL, v18, 0, (ULONG_PTR)&v70 + 1);
        if ( HIBYTE(v70) == 2 )
        {
          if ( (v81 & 0x80u) == 0 )
            goto LABEL_55;
        }
        else if ( HIBYTE(v70) != 1 )
        {
          if ( v76 == v22 && v75 == v21 )
          {
            v15 = v76 + 1;
            Process = *(_QWORD *)(v73 + 16 * v75 + 8);
            v23 = *(_DWORD *)(v73 + 16 * v75) & 0xFFF;
            v76 = v15;
            if ( v15 == (unsigned __int64)(v23 + Process + 4095) >> 12 )
            {
              v28 = v75 + 1;
              v75 = v28;
              v76 = 0LL;
              if ( v28 < v74 && !*(_QWORD *)(v73 + 16 * v28 + 8) )
                v75 = v74;
            }
          }
          goto LABEL_35;
        }
        HIBYTE(v70) = 0;
LABEL_35:
        if ( (LeafVa & 0x80000000) != 0LL )
        {
          v85 = LeafVa;
          if ( (_DWORD)LeafVa != -1073741819 || v75 == v74 || !(unsigned int)MiLeapPrefetch(&v70, 0LL) )
          {
LABEL_55:
            v6 = v69;
            goto LABEL_56;
          }
        }
        if ( v80 < 0x200000 )
          goto LABEL_37;
        v39 = 0;
        v40 = (ULONG_PTR **)&v67;
        v68 = (ULONG_PTR **)&v67;
        v41 = 0LL;
        v67 = (ULONG_PTR **)&v67;
        v42 = 0LL;
        while ( 1 )
        {
          while ( 1 )
          {
            v24 = v79[0];
            if ( (_QWORD *)v79[0] == v79 )
            {
              if ( v40 != (ULONG_PTR **)&v67 )
              {
                if ( v40 == v68 )
                  goto LABEL_89;
                v59 = (ULONG_PTR **)MiPfIssueCoalescedSupport(&v67, v39);
                if ( v59 )
                {
                  v60 = p_BugCheckParameter4;
                  if ( (ULONG_PTR *)*p_BugCheckParameter4 != &BugCheckParameter4 )
                    goto LABEL_120;
                  v59[1] = p_BugCheckParameter4;
                  Process = (__int64)&BugCheckParameter4;
                  *v59 = &BugCheckParameter4;
                  *v60 = (ULONG_PTR)v59;
                  p_BugCheckParameter4 = (ULONG_PTR *)v59;
                }
                while ( 1 )
                {
                  v40 = v67;
LABEL_89:
                  if ( v40 == (ULONG_PTR **)&v67 )
                    break;
                  if ( v40[1] != (ULONG_PTR *)&v67 )
                    goto LABEL_120;
                  v43 = *v40;
                  if ( (ULONG_PTR **)(*v40)[1] != v40 )
                    goto LABEL_120;
                  v67 = (ULONG_PTR **)*v40;
                  v43[1] = (ULONG_PTR)&v67;
                  MiIssueHardFaultIo(v40, 0LL, 0LL);
                  v44 = p_BugCheckParameter4;
                  if ( (ULONG_PTR *)*p_BugCheckParameter4 != &BugCheckParameter4 )
                    goto LABEL_120;
                  v40[1] = p_BugCheckParameter4;
                  *v40 = &BugCheckParameter4;
                  *v44 = (ULONG_PTR)v40;
                  p_BugCheckParameter4 = (ULONG_PTR *)v40;
                }
LABEL_37:
                v24 = v79[0];
              }
LABEL_38:
              v15 = 0xFFFF800000000000uLL;
              v5 = v84;
              CurrentThread = v65;
              LeafVa = a2;
              v13 = (ULONG *)v86[0];
              v6 = v69;
              v16 = 0xFFFFF68000000000uLL;
              v14 = 0xFFFFF6FFFFFFFFFFuLL;
              if ( (v81 & 0x400) != 0 )
              {
                v25 = 0;
                v26 = 0;
                while ( 1 )
                {
                  v27 = (_QWORD *)BugCheckParameter4;
                  Process = (__int64)&BugCheckParameter4;
                  if ( !v26 )
                  {
                    v27 = (_QWORD *)v24;
                    Process = (__int64)v79;
                  }
                  if ( v27 != (_QWORD *)Process )
                    break;
LABEL_43:
                  if ( (unsigned int)++v26 >= 2 )
                    goto LABEL_44;
                }
                while ( ++v25 != 4 )
                {
                  v27 = (_QWORD *)*v27;
                  if ( v27 == (_QWORD *)Process )
                    goto LABEL_43;
                }
                MiPfCoalesceAndIssueIOs(v79, &BugCheckParameter4, 0LL);
                v37 = 0;
                while ( 1 )
                {
                  v38 = BugCheckParameter4;
                  if ( (ULONG_PTR *)BugCheckParameter4 == &BugCheckParameter4 )
                    break;
                  if ( *(ULONG_PTR **)(BugCheckParameter4 + 8) != &BugCheckParameter4 )
                    goto LABEL_120;
                  v61 = *(_QWORD *)BugCheckParameter4;
                  if ( *(_QWORD *)(*(_QWORD *)BugCheckParameter4 + 8LL) != BugCheckParameter4 )
                    goto LABEL_120;
                  BugCheckParameter4 = *(_QWORD *)BugCheckParameter4;
                  *(_QWORD *)(v61 + 8) = &BugCheckParameter4;
                  if ( (*(_DWORD *)(v38 + 192) & 0x1000000) != 0 )
                    v62 = MiPfCompleteCoalescedIo(v38);
                  else
                    v62 = MiPfCompleteInPageSupport(v38, v6);
                  Process = 0x80000000LL;
                  if ( (int)(v62 + 0x80000000) >= 0 && v62 != -1073740748 )
                    v37 = v62;
                }
                if ( v37 < 0 )
                {
                  v63 = v64;
                  if ( v64 >= 0 )
                    v63 = v37;
                  v64 = v63;
                }
                CurrentThread = v65;
                v15 = 0xFFFF800000000000uLL;
                LeafVa = a2;
                v80 = 0LL;
                v16 = 0xFFFFF68000000000uLL;
                v14 = 0xFFFFF6FFFFFFFFFFuLL;
                if ( v5 > 1 )
                {
                  KeAbPostReleaseEx(BugCheckParameter2, v5);
                  v5 = 0LL;
                  v84 = 0LL;
                  MiDereferenceInPageAutoBoostLock(BugCheckParameter2);
                  BugCheckParameter2 = 0LL;
LABEL_44:
                  LeafVa = a2;
                  goto LABEL_9;
                }
              }
              goto LABEL_11;
            }
            if ( *(_DWORD *)(v79[0] + 184LL) < 0x100000u || v40 != (ULONG_PTR **)&v67 )
              break;
            v56 = *(_QWORD *)v79[0];
            if ( *(_QWORD *)(*(_QWORD *)v79[0] + 8LL) != v79[0]
              || (v57 = *(_QWORD **)(v79[0] + 8LL), *v57 != v79[0])
              || (*v57 = v56,
                  *(_QWORD *)(v56 + 8) = v57,
                  v80 -= *(unsigned int *)(v24 + 184),
                  MiIssueHardFaultIo(v24, 0LL, 0LL),
                  v58 = p_BugCheckParameter4,
                  (ULONG_PTR *)*p_BugCheckParameter4 != &BugCheckParameter4) )
            {
LABEL_120:
              __fastfail(3u);
            }
            *(_QWORD *)(v24 + 8) = p_BugCheckParameter4;
            *(_QWORD *)v24 = &BugCheckParameter4;
            *v58 = v24;
            v40 = v67;
            p_BugCheckParameter4 = (ULONG_PTR *)v24;
          }
          if ( v40 == (ULONG_PTR **)&v67 )
          {
            if ( v80 < 0x100000 )
              goto LABEL_38;
            v41 = *(_QWORD *)(v79[0] + 96LL);
            v42 = *(_QWORD *)(v79[0] + 200LL);
            v50 = v41;
LABEL_115:
            v51 = v50 - v41;
            v52 = v51 + *(_DWORD *)(v79[0] + 184LL);
            if ( v51 > 0x20000 )
              goto LABEL_142;
            Process = v52 + v39;
            if ( (unsigned int)Process > 0x100000 )
              goto LABEL_142;
            v53 = *(_QWORD *)v79[0];
            if ( *(_QWORD *)(*(_QWORD *)v79[0] + 8LL) != v79[0] )
              goto LABEL_120;
            v54 = *(_QWORD **)(v79[0] + 8LL);
            if ( *v54 != v79[0] )
              goto LABEL_120;
            *v54 = v53;
            *(_QWORD *)(v53 + 8) = v54;
            v55 = v68;
            if ( *v68 != (ULONG_PTR *)&v67 )
              goto LABEL_120;
            *(_QWORD *)(v24 + 8) = v68;
            *(_QWORD *)v24 = &v67;
            v39 += v52;
            *v55 = (ULONG_PTR *)v24;
            v40 = v67;
            v41 += v52;
            v68 = (ULONG_PTR **)v24;
            v80 -= *(unsigned int *)(v24 + 184);
          }
          else
          {
            v50 = *(_QWORD *)(v79[0] + 96LL);
            if ( v41 <= v50 && v42 == *(_QWORD *)(v79[0] + 200LL) )
              goto LABEL_115;
LABEL_142:
            if ( (int)MiPfIssueCoalesceCandidates(&v67, v39, &BugCheckParameter4) < 0 )
              goto LABEL_37;
            v40 = v67;
            v39 = 0;
          }
        }
      }
LABEL_53:
      MiAdvanceFaultList(&v70, Process, LeafVa, v15);
      LeafVa = a2;
      CurrentThread = v65;
      continue;
    }
    break;
  }
  v75 = v74;
  v76 = 0LL;
LABEL_56:
  CurrentThread = v65;
LABEL_57:
  v29 = v64;
LABEL_58:
  if ( v11 )
  {
    MiFreePageChain(&v82[4], Process, LeafVa, v15);
    if ( (_DWORD)v88 )
      MiReleaseNonPagedResources((__int64)v13, 0x200uLL);
  }
  MiPfCoalesceAndIssueIOs(v79, &BugCheckParameter4, 0LL);
  v30 = 0;
  while ( 1 )
  {
    v31 = BugCheckParameter4;
    if ( (ULONG_PTR *)BugCheckParameter4 == &BugCheckParameter4 )
      break;
    if ( *(ULONG_PTR **)(BugCheckParameter4 + 8) != &BugCheckParameter4 )
      goto LABEL_120;
    v35 = *(_QWORD *)BugCheckParameter4;
    if ( *(_QWORD *)(*(_QWORD *)BugCheckParameter4 + 8LL) != BugCheckParameter4 )
      goto LABEL_120;
    BugCheckParameter4 = *(_QWORD *)BugCheckParameter4;
    *(_QWORD *)(v35 + 8) = &BugCheckParameter4;
    if ( (*(_DWORD *)(v31 + 192) & 0x1000000) != 0 )
      v36 = MiPfCompleteCoalescedIo(v31);
    else
      v36 = MiPfCompleteInPageSupport(v31, v6);
    if ( (int)(v36 + 0x80000000) >= 0 && v36 != -1073740748 )
      v30 = v36;
  }
  if ( v30 < 0 )
  {
    if ( v29 < 0 )
      v30 = v64;
  }
  else
  {
    v30 = v29;
    if ( v29 >= 0 && v85 < 0 && (v81 & 0x8000) != 0 )
      v30 = v85;
  }
  if ( v5 > 1 )
  {
    KeAbPostReleaseEx(BugCheckParameter2, v5);
    MiDereferenceInPageAutoBoostLock(BugCheckParameter2);
    BugCheckParameter2 = 0LL;
  }
  KeLeaveCriticalRegionThread();
  --BYTE6(CurrentThread[1].Queue);
  return (unsigned int)v30;
}
