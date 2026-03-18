/*
 * XREFs of MmDeleteKernelStack @ 0x140346FC0
 * Callers:
 *     PspDeleteKernelStack @ 0x140228D10 (PspDeleteKernelStack.c)
 *     KiExpandKernelStackAndCalloutOnStackSegment @ 0x1403481A0 (KiExpandKernelStackAndCalloutOnStackSegment.c)
 *     KiEnableOptionalXStateFeatures @ 0x1404D185C (KiEnableOptionalXStateFeatures.c)
 *     KiFreeProcessorStacks @ 0x1405B3044 (KiFreeProcessorStacks.c)
 *     KiDeleteXStateStack @ 0x1405B4084 (KiDeleteXStateStack.c)
 *     KeEnableOptionalXStateFeaturesApc @ 0x1405B4980 (KeEnableOptionalXStateFeaturesApc.c)
 *     KiFreeTemporaryStacks @ 0x1405B85D0 (KiFreeTemporaryStacks.c)
 *     PspEnableProcessOptionalXStateFeatures @ 0x140764ED0 (PspEnableProcessOptionalXStateFeatures.c)
 *     KeUninitThread @ 0x1408F42C0 (KeUninitThread.c)
 *     KeUserModeCallback @ 0x140938670 (KeUserModeCallback.c)
 *     KiDeleteKernelShadowStack @ 0x140A14AE8 (KiDeleteKernelShadowStack.c)
 *     KeAllocateCalloutStackEx @ 0x140A65040 (KeAllocateCalloutStackEx.c)
 *     KeFreeCalloutStack @ 0x140A7F1E0 (KeFreeCalloutStack.c)
 *     KeInitThread @ 0x140B59400 (KeInitThread.c)
 * Callees:
 *     MiClearStackOwners @ 0x14021C960 (MiClearStackOwners.c)
 *     MiReleasePtes @ 0x1403289B0 (MiReleasePtes.c)
 *     MiAddKernelStackToPrcbCache @ 0x140346930 (MiAddKernelStackToPrcbCache.c)
 *     MiPageToNode @ 0x140346EA0 (MiPageToNode.c)
 *     MiDeleteKernelStackPages @ 0x1403B3258 (MiDeleteKernelStackPages.c)
 *     MiKernelShadowStackIdealForCaching @ 0x14048AE28 (MiKernelShadowStackIdealForCaching.c)
 *     MiLogKernelStackEvent @ 0x1404CCB64 (MiLogKernelStackEvent.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     RtlpInterlockedPopEntrySList @ 0x1406A85C0 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x1406A8600 (RtlpInterlockedPushEntrySList.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     VslResetKernelShadowStack @ 0x140A4CDB8 (VslResetKernelShadowStack.c)
 */

char __fastcall MmDeleteKernelStack(__int64 a1)
{
  int v1; // edx
  unsigned __int64 v3; // rbp
  int v4; // esi
  __int64 v5; // rdi
  unsigned int v6; // r14d
  int v7; // r13d
  __int64 v8; // r15
  int v9; // r12d
  unsigned __int64 v10; // r9
  int v11; // r8d
  unsigned __int64 v12; // rbp
  unsigned __int64 *v13; // rbp
  int v14; // r11d
  unsigned __int64 v15; // rbp
  ULONG_PTR v16; // rcx
  ULONG *v17; // rdi
  __int64 v18; // rdx
  __int64 v19; // rdx
  int v20; // eax
  int v21; // eax
  __int64 v22; // r9
  int v23; // eax
  unsigned __int16 *v24; // r8
  unsigned int v25; // edx
  unsigned int v26; // ecx
  __int64 v27; // rax
  int v28; // eax
  __int64 v29; // rsi
  unsigned __int8 CurrentIrql; // r12
  unsigned int v31; // eax
  void *v32; // rcx
  PSLIST_ENTRY v33; // r13
  ULONG_PTR v34; // rax
  int v35; // eax
  PSLIST_HEADER v36; // rdi
  int v37; // ebx
  int v38; // eax
  void *v39; // rcx
  size_t v40; // r8
  int v42; // [rsp+30h] [rbp-98h]
  __int64 v43; // [rsp+38h] [rbp-90h]
  int v44; // [rsp+40h] [rbp-88h]
  __int64 v45; // [rsp+48h] [rbp-80h]
  unsigned __int64 v46; // [rsp+50h] [rbp-78h]
  int v47; // [rsp+60h] [rbp-68h]
  int v48; // [rsp+D0h] [rbp+8h]
  ULONG_PTR BugCheckParameter4; // [rsp+D8h] [rbp+10h] BYREF
  PSLIST_HEADER ListHead; // [rsp+E0h] [rbp+18h]
  __int64 v51; // [rsp+E8h] [rbp+20h]

  v1 = *(_DWORD *)a1;
  v3 = *(_QWORD *)(a1 + 24);
  v4 = 0;
  v5 = *(_QWORD *)(a1 + 16);
  v6 = *(_DWORD *)(a1 + 4);
  v7 = 0;
  LODWORD(v51) = *(_DWORD *)a1;
  v8 = ((v3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000008LL;
  if ( v6 == 5 )
  {
    if ( (v1 & 8) != 0 )
    {
      v9 = 2;
      v10 = (unsigned __int64)(unsigned int)KeXStateStackSize >> 12;
      v48 = 2;
    }
    else
    {
      v48 = 0;
      v9 = 0;
      if ( (v1 & 1) != 0 )
      {
        v10 = (unsigned __int64)(unsigned int)KeKernelLargeStackSize >> 12;
        v46 = v10;
        v11 = v10;
        v42 = v10;
LABEL_12:
        v14 = v10 + 1;
        LODWORD(ListHead) = v10 + 1;
        v15 = v3 - (unsigned int)(((_DWORD)v10 + 1) << 12);
        v47 = v11;
        v43 = ((v15 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        if ( (v1 & 2) != 0 && (BYTE4(PerfGlobalGroupMask) & 1) != 0 )
        {
          MiLogKernelStackEvent(v15 + 4096, v10, 0LL);
          v10 = v46;
          v14 = (int)ListHead;
        }
        v45 = v10;
        v16 = v15 + 4096;
        v13 = (unsigned __int64 *)(((v15 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
        v44 = v14;
        LODWORD(BugCheckParameter4) = v7;
        if ( !byte_140FCDC68 )
          goto LABEL_14;
        if ( v16 < 0xFFFF800000000000uLL )
          KeBugCheckEx(0x1F1u, 2uLL, 1uLL, v16, 0LL);
        if ( (v16 & 7) != 0 )
          KeBugCheckEx(0x1F1u, 2uLL, 2uLL, v16, 8uLL);
        if ( v16 + (v10 << 12) < v16 )
          KeBugCheckEx(0x1F1u, 2uLL, 3uLL, v16, v10 << 12);
        v9 = v48;
        v39 = (void *)(KasaniShadow + ((v16 + 0x800000000000LL) >> 3));
        v40 = (v10 << 9) & 0x1FFFFFFFFFFFFFFFLL;
        v45 = v10;
        v44 = v14;
        LODWORD(BugCheckParameter4) = v7;
        v42 = v47;
        if ( v40 )
        {
          memset_0(v39, 0, v40);
          v45 = v46;
          v42 = v47;
          v44 = (int)ListHead;
        }
        else
        {
LABEL_14:
          LOBYTE(v7) = BugCheckParameter4;
        }
        goto LABEL_15;
      }
      v10 = (unsigned __int8)byte_140E35C64;
    }
    v42 = v10;
    v11 = v10;
    v46 = v10;
    v7 = 2;
    if ( (v1 & 4) != 0 )
      v7 = 3;
    goto LABEL_12;
  }
  v8 = ((v3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000010LL;
  v45 = 1LL;
  v9 = v6 + 3;
  LOBYTE(v7) = 2;
  v44 = 3;
  if ( (int)(v6 + 3) > 5 )
    LOBYTE(v7) = 0;
  v12 = ((v3 - 12288) >> 9) & 0x7FFFFFFFF8LL;
  if ( (v1 & 4) != 0 )
  {
    if ( v6 == 2 )
      LOBYTE(v7) = v7 | 1;
    v13 = (unsigned __int64 *)(v12 - 0x98000000000LL);
    v42 = 1;
    LODWORD(v43) = (_DWORD)v13;
  }
  else
  {
    v42 = 1;
    v13 = (unsigned __int64 *)(v12 - 0x98000000000LL);
    v45 = 1LL;
    LODWORD(v43) = (_DWORD)v13;
    v44 = 3;
  }
LABEL_15:
  if ( v5 )
    v17 = (ULONG *)*((_QWORD *)qword_140E2FD48 + *(unsigned __int16 *)(*(_QWORD *)(v5 + 544) + 1198LL));
  else
    v17 = &MiSystemPartition;
  v18 = ((*(_QWORD *)(a1 + 24) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000008LL;
  if ( *(_DWORD *)(a1 + 4) == 5 )
    v18 = ((*(_QWORD *)(a1 + 24) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  *(_DWORD *)(a1 + 8) = MiPageToNode((*(_QWORD *)(v18 - 8) >> 12) & 0xFFFFFFFFFFLL);
  if ( (v7 & 1) != 0 && v17 == &MiSystemPartition && MiAddKernelStackToPrcbCache((int *)a1, v45) )
  {
    if ( v6 == 5 )
      v9 = 1;
    v19 = *((_QWORD *)v17 + 2) + 48 * (v9 + 1192LL * *(unsigned int *)(a1 + 8) + 319);
    v20 = *(_DWORD *)(v19 + 36) - 1;
    if ( v20 >= 0 )
      v4 = *(_DWORD *)(v19 + 36) - 1;
    *(_DWORD *)(v19 + 36) = v4;
    return v20;
  }
  if ( (v7 & 2) == 0 )
  {
LABEL_48:
    MiDeleteKernelStackPages((_DWORD)v17, (_DWORD)v13, v45, v6, *(_QWORD *)(a1 + 40));
    v31 = v44;
    if ( v6 == 5 )
    {
LABEL_49:
      v32 = &unk_140E35BA0;
LABEL_50:
      LOBYTE(v20) = MiReleasePtes((__int64)v32, v13, v31);
      return v20;
    }
LABEL_67:
    v32 = &unk_140E35C00;
    goto LABEL_50;
  }
  v21 = 0;
  v22 = *((_QWORD *)v17 + 2) + 57216LL * *(unsigned int *)(a1 + 8);
  if ( *(_DWORD *)(v22 + 48 * (v9 + 319LL) + 36) - 1 >= 0 )
    v21 = *(_DWORD *)(v22 + 48 * (v9 + 319LL) + 36) - 1;
  *(_DWORD *)(v22 + 48 * (v9 + 319LL) + 36) = v21;
  v23 = 0;
  v24 = (unsigned __int16 *)(v22 + 16 * (3LL * v9 + 957));
  if ( *((_DWORD *)v24 + 9) - 1 >= 0 )
    v23 = *((_DWORD *)v24 + 9) - 1;
  *((_DWORD *)v24 + 9) = v23;
  while ( 1 )
  {
    v25 = *((_DWORD *)v24 + 10);
    v26 = 0;
    v27 = *((unsigned int *)v24 + 8);
    ListHead = (PSLIST_HEADER)v24;
    v28 = *(_DWORD *)&v24[2 * v27 + 8];
    if ( v28 >= 0 )
      v26 = v28;
    if ( v25 < v26 )
      v25 = v26;
    if ( *v24 < v25 )
      break;
    if ( v9 != 1 )
      goto LABEL_48;
    v24 = (unsigned __int16 *)(v22 + 15312);
    v9 = 0;
  }
  if ( v6 == 5 )
  {
    v29 = v8 << 25 >> 16;
    *(_QWORD *)(v29 + 4064) = qword_140E372C0 ^ v29;
    *(_DWORD *)(v29 + 4088) = v9;
    if ( v9 == 1 )
    {
      LOBYTE(v20) = (unsigned __int8)RtlpInterlockedPushEntrySList((PSLIST_HEADER)v24, (PSLIST_ENTRY)(v29 + 4080));
      return v20;
    }
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql);
    if ( (unsigned int)MiClearStackOwners(v8, v51) )
    {
      RtlpInterlockedPushEntrySList(ListHead, (PSLIST_ENTRY)(v29 + 4080));
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
      LOBYTE(v20) = CurrentIrql;
      __writecr8(CurrentIrql);
      return v20;
    }
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    __writecr8(CurrentIrql);
    MiDeleteKernelStackPages((_DWORD)v17, (_DWORD)v13, v45, 5, *(_QWORD *)(a1 + 40));
    v31 = v44;
    goto LABEL_49;
  }
  v33 = RtlpInterlockedPopEntrySList((PSLIST_HEADER)v17 + 28);
  v34 = *(_QWORD *)(a1 + 40);
  if ( !v33 )
  {
    MiDeleteKernelStackPages((_DWORD)v17, v43, v42, v6, *(_QWORD *)(a1 + 40));
    v31 = v44;
    goto LABEL_67;
  }
  v51 = 0LL;
  BugCheckParameter4 = v34;
  if ( v9 != 5 )
  {
    v38 = VslResetKernelShadowStack(v6, &BugCheckParameter4);
    if ( v38 < 0 )
      KeBugCheckEx(0x1Au, 0x51542uLL, (ULONG_PTR)v13, v38, BugCheckParameter4);
    v34 = BugCheckParameter4;
  }
  v33[1].Next = (_SLIST_ENTRY *)v34;
  v35 = MiKernelShadowStackIdealForCaching((ULONG_PTR)(v13 + 1));
  v36 = ListHead;
  v37 = v35;
  LOBYTE(v20) = (unsigned __int8)RtlpInterlockedPushEntrySList(ListHead, v33);
  if ( v37 )
    *((_BYTE *)&v36[2].HeaderX64 + 12) = 1;
  return v20;
}
