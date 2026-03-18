/*
 * XREFs of MiValidFault @ 0x1404F2C70
 * Callers:
 *     MiUserFault @ 0x1402FD560 (MiUserFault.c)
 * Callees:
 *     MiWriteValidPteNewProtection @ 0x140219260 (MiWriteValidPteNewProtection.c)
 *     MiLockPageAndSetDirty @ 0x14021D080 (MiLockPageAndSetDirty.c)
 *     MiPfnIsActivePageTable @ 0x140224A0C (MiPfnIsActivePageTable.c)
 *     KeInvalidAccessAllowed @ 0x1402292D0 (KeInvalidAccessAllowed.c)
 *     MiFlushSingleTbEntry @ 0x14022A7E0 (MiFlushSingleTbEntry.c)
 *     MiNoFaultFound @ 0x140233220 (MiNoFaultFound.c)
 *     MiRotatedToFrameBuffer @ 0x140238E74 (MiRotatedToFrameBuffer.c)
 *     MiUnlockVadTree @ 0x140261370 (MiUnlockVadTree.c)
 *     MiLockNestedPageTable @ 0x140285190 (MiLockNestedPageTable.c)
 *     MiLockVadTree @ 0x1402DEE70 (MiLockVadTree.c)
 *     MiCopyOnWrite @ 0x1402E47DC (MiCopyOnWrite.c)
 *     MiGetPagingFileOffset @ 0x1402E5A60 (MiGetPagingFileOffset.c)
 *     MiLocateAddress @ 0x1402FC070 (MiLocateAddress.c)
 *     MiInvalidPteConforms @ 0x140302590 (MiInvalidPteConforms.c)
 *     MiUnlockPageTableInternal @ 0x140321070 (MiUnlockPageTableInternal.c)
 *     MiCheckAndUpdateIoAttribution @ 0x1403C6078 (MiCheckAndUpdateIoAttribution.c)
 *     MiUpdatePrefetchPriority @ 0x1403FE3E8 (MiUpdatePrefetchPriority.c)
 *     KeIsUserVaAccessAllowed @ 0x14042FDA0 (KeIsUserVaAccessAllowed.c)
 *     MiValidVirtualizationFault @ 0x1404359DC (MiValidVirtualizationFault.c)
 *     MiSetFaultPacketDirectives @ 0x1404374AC (MiSetFaultPacketDirectives.c)
 *     MI_IS_PTE_SHADOW_STACK @ 0x140444870 (MI_IS_PTE_SHADOW_STACK.c)
 *     MiProcessWsInSwapFault @ 0x14046DEB4 (MiProcessWsInSwapFault.c)
 *     MiCheckSystemNxFault @ 0x140499024 (MiCheckSystemNxFault.c)
 *     MiCanGrantExecute @ 0x1404A3418 (MiCanGrantExecute.c)
 *     MiKernelWriteToExecutableMemory @ 0x1404CE618 (MiKernelWriteToExecutableMemory.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     MiPfnIsPageTable @ 0x140684930 (MiPfnIsPageTable.c)
 */

__int64 __fastcall MiValidFault(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rbp
  ULONG_PTR v3; // r14
  ULONG_PTR v4; // rsi
  __int64 v7; // r8
  volatile signed __int64 *v8; // r12
  _BYTE *v9; // rcx
  _KPROCESS *Process; // r13
  unsigned __int64 v12; // rdi
  __int64 v13; // rbx
  struct _LIST_ENTRY *Address; // rdi
  int Flink; // edx
  int v16; // r8d
  unsigned int v17; // ebx
  int v18; // eax
  __int64 v19; // r9
  struct _KTHREAD *CurrentThread; // rcx
  unsigned __int64 v21; // rax
  _QWORD *v22; // r14
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // r8
  __int64 v28; // r12
  ULONG_PTR v29; // r13
  __int64 v30; // rdx
  __int64 v31; // r8
  __int64 v32; // r8
  _BYTE *v33; // rsi
  unsigned __int64 v34; // rax
  __int64 v35; // rdi
  int v36; // eax
  __int128 v37; // [rsp+70h] [rbp+8h] BYREF
  volatile signed __int64 *v38; // [rsp+80h] [rbp+18h]

  v2 = *(_QWORD *)a1;
  v3 = *(_QWORD *)(a1 + 8);
  v4 = *(_QWORD *)(a1 + 16);
  v7 = 0xFFFFF68000000000uLL;
  v8 = (volatile signed __int64 *)(((*(_QWORD *)a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v38 = v8;
  v9 = (_BYTE *)(v4 & 0xFFFFFFFFFFFFFFFEuLL);
  Process = KeGetCurrentThread()->ApcState.Process;
  if ( (v4 & 1) != 0 )
  {
    if ( *v9 == 1 )
    {
      MiUpdatePrefetchPriority((__int64)v9, v2, 0LL);
      return 0LL;
    }
    if ( *v9 == 3 )
    {
      v12 = ((unsigned __int64)a2 >> 12) & 0xFFFFFFFFFFLL;
      if ( v12 <= qword_140E2DBE0 )
      {
        v13 = 6 * v12;
        if ( ((*(_QWORD *)(48 * v12 - 0x21FFFFFFFFD8LL) >> 54) & 1) != 0 )
        {
          MiLockVadTree(1, v4 & 1, 0xFFFFF68000000000uLL);
          Address = MiLocateAddress(v2);
          MiUnlockVadTree(1, 0x11u);
          if ( Address )
          {
            Flink = (int)Address[3].Flink;
            v16 = Flink & 0x70;
            if ( v16 != 48
              && ((v16 - 16) & 0xFFFFFFBF) != 0
              && ((Flink & 0x200000) == 0 || (Flink & 0x800000) == 0 && (Flink & 0x180000u) < 0x100000)
              && (v16 != 64 || !(unsigned int)MiRotatedToFrameBuffer((unsigned __int64)v8)) )
            {
              MiProcessWsInSwapFault(*(_QWORD *)(a1 + 56), 8 * v13 - 0x220000000000LL, v2, 0LL);
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
      if ( *v9 != 1 && *v9 != 3 && *(_BYTE *)(v4 & 0xFFFFFFFFFFFFFFFEuLL) != 6 )
LABEL_84:
        KeBugCheckEx(0x50u, v2, v3, v4, 8uLL);
    }
    else if ( !KeInvalidAccessAllowed(v4, 0) )
    {
      goto LABEL_84;
    }
    return (unsigned int)-1073741819;
  }
  v17 = 0;
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
        if ( (unsigned int)MiCanGrantExecute((__int64)Process, v2, v7) )
        {
          v34 = ((unsigned __int64)a2 >> 12) & 0xFFFFFFFFFFLL;
          if ( v34 <= qword_140E2DBE0 && ((*(_QWORD *)(48 * v34 - 0x21FFFFFFFFD8LL) >> 54) & 1) != 0 )
          {
            v35 = a2 & 0x7FFFFFFFFFFFFFFFLL;
            if ( (MiFlags & 0x100) != 0 || (MiFlags & 0x200) != 0 )
              v35 |= 0x20uLL;
            MiWriteValidPteNewProtection((ULONG_PTR)v8, v35);
            if ( (MiFlags & 0x100) == 0 && (MiFlags & 0x200) == 0 )
              MiFlushSingleTbEntry(v2, 0, 32);
            goto LABEL_64;
          }
        }
        return (unsigned int)-1073741819;
      }
      if ( (*(_DWORD *)(a1 + 80) & 0x100) == 0 )
        MiCheckSystemNxFault(a1, a2, 5u);
    }
    if ( (*(_DWORD *)(a1 + 80) & 0x80u) == 0 || (LOBYTE(v36) = MI_IS_PTE_SHADOW_STACK(a2), v36) )
    {
LABEL_63:
      MiNoFaultFound(a1, v8, v2, v4, 0, a2);
      goto LABEL_64;
    }
    return (unsigned int)-1073741819;
  }
  *(_QWORD *)&v37 = 0LL;
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
          v17 = MiKernelWriteToExecutableMemory(a1, a2, Process);
          if ( (v17 & 0x80000000) != 0 )
            return v17;
        }
      }
      v21 = ((unsigned __int64)a2 >> 12) & 0xFFFFFFFFFFLL;
      if ( v21 <= qword_140E2DBE0 && ((*(_QWORD *)(48 * v21 - 0x21FFFFFFFFD8LL) >> 54) & 1) != 0 )
      {
        v22 = (_QWORD *)(48 * v21 - 0x220000000000LL);
        if ( MiInvalidPteConforms(v22[2]) && (v23 & 0x400) == 0 && (unsigned int)MiGetPagingFileOffset(v23) )
        {
          if ( (unsigned int)MiPfnIsPageTable(v22, v24, v25, v26) )
          {
            v28 = *(_QWORD *)(a1 + 56);
            v29 = v22[1];
            MiLockNestedPageTable(v28, v29);
            if ( !(unsigned int)MiPfnIsActivePageTable((__int64)v22, v30, v31) )
              MiLockPageAndSetDirty((__int64)v22, 1LL, v32);
            MiUnlockPageTableInternal(v28, v29);
            v8 = v38;
          }
          else
          {
            MiLockPageAndSetDirty((__int64)v22, 1LL, v27);
          }
        }
        if ( (__int64)v22[5] < 0 && (v22[2] & 0x400LL) != 0 )
          MiCheckAndUpdateIoAttribution((__int64)v22);
      }
      goto LABEL_63;
    }
    return (unsigned int)-1073741819;
  }
  v18 = MiCopyOnWrite(v2, v8, 0xFFFFFFFFFFFFFFFFuLL, 0, &v37);
  v17 = v18;
  if ( v18 >= 0 )
  {
    v17 = 274;
LABEL_64:
    if ( (v4 & 1) != 0 )
    {
      v33 = (_BYTE *)(v4 & 0xFFFFFFFFFFFFFFFEuLL);
      if ( *v33 == 5 )
        MiValidVirtualizationFault((_QWORD *)a1, (__int64)v33, (unsigned __int64)v8, v19);
    }
    return v17;
  }
  MiSetFaultPacketDirectives(a1, v18, v37);
  return v17;
}
