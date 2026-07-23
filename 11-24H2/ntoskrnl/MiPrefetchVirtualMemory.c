/*
 * XREFs of MiPrefetchVirtualMemory @ 0x140351B80
 * Callers:
 *     MiBuildForkPte @ 0x1402687D0 (MiBuildForkPte.c)
 *     MiPrefetchRestOfCluster @ 0x1403DBB74 (MiPrefetchRestOfCluster.c)
 *     MmCopyMemory @ 0x1403F3930 (MmCopyMemory.c)
 *     MiInPageSingleKernelStack @ 0x14047BE44 (MiInPageSingleKernelStack.c)
 *     MmPrefetchVirtualMemory @ 0x140936AD8 (MmPrefetchVirtualMemory.c)
 *     NtSetInformationVirtualMemory @ 0x1409E3F70 (NtSetInformationVirtualMemory.c)
 *     MiPrefetchDriverPages @ 0x1409E63EC (MiPrefetchDriverPages.c)
 * Callees:
 *     MiFreePageChain @ 0x14021DC64 (MiFreePageChain.c)
 *     MiGetLeafVa @ 0x140240700 (MiGetLeafVa.c)
 *     MmAccessFault @ 0x140243610 (MmAccessFault.c)
 *     MiGetInPageAutoBoostLock @ 0x1402770DC (MiGetInPageAutoBoostLock.c)
 *     KeLeaveCriticalRegionThread @ 0x140289BB0 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostReleaseEx @ 0x14028D2F0 (KeAbPostReleaseEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     MiReleaseNonPagedResources @ 0x1403358DC (MiReleaseNonPagedResources.c)
 *     MiAdvanceFaultList @ 0x140342110 (MiAdvanceFaultList.c)
 *     MiIssueHardFaultIo @ 0x140351514 (MiIssueHardFaultIo.c)
 *     MiPfCompleteCoalescedIo @ 0x140351964 (MiPfCompleteCoalescedIo.c)
 *     MiSufficientAvailablePages @ 0x1403526D0 (MiSufficientAvailablePages.c)
 *     MiPfCoalesceAndIssueIOs @ 0x140352778 (MiPfCoalesceAndIssueIOs.c)
 *     MiDereferenceInPageAutoBoostLock @ 0x1403529B8 (MiDereferenceInPageAutoBoostLock.c)
 *     MiPfCompleteInPageSupport @ 0x140352CB4 (MiPfCompleteInPageSupport.c)
 *     MiPfIssueCoalesceCandidates @ 0x1403DAED4 (MiPfIssueCoalesceCandidates.c)
 *     MiPfIssueCoalescedSupport @ 0x1403DAF90 (MiPfIssueCoalescedSupport.c)
 *     MiVaIsUltra @ 0x1403F4490 (MiVaIsUltra.c)
 *     MiLeapPrefetch @ 0x1404BA7C0 (MiLeapPrefetch.c)
 *     MiPrefetchPreallocatePages @ 0x1404CEA68 (MiPrefetchPreallocatePages.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

__int64 __fastcall MiPrefetchVirtualMemory(unsigned __int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int128 v4; // xmm0
  ULONG_PTR v5; // r13
  __int64 v6; // r15
  __int64 v7; // r8
  struct _KTHREAD *CurrentThread; // r14
  bool v9; // cf
  _KPROCESS *Process; // rdx
  int v11; // ebx
  int v12; // edi
  ULONG *v13; // r12
  unsigned __int64 v14; // r11
  unsigned __int64 v15; // r9
  unsigned __int64 v16; // r10
  __int64 v17; // r14
  __int64 v18; // rdx
  unsigned __int64 v19; // rsi
  unsigned __int64 LeafVa; // r8
  __int64 v21; // rdx
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rcx
  unsigned __int64 v24; // r14
  unsigned __int64 v25; // r15
  int v26; // r8d
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rsi
  int v30; // r8d
  int v31; // eax
  ULONG_PTR *v32; // rcx
  ULONG_PTR *v33; // rdx
  unsigned __int64 v34; // r10
  int v35; // esi
  int v36; // ebx
  ULONG_PTR v37; // rcx
  _QWORD *v39; // rax
  _QWORD *v40; // rax
  ULONG_PTR v41; // rax
  int v42; // eax
  int v43; // esi
  ULONG_PTR v44; // rcx
  unsigned int v45; // r12d
  ULONG_PTR **v46; // r14
  __int64 v47; // r15
  __int64 v48; // r13
  ULONG_PTR *v49; // rax
  ULONG_PTR *v50; // rax
  int v51; // r10d
  _DWORD *v52; // r9
  __int64 v53; // rcx
  __int64 i; // rdi
  unsigned __int64 v55; // rcx
  __int64 v56; // rcx
  unsigned __int64 v57; // rcx
  unsigned int v58; // r8d
  __int64 v59; // rcx
  _QWORD *v60; // rax
  __int64 *v61; // rax
  __int64 v62; // rcx
  _QWORD *v63; // rax
  _QWORD *v64; // rax
  ULONG_PTR **v65; // rax
  ULONG_PTR *v66; // rcx
  __int64 v67; // rax
  int v68; // eax
  int v69; // eax
  int v70; // [rsp+40h] [rbp-C0h]
  struct _KTHREAD *v71; // [rsp+48h] [rbp-B8h]
  ULONG_PTR **v73; // [rsp+58h] [rbp-A8h] BYREF
  ULONG_PTR **v74; // [rsp+60h] [rbp-A0h]
  __int64 v75; // [rsp+68h] [rbp-98h]
  __int64 v76; // [rsp+70h] [rbp-90h] BYREF
  __int64 v77; // [rsp+78h] [rbp-88h]
  unsigned __int64 v78; // [rsp+80h] [rbp-80h]
  unsigned __int64 v79; // [rsp+88h] [rbp-78h]
  unsigned __int64 v80; // [rsp+90h] [rbp-70h]
  ULONG_PTR BugCheckParameter4; // [rsp+98h] [rbp-68h] BYREF
  ULONG_PTR *p_BugCheckParameter4; // [rsp+A0h] [rbp-60h]
  _QWORD v83[2]; // [rsp+A8h] [rbp-58h] BYREF
  unsigned __int64 v84; // [rsp+B8h] [rbp-48h]
  int v85; // [rsp+C0h] [rbp-40h]
  _BYTE v86[28]; // [rsp+C4h] [rbp-3Ch] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+E0h] [rbp-20h]
  __int64 v88; // [rsp+F0h] [rbp-10h]
  int v89; // [rsp+F8h] [rbp-8h]
  _QWORD v90[2]; // [rsp+100h] [rbp+0h] BYREF
  __int128 v91; // [rsp+110h] [rbp+10h] BYREF
  __int128 v92; // [rsp+120h] [rbp+20h]
  __int128 v93; // [rsp+130h] [rbp+30h]
  _OWORD v94[2]; // [rsp+140h] [rbp+40h] BYREF
  __int128 v95; // [rsp+160h] [rbp+60h]
  __int128 v96; // [rsp+170h] [rbp+70h]

  v75 = a3;
  v4 = 0LL;
  *(_DWORD *)((char *)&v76 + 2) = 0;
  HIWORD(v76) = 0;
  v5 = 0LL;
  memset(v86, 0, sizeof(v86));
  v6 = a3;
  v7 = a2;
  memset(v94, 0, sizeof(v94));
  *(_QWORD *)&v96 = 0LL;
  DWORD2(v96) = 0;
  v95 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v70 = 0;
  v89 = 0;
  v9 = BYTE6(CurrentThread[1].Queue) < 2u;
  Process = CurrentThread->ApcState.Process;
  v88 = 0LL;
  v71 = CurrentThread;
  if ( !v9 || (a4 & 0x80u) == 0 && stru_140E301A8.Parameter != (void *)-1LL )
    return 3221225626LL;
  v79 = 0LL;
  v80 = 0LL;
  p_BugCheckParameter4 = &BugCheckParameter4;
  BugCheckParameter4 = (ULONG_PTR)&BugCheckParameter4;
  v83[1] = v83;
  v83[0] = v83;
  v85 = a4;
  LOWORD(v76) = 1;
  v77 = v7;
  v78 = a1;
  v84 = 0LL;
  BugCheckParameter2 = 0LL;
  memset(&v86[4], 0, 24);
  v11 = a4 & 0x10000;
  if ( (a4 & 0x10000) != 0 )
  {
    v51 = (unsigned __int16)KeNumberNodes;
    if ( (((unsigned __int8)v90 + 64) & 4) != 0 )
      LODWORD(v94[0]) = (unsigned __int16)KeNumberNodes;
    v52 = v94;
    if ( (((unsigned __int8)v90 + 64) & 4) != 0 )
      v52 = (_DWORD *)v94 + 1;
    memset64(v52, ((unsigned __int64)(unsigned __int16)KeNumberNodes << 32) | (unsigned __int16)KeNumberNodes, 1uLL);
    if ( (((unsigned __int8)v90 + 64) & 4) == 0 )
      v52[2] = v51;
    v53 = 0LL;
    for ( i = 0LL; (unsigned int)i < 3; i = (unsigned int)(i + 1) )
    {
      if ( MiPageSizes[i] == 512 )
      {
        v53 = MiDemandLargePageCoalesceTimeBounds[i];
        break;
      }
    }
    v7 = a2;
    v55 = v53 << 7;
    v4 = 0LL;
    v96 = 0LL;
    if ( v55 >= 0xF4240 )
      v55 = 1000000LL;
    *((_QWORD *)&v95 + 1) = v55;
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
    v13 = (ULONG *)*((_QWORD *)qword_140E300C8 + HIWORD(Process[2].ProcessListEntry.Blink));
  }
  ++BYTE6(CurrentThread[1].Queue);
  --CurrentThread->KernelApcDisable;
  v90[0] = v13;
  v91 = v4;
  v92 = v4;
  v93 = v4;
LABEL_9:
  v14 = 0xFFFFF6FFFFFFFFFFuLL;
  while ( 2 )
  {
    v15 = 0xFFFF800000000000uLL;
    v16 = 0xFFFFF68000000000uLL;
LABEL_11:
    if ( v79 >= v78 )
      goto LABEL_57;
    if ( (v85 & 0x20000) != 0 && (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 1) != 0 )
    {
      v35 = -1073741749;
      v70 = -1073741749;
      goto LABEL_58;
    }
    v17 = v7 + 16 * v79;
    v18 = *(_QWORD *)(v17 + 8);
    if ( v80 >= ((unsigned __int64)(*(_DWORD *)v17 & 0xFFF) + v18 + 4095) >> 12 )
      goto LABEL_53;
    if ( v18 )
    {
      v19 = *(_QWORD *)v17 + (v80 << 12);
      LeafVa = v19;
      if ( v19 >= qword_140E2F3C0 && v19 <= qword_140E2F3D0
        || v19 >= 0xFFFF800000000000uLL && (unsigned int)MiVaIsUltra(*(_QWORD *)v17 + (v80 << 12)) )
      {
        goto LABEL_53;
      }
      if ( v19 >= v16 && v19 <= v14 )
      {
        if ( v19 >= v16 + 0x4000000000LL )
          goto LABEL_53;
        LeafVa = MiGetLeafVa(v19);
      }
      if ( LeafVa >= v15 )
      {
        if ( v6 == 1 )
          goto LABEL_22;
      }
      else if ( v6 != 1 && (v12 & 0xF) == 0 )
      {
LABEL_22:
        if ( (v85 & 0x80u) == 0 )
        {
          if ( !(unsigned int)MiSufficientAvailablePages(v13, 288LL) )
            goto LABEL_56;
          v22 = *((_QWORD *)v13 + 2451);
          v23 = *((_QWORD *)v13 + 2408);
          if ( v23 >= v22 || v22 - v23 < 0x1080 || *((_QWORD *)v13 + 2344) < v21 )
            goto LABEL_56;
        }
        if ( v11 )
          MiPrefetchPreallocatePages((unsigned int)&v91, (unsigned int)&v76, (_DWORD)v13, v6, v17, v19, (__int64)v94);
        if ( !v5 )
        {
          v39 = MiGetInPageAutoBoostLock();
          BugCheckParameter2 = (ULONG_PTR)v39;
          if ( v39 )
          {
            v40 = KeAbPreAcquire((__int64)v39, 0LL);
            v88 = (__int64)v40;
            v5 = (ULONG_PTR)v40;
            if ( v40 )
            {
              *((_BYTE *)v40 + 10) = 1;
              goto LABEL_30;
            }
            if ( BugCheckParameter2 )
            {
              MiDereferenceInPageAutoBoostLock(BugCheckParameter2);
              BugCheckParameter2 = 0LL;
            }
          }
          v5 = 1LL;
          v88 = 1LL;
        }
LABEL_30:
        v24 = v79;
        v25 = v80;
        v26 = MmAccessFault(0LL, v19, 0, (ULONG_PTR)&v76 + 1);
        if ( BYTE1(v76) == 2 )
        {
          if ( (v85 & 0x80u) == 0 )
            goto LABEL_55;
        }
        else if ( BYTE1(v76) != 1 )
        {
          if ( v80 == v25 && v79 == v24 )
          {
            v27 = *(_QWORD *)(v77 + 16 * v79 + 8);
            v28 = *(_DWORD *)(v77 + 16 * v79) & 0xFFF;
            if ( ++v80 == (unsigned __int64)(v28 + v27 + 4095) >> 12 )
            {
              v34 = v79 + 1;
              v79 = v34;
              v80 = 0LL;
              if ( v34 < v78 && !*(_QWORD *)(v77 + 16 * v34 + 8) )
                v79 = v78;
            }
          }
          goto LABEL_35;
        }
        BYTE1(v76) = 0;
LABEL_35:
        if ( v26 < 0 )
        {
          v89 = v26;
          if ( v26 != -1073741819 || v79 == v78 || !(unsigned int)MiLeapPrefetch(&v76, 0LL) )
          {
LABEL_55:
            v6 = v75;
            goto LABEL_56;
          }
        }
        if ( v84 < 0x200000 )
          goto LABEL_37;
        v45 = 0;
        v46 = (ULONG_PTR **)&v73;
        v74 = (ULONG_PTR **)&v73;
        v47 = 0LL;
        v73 = (ULONG_PTR **)&v73;
        v48 = 0LL;
        while ( 1 )
        {
          while ( 1 )
          {
            v29 = v83[0];
            if ( (_QWORD *)v83[0] == v83 )
            {
              if ( v46 != (ULONG_PTR **)&v73 )
              {
                if ( v46 == v74 )
                  goto LABEL_89;
                v65 = (ULONG_PTR **)MiPfIssueCoalescedSupport(&v73, v45);
                if ( v65 )
                {
                  v66 = p_BugCheckParameter4;
                  if ( (ULONG_PTR *)*p_BugCheckParameter4 != &BugCheckParameter4 )
                    goto LABEL_120;
                  v65[1] = p_BugCheckParameter4;
                  *v65 = &BugCheckParameter4;
                  *v66 = (ULONG_PTR)v65;
                  p_BugCheckParameter4 = (ULONG_PTR *)v65;
                }
                while ( 1 )
                {
                  v46 = v73;
LABEL_89:
                  if ( v46 == (ULONG_PTR **)&v73 )
                    break;
                  if ( v46[1] != (ULONG_PTR *)&v73 )
                    goto LABEL_120;
                  v49 = *v46;
                  if ( (ULONG_PTR **)(*v46)[1] != v46 )
                    goto LABEL_120;
                  v73 = (ULONG_PTR **)*v46;
                  v49[1] = (ULONG_PTR)&v73;
                  MiIssueHardFaultIo((__int64)v46, 0, 0LL);
                  v50 = p_BugCheckParameter4;
                  if ( (ULONG_PTR *)*p_BugCheckParameter4 != &BugCheckParameter4 )
                    goto LABEL_120;
                  v46[1] = p_BugCheckParameter4;
                  *v46 = &BugCheckParameter4;
                  *v50 = (ULONG_PTR)v46;
                  p_BugCheckParameter4 = (ULONG_PTR *)v46;
                }
LABEL_37:
                v29 = v83[0];
              }
LABEL_38:
              v15 = 0xFFFF800000000000uLL;
              v5 = v88;
              CurrentThread = v71;
              v7 = a2;
              v13 = (ULONG *)v90[0];
              v6 = v75;
              v16 = 0xFFFFF68000000000uLL;
              v14 = 0xFFFFF6FFFFFFFFFFuLL;
              if ( (v85 & 0x400) != 0 )
              {
                v30 = 0;
                v31 = 0;
                while ( 1 )
                {
                  v32 = (ULONG_PTR *)BugCheckParameter4;
                  v33 = &BugCheckParameter4;
                  if ( !v31 )
                  {
                    v32 = (ULONG_PTR *)v29;
                    v33 = v83;
                  }
                  if ( v32 != v33 )
                    break;
LABEL_43:
                  if ( (unsigned int)++v31 >= 2 )
                    goto LABEL_44;
                }
                while ( ++v30 != 4 )
                {
                  v32 = (ULONG_PTR *)*v32;
                  if ( v32 == v33 )
                    goto LABEL_43;
                }
                MiPfCoalesceAndIssueIOs(v83, &BugCheckParameter4, 0LL);
                v43 = 0;
                while ( 1 )
                {
                  v44 = BugCheckParameter4;
                  if ( (ULONG_PTR *)BugCheckParameter4 == &BugCheckParameter4 )
                    break;
                  if ( *(ULONG_PTR **)(BugCheckParameter4 + 8) != &BugCheckParameter4 )
                    goto LABEL_120;
                  v67 = *(_QWORD *)BugCheckParameter4;
                  if ( *(_QWORD *)(*(_QWORD *)BugCheckParameter4 + 8LL) != BugCheckParameter4 )
                    goto LABEL_120;
                  BugCheckParameter4 = *(_QWORD *)BugCheckParameter4;
                  *(_QWORD *)(v67 + 8) = &BugCheckParameter4;
                  if ( (*(_DWORD *)(v44 + 192) & 0x1000000) != 0 )
                    v68 = MiPfCompleteCoalescedIo(v44, v6);
                  else
                    v68 = MiPfCompleteInPageSupport(v44, v6);
                  if ( (int)(v68 + 0x80000000) >= 0 && v68 != -1073740748 )
                    v43 = v68;
                }
                if ( v43 < 0 )
                {
                  v69 = v70;
                  if ( v70 >= 0 )
                    v69 = v43;
                  v70 = v69;
                }
                CurrentThread = v71;
                v15 = 0xFFFF800000000000uLL;
                v7 = a2;
                v84 = 0LL;
                v16 = 0xFFFFF68000000000uLL;
                v14 = 0xFFFFF6FFFFFFFFFFuLL;
                if ( v5 > 1 )
                {
                  KeAbPostReleaseEx(BugCheckParameter2, v5);
                  v5 = 0LL;
                  v88 = 0LL;
                  MiDereferenceInPageAutoBoostLock(BugCheckParameter2);
                  BugCheckParameter2 = 0LL;
LABEL_44:
                  v7 = a2;
                  goto LABEL_9;
                }
              }
              goto LABEL_11;
            }
            if ( *(_DWORD *)(v83[0] + 184LL) < 0x100000u || v46 != (ULONG_PTR **)&v73 )
              break;
            v62 = *(_QWORD *)v83[0];
            if ( *(_QWORD *)(*(_QWORD *)v83[0] + 8LL) != v83[0]
              || (v63 = *(_QWORD **)(v83[0] + 8LL), *v63 != v83[0])
              || (*v63 = v62,
                  *(_QWORD *)(v62 + 8) = v63,
                  v84 -= *(unsigned int *)(v29 + 184),
                  MiIssueHardFaultIo(v29, 0, 0LL),
                  v64 = p_BugCheckParameter4,
                  (ULONG_PTR *)*p_BugCheckParameter4 != &BugCheckParameter4) )
            {
LABEL_120:
              __fastfail(3u);
            }
            *(_QWORD *)(v29 + 8) = p_BugCheckParameter4;
            *(_QWORD *)v29 = &BugCheckParameter4;
            *v64 = v29;
            v46 = v73;
            p_BugCheckParameter4 = (ULONG_PTR *)v29;
          }
          if ( v46 == (ULONG_PTR **)&v73 )
          {
            if ( v84 < 0x100000 )
              goto LABEL_38;
            v47 = *(_QWORD *)(v83[0] + 96LL);
            v48 = *(_QWORD *)(v83[0] + 200LL);
            v56 = v47;
LABEL_115:
            v57 = v56 - v47;
            v58 = v57 + *(_DWORD *)(v83[0] + 184LL);
            if ( v57 > 0x20000 || v58 + v45 > 0x100000 )
              goto LABEL_142;
            v59 = *(_QWORD *)v83[0];
            if ( *(_QWORD *)(*(_QWORD *)v83[0] + 8LL) != v83[0] )
              goto LABEL_120;
            v60 = *(_QWORD **)(v83[0] + 8LL);
            if ( *v60 != v83[0] )
              goto LABEL_120;
            *v60 = v59;
            *(_QWORD *)(v59 + 8) = v60;
            v61 = (__int64 *)v74;
            if ( *v74 != (ULONG_PTR *)&v73 )
              goto LABEL_120;
            *(_QWORD *)(v29 + 8) = v74;
            *(_QWORD *)v29 = &v73;
            v45 += v58;
            *v61 = v29;
            v46 = v73;
            v47 += v58;
            v74 = (ULONG_PTR **)v29;
            v84 -= *(unsigned int *)(v29 + 184);
          }
          else
          {
            v56 = *(_QWORD *)(v83[0] + 96LL);
            if ( v47 <= v56 && v48 == *(_QWORD *)(v83[0] + 200LL) )
              goto LABEL_115;
LABEL_142:
            if ( (int)MiPfIssueCoalesceCandidates(&v73, v45, &BugCheckParameter4) < 0 )
              goto LABEL_37;
            v46 = v73;
            v45 = 0;
          }
        }
      }
LABEL_53:
      MiAdvanceFaultList(&v76);
      v7 = a2;
      CurrentThread = v71;
      continue;
    }
    break;
  }
  v79 = v78;
  v80 = 0LL;
LABEL_56:
  CurrentThread = v71;
LABEL_57:
  v35 = v70;
LABEL_58:
  if ( v11 )
  {
    MiFreePageChain((__int64)&v86[4]);
    if ( (_DWORD)v92 )
      MiReleaseNonPagedResources((__int64)v13, 0x200uLL);
  }
  MiPfCoalesceAndIssueIOs(v83, &BugCheckParameter4, 0LL);
  v36 = 0;
  while ( 1 )
  {
    v37 = BugCheckParameter4;
    if ( (ULONG_PTR *)BugCheckParameter4 == &BugCheckParameter4 )
      break;
    if ( *(ULONG_PTR **)(BugCheckParameter4 + 8) != &BugCheckParameter4 )
      goto LABEL_120;
    v41 = *(_QWORD *)BugCheckParameter4;
    if ( *(_QWORD *)(*(_QWORD *)BugCheckParameter4 + 8LL) != BugCheckParameter4 )
      goto LABEL_120;
    BugCheckParameter4 = *(_QWORD *)BugCheckParameter4;
    *(_QWORD *)(v41 + 8) = &BugCheckParameter4;
    if ( (*(_DWORD *)(v37 + 192) & 0x1000000) != 0 )
      v42 = MiPfCompleteCoalescedIo(v37, v6);
    else
      v42 = MiPfCompleteInPageSupport(v37, v6);
    if ( (int)(v42 + 0x80000000) >= 0 && v42 != -1073740748 )
      v36 = v42;
  }
  if ( v36 < 0 )
  {
    if ( v35 < 0 )
      v36 = v70;
  }
  else
  {
    v36 = v35;
    if ( v35 >= 0 && v89 < 0 && (v85 & 0x8000) != 0 )
      v36 = v89;
  }
  if ( v5 > 1 )
  {
    KeAbPostReleaseEx(BugCheckParameter2, v5);
    MiDereferenceInPageAutoBoostLock(BugCheckParameter2);
    BugCheckParameter2 = 0LL;
  }
  KeLeaveCriticalRegionThread();
  --BYTE6(CurrentThread[1].Queue);
  return (unsigned int)v36;
}
