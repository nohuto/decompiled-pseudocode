/*
 * XREFs of MmCreateKernelStack @ 0x1402207C0
 * Callers:
 *     KiExpandKernelStackAndCalloutOnStackSegment @ 0x140231DD0 (KiExpandKernelStackAndCalloutOnStackSegment.c)
 *     KiEnableOptionalXStateFeatures @ 0x1403F5AF8 (KiEnableOptionalXStateFeatures.c)
 *     KiAllocateXStateStack @ 0x1404CCE4C (KiAllocateXStateStack.c)
 *     KiAllocateProcessorStacks @ 0x1405B2FC8 (KiAllocateProcessorStacks.c)
 *     PspEnableProcessOptionalXStateFeatures @ 0x140774AC0 (PspEnableProcessOptionalXStateFeatures.c)
 *     KeUserModeCallback @ 0x1408BCB10 (KeUserModeCallback.c)
 *     PspRecheckThreadOptionalXStateFeatures @ 0x1408FCA64 (PspRecheckThreadOptionalXStateFeatures.c)
 *     KiCreateKernelShadowStack @ 0x140A0ABE0 (KiCreateKernelShadowStack.c)
 *     KeAllocateCalloutStackEx @ 0x140A61060 (KeAllocateCalloutStackEx.c)
 *     KeInitThread @ 0x140B6A948 (KeInitThread.c)
 * Callees:
 *     MiAllocateKernelStackPages @ 0x14021639C (MiAllocateKernelStackPages.c)
 *     MiUpdateKernelShadowStackOwnerData @ 0x14021F29C (MiUpdateKernelShadowStackOwnerData.c)
 *     MiValidateKernelShadowStackPage @ 0x140221838 (MiValidateKernelShadowStackPage.c)
 *     MiReleasePtes @ 0x14029D9A0 (MiReleasePtes.c)
 *     MiReservePtes @ 0x14029FB10 (MiReservePtes.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiLogKernelStackEvent @ 0x1404C5C18 (MiLogKernelStackEvent.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     MmKasanCommitRegion @ 0x14067AD88 (MmKasanCommitRegion.c)
 *     FirstEntrySList @ 0x1406B4820 (FirstEntrySList.c)
 *     RtlpInterlockedPopEntrySList @ 0x1406B4830 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x1406B4870 (RtlpInterlockedPushEntrySList.c)
 */

__int64 __fastcall MmCreateKernelStack(int *a1)
{
  int v1; // r8d
  int v2; // ebp
  __int64 v3; // rbx
  unsigned __int64 v5; // rsi
  ULONG *v6; // r15
  int v7; // r14d
  __int64 v8; // r10
  unsigned int v9; // r12d
  __int64 v10; // r13
  int v11; // r14d
  int v12; // r9d
  unsigned int v13; // edx
  struct _KPRCB *CurrentPrcb; // r8
  char *v15; // rcx
  __int64 v16; // r14
  ULONG_PTR v17; // r9
  ULONG_PTR v18; // r14
  unsigned __int64 v19; // r13
  unsigned int v20; // r9d
  __int64 v22; // rdx
  unsigned int v23; // r8d
  int v24; // eax
  int v25; // eax
  int v26; // edx
  int v27; // ecx
  __int64 v28; // rax
  bool v29; // zf
  _SLIST_HEADER *v30; // rax
  PSLIST_ENTRY v31; // rax
  ULONG_PTR Next; // r9
  ULONG_PTR v33; // r12
  ULONG_PTR BugCheckParameter4; // rax
  unsigned __int64 v35; // r14
  _QWORD *v36; // r15
  _QWORD *v37; // r12
  unsigned __int64 v38; // rsi
  unsigned __int64 *v39; // rbx
  __int64 v40; // r14
  void *v41; // rcx
  __int64 v42; // rax
  __int64 v43; // r12
  __int64 v44; // rcx
  __int64 v45; // r10
  unsigned int v46; // r11d
  unsigned __int64 v47; // rdx
  __int64 v48; // r9
  unsigned __int8 CurrentIrql; // al
  char *v50; // rcx
  unsigned __int64 v51; // r12
  __int64 v52; // r8
  __int64 v53; // r9
  __int64 v54; // rdx
  unsigned __int64 v55; // rcx
  __int64 v56; // rbx
  __int64 v57; // r15
  unsigned int v58; // r14d
  unsigned __int8 v59; // r9
  void *v60; // rcx
  __int64 v61; // [rsp+30h] [rbp-B8h]
  _SLIST_HEADER *ListHead; // [rsp+38h] [rbp-B0h]
  PSLIST_HEADER ListHeada; // [rsp+38h] [rbp-B0h]
  char v64; // [rsp+40h] [rbp-A8h] BYREF
  __int128 v65; // [rsp+50h] [rbp-98h] BYREF
  __int128 v66; // [rsp+60h] [rbp-88h]
  __int128 v67; // [rsp+70h] [rbp-78h]
  __int128 v68; // [rsp+80h] [rbp-68h]
  __int64 v69; // [rsp+90h] [rbp-58h]
  unsigned int v70; // [rsp+F0h] [rbp+8h]
  int v71; // [rsp+F8h] [rbp+10h]
  int v72; // [rsp+100h] [rbp+18h]
  unsigned int v73; // [rsp+100h] [rbp+18h]
  unsigned __int8 v74; // [rsp+100h] [rbp+18h]
  __int64 v75; // [rsp+108h] [rbp+20h]
  __int64 v76; // [rsp+108h] [rbp+20h]
  unsigned __int64 v77; // [rsp+108h] [rbp+20h]

  v1 = a1[1];
  v2 = *a1;
  v3 = (unsigned int)a1[2];
  v5 = *((_QWORD *)a1 + 2);
  v65 = 0LL;
  v66 = 0LL;
  v67 = 0LL;
  v69 = 0LL;
  v68 = 0LL;
  *((_QWORD *)a1 + 3) = 0LL;
  *((_QWORD *)a1 + 4) = 0LL;
  if ( v1 != 5 && (v2 & 0x50) == 0x40 )
    return 3221225485LL;
  if ( v5 )
    v6 = (ULONG *)*((_QWORD *)qword_140E300C8 + *(unsigned __int16 *)(*(_QWORD *)(v5 + 544) + 1198LL));
  else
    v6 = &MiSystemPartition;
  if ( (v2 & 0x10) != 0 )
  {
    if ( v1 == 5 )
      v5 = -32LL;
    v7 = v2 & 0x40;
  }
  else
  {
    if ( (v2 & 0x40) != 0 )
      return 3221225485LL;
    v7 = v2 & 0x40;
    if ( !v5 && v1 == 5 )
      v5 = -16LL;
  }
  v8 = *((_QWORD *)v6 + 2) + 57216 * v3;
  v9 = 1;
  v61 = v8;
  if ( (v2 & 1) != 0 )
  {
    v19 = (unsigned int)KeKernelLargeStackSize;
    v71 = 8;
    if ( (v2 & 4) == 0 )
      v19 = (unsigned int)KeKernelLargeStackCommit;
    v10 = v19 >> 12;
    v20 = (unsigned int)KeKernelLargeStackSize >> 12;
    v70 = (unsigned int)KeKernelLargeStackSize >> 12;
LABEL_26:
    if ( v7 )
      return 3221225688LL;
    v40 = v9 + v20;
    v41 = &unk_140E35F20;
    v73 = v9 + v20;
    if ( a1[1] != 5 )
      v41 = &unk_140E35F80;
    v42 = MiReservePtes(v41, (unsigned int)v40);
    v43 = v42;
    if ( !v42 )
      return 3221225626LL;
    v44 = v42;
    v76 = v40;
    v45 = (unsigned int)v40;
    v35 = ((v42 << 25) + (v40 << 28)) >> 16;
    if ( a1[1] == 5 )
    {
      v46 = v3 + 1;
      v47 = ((v42 << 25) + 0x10000000) >> 16;
      v48 = v70 << 12;
      if ( byte_140FCECA8 && v70 << 12 )
      {
        if ( v47 < 0xFFFF800000000000uLL
          || v48 + v47 < v47
          || v46 > (unsigned __int16)KeNumberNodes
          || (int)MmKasanCommitRegion(
                    KasaniShadow + ((v47 + 0x800000000000LL) >> 3),
                    KasaniShadow + ((v48 + 0x7FFFFFFFFFFFLL + v47) >> 3),
                    v46) < 0 )
        {
LABEL_109:
          v60 = &unk_140E35F20;
          if ( a1[1] != 5 )
            v60 = &unk_140E35F80;
          MiReleasePtes(v60, v43, v73);
          return 3221225626LL;
        }
        v45 = v76;
        v44 = v43;
      }
      if ( (v2 & 5) == 1 )
        v44 = v43 + 8 * ((unsigned __int64)(unsigned int)(KeKernelLargeStackSize - KeKernelLargeStackCommit) >> 12);
    }
    LODWORD(v68) = v3;
    *((_QWORD *)&v65 + 1) = v44 + 8;
    *(_QWORD *)&v65 = v6;
    *((_QWORD *)&v66 + 1) = v10;
    *(_QWORD *)&v66 = v45;
    LODWORD(v67) = v2;
    *((_QWORD *)&v67 + 1) = v5;
    CurrentIrql = KeGetCurrentIrql();
    BYTE4(v67) = CurrentIrql;
    v50 = &v64;
    DWORD1(v68) = a1[1];
    if ( DWORD1(v68) == 5 )
      v50 = 0LL;
    *((_QWORD *)&v68 + 1) = v50;
    if ( (unsigned int)MiAllocateKernelStackPages((__int64)&v65) )
    {
      *((_QWORD *)a1 + 4) = v69;
      goto LABEL_28;
    }
    goto LABEL_109;
  }
  if ( (v2 & 0x20) != 0 )
  {
    v11 = 2;
    v10 = (unsigned __int64)(unsigned int)KeXStateStackSize >> 12;
    v71 = 2;
  }
  else
  {
    if ( v1 != 5 )
    {
      v11 = v1 + 3;
      v75 = 1LL;
      v71 = v1 + 3;
      v9 = 2;
      v10 = 1LL;
      goto LABEL_13;
    }
    v10 = (unsigned __int8)byte_140E35FE4;
    v11 = 0;
    v71 = 0;
  }
  v75 = v10;
LABEL_13:
  v12 = v10;
  v70 = v10;
  if ( (v2 & 0x10) == 0 || v6 != &MiSystemPartition )
    goto LABEL_41;
  if ( v1 == 5 )
  {
    v71 = 1;
    v13 = 0;
  }
  else
  {
    if ( v11 != 5 )
    {
LABEL_41:
      v25 = v71;
      if ( a1[1] == 5 )
      {
        v26 = 0;
      }
      else
      {
        v26 = -1;
        if ( v71 <= 5 )
          v26 = 1;
      }
      v72 = v26;
      v27 = v2 & 0x40;
      while ( 1 )
      {
        v7 = v27;
        if ( v26 != -1 )
        {
          v28 = 48 * (v25 + 319LL);
          v29 = v8 + v28 == 0;
          v30 = (_SLIST_HEADER *)(v8 + v28);
          ListHead = v30;
          if ( !v29 )
          {
            if ( FirstEntrySList(v30) )
            {
              v31 = RtlpInterlockedPopEntrySList(ListHead);
              v27 = v2 & 0x40;
              v7 = v27;
              if ( v31 )
              {
                if ( v72 )
                {
                  *((_QWORD *)a1 + 4) = v31[1].Next;
                  RtlpInterlockedPushEntrySList((PSLIST_HEADER)v6 + 28, v31);
                  v35 = (*((_QWORD *)a1 + 4) & 0xFFFFFFFFFFFFF000uLL) + 0x2000;
                  MiUpdateKernelShadowStackOwnerData(
                    ((v35 >> 9) & 0x7FFFFFFFF8LL) - 8 * ((unsigned int)v10 + (unsigned __int64)v9) - 0x98000000000LL,
                    v10,
                    (unsigned int)v10,
                    v5);
                }
                else
                {
                  Next = (ULONG_PTR)v31[-1].Next;
                  v33 = (ULONG_PTR)&v31[-255];
                  BugCheckParameter4 = qword_140E37640 ^ (unsigned __int64)&v31[-255];
                  if ( Next != BugCheckParameter4 )
                    KeBugCheckEx(0x1Au, 0x3470uLL, v33, Next, BugCheckParameter4);
                  v51 = ((v33 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
                  v35 = (__int64)((v51 << 25) + 0x10000000) >> 16;
                  ListHeada = (PSLIST_HEADER)v35;
                  if ( v71 != 1 )
                  {
                    v52 = v51 - 8LL * (unsigned int)v10 + 8;
                    v77 = v52;
                    v53 = KeGetCurrentIrql();
                    v74 = v53;
                    __writecr8(2uLL);
                    if ( KiIrqlFlags )
                      KiRaiseIrqlProcessIrqlFlags((unsigned __int8)v53, 2LL);
                    v54 = 0xFFFFFFFFFFLL;
                    v55 = 0xFFFFDE0000000000uLL;
                    do
                    {
                      v56 = *(_QWORD *)v51;
                      v57 = 48 * ((*(_QWORD *)v51 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
                      v58 = 0;
                      while ( _interlockedbittestandset64((volatile signed __int32 *)(v57 + 24), 0x3FuLL) )
                      {
                        do
                        {
                          if ( (++v58 & HvlLongSpinCountMask) == 0
                            && (HvlEnlightenments & 0x40) != 0
                            && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v55, v54, v52, v53) )
                          {
                            HvlNotifyLongSpinWait(v58);
                          }
                          else
                          {
                            _mm_pause();
                          }
                        }
                        while ( *(__int64 *)(v57 + 24) < 0 );
                      }
                      if ( v56 == *(_QWORD *)v51 )
                      {
                        v52 = 0xFFFFF00000000001uLL;
                        *(_QWORD *)v57 = (v5 >> 3) ^ (*(_QWORD *)v57 ^ (v5 >> 3)) & 0xFFFFF00000000001uLL;
                        if ( v5 && (*(_QWORD *)v57 & 1) == 0 )
                          *(_QWORD *)v57 |= 1uLL;
                        v51 -= 8LL;
                      }
                      v53 = 0x7FFFFFFFFFFFFFFFLL;
                      _InterlockedAnd64((volatile signed __int64 *)(v57 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                      v55 = 0xFFFFDE0000000000uLL;
                      v54 = 0xFFFFFFFFFFLL;
                    }
                    while ( v51 >= v77 );
                    v59 = v74;
                    v35 = (unsigned __int64)ListHeada;
                    if ( v74 < 2u )
                    {
                      if ( KiIrqlFlags )
                      {
                        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v74);
                        v59 = v74;
                      }
                      __writecr8(v59);
                    }
                  }
                }
LABEL_28:
                v12 = v70;
LABEL_29:
                v8 = v61;
                goto LABEL_30;
              }
            }
            else
            {
              v27 = v2 & 0x40;
            }
            v8 = v61;
            v26 = v72;
          }
        }
        if ( v71 != 1 || (v7 = v2 & 0x40, (v2 & 0x40) != 0) )
        {
          v20 = v10;
          goto LABEL_26;
        }
        v25 = 0;
        v71 = 0;
      }
    }
    v13 = 1;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  if ( CurrentPrcb->SchedulerSubNode->Affinity.Reserved[0] != (_DWORD)v3 )
    goto LABEL_41;
  v15 = (char *)CurrentPrcb + 8 * v13;
  if ( !*((_QWORD *)v15 + 4326) )
    goto LABEL_41;
  v16 = _InterlockedExchange64((volatile __int64 *)v15 + 4326, 0LL);
  if ( !v16 )
    goto LABEL_41;
  if ( v13 )
  {
    *((_QWORD *)a1 + 4) = v16;
    v35 = (v16 & 0xFFFFFFFFFFFFF000uLL) + 0x2000;
    v36 = (_QWORD *)(((v35 >> 9) & 0x7FFFFFFFF8LL) - 8 * ((unsigned int)v10 + (unsigned __int64)v9) - 0x97FFFFFFFF8LL);
    v37 = &v36[(unsigned int)v10];
    if ( v36 < v37 )
    {
      v38 = v5 >> 3;
      do
      {
        v39 = (unsigned __int64 *)(48 * ((*v36 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL);
        MiValidateKernelShadowStackPage((ULONG_PTR)v36++);
        *v39 = v38 ^ (*v39 ^ v38) & 0xFFFFF00000000001uLL;
      }
      while ( v36 < v37 );
      v10 = v75;
      goto LABEL_28;
    }
    goto LABEL_29;
  }
  v17 = *(_QWORD *)(v16 - 16);
  v18 = v16 - 4080;
  if ( v17 != (qword_140E37640 ^ v18) )
    KeBugCheckEx(0x1Au, 0x3470uLL, v18, v17, qword_140E37640 ^ v18);
  v12 = v10;
  v35 = (__int64)(((v18 & 0xFFFFFFFFFFFFF000uLL) << 16) + 0x10000000) >> 16;
LABEL_30:
  if ( (unsigned __int64)v71 < 8 )
  {
    v22 = v8 + 48 * (v71 + 319LL);
    v23 = 1;
    if ( *(_DWORD *)(v22 + 36) + 1 > 0 )
      v23 = *(_DWORD *)(v22 + 36) + 1;
    *(_DWORD *)(v22 + 36) = v23;
    v24 = *(_DWORD *)(v22 + 4LL * *(unsigned int *)(v22 + 32) + 16);
    if ( v24 < v23 || v24 < 0 )
      *(_DWORD *)(v22 + 4LL * *(unsigned int *)(v22 + 32) + 16) = v23;
  }
  if ( (BYTE4(PerfGlobalGroupMask) & 1) != 0 && (v2 & 8) != 0 && a1[1] == 5 )
    MiLogKernelStackEvent(v35 - (unsigned int)(v12 << 12), v10, 1LL);
  *((_QWORD *)a1 + 3) = v35;
  return 0LL;
}
