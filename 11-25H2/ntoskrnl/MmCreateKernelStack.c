/*
 * XREFs of MmCreateKernelStack @ 0x140345F40
 * Callers:
 *     KiExpandKernelStackAndCalloutOnStackSegment @ 0x1403481A0 (KiExpandKernelStackAndCalloutOnStackSegment.c)
 *     KiEnableOptionalXStateFeatures @ 0x1404D185C (KiEnableOptionalXStateFeatures.c)
 *     KiAllocateXStateStack @ 0x1404D8FFC (KiAllocateXStateStack.c)
 *     KiAllocateProcessorStacks @ 0x1405B1E34 (KiAllocateProcessorStacks.c)
 *     PspEnableProcessOptionalXStateFeatures @ 0x140764ED0 (PspEnableProcessOptionalXStateFeatures.c)
 *     PspRecheckThreadOptionalXStateFeatures @ 0x1408F3834 (PspRecheckThreadOptionalXStateFeatures.c)
 *     KeUserModeCallback @ 0x140938670 (KeUserModeCallback.c)
 *     KiCreateKernelShadowStack @ 0x140A08B0C (KiCreateKernelShadowStack.c)
 *     KeAllocateCalloutStackEx @ 0x140A65040 (KeAllocateCalloutStackEx.c)
 *     KeInitThread @ 0x140B59400 (KeInitThread.c)
 * Callees:
 *     MiAllocateKernelStackPages @ 0x1402282B8 (MiAllocateKernelStackPages.c)
 *     MiReleasePtes @ 0x1403289B0 (MiReleasePtes.c)
 *     MiReservePtes @ 0x14032A200 (MiReservePtes.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiValidateKernelShadowStackPage @ 0x140346F68 (MiValidateKernelShadowStackPage.c)
 *     MiUpdateKernelShadowStackOwnerData @ 0x1404892F8 (MiUpdateKernelShadowStackOwnerData.c)
 *     MiLogKernelStackEvent @ 0x1404CCB64 (MiLogKernelStackEvent.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     MmKasanCommitRegion @ 0x14066E2FC (MmKasanCommitRegion.c)
 *     FirstEntrySList @ 0x1406A85B0 (FirstEntrySList.c)
 *     RtlpInterlockedPopEntrySList @ 0x1406A85C0 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x1406A8600 (RtlpInterlockedPushEntrySList.c)
 */

__int64 __fastcall MmCreateKernelStack(int *a1)
{
  int v1; // r8d
  int v2; // r14d
  __int64 v3; // rbx
  unsigned __int64 v5; // rsi
  ULONG *v6; // r15
  int v7; // ebp
  __int64 v8; // r10
  unsigned int v9; // r12d
  __int64 v10; // r13
  int v11; // ebp
  int v12; // r9d
  unsigned int v13; // edx
  struct _KPRCB *CurrentPrcb; // r8
  char *v15; // rcx
  __int64 v16; // rbp
  ULONG_PTR v17; // r9
  ULONG_PTR v18; // rbp
  unsigned __int64 v19; // r13
  unsigned int v20; // r9d
  __int64 v22; // rdx
  unsigned int v23; // r8d
  int v24; // eax
  unsigned __int64 v25; // rbp
  int v26; // eax
  int v27; // edx
  int v28; // ecx
  __int64 v29; // rax
  bool v30; // zf
  _SLIST_HEADER *v31; // rax
  PSLIST_ENTRY v32; // rax
  ULONG_PTR Next; // r9
  ULONG_PTR v34; // r12
  ULONG_PTR BugCheckParameter4; // rax
  _QWORD *v36; // r15
  _QWORD *v37; // r12
  unsigned __int64 v38; // rsi
  unsigned __int64 *v39; // rbx
  unsigned __int64 v40; // r12
  unsigned __int8 v41; // r9
  __int64 v42; // rbx
  __int64 v43; // r15
  int v44; // ebp
  unsigned __int8 v45; // r9
  __int64 v46; // rbp
  void *v47; // rcx
  __int64 v48; // rax
  unsigned __int64 *v49; // r12
  unsigned __int64 *v50; // rcx
  __int64 v51; // r10
  unsigned __int64 v52; // rdx
  __int64 v53; // r9
  unsigned __int8 CurrentIrql; // al
  char *v55; // rcx
  void *v56; // rcx
  __int64 v57; // [rsp+30h] [rbp-B8h]
  _SLIST_HEADER *ListHead; // [rsp+38h] [rbp-B0h]
  PSLIST_HEADER ListHeada; // [rsp+38h] [rbp-B0h]
  char v60; // [rsp+40h] [rbp-A8h] BYREF
  __int128 v61; // [rsp+50h] [rbp-98h] BYREF
  __int128 v62; // [rsp+60h] [rbp-88h]
  __int128 v63; // [rsp+70h] [rbp-78h]
  __int128 v64; // [rsp+80h] [rbp-68h]
  __int64 v65; // [rsp+90h] [rbp-58h]
  unsigned int v66; // [rsp+F0h] [rbp+8h]
  int v67; // [rsp+F8h] [rbp+10h]
  int v68; // [rsp+100h] [rbp+18h]
  unsigned __int8 v69; // [rsp+100h] [rbp+18h]
  unsigned int v70; // [rsp+100h] [rbp+18h]
  __int64 v71; // [rsp+108h] [rbp+20h]
  unsigned __int64 v72; // [rsp+108h] [rbp+20h]
  __int64 v73; // [rsp+108h] [rbp+20h]

  v1 = a1[1];
  v2 = *a1;
  v3 = (unsigned int)a1[2];
  v5 = *((_QWORD *)a1 + 2);
  v61 = 0LL;
  v62 = 0LL;
  v63 = 0LL;
  v65 = 0LL;
  v64 = 0LL;
  *((_QWORD *)a1 + 3) = 0LL;
  *((_QWORD *)a1 + 4) = 0LL;
  if ( v1 != 5 && (v2 & 0x40) != 0 && (v2 & 0x10) == 0 )
    return 3221225485LL;
  if ( v5 )
    v6 = (ULONG *)*((_QWORD *)qword_140E2FD48 + *(unsigned __int16 *)(*(_QWORD *)(v5 + 544) + 1198LL));
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
  v57 = v8;
  if ( (v2 & 1) != 0 )
  {
    v19 = (unsigned int)KeKernelLargeStackSize;
    v67 = 8;
    if ( (v2 & 4) == 0 )
      v19 = (unsigned int)KeKernelLargeStackCommit;
    v10 = v19 >> 12;
    v20 = (unsigned int)KeKernelLargeStackSize >> 12;
    v66 = (unsigned int)KeKernelLargeStackSize >> 12;
LABEL_26:
    if ( v7 )
      return 3221225688LL;
    v46 = v9 + v20;
    v47 = &unk_140E35BA0;
    v70 = v9 + v20;
    if ( a1[1] != 5 )
      v47 = &unk_140E35C00;
    v48 = MiReservePtes((__int64)v47, v46);
    v49 = (unsigned __int64 *)v48;
    if ( !v48 )
      return 3221225626LL;
    v50 = (unsigned __int64 *)v48;
    v73 = v46;
    v51 = (unsigned int)v46;
    v25 = ((v48 << 25) + (v46 << 28)) >> 16;
    if ( a1[1] == 5 )
    {
      v52 = ((v48 << 25) + 0x10000000) >> 16;
      v53 = v66 << 12;
      if ( byte_140FCDC68 && v66 << 12 )
      {
        if ( v52 < 0xFFFF800000000000uLL
          || v53 + v52 < v52
          || (int)v3 + 1 > (unsigned int)(unsigned __int16)KeNumberNodes
          || (int)MmKasanCommitRegion(
                    KasaniShadow + ((v52 + 0x800000000000LL) >> 3),
                    KasaniShadow + ((v53 + 0x7FFFFFFFFFFFLL + v52) >> 3)) < 0 )
        {
LABEL_109:
          v56 = &unk_140E35BA0;
          if ( a1[1] != 5 )
            v56 = &unk_140E35C00;
          MiReleasePtes((__int64)v56, v49, v70);
          return 3221225626LL;
        }
        v51 = v73;
        v50 = v49;
      }
      if ( (v2 & 5) == 1 )
        v50 = &v49[(unsigned __int64)(unsigned int)(KeKernelLargeStackSize - KeKernelLargeStackCommit) >> 12];
    }
    LODWORD(v64) = v3;
    *((_QWORD *)&v61 + 1) = v50 + 1;
    *(_QWORD *)&v61 = v6;
    *((_QWORD *)&v62 + 1) = v10;
    *(_QWORD *)&v62 = v51;
    LODWORD(v63) = v2;
    *((_QWORD *)&v63 + 1) = v5;
    CurrentIrql = KeGetCurrentIrql();
    BYTE4(v63) = CurrentIrql;
    v55 = &v60;
    DWORD1(v64) = a1[1];
    if ( DWORD1(v64) == 5 )
      v55 = 0LL;
    *((_QWORD *)&v64 + 1) = v55;
    if ( (unsigned int)MiAllocateKernelStackPages((__int64)&v61) )
    {
      *((_QWORD *)a1 + 4) = v65;
      goto LABEL_28;
    }
    goto LABEL_109;
  }
  if ( (v2 & 0x20) != 0 )
  {
    v11 = 2;
    v10 = (unsigned __int64)(unsigned int)KeXStateStackSize >> 12;
    v67 = 2;
  }
  else
  {
    if ( v1 != 5 )
    {
      v11 = v1 + 3;
      v71 = 1LL;
      v67 = v1 + 3;
      v9 = 2;
      v10 = 1LL;
      goto LABEL_13;
    }
    v10 = (unsigned __int8)byte_140E35C64;
    v11 = 0;
    v67 = 0;
  }
  v71 = v10;
LABEL_13:
  v12 = v10;
  v66 = v10;
  if ( (v2 & 0x10) == 0 || v6 != &MiSystemPartition )
    goto LABEL_42;
  if ( v1 == 5 )
  {
    v67 = 1;
    v13 = 0;
  }
  else
  {
    if ( v11 != 5 )
    {
LABEL_42:
      v26 = v67;
      if ( a1[1] == 5 )
      {
        v27 = 0;
      }
      else
      {
        v27 = -1;
        if ( v67 <= 5 )
          v27 = 1;
      }
      v68 = v27;
      v28 = v2 & 0x40;
      while ( 1 )
      {
        v7 = v28;
        if ( v27 != -1 )
        {
          v29 = 48 * (v26 + 319LL);
          v30 = v8 + v29 == 0;
          v31 = (_SLIST_HEADER *)(v8 + v29);
          ListHead = v31;
          if ( !v30 )
          {
            if ( FirstEntrySList(v31) )
            {
              v32 = RtlpInterlockedPopEntrySList(ListHead);
              v28 = v2 & 0x40;
              v7 = v28;
              if ( v32 )
              {
                if ( v68 )
                {
                  *((_QWORD *)a1 + 4) = v32[1].Next;
                  RtlpInterlockedPushEntrySList((PSLIST_HEADER)v6 + 28, v32);
                  v25 = (*((_QWORD *)a1 + 4) & 0xFFFFFFFFFFFFF000uLL) + 0x2000;
                  MiUpdateKernelShadowStackOwnerData(
                    ((v25 >> 9) & 0x7FFFFFFFF8LL) - 8 * ((unsigned int)v10 + (unsigned __int64)v9) - 0x98000000000LL,
                    (unsigned int)v10,
                    (unsigned int)v10,
                    v5);
                }
                else
                {
                  Next = (ULONG_PTR)v32[-1].Next;
                  v34 = (ULONG_PTR)&v32[-255];
                  BugCheckParameter4 = qword_140E372C0 ^ (unsigned __int64)&v32[-255];
                  if ( Next != BugCheckParameter4 )
                    KeBugCheckEx(0x1Au, 0x3470uLL, v34, Next, BugCheckParameter4);
                  v40 = ((v34 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
                  v25 = (__int64)((v40 << 25) + 0x10000000) >> 16;
                  ListHeada = (PSLIST_HEADER)v25;
                  if ( v67 != 1 )
                  {
                    v72 = v40 - 8LL * (unsigned int)v10 + 8;
                    v41 = KeGetCurrentIrql();
                    v69 = v41;
                    __writecr8(2uLL);
                    if ( KiIrqlFlags )
                      KiRaiseIrqlProcessIrqlFlags(v41);
                    do
                    {
                      v42 = *(_QWORD *)v40;
                      v43 = 48 * ((*(_QWORD *)v40 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
                      v44 = 0;
                      while ( _interlockedbittestandset64((volatile signed __int32 *)(v43 + 24), 0x3FuLL) )
                      {
                        do
                        {
                          if ( (++v44 & HvlLongSpinCountMask) == 0
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
                        while ( *(__int64 *)(v43 + 24) < 0 );
                      }
                      if ( v42 == *(_QWORD *)v40 )
                      {
                        *(_QWORD *)v43 = (v5 >> 3) ^ (*(_QWORD *)v43 ^ (v5 >> 3)) & 0xFFFFF00000000001uLL;
                        if ( v5 && (*(_QWORD *)v43 & 1) == 0 )
                          *(_QWORD *)v43 |= 1uLL;
                        v40 -= 8LL;
                      }
                      _InterlockedAnd64((volatile signed __int64 *)(v43 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                    }
                    while ( v40 >= v72 );
                    v45 = v69;
                    v25 = (unsigned __int64)ListHeada;
                    if ( v69 < 2u )
                    {
                      if ( KiIrqlFlags )
                      {
                        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v69);
                        v45 = v69;
                      }
                      __writecr8(v45);
                    }
                  }
                }
LABEL_28:
                v12 = v66;
LABEL_29:
                v8 = v57;
                goto LABEL_30;
              }
            }
            else
            {
              v28 = v2 & 0x40;
            }
            v8 = v57;
            v27 = v68;
          }
        }
        if ( v67 != 1 || (v7 = v2 & 0x40, (v2 & 0x40) != 0) )
        {
          v20 = v10;
          goto LABEL_26;
        }
        v26 = 0;
        v67 = 0;
      }
    }
    v13 = 1;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  if ( CurrentPrcb->SchedulerSubNode->Affinity.Reserved[0] != (_DWORD)v3 )
    goto LABEL_42;
  v15 = (char *)CurrentPrcb + 8 * v13;
  if ( !*((_QWORD *)v15 + 4326) )
    goto LABEL_42;
  v16 = _InterlockedExchange64((volatile __int64 *)v15 + 4326, 0LL);
  if ( !v16 )
    goto LABEL_42;
  if ( v13 )
  {
    *((_QWORD *)a1 + 4) = v16;
    v25 = (v16 & 0xFFFFFFFFFFFFF000uLL) + 0x2000;
    v36 = (_QWORD *)(((v25 >> 9) & 0x7FFFFFFFF8LL) - 8 * ((unsigned int)v10 + (unsigned __int64)v9) - 0x97FFFFFFFF8LL);
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
      v10 = v71;
      goto LABEL_28;
    }
    goto LABEL_29;
  }
  v17 = *(_QWORD *)(v16 - 16);
  v18 = v16 - 4080;
  if ( v17 != (qword_140E372C0 ^ v18) )
    KeBugCheckEx(0x1Au, 0x3470uLL, v18, v17, qword_140E372C0 ^ v18);
  v12 = v10;
  v25 = (__int64)(((v18 & 0xFFFFFFFFFFFFF000uLL) << 16) + 0x10000000) >> 16;
LABEL_30:
  if ( (unsigned __int64)v67 < 8 )
  {
    v22 = v8 + 48 * (v67 + 319LL);
    v23 = 1;
    if ( *(_DWORD *)(v22 + 36) + 1 > 0 )
      v23 = *(_DWORD *)(v22 + 36) + 1;
    *(_DWORD *)(v22 + 36) = v23;
    v24 = *(_DWORD *)(v22 + 4LL * *(unsigned int *)(v22 + 32) + 16);
    if ( v24 < v23 || v24 < 0 )
      *(_DWORD *)(v22 + 4LL * *(unsigned int *)(v22 + 32) + 16) = v23;
  }
  if ( (BYTE4(PerfGlobalGroupMask) & 1) != 0 && (v2 & 8) != 0 && a1[1] == 5 )
    MiLogKernelStackEvent(v25 - (unsigned int)(v12 << 12), v10, 1LL);
  *((_QWORD *)a1 + 3) = v25;
  return 0LL;
}
