/*
 * XREFs of MiValidFault @ 0x1404EECA0
 * Callers:
 *     MiUserFault @ 0x14024A660 (MiUserFault.c)
 * Callees:
 *     MiFlushSingleTbEntry @ 0x140219200 (MiFlushSingleTbEntry.c)
 *     MiInvalidPteConforms @ 0x1402343E0 (MiInvalidPteConforms.c)
 *     MiLockPageAndSetDirty @ 0x14023A2A0 (MiLockPageAndSetDirty.c)
 *     MiUnlockPageTable @ 0x14028B6B0 (MiUnlockPageTable.c)
 *     MiUnlockVadTree @ 0x1402A8690 (MiUnlockVadTree.c)
 *     MiLockVadTree @ 0x1402B54D0 (MiLockVadTree.c)
 *     MiLocateAddress @ 0x1402B57D0 (MiLocateAddress.c)
 *     MiWriteValidPteNewProtection @ 0x1402B83C0 (MiWriteValidPteNewProtection.c)
 *     MiPfnIsActivePageTable @ 0x1402C7F24 (MiPfnIsActivePageTable.c)
 *     MiLockNestedPageTable @ 0x1402FB780 (MiLockNestedPageTable.c)
 *     MiGetPagingFileOffset @ 0x14037C4CC (MiGetPagingFileOffset.c)
 *     MiCopyOnWrite @ 0x140386068 (MiCopyOnWrite.c)
 *     MiRotatedToFrameBuffer @ 0x140387DA8 (MiRotatedToFrameBuffer.c)
 *     MiProcessWsInSwapFault @ 0x140388C2C (MiProcessWsInSwapFault.c)
 *     MiUpdatePrefetchPriority @ 0x1403898E0 (MiUpdatePrefetchPriority.c)
 *     MiCheckAndUpdateIoAttribution @ 0x1403AA938 (MiCheckAndUpdateIoAttribution.c)
 *     KeInvalidAccessAllowed @ 0x1403E2860 (KeInvalidAccessAllowed.c)
 *     MiNoFaultFound @ 0x1403E2AA0 (MiNoFaultFound.c)
 *     MiCheckSystemNxFault @ 0x1403E2CC4 (MiCheckSystemNxFault.c)
 *     MiValidVirtualizationFault @ 0x1403F2F20 (MiValidVirtualizationFault.c)
 *     MiSetFaultPacketDirectives @ 0x1403F4984 (MiSetFaultPacketDirectives.c)
 *     KeIsUserVaAccessAllowed @ 0x140434110 (KeIsUserVaAccessAllowed.c)
 *     MiKernelWriteToExecutableMemory @ 0x140439960 (MiKernelWriteToExecutableMemory.c)
 *     MI_IS_PTE_SHADOW_STACK @ 0x1404432F0 (MI_IS_PTE_SHADOW_STACK.c)
 *     MiCanGrantExecute @ 0x1404A3608 (MiCanGrantExecute.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     MiPfnIsPageTable @ 0x1406790A4 (MiPfnIsPageTable.c)
 */

__int64 __fastcall MiValidFault(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // r14
  ULONG_PTR v3; // rsi
  ULONG_PTR v4; // rbp
  __int64 v7; // r8
  volatile signed __int64 *v8; // r12
  __int64 v9; // rdx
  _BYTE *v10; // rcx
  _KPROCESS *Process; // r13
  unsigned __int64 v13; // rdi
  __int64 v14; // rbx
  struct _LIST_ENTRY *Address; // rdi
  int Flink; // edx
  int v17; // r8d
  unsigned int v18; // ebx
  int v19; // eax
  struct _KTHREAD *CurrentThread; // rcx
  unsigned __int64 v21; // rax
  _QWORD *v22; // rsi
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // r12
  ULONG_PTR v30; // r13
  __int64 v31; // rdx
  __int64 v32; // r8
  __int64 v33; // r8
  __int64 v34; // rcx
  _BYTE *v35; // rbp
  unsigned __int64 v36; // rax
  __int64 v37; // rdi
  int v38; // eax
  __int64 v39; // [rsp+70h] [rbp+8h] BYREF
  volatile signed __int64 *v40; // [rsp+80h] [rbp+18h]

  v2 = *(_QWORD *)a1;
  v3 = *(_QWORD *)(a1 + 8);
  v4 = *(_QWORD *)(a1 + 16);
  v7 = 0xFFFFF68000000000uLL;
  v8 = (volatile signed __int64 *)(((*(_QWORD *)a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v9 = v4 & 1;
  v40 = v8;
  v10 = (_BYTE *)(v4 & 0xFFFFFFFFFFFFFFFEuLL);
  Process = KeGetCurrentThread()->ApcState.Process;
  if ( (v4 & 1) != 0 )
  {
    if ( *v10 == 1 )
    {
      MiUpdatePrefetchPriority((__int64)v10, v2, 0LL);
      return 0LL;
    }
    if ( *v10 == 3 )
    {
      v13 = ((unsigned __int64)a2 >> 12) & 0xFFFFFFFFFFLL;
      if ( v13 <= qword_140E2D9A0 )
      {
        v14 = 6 * v13;
        if ( ((*(_QWORD *)(48 * v13 - 0x21FFFFFFFFD8LL) >> 54) & 1) != 0 )
        {
          MiLockVadTree(1, v9);
          Address = MiLocateAddress(v2);
          MiUnlockVadTree(1, 0x11u);
          if ( Address )
          {
            Flink = (int)Address[3].Flink;
            v17 = Flink & 0x70;
            if ( v17 != 48
              && ((v17 - 16) & 0xFFFFFFBF) != 0
              && ((Flink & 0x200000) == 0 || (Flink & 0x800000) == 0 && (Flink & 0x180000u) < 0x100000)
              && (v17 != 64 || !(unsigned int)MiRotatedToFrameBuffer((unsigned __int64)v8)) )
            {
              MiProcessWsInSwapFault(*(_QWORD *)(a1 + 56), 8 * v14 - 0x220000000000LL, v2, 0LL);
            }
          }
        }
      }
      return 0LL;
    }
  }
  if ( v2 >= 0xFFFFF68000000000uLL && v2 <= 0xFFFFF6FFFFFFFFFFuLL && (a2 & 0x80u) != 0LL )
  {
    if ( (v4 & 1) != 0 )
    {
      if ( *v10 != 1 && *v10 != 3 && *(_BYTE *)(v4 & 0xFFFFFFFFFFFFFFFEuLL) != 6 )
LABEL_89:
        KeBugCheckEx(0x50u, v2, v3, v4, 8uLL);
    }
    else if ( !KeInvalidAccessAllowed(v4, 0) )
    {
      goto LABEL_89;
    }
    return (unsigned int)-1073741819;
  }
  v18 = 0;
  if ( (a2 & 4) == 0 && v2 <= 0x7FFFFFFEFFFFLL )
    return (unsigned int)-1073741819;
  if ( (*(_DWORD *)(a1 + 80) & 0x100) == 0
    && v4
    && v2 < 0xFFFF800000000000uLL
    && (v4 & 1) == 0
    && !KeIsUserVaAccessAllowed(v4)
    && !KeInvalidAccessAllowed(v4, 0) )
  {
    KeBugCheckEx(0x50u, v2, v3, v4, 0xFuLL);
  }
  if ( (v3 & 2) == 0 )
  {
    if ( (v3 & 0x10) != 0 )
    {
      if ( a2 < 0 )
      {
        if ( (unsigned int)MiCanGrantExecute((__int64)Process, v2) )
        {
          v36 = ((unsigned __int64)a2 >> 12) & 0xFFFFFFFFFFLL;
          if ( v36 <= qword_140E2D9A0 && ((*(_QWORD *)(48 * v36 - 0x21FFFFFFFFD8LL) >> 54) & 1) != 0 )
          {
            v37 = a2 & 0x7FFFFFFFFFFFFFFFLL;
            if ( (MiFlags & 0x100) != 0 || (MiFlags & 0x200) != 0 )
              v37 |= 0x20uLL;
            MiWriteValidPteNewProtection((ULONG_PTR)v8, v37);
            if ( (MiFlags & 0x100) == 0 && (MiFlags & 0x200) == 0 )
              MiFlushSingleTbEntry(v2, 0, 32);
            goto LABEL_69;
          }
        }
        return (unsigned int)-1073741819;
      }
      if ( (*(_DWORD *)(a1 + 80) & 0x100) == 0 )
        MiCheckSystemNxFault(a1, a2, 5u);
    }
    if ( (*(_DWORD *)(a1 + 80) & 0x80u) == 0 || (LOBYTE(v38) = MI_IS_PTE_SHADOW_STACK(a2), v38) )
    {
LABEL_68:
      MiNoFaultFound(a1, v8, v2, v4, 0, a2);
      goto LABEL_69;
    }
    return (unsigned int)-1073741819;
  }
  v39 = 0LL;
  if ( (a2 & 0x200) == 0 )
  {
    if ( (a2 & 0x800) != 0 )
    {
      if ( a2 >= 0
        && (a2 & 0x42) == 0
        && (Process[1].DirectoryTableBase & 0x1000000000LL) != 0
        && v2 < 0xFFFF800000000000uLL )
      {
        CurrentThread = KeGetCurrentThread();
        if ( (*(_DWORD *)(a1 + 80) & 0x100) != 0 )
        {
          if ( (BYTE1(CurrentThread[1].Queue) & 0x10) == 0 )
            return (unsigned int)-1073739997;
        }
        else if ( (BYTE1(CurrentThread[1].Queue) & 0x20) == 0 )
        {
          v18 = MiKernelWriteToExecutableMemory(a1, a2, Process);
          if ( (v18 & 0x80000000) != 0 )
            return v18;
        }
      }
      v21 = ((unsigned __int64)a2 >> 12) & 0xFFFFFFFFFFLL;
      if ( v21 > qword_140E2D9A0 || ((*(_QWORD *)(48 * v21 - 0x21FFFFFFFFD8LL) >> 54) & 1) == 0 )
        goto LABEL_68;
      v22 = (_QWORD *)(48 * v21 - 0x220000000000LL);
      if ( MmOriginalPteRaceFixEnabled )
      {
        if ( MiInvalidPteConforms(v22[2]) && (v23 & 0x400) == 0 && (unsigned int)MiGetPagingFileOffset(v23) )
        {
          if ( (unsigned int)MiPfnIsPageTable(v22, v24, v25, v26) )
          {
            v29 = *(_QWORD *)(a1 + 56);
            v30 = v22[1];
            MiLockNestedPageTable(v29, v30, v27, v28);
            if ( !(unsigned int)MiPfnIsActivePageTable((__int64)v22, v31, v32) )
              MiLockPageAndSetDirty((__int64)v22, 1LL, v33);
            MiUnlockPageTable(v29, v30);
            v8 = v40;
            goto LABEL_65;
          }
          goto LABEL_64;
        }
      }
      else if ( !(unsigned int)MiPfnIsActivePageTable(48 * v21 - 0x220000000000LL, v9, v7)
             && MiInvalidPteConforms(v22[2])
             && (v34 & 0x400) == 0
             && (unsigned int)MiGetPagingFileOffset(v34) )
      {
LABEL_64:
        MiLockPageAndSetDirty((__int64)v22, 1LL, v27);
      }
LABEL_65:
      if ( (__int64)v22[5] < 0 && (v22[2] & 0x400LL) != 0 )
        MiCheckAndUpdateIoAttribution((__int64)v22);
      goto LABEL_68;
    }
    return (unsigned int)-1073741819;
  }
  v19 = MiCopyOnWrite(v2, v8, 0xFFFFFFFFFFFFFFFFuLL, 0, &v39);
  v18 = v19;
  if ( v19 >= 0 )
  {
    v18 = 274;
LABEL_69:
    if ( (v4 & 1) != 0 )
    {
      v35 = (_BYTE *)(v4 & 0xFFFFFFFFFFFFFFFEuLL);
      if ( *v35 == 5 )
        MiValidVirtualizationFault((_QWORD *)a1, (__int64)v35, (unsigned __int64)v8);
    }
    return v18;
  }
  MiSetFaultPacketDirectives(a1, v19, v39);
  return v18;
}
