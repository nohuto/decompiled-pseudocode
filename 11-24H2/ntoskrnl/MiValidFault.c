/*
 * XREFs of MiValidFault @ 0x1404F0710
 * Callers:
 *     MiUserFault @ 0x140307CE0 (MiUserFault.c)
 * Callees:
 *     MiLockNestedPageTable @ 0x140201F50 (MiLockNestedPageTable.c)
 *     MiNoFaultFound @ 0x140203670 (MiNoFaultFound.c)
 *     MiRotatedToFrameBuffer @ 0x140213AD4 (MiRotatedToFrameBuffer.c)
 *     MiProcessWsInSwapFault @ 0x140215CA4 (MiProcessWsInSwapFault.c)
 *     MiLockVadTree @ 0x140240750 (MiLockVadTree.c)
 *     MiWriteValidPteNewProtection @ 0x140245FB0 (MiWriteValidPteNewProtection.c)
 *     MiLockPageAndSetDirty @ 0x140249DD0 (MiLockPageAndSetDirty.c)
 *     MiPfnIsActivePageTable @ 0x140251DBC (MiPfnIsActivePageTable.c)
 *     MiCheckAndUpdateIoAttribution @ 0x140273B00 (MiCheckAndUpdateIoAttribution.c)
 *     MiUnlockVadTree @ 0x140291980 (MiUnlockVadTree.c)
 *     MiUnlockPageTableInternal @ 0x1402C9C00 (MiUnlockPageTableInternal.c)
 *     KeInvalidAccessAllowed @ 0x1402FC4D0 (KeInvalidAccessAllowed.c)
 *     MiFlushSingleTbEntry @ 0x1402FDA50 (MiFlushSingleTbEntry.c)
 *     MiGetPagingFileOffset @ 0x140341C00 (MiGetPagingFileOffset.c)
 *     MiLocateAddress @ 0x140344F70 (MiLocateAddress.c)
 *     MiInvalidPteConforms @ 0x1403461F0 (MiInvalidPteConforms.c)
 *     MiCopyOnWrite @ 0x140346A74 (MiCopyOnWrite.c)
 *     MiUpdatePrefetchPriority @ 0x1403DCA60 (MiUpdatePrefetchPriority.c)
 *     KeIsUserVaAccessAllowed @ 0x140421850 (KeIsUserVaAccessAllowed.c)
 *     MiKernelWriteToExecutableMemory @ 0x140426B40 (MiKernelWriteToExecutableMemory.c)
 *     MiValidVirtualizationFault @ 0x14042845C (MiValidVirtualizationFault.c)
 *     MiSetFaultPacketDirectives @ 0x140429F2C (MiSetFaultPacketDirectives.c)
 *     MI_IS_PTE_SHADOW_STACK @ 0x14043CB30 (MI_IS_PTE_SHADOW_STACK.c)
 *     MiCheckSystemNxFault @ 0x1404939B0 (MiCheckSystemNxFault.c)
 *     MiCanGrantExecute @ 0x14049E378 (MiCanGrantExecute.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     MiPfnIsPageTable @ 0x140685A5C (MiPfnIsPageTable.c)
 */

__int64 __fastcall MiValidFault(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // rbp
  ULONG_PTR v5; // r14
  ULONG_PTR v6; // rsi
  __int64 v9; // r8
  volatile signed __int64 *v10; // r12
  _BYTE *v11; // rcx
  _KPROCESS *Process; // r13
  unsigned __int64 v14; // rdi
  __int64 v15; // rbx
  struct _LIST_ENTRY *Address; // rdi
  int Flink; // edx
  int v18; // r8d
  unsigned int v19; // ebx
  int v20; // eax
  __int64 v21; // r9
  struct _KTHREAD *CurrentThread; // rcx
  unsigned __int64 v23; // rax
  _QWORD *v24; // r14
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // r12
  ULONG_PTR v32; // r13
  __int64 v33; // rdx
  __int64 v34; // r8
  __int64 v35; // r8
  __int64 v36; // r9
  _BYTE *v37; // rsi
  __int64 v38; // r8
  unsigned __int64 v39; // rax
  __int64 v40; // rdi
  int v41; // eax
  __int64 v42; // [rsp+70h] [rbp+8h] BYREF
  volatile signed __int64 *v43; // [rsp+80h] [rbp+18h]

  v4 = *(_QWORD *)a1;
  v5 = *(_QWORD *)(a1 + 8);
  v6 = *(_QWORD *)(a1 + 16);
  v9 = 0xFFFFF68000000000uLL;
  v10 = (volatile signed __int64 *)(((*(_QWORD *)a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v43 = v10;
  v11 = (_BYTE *)(v6 & 0xFFFFFFFFFFFFFFFEuLL);
  Process = KeGetCurrentThread()->ApcState.Process;
  if ( (v6 & 1) != 0 )
  {
    if ( *v11 == 1 )
    {
      MiUpdatePrefetchPriority((__int64)v11, v4, 0LL);
      return 0LL;
    }
    if ( *v11 == 3 )
    {
      v14 = ((unsigned __int64)a2 >> 12) & 0xFFFFFFFFFFLL;
      if ( v14 <= qword_140E2DD20 )
      {
        v15 = 6 * v14;
        if ( ((*(_QWORD *)(48 * v14 - 0x21FFFFFFFFD8LL) >> 54) & 1) != 0 )
        {
          MiLockVadTree(1, v6 & 1, 0xFFFFF68000000000uLL, a4);
          Address = MiLocateAddress(v4);
          MiUnlockVadTree(1, 0x11u);
          if ( Address )
          {
            Flink = (int)Address[3].Flink;
            v18 = Flink & 0x70;
            if ( v18 != 48
              && ((v18 - 16) & 0xFFFFFFBF) != 0
              && ((Flink & 0x200000) == 0 || (Flink & 0x800000) == 0 && (Flink & 0x180000u) < 0x100000)
              && (v18 != 64 || !(unsigned int)MiRotatedToFrameBuffer((unsigned __int64)v10)) )
            {
              MiProcessWsInSwapFault(*(_QWORD *)(a1 + 56), 8 * v15 - 0x220000000000LL, v4, 0LL);
            }
          }
        }
      }
      return 0LL;
    }
  }
  if ( v4 >= 0xFFFFF68000000000uLL && v4 <= 0xFFFFF6FFFFFFFFFFuLL && (a2 & 0x80u) != 0LL )
  {
    if ( (v6 & 1) != 0 )
    {
      if ( *v11 != 1 && *v11 != 3 && *(_BYTE *)(v6 & 0xFFFFFFFFFFFFFFFEuLL) != 6 )
LABEL_84:
        KeBugCheckEx(0x50u, v4, v5, v6, 8uLL);
    }
    else if ( !KeInvalidAccessAllowed(v6, 0) )
    {
      goto LABEL_84;
    }
    return (unsigned int)-1073741819;
  }
  v19 = 0;
  if ( (a2 & 4) == 0 && v4 <= 0x7FFFFFFEFFFFLL )
    return (unsigned int)-1073741819;
  if ( (*(_DWORD *)(a1 + 80) & 0x100) == 0
    && v6
    && v4 < 0xFFFF800000000000uLL
    && (v6 & 1) == 0
    && !KeIsUserVaAccessAllowed(v6)
    && !KeInvalidAccessAllowed(v6, 0) )
  {
    KeBugCheckEx(0x50u, v4, v5, v6, 0xFuLL);
  }
  if ( (v5 & 2) == 0 )
  {
    if ( (v5 & 0x10) != 0 )
    {
      if ( a2 < 0 )
      {
        if ( (unsigned int)MiCanGrantExecute((__int64)Process, v4, v9, a4) )
        {
          v39 = ((unsigned __int64)a2 >> 12) & 0xFFFFFFFFFFLL;
          if ( v39 <= qword_140E2DD20 && ((*(_QWORD *)(48 * v39 - 0x21FFFFFFFFD8LL) >> 54) & 1) != 0 )
          {
            v40 = a2 & 0x7FFFFFFFFFFFFFFFLL;
            if ( (MiFlags & 0x100) != 0 || (MiFlags & 0x200) != 0 )
              v40 |= 0x20uLL;
            MiWriteValidPteNewProtection((ULONG_PTR)v10, v40, v38);
            if ( (MiFlags & 0x100) == 0 && (MiFlags & 0x200) == 0 )
              MiFlushSingleTbEntry(v4, 0, 32);
            goto LABEL_64;
          }
        }
        return (unsigned int)-1073741819;
      }
      if ( (*(_DWORD *)(a1 + 80) & 0x100) == 0 )
        MiCheckSystemNxFault(a1, a2, 5u);
    }
    if ( (*(_DWORD *)(a1 + 80) & 0x80u) == 0 || (LOBYTE(v41) = MI_IS_PTE_SHADOW_STACK(a2), v41) )
    {
LABEL_63:
      MiNoFaultFound(a1, v10, v4, v6, 0, a2);
      goto LABEL_64;
    }
    return (unsigned int)-1073741819;
  }
  v42 = 0LL;
  if ( (a2 & 0x200) == 0 )
  {
    if ( (a2 & 0x800) != 0 )
    {
      if ( a2 >= 0
        && (a2 & 0x42) == 0
        && (Process[1].DirectoryTableBase & 0x1000000000LL) != 0
        && v4 < 0xFFFF800000000000uLL )
      {
        CurrentThread = KeGetCurrentThread();
        if ( (*(_DWORD *)(a1 + 80) & 0x100) != 0 )
        {
          if ( (BYTE1(CurrentThread[1].Queue) & 0x10) == 0 )
            return (unsigned int)-1073739997;
        }
        else if ( (BYTE1(CurrentThread[1].Queue) & 0x20) == 0 )
        {
          v19 = MiKernelWriteToExecutableMemory(a1, a2, Process);
          if ( (v19 & 0x80000000) != 0 )
            return v19;
        }
      }
      v23 = ((unsigned __int64)a2 >> 12) & 0xFFFFFFFFFFLL;
      if ( v23 <= qword_140E2DD20 && ((*(_QWORD *)(48 * v23 - 0x21FFFFFFFFD8LL) >> 54) & 1) != 0 )
      {
        v24 = (_QWORD *)(48 * v23 - 0x220000000000LL);
        if ( MiInvalidPteConforms(v24[2]) && (v25 & 0x400) == 0 && (unsigned int)MiGetPagingFileOffset(v25) )
        {
          if ( (unsigned int)MiPfnIsPageTable(v24, v26, v27, v28) )
          {
            v31 = *(_QWORD *)(a1 + 56);
            v32 = v24[1];
            MiLockNestedPageTable(v31, v32);
            if ( !(unsigned int)MiPfnIsActivePageTable((__int64)v24, v33, v34) )
              MiLockPageAndSetDirty((__int64)v24, 1LL, v35, v36);
            MiUnlockPageTableInternal(v31, v32);
            v10 = v43;
          }
          else
          {
            MiLockPageAndSetDirty((__int64)v24, 1LL, v29, v30);
          }
        }
        if ( (__int64)v24[5] < 0 && (v24[2] & 0x400LL) != 0 )
          MiCheckAndUpdateIoAttribution((__int64)v24);
      }
      goto LABEL_63;
    }
    return (unsigned int)-1073741819;
  }
  v20 = MiCopyOnWrite(v4, v10, 0xFFFFFFFFFFFFFFFFuLL, 0, &v42);
  v19 = v20;
  if ( v20 >= 0 )
  {
    v19 = 274;
LABEL_64:
    if ( (v6 & 1) != 0 )
    {
      v37 = (_BYTE *)(v6 & 0xFFFFFFFFFFFFFFFEuLL);
      if ( *v37 == 5 )
        MiValidVirtualizationFault((_QWORD *)a1, (__int64)v37, (unsigned __int64)v10, v21);
    }
    return v19;
  }
  MiSetFaultPacketDirectives(a1, v20, v42);
  return v19;
}
