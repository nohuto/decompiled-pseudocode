/*
 * XREFs of MiPrefetchVirtualMemory @ 0x1403799D0
 * Callers:
 *     MiBuildForkPte @ 0x1402CCF80 (MiBuildForkPte.c)
 *     MmCopyMemory @ 0x140378030 (MmCopyMemory.c)
 *     MiPrefetchRestOfCluster @ 0x1403791B8 (MiPrefetchRestOfCluster.c)
 *     MiInPageSingleKernelStack @ 0x14046BDAC (MiInPageSingleKernelStack.c)
 *     MmPrefetchVirtualMemory @ 0x1409C69F8 (MmPrefetchVirtualMemory.c)
 *     MiPrefetchDriverPages @ 0x1409F3B5C (MiPrefetchDriverPages.c)
 *     NtSetInformationVirtualMemory @ 0x1409FCFF0 (NtSetInformationVirtualMemory.c)
 * Callees:
 *     MiIssueHardFaultIo @ 0x1402096C0 (MiIssueHardFaultIo.c)
 *     MiReleaseNonPagedResources @ 0x14021133C (MiReleaseNonPagedResources.c)
 *     KeAbPostReleaseEx @ 0x14027D430 (KeAbPostReleaseEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeLeaveCriticalRegionThread @ 0x14029B9C0 (KeLeaveCriticalRegionThread.c)
 *     MiGetLeafVa @ 0x1402B5480 (MiGetLeafVa.c)
 *     MmAccessFault @ 0x1402B5880 (MmAccessFault.c)
 *     MiGetInPageAutoBoostLock @ 0x1402D9B38 (MiGetInPageAutoBoostLock.c)
 *     MiPfCompleteCoalescedIo @ 0x140378964 (MiPfCompleteCoalescedIo.c)
 *     MiPfCompleteInPageSupport @ 0x1403795D8 (MiPfCompleteInPageSupport.c)
 *     MiSufficientAvailablePages @ 0x14037A4B0 (MiSufficientAvailablePages.c)
 *     MiAdvanceFaultList @ 0x14037A740 (MiAdvanceFaultList.c)
 *     MiPfCoalesceAndIssueIOs @ 0x14037A7AC (MiPfCoalesceAndIssueIOs.c)
 *     MiDereferenceInPageAutoBoostLock @ 0x14037AA08 (MiDereferenceInPageAutoBoostLock.c)
 *     MiVaIsUltra @ 0x14041B6C0 (MiVaIsUltra.c)
 *     MiFreePageChain @ 0x14045B26C (MiFreePageChain.c)
 *     MiPfIssueCoalesceCandidates @ 0x14047DA98 (MiPfIssueCoalesceCandidates.c)
 *     MiPfIssueCoalescedSupport @ 0x14047DB58 (MiPfIssueCoalescedSupport.c)
 *     MiLeapPrefetch @ 0x1404C0B80 (MiLeapPrefetch.c)
 *     MiPrefetchPreallocatePages @ 0x1404D5F34 (MiPrefetchPreallocatePages.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 */

__int64 __fastcall MiPrefetchVirtualMemory(unsigned __int64 a1, __int64 a2, __int64 a3, int a4)
{
  unsigned __int64 v4; // r11
  __int128 v5; // xmm0
  __int64 v6; // r15
  __int64 v7; // r8
  ULONG_PTR v8; // r13
  struct _KTHREAD *CurrentThread; // r14
  bool v10; // cf
  _KPROCESS *Process; // rdx
  int v13; // ebx
  int v14; // edi
  ULONG *v15; // r12
  unsigned __int64 v16; // r10
  unsigned __int64 v17; // r9
  __int64 v18; // r14
  __int64 v19; // rdx
  unsigned __int64 v20; // rsi
  unsigned __int64 LeafVa; // r8
  __int64 v22; // rdx
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // rcx
  unsigned __int64 v25; // r14
  unsigned __int64 v26; // r15
  int v27; // r11d
  __int64 v28; // rsi
  int v29; // r8d
  int v30; // eax
  ULONG_PTR *v31; // rdx
  ULONG_PTR *v32; // rcx
  _QWORD *v33; // rax
  __int64 *v34; // rax
  int v35; // esi
  int v36; // ebx
  ULONG_PTR v37; // rcx
  ULONG_PTR v38; // rax
  int v39; // eax
  int v40; // esi
  ULONG_PTR v41; // rcx
  __int64 *v42; // rax
  unsigned int v43; // r12d
  ULONG_PTR **v44; // r14
  __int64 v45; // r15
  __int64 v46; // r13
  ULONG_PTR *v47; // rax
  ULONG_PTR *v48; // rax
  int v49; // r10d
  _DWORD *v50; // r9
  __int64 v51; // rcx
  unsigned int i; // edi
  __int64 v53; // rax
  unsigned __int64 v54; // rcx
  __int64 v55; // rcx
  unsigned __int64 v56; // rcx
  unsigned int v57; // r8d
  __int64 v58; // rcx
  _QWORD *v59; // rax
  __int64 v60; // rax
  int v61; // eax
  __int64 v62; // rcx
  _QWORD *v63; // rax
  _QWORD *v64; // rax
  ULONG_PTR **v65; // rax
  ULONG_PTR *v66; // rcx
  int v67; // eax
  int v68; // [rsp+40h] [rbp-C0h]
  struct _KTHREAD *v69; // [rsp+48h] [rbp-B8h]
  ULONG_PTR **v71; // [rsp+58h] [rbp-A8h] BYREF
  ULONG_PTR **v72; // [rsp+60h] [rbp-A0h]
  __int64 v73; // [rsp+68h] [rbp-98h]
  __int16 v74; // [rsp+70h] [rbp-90h] BYREF
  int v75; // [rsp+72h] [rbp-8Eh]
  __int16 v76; // [rsp+76h] [rbp-8Ah]
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

  v73 = a3;
  v4 = 0LL;
  v75 = 0;
  v5 = 0LL;
  v76 = 0;
  memset(v86, 0, sizeof(v86));
  v6 = a3;
  v7 = a2;
  memset(v94, 0, sizeof(v94));
  *(_QWORD *)&v96 = 0LL;
  DWORD2(v96) = 0;
  v8 = 0LL;
  v95 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v68 = 0;
  v89 = 0;
  v10 = BYTE6(CurrentThread[1].Queue) < 2u;
  Process = CurrentThread->ApcState.Process;
  v88 = 0LL;
  v69 = CurrentThread;
  if ( !v10 || (a4 & 0x80u) == 0 && stru_140E2FE28.Parameter != (void *)-1LL )
    return 3221225626LL;
  v85 = a4;
  p_BugCheckParameter4 = &BugCheckParameter4;
  BugCheckParameter4 = (ULONG_PTR)&BugCheckParameter4;
  v83[1] = v83;
  v83[0] = v83;
  v74 = 1;
  v77 = v7;
  v78 = a1;
  v79 = 0LL;
  v80 = 0LL;
  v84 = 0LL;
  BugCheckParameter2 = 0LL;
  memset(&v86[4], 0, 24);
  v13 = a4 & 0x10000;
  if ( (a4 & 0x10000) != 0 )
  {
    v49 = (unsigned __int16)KeNumberNodes;
    if ( (((unsigned __int8)v90 + 64) & 4) != 0 )
      LODWORD(v94[0]) = (unsigned __int16)KeNumberNodes;
    v50 = v94;
    if ( (((unsigned __int8)v90 + 64) & 4) != 0 )
      v50 = (_DWORD *)v94 + 1;
    memset64(v50, ((unsigned __int64)(unsigned __int16)KeNumberNodes << 32) | (unsigned __int16)KeNumberNodes, 1uLL);
    if ( (((unsigned __int8)v90 + 64) & 4) == 0 )
      v50[2] = v49;
    v51 = 0LL;
    for ( i = 0; i < 3; ++i )
    {
      v53 = i;
      if ( MiPageSizes[v53] == 512 )
      {
        v51 = MiDemandLargePageCoalesceTimeBounds[v53];
        break;
      }
    }
    v7 = a2;
    v54 = v51 << 7;
    v5 = 0LL;
    v96 = 0LL;
    if ( v54 >= 0xF4240 )
      v54 = 1000000LL;
    *((_QWORD *)&v95 + 1) = v54;
  }
  if ( v6 == 1 )
  {
    v15 = &MiSystemPartition;
    LOBYTE(v14) = 0;
  }
  else
  {
    v14 = *(_DWORD *)(v6 + 184);
    if ( (v14 & 0xF) != 0 )
      return 3221225485LL;
    v15 = (ULONG *)*((_QWORD *)qword_140E2FD48 + HIWORD(Process[2].ProcessListEntry.Blink));
  }
  ++BYTE6(CurrentThread[1].Queue);
  --CurrentThread->KernelApcDisable;
  v90[0] = v15;
  v91 = v5;
  v92 = v5;
  v93 = v5;
LABEL_10:
  v16 = 0xFFFFF68000000000uLL;
  v17 = 0xFFFF800000000000uLL;
LABEL_11:
  if ( v79 >= v78 )
    goto LABEL_57;
  if ( (v85 & 0x20000) != 0 && (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 1) != 0 )
  {
    v35 = -1073741749;
    v68 = -1073741749;
    goto LABEL_58;
  }
  v18 = v7 + 16 * v79;
  v19 = *(_QWORD *)(v18 + 8);
  if ( v80 >= ((unsigned __int64)(*(_DWORD *)v18 & 0xFFF) + v19 + 4095) >> 12 )
  {
LABEL_46:
    MiAdvanceFaultList(&v74);
    CurrentThread = v69;
    goto LABEL_47;
  }
  if ( v19 )
  {
    v20 = *(_QWORD *)v18 + (v80 << 12);
    LeafVa = v20;
    if ( v20 >= qword_140E2F040 && v20 <= qword_140E2F050
      || v20 >= 0xFFFF800000000000uLL && (unsigned int)MiVaIsUltra(*(_QWORD *)v18 + (v80 << 12)) )
    {
      goto LABEL_46;
    }
    if ( v20 >= v16 && v20 <= 0xFFFFF6FFFFFFFFFFuLL )
    {
      if ( v20 >= v16 + 0x4000000000LL )
        goto LABEL_46;
      LeafVa = MiGetLeafVa(v20);
    }
    if ( LeafVa >= v17 )
    {
      if ( v6 != 1 )
        goto LABEL_46;
    }
    else if ( v6 == 1 || (v14 & 0xF) != 0 )
    {
      goto LABEL_46;
    }
    if ( (v85 & 0x80u) == 0 )
    {
      if ( !(unsigned int)MiSufficientAvailablePages(v15, 288LL) )
        goto LABEL_56;
      v23 = *((_QWORD *)v15 + 2451);
      v24 = *((_QWORD *)v15 + 2408);
      if ( v24 >= v23 || v23 - v24 < 0x1080 || *((_QWORD *)v15 + 2344) < v22 )
        goto LABEL_56;
    }
    if ( v13 )
      MiPrefetchPreallocatePages((unsigned int)&v91, (unsigned int)&v74, (_DWORD)v15, v6, v18, v20, (__int64)v94);
    if ( !v8 )
    {
      v33 = MiGetInPageAutoBoostLock();
      BugCheckParameter2 = (ULONG_PTR)v33;
      if ( v33 )
      {
        v34 = KeAbPreAcquire((__int64)v33, 0LL);
        v88 = (__int64)v34;
        v8 = (ULONG_PTR)v34;
        if ( v34 )
        {
          *((_BYTE *)v34 + 10) = 1;
          goto LABEL_30;
        }
        if ( BugCheckParameter2 )
        {
          MiDereferenceInPageAutoBoostLock(BugCheckParameter2);
          BugCheckParameter2 = 0LL;
        }
      }
      v8 = 1LL;
      v88 = 1LL;
    }
LABEL_30:
    v25 = v79;
    v26 = v80;
    v27 = MmAccessFault(0LL, v20, 0, (ULONG_PTR)&v74 + 1);
    if ( HIBYTE(v74) == 2 )
    {
      if ( (v85 & 0x80u) == 0 )
        goto LABEL_55;
    }
    else if ( HIBYTE(v74) != 1 )
    {
      if ( v80 == v26 && v79 == v25 )
        MiAdvanceFaultList(&v74);
      goto LABEL_35;
    }
    HIBYTE(v74) = 0;
LABEL_35:
    if ( v27 < 0 )
    {
      v89 = v27;
      if ( v27 != -1073741819 || v79 == v78 || !(unsigned int)MiLeapPrefetch(&v74, 0LL) )
      {
LABEL_55:
        v6 = v73;
        goto LABEL_56;
      }
    }
    if ( v84 < 0x200000 )
      goto LABEL_37;
    v43 = 0;
    v44 = (ULONG_PTR **)&v71;
    v72 = (ULONG_PTR **)&v71;
    v45 = 0LL;
    v71 = (ULONG_PTR **)&v71;
    v46 = 0LL;
    while ( 1 )
    {
      while ( 1 )
      {
        v28 = v83[0];
        if ( (_QWORD *)v83[0] == v83 )
        {
          if ( v44 != (ULONG_PTR **)&v71 )
          {
            if ( v44 == v72 )
              goto LABEL_97;
            v65 = (ULONG_PTR **)MiPfIssueCoalescedSupport(&v71, v43);
            if ( v65 )
            {
              v66 = p_BugCheckParameter4;
              if ( (ULONG_PTR *)*p_BugCheckParameter4 != &BugCheckParameter4 )
                goto LABEL_90;
              v65[1] = p_BugCheckParameter4;
              *v65 = &BugCheckParameter4;
              *v66 = (ULONG_PTR)v65;
              p_BugCheckParameter4 = (ULONG_PTR *)v65;
            }
            while ( 1 )
            {
              v44 = v71;
LABEL_97:
              if ( v44 == (ULONG_PTR **)&v71 )
                break;
              if ( v44[1] != (ULONG_PTR *)&v71 )
                goto LABEL_90;
              v47 = *v44;
              if ( (ULONG_PTR **)(*v44)[1] != v44 )
                goto LABEL_90;
              v71 = (ULONG_PTR **)*v44;
              v47[1] = (ULONG_PTR)&v71;
              MiIssueHardFaultIo((__int64)v44, 0, 0LL);
              v48 = p_BugCheckParameter4;
              if ( (ULONG_PTR *)*p_BugCheckParameter4 != &BugCheckParameter4 )
                goto LABEL_90;
              v44[1] = p_BugCheckParameter4;
              *v44 = &BugCheckParameter4;
              *v48 = (ULONG_PTR)v44;
              p_BugCheckParameter4 = (ULONG_PTR *)v44;
            }
LABEL_37:
            v28 = v83[0];
          }
LABEL_38:
          v17 = 0xFFFF800000000000uLL;
          v8 = v88;
          v4 = 0LL;
          CurrentThread = v69;
          v7 = a2;
          v15 = (ULONG *)v90[0];
          v6 = v73;
          v16 = 0xFFFFF68000000000uLL;
          if ( (v85 & 0x400) != 0 )
          {
            v29 = 0;
            v30 = 0;
            while ( 1 )
            {
              v31 = &BugCheckParameter4;
              v32 = (ULONG_PTR *)BugCheckParameter4;
              if ( !v30 )
              {
                v32 = (ULONG_PTR *)v28;
                v31 = v83;
              }
              if ( v32 != v31 )
                break;
LABEL_43:
              if ( (unsigned int)++v30 >= 2 )
              {
                v7 = a2;
                goto LABEL_10;
              }
            }
            while ( ++v29 != 4 )
            {
              v32 = (ULONG_PTR *)*v32;
              if ( v32 == v31 )
                goto LABEL_43;
            }
            MiPfCoalesceAndIssueIOs(v83, &BugCheckParameter4, 0LL);
            v40 = 0;
            while ( 1 )
            {
              v41 = BugCheckParameter4;
              if ( (ULONG_PTR *)BugCheckParameter4 == &BugCheckParameter4 )
                break;
              if ( *(ULONG_PTR **)(BugCheckParameter4 + 8) != &BugCheckParameter4 )
                goto LABEL_90;
              v60 = *(_QWORD *)BugCheckParameter4;
              if ( *(_QWORD *)(*(_QWORD *)BugCheckParameter4 + 8LL) != BugCheckParameter4 )
                goto LABEL_90;
              BugCheckParameter4 = *(_QWORD *)BugCheckParameter4;
              *(_QWORD *)(v60 + 8) = &BugCheckParameter4;
              if ( (*(_DWORD *)(v41 + 192) & 0x1000000) != 0 )
                v61 = MiPfCompleteCoalescedIo(v41, v6);
              else
                v61 = MiPfCompleteInPageSupport(v41, v6);
              if ( (int)(v61 + 0x80000000) >= 0 && v61 != -1073740748 )
                v40 = v61;
            }
            if ( v40 < 0 )
            {
              v67 = v68;
              if ( v68 >= 0 )
                v67 = v40;
              v68 = v67;
            }
            CurrentThread = v69;
            v4 = 0LL;
            v7 = a2;
            v17 = 0xFFFF800000000000uLL;
            v84 = 0LL;
            v16 = 0xFFFFF68000000000uLL;
            if ( v8 > 1 )
            {
              KeAbPostReleaseEx(BugCheckParameter2, v8);
              v8 = 0LL;
              v88 = 0LL;
              MiDereferenceInPageAutoBoostLock(BugCheckParameter2);
              v4 = 0LL;
              BugCheckParameter2 = 0LL;
LABEL_47:
              v7 = a2;
              goto LABEL_10;
            }
          }
          goto LABEL_11;
        }
        if ( *(_DWORD *)(v83[0] + 184LL) < 0x100000u || v44 != (ULONG_PTR **)&v71 )
          break;
        v62 = *(_QWORD *)v83[0];
        if ( *(_QWORD *)(*(_QWORD *)v83[0] + 8LL) != v83[0]
          || (v63 = *(_QWORD **)(v83[0] + 8LL), *v63 != v83[0])
          || (*v63 = v62,
              *(_QWORD *)(v62 + 8) = v63,
              v84 -= *(unsigned int *)(v28 + 184),
              MiIssueHardFaultIo(v28, 0, 0LL),
              v64 = p_BugCheckParameter4,
              (ULONG_PTR *)*p_BugCheckParameter4 != &BugCheckParameter4) )
        {
LABEL_90:
          __fastfail(3u);
        }
        *(_QWORD *)(v28 + 8) = p_BugCheckParameter4;
        *(_QWORD *)v28 = &BugCheckParameter4;
        *v64 = v28;
        v44 = v71;
        p_BugCheckParameter4 = (ULONG_PTR *)v28;
      }
      if ( v44 == (ULONG_PTR **)&v71 )
      {
        if ( v84 < 0x100000 )
          goto LABEL_38;
        v45 = *(_QWORD *)(v83[0] + 96LL);
        v46 = *(_QWORD *)(v83[0] + 200LL);
        v55 = v45;
LABEL_124:
        v56 = v55 - v45;
        v57 = v56 + *(_DWORD *)(v83[0] + 184LL);
        if ( v56 > 0x20000 || v57 + v43 > 0x100000 )
          goto LABEL_142;
        v58 = *(_QWORD *)v83[0];
        if ( *(_QWORD *)(*(_QWORD *)v83[0] + 8LL) != v83[0] )
          goto LABEL_90;
        v59 = *(_QWORD **)(v83[0] + 8LL);
        if ( *v59 != v83[0] )
          goto LABEL_90;
        *v59 = v58;
        *(_QWORD *)(v58 + 8) = v59;
        v42 = (__int64 *)v72;
        if ( *v72 != (ULONG_PTR *)&v71 )
          goto LABEL_90;
        *(_QWORD *)(v28 + 8) = v72;
        *(_QWORD *)v28 = &v71;
        v43 += v57;
        *v42 = v28;
        v44 = v71;
        v45 += v57;
        v72 = (ULONG_PTR **)v28;
        v84 -= *(unsigned int *)(v28 + 184);
      }
      else
      {
        v55 = *(_QWORD *)(v83[0] + 96LL);
        if ( v45 <= v55 && v46 == *(_QWORD *)(v83[0] + 200LL) )
          goto LABEL_124;
LABEL_142:
        if ( (int)MiPfIssueCoalesceCandidates(&v71, v43, &BugCheckParameter4) < 0 )
          goto LABEL_37;
        v44 = v71;
        v43 = 0;
      }
    }
  }
  v79 = v78;
  v80 = v4;
LABEL_56:
  CurrentThread = v69;
LABEL_57:
  v35 = v68;
LABEL_58:
  if ( v13 )
  {
    MiFreePageChain(&v86[4]);
    if ( (_DWORD)v92 )
      MiReleaseNonPagedResources((__int64)v15, 0x200uLL);
  }
  MiPfCoalesceAndIssueIOs(v83, &BugCheckParameter4, 0LL);
  v36 = 0;
  while ( 1 )
  {
    v37 = BugCheckParameter4;
    if ( (ULONG_PTR *)BugCheckParameter4 == &BugCheckParameter4 )
      break;
    if ( *(ULONG_PTR **)(BugCheckParameter4 + 8) != &BugCheckParameter4 )
      goto LABEL_90;
    v38 = *(_QWORD *)BugCheckParameter4;
    if ( *(_QWORD *)(*(_QWORD *)BugCheckParameter4 + 8LL) != BugCheckParameter4 )
      goto LABEL_90;
    BugCheckParameter4 = *(_QWORD *)BugCheckParameter4;
    *(_QWORD *)(v38 + 8) = &BugCheckParameter4;
    if ( (*(_DWORD *)(v37 + 192) & 0x1000000) != 0 )
      v39 = MiPfCompleteCoalescedIo(v37, v6);
    else
      v39 = MiPfCompleteInPageSupport(v37, v6);
    if ( (int)(v39 + 0x80000000) >= 0 && v39 != -1073740748 )
      v36 = v39;
  }
  if ( v36 < 0 )
  {
    if ( v35 < 0 )
      v36 = v68;
  }
  else
  {
    v36 = v35;
    if ( v35 >= 0 && v89 < 0 && (v85 & 0x8000) != 0 )
      v36 = v89;
  }
  if ( v8 > 1 )
  {
    KeAbPostReleaseEx(BugCheckParameter2, v8);
    MiDereferenceInPageAutoBoostLock(BugCheckParameter2);
    BugCheckParameter2 = 0LL;
  }
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  --BYTE6(CurrentThread[1].Queue);
  return (unsigned int)v36;
}
