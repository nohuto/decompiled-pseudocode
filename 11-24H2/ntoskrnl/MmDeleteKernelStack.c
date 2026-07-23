/*
 * XREFs of MmDeleteKernelStack @ 0x14021FA40
 * Callers:
 *     PspDeleteKernelStack @ 0x14021F670 (PspDeleteKernelStack.c)
 *     KiExpandKernelStackAndCalloutOnStackSegment @ 0x140231DD0 (KiExpandKernelStackAndCalloutOnStackSegment.c)
 *     KiEnableOptionalXStateFeatures @ 0x1403F5AF8 (KiEnableOptionalXStateFeatures.c)
 *     KiFreeProcessorStacks @ 0x1405B41D4 (KiFreeProcessorStacks.c)
 *     KiDeleteXStateStack @ 0x1405B5554 (KiDeleteXStateStack.c)
 *     KeEnableOptionalXStateFeaturesApc @ 0x1405B5D80 (KeEnableOptionalXStateFeaturesApc.c)
 *     KiFreeTemporaryStacks @ 0x1405B9AA0 (KiFreeTemporaryStacks.c)
 *     PspEnableProcessOptionalXStateFeatures @ 0x140774AC0 (PspEnableProcessOptionalXStateFeatures.c)
 *     KeUserModeCallback @ 0x1408BCB10 (KeUserModeCallback.c)
 *     KeUninitThread @ 0x140A12C08 (KeUninitThread.c)
 *     KiDeleteKernelShadowStack @ 0x140A12CA4 (KiDeleteKernelShadowStack.c)
 *     KeAllocateCalloutStackEx @ 0x140A61060 (KeAllocateCalloutStackEx.c)
 *     KeFreeCalloutStack @ 0x140A7D8D0 (KeFreeCalloutStack.c)
 *     KeInitThread @ 0x140B6A948 (KeInitThread.c)
 * Callees:
 *     MiDeleteKernelStackPages @ 0x14021F734 (MiDeleteKernelStackPages.c)
 *     MiAddKernelStackToPrcbCache @ 0x1402211B0 (MiAddKernelStackToPrcbCache.c)
 *     MiPageToNode @ 0x140221770 (MiPageToNode.c)
 *     MiClearStackOwners @ 0x1402511A0 (MiClearStackOwners.c)
 *     MiReleasePtes @ 0x14029D9A0 (MiReleasePtes.c)
 *     MiKernelShadowStackIdealForCaching @ 0x140473F28 (MiKernelShadowStackIdealForCaching.c)
 *     MiLogKernelStackEvent @ 0x1404C5C18 (MiLogKernelStackEvent.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     RtlpInterlockedPopEntrySList @ 0x1406B4830 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x1406B4870 (RtlpInterlockedPushEntrySList.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     VslResetKernelShadowStack @ 0x140A4627C (VslResetKernelShadowStack.c)
 */

unsigned __int64 __fastcall MmDeleteKernelStack(int *a1)
{
  int v1; // r8d
  unsigned __int64 v3; // rbp
  int v4; // edi
  __int64 v5; // rsi
  unsigned int v6; // r14d
  int v7; // edx
  __int64 v8; // r15
  int v9; // r12d
  unsigned __int64 v10; // r9
  int v11; // r11d
  unsigned __int64 v12; // rbp
  ULONG_PTR v13; // rdx
  __int64 v14; // rbp
  int v15; // r13d
  char v16; // r12
  ULONG *v17; // rsi
  __int64 v18; // rdx
  __int64 v19; // rdx
  unsigned __int64 result; // rax
  unsigned __int64 v21; // rbp
  int v22; // eax
  __int64 v23; // r10
  int v24; // eax
  __int64 v25; // r8
  unsigned __int16 *v26; // r9
  unsigned int v27; // edx
  unsigned int v28; // ecx
  __int64 v29; // rax
  int v30; // eax
  __int64 v31; // rdi
  unsigned __int8 CurrentIrql; // r12
  unsigned int v33; // eax
  void *v34; // rcx
  PSLIST_ENTRY v35; // rax
  ULONG_PTR v36; // rcx
  int v37; // eax
  PSLIST_HEADER v38; // rdi
  int v39; // ebx
  int v40; // eax
  size_t v41; // r8
  __int64 v42; // [rsp+30h] [rbp-98h]
  ULONG_PTR BugCheckParameter2; // [rsp+38h] [rbp-90h]
  __int64 v44; // [rsp+40h] [rbp-88h]
  __int64 v45; // [rsp+40h] [rbp-88h]
  int v46; // [rsp+48h] [rbp-80h]
  unsigned __int64 v47; // [rsp+60h] [rbp-68h]
  unsigned __int64 v48; // [rsp+68h] [rbp-60h]
  int v49; // [rsp+D0h] [rbp+8h]
  ULONG_PTR BugCheckParameter4; // [rsp+D8h] [rbp+10h] BYREF
  PSLIST_HEADER ListHead; // [rsp+E0h] [rbp+18h]
  PSLIST_ENTRY ListEntry; // [rsp+E8h] [rbp+20h]

  v1 = *a1;
  v3 = *((_QWORD *)a1 + 3);
  v4 = 0;
  v5 = *((_QWORD *)a1 + 2);
  v6 = a1[1];
  v7 = 0;
  LODWORD(ListEntry) = *a1;
  v8 = ((v3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000008LL;
  if ( v6 == 5 )
  {
    if ( (v1 & 8) != 0 )
    {
      v9 = 2;
      v10 = (unsigned __int64)(unsigned int)KeXStateStackSize >> 12;
      v49 = 2;
    }
    else
    {
      v49 = 0;
      v9 = 0;
      if ( (v1 & 1) != 0 )
      {
        v10 = (unsigned __int64)(unsigned int)KeKernelLargeStackSize >> 12;
        goto LABEL_6;
      }
      v10 = (unsigned __int8)byte_140E35FE4;
    }
    v7 = 2;
LABEL_6:
    v42 = v10;
    LODWORD(BugCheckParameter4) = v10 + 1;
    v11 = v7 | 1;
    if ( (v7 & 2) == 0 || (v1 & 4) == 0 )
      v11 = v7;
    v12 = v3 - (unsigned int)(((_DWORD)v10 + 1) << 12);
    LODWORD(ListHead) = v11;
    v48 = v10;
    BugCheckParameter2 = ((v12 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v47 = v10;
    if ( (v1 & 2) != 0 && (BYTE4(PerfGlobalGroupMask) & 1) != 0 )
    {
      MiLogKernelStackEvent(v12 + 4096, v10, 0LL);
      v10 = v42;
      LOBYTE(v11) = (_BYTE)ListHead;
    }
    v13 = v12 + 4096;
    v14 = ((v12 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v15 = v9;
    v16 = v11;
    v44 = v10;
    v46 = BugCheckParameter4;
    if ( byte_140FCECA8 )
    {
      if ( v13 < 0xFFFF800000000000uLL )
        KeBugCheckEx(0x1F1u, 2uLL, 1uLL, v13, 0LL);
      if ( (v13 & 7) != 0 )
        KeBugCheckEx(0x1F1u, 2uLL, 2uLL, v13, 8uLL);
      if ( v13 + (v10 << 12) < v13 )
        KeBugCheckEx(0x1F1u, 2uLL, 3uLL, v13, v10 << 12);
      v15 = v49;
      v41 = (v10 << 9) & 0x1FFFFFFFFFFFFFFFLL;
      v44 = v47;
      v46 = BugCheckParameter4;
      v42 = v47;
      if ( v41 )
      {
        memset_0((void *)(KasaniShadow + ((v13 + 0x800000000000LL) >> 3)), 0, v41);
        v16 = (char)ListHead;
        v44 = v47;
        v46 = BugCheckParameter4;
        v42 = v48;
      }
    }
    goto LABEL_10;
  }
  v8 = ((v3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000010LL;
  v44 = 1LL;
  v15 = v6 + 3;
  v16 = 2;
  v46 = 3;
  if ( (int)(v6 + 3) > 5 )
    v16 = 0;
  v21 = ((v3 - 12288) >> 9) & 0x7FFFFFFFF8LL;
  if ( (v1 & 4) != 0 )
  {
    if ( v6 == 2 )
      v16 |= 1u;
    v14 = v21 - 0x98000000000LL;
    v42 = 1LL;
    BugCheckParameter2 = v14;
  }
  else
  {
    v42 = 1LL;
    v14 = v21 - 0x98000000000LL;
    v44 = 1LL;
    BugCheckParameter2 = v14;
    v46 = 3;
  }
LABEL_10:
  if ( v5 )
    v17 = (ULONG *)*((_QWORD *)qword_140E300C8 + *(unsigned __int16 *)(*(_QWORD *)(v5 + 544) + 1198LL));
  else
    v17 = &MiSystemPartition;
  v18 = ((*((_QWORD *)a1 + 3) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000008LL;
  if ( a1[1] == 5 )
    v18 = ((*((_QWORD *)a1 + 3) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  a1[2] = MiPageToNode((*(_QWORD *)(v18 - 8) >> 12) & 0xFFFFFFFFFFLL);
  if ( (v16 & 1) != 0 && v17 == &MiSystemPartition && (unsigned int)MiAddKernelStackToPrcbCache(a1, v44) )
  {
    if ( v6 == 5 )
      v15 = 1;
    v19 = *((_QWORD *)v17 + 2) + 48 * (v15 + 1192LL * (unsigned int)a1[2] + 319);
    result = (unsigned int)(*(_DWORD *)(v19 + 36) - 1);
    if ( (result & 0x80000000) == 0LL )
      v4 = *(_DWORD *)(v19 + 36) - 1;
    *(_DWORD *)(v19 + 36) = v4;
    return result;
  }
  if ( (v16 & 2) == 0 )
  {
    v25 = v44;
LABEL_47:
    MiDeleteKernelStackPages(v17, v14, v25, v6, *((_QWORD *)a1 + 5));
    v33 = v46;
    if ( v6 == 5 )
    {
LABEL_48:
      v34 = &unk_140E35F20;
      return MiReleasePtes(v34, v14, v33);
    }
LABEL_64:
    v34 = &unk_140E35F80;
    return MiReleasePtes(v34, v14, v33);
  }
  v22 = 0;
  v23 = *((_QWORD *)v17 + 2) + 57216LL * (unsigned int)a1[2];
  if ( *(_DWORD *)(v23 + 48 * (v15 + 319LL) + 36) - 1 >= 0 )
    v22 = *(_DWORD *)(v23 + 48 * (v15 + 319LL) + 36) - 1;
  *(_DWORD *)(v23 + 48 * (v15 + 319LL) + 36) = v22;
  v24 = 0;
  v25 = v44;
  v26 = (unsigned __int16 *)(v23 + 48 * (v15 + 319LL));
  if ( *((_DWORD *)v26 + 9) - 1 >= 0 )
    v24 = *((_DWORD *)v26 + 9) - 1;
  *((_DWORD *)v26 + 9) = v24;
  while ( 1 )
  {
    v27 = *((_DWORD *)v26 + 10);
    v28 = 0;
    v29 = *((unsigned int *)v26 + 8);
    ListHead = (PSLIST_HEADER)v26;
    v45 = v25;
    v30 = *(_DWORD *)&v26[2 * v29 + 8];
    if ( v30 >= 0 )
      v28 = v30;
    if ( v27 < v28 )
      v27 = v28;
    if ( *v26 < v27 )
      break;
    if ( v15 != 1 )
      goto LABEL_47;
    v26 = (unsigned __int16 *)(v23 + 15312);
    v15 = 0;
  }
  if ( v6 == 5 )
  {
    v31 = v8 << 25 >> 16;
    *(_QWORD *)(v31 + 4064) = qword_140E37640 ^ v31;
    *(_DWORD *)(v31 + 4088) = v15;
    if ( v15 == 1 )
      return (unsigned __int64)RtlpInterlockedPushEntrySList((PSLIST_HEADER)v26, (PSLIST_ENTRY)(v31 + 4080));
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL);
    if ( (unsigned int)MiClearStackOwners(v8, (unsigned int)ListEntry) )
    {
      RtlpInterlockedPushEntrySList(ListHead, (PSLIST_ENTRY)(v31 + 4080));
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
      result = CurrentIrql;
      __writecr8(CurrentIrql);
      return result;
    }
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    __writecr8(CurrentIrql);
    MiDeleteKernelStackPages(v17, v14, v45, 5, *((_QWORD *)a1 + 5));
    v33 = v46;
    goto LABEL_48;
  }
  v35 = RtlpInterlockedPopEntrySList((PSLIST_HEADER)v17 + 28);
  ListEntry = v35;
  if ( !v35 )
  {
    MiDeleteKernelStackPages(v17, BugCheckParameter2, v42, v6, *((_QWORD *)a1 + 5));
    v33 = v46;
    goto LABEL_64;
  }
  v36 = *((_QWORD *)a1 + 5);
  BugCheckParameter4 = v36;
  if ( v15 != 5 )
  {
    v40 = VslResetKernelShadowStack(v6, &BugCheckParameter4);
    if ( v40 < 0 )
      KeBugCheckEx(0x1Au, 0x51542uLL, v14, v40, BugCheckParameter4);
    v36 = BugCheckParameter4;
    v35 = ListEntry;
  }
  v35[1].Next = (_SLIST_ENTRY *)v36;
  v37 = MiKernelShadowStackIdealForCaching(v14 + 8);
  v38 = ListHead;
  v39 = v37;
  result = (unsigned __int64)RtlpInterlockedPushEntrySList(ListHead, ListEntry);
  if ( v39 )
    *((_BYTE *)&v38[2].HeaderX64 + 12) = 1;
  return result;
}
