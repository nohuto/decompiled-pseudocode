/*
 * XREFs of MiGetPageProtection @ 0x1403019B0
 * Callers:
 *     MiCommitExistingVad @ 0x140213020 (MiCommitExistingVad.c)
 *     MiProtectPrivateMemory @ 0x140237480 (MiProtectPrivateMemory.c)
 *     MiQueryAddressState @ 0x140300420 (MiQueryAddressState.c)
 * Callees:
 *     MiGetImageProtoProtection @ 0x140210790 (MiGetImageProtoProtection.c)
 *     MiPteHasShadow @ 0x1402141A0 (MiPteHasShadow.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021A250 (MI_READ_PTE_LOCK_FREE.c)
 *     MiRotatedToFrameBuffer @ 0x140238E74 (MiRotatedToFrameBuffer.c)
 *     MiLockSpecialPurposeMemoryCachedPage @ 0x14023C31C (MiLockSpecialPurposeMemoryCachedPage.c)
 *     MiUnlockProtoPoolPage @ 0x14028CBF0 (MiUnlockProtoPoolPage.c)
 *     HvlNotifyLongSpinWait @ 0x140293260 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140293290 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiTryLockProtoPoolPageAtDpc @ 0x1402F6DBC (MiTryLockProtoPoolPageAtDpc.c)
 *     MiGetProtoPteAddress @ 0x140301740 (MiGetProtoPteAddress.c)
 *     MiInvalidPteConforms @ 0x140302590 (MiInvalidPteConforms.c)
 *     MiIsPrototypePteVadLookup @ 0x140303270 (MiIsPrototypePteVadLookup.c)
 *     MiLocateCloneAddress @ 0x1403E3608 (MiLocateCloneAddress.c)
 *     MI_PROTO_FORMAT_COMBINED @ 0x14040E5F0 (MI_PROTO_FORMAT_COMBINED.c)
 *     MiVadExtentCommitted @ 0x140446A40 (MiVadExtentCommitted.c)
 *     MiCaptureProtectionFromLockedProto @ 0x140458304 (MiCaptureProtectionFromLockedProto.c)
 *     MiGetValidAwePartitionId @ 0x1404F5144 (MiGetValidAwePartitionId.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 */

__int64 __fastcall MiGetPageProtection(
        ULONG_PTR BugCheckParameter4,
        ULONG_PTR BugCheckParameter2,
        __int64 **a3,
        _DWORD *a4,
        _WORD *a5)
{
  ULONG_PTR v5; // rdi
  _WORD *v6; // r14
  int v9; // r8d
  int v11; // ecx
  _DWORD *v13; // r11
  unsigned __int64 v14; // rdx
  __int64 v15; // rbx
  unsigned __int64 v16; // rdi
  unsigned __int64 v17; // rax
  __int64 v18; // rdx
  unsigned __int64 v19; // r8
  _KPROCESS *Process; // rcx
  __int64 v21; // rdi
  __int64 result; // rax
  _KPROCESS *v23; // rax
  char v24; // r9
  unsigned __int64 KernelWaitTime; // rax
  __int64 v26; // rax
  _DWORD *v27; // r9
  __int64 v28; // rdx
  int v29; // r8d
  __int64 v30; // r8
  unsigned __int64 v31; // r8
  _KI_IDEAL_PROCESSOR_ASSIGNMENT_BLOCK *IdealProcessorAssignmentBlock; // rax
  int v33; // ecx
  __int64 v34; // rax
  ULONG_PTR v35; // rbx
  unsigned __int64 v36; // rcx
  unsigned __int64 v37; // rcx
  __int64 v38; // rdx
  unsigned int v39; // r14d
  __int64 v40; // rax
  ULONG_PTR v41; // r8
  __int64 v42; // r9
  unsigned __int64 v43; // rsi
  __int64 *ProtoPteAddress; // r14
  __int64 v45; // rdx
  unsigned __int64 v46; // rdx
  __int64 v47; // r8
  __int64 v48; // rbx
  _WORD *v49; // rax
  unsigned int v50; // edx
  int v51; // r8d
  unsigned int v52; // ecx
  int v53; // eax
  unsigned int v54; // ecx
  unsigned int v55; // edx
  ULONG_PTR v56; // [rsp+70h] [rbp+8h]
  unsigned __int64 *v57; // [rsp+78h] [rbp+10h] BYREF
  ULONG_PTR v58; // [rsp+80h] [rbp+18h] BYREF

  v5 = *(_QWORD *)BugCheckParameter2;
  v6 = a5;
  *a3 = 0LL;
  v9 = *(_DWORD *)(BugCheckParameter4 + 48);
  v58 = 0LL;
  v11 = v9 & 0x70;
  v57 = 0LL;
  *a4 = 0;
  *v6 = 0;
  v13 = (_DWORD *)(BugCheckParameter4 + 48);
  if ( v11 == 48 )
  {
    if ( (v9 & 0x200000) == 0 || (v9 & 0xC000000) != 0x8000000 )
    {
      *v6 = MiGetValidAwePartitionId(v5);
      if ( (v5 & 1) != 0 )
      {
        result = 4LL;
        if ( (v5 & 0x800) == 0 )
          result = 1LL;
        v52 = (*(_DWORD *)(BugCheckParameter4 + 48) >> 7) & 0x1F;
        if ( v52 >> 3 == 3 && ((*(_DWORD *)(BugCheckParameter4 + 48) >> 7) & 7) != 0 )
        {
          result = (unsigned int)result | 0x18;
        }
        else if ( v52 >> 3 == 1 )
        {
          result = (unsigned int)result | 8;
        }
      }
      else
      {
        result = 24LL;
      }
      if ( (*(_DWORD *)(BugCheckParameter4 + 48) & 0x4200000) == 0x4200000 )
        *v27 = 0;
      return result;
    }
    v13 = (_DWORD *)(BugCheckParameter4 + 48);
  }
  if ( (v5 & 1) == 0 )
  {
    if ( (v5 & 0x400) == 0 )
    {
      if ( (v5 & 0x800) == 0 )
        goto LABEL_20;
      while ( 1 )
      {
        while ( 1 )
        {
          v34 = MI_READ_PTE_LOCK_FREE(BugCheckParameter2);
          v35 = v34;
          if ( (v34 & 0x800) == 0 )
            goto LABEL_20;
          if ( (unsigned int)MiInvalidPteConforms(v34) )
          {
            if ( qword_140E2DB80 )
            {
              if ( (v35 & 0x10) != 0 )
                v36 &= ~0x10uLL;
              else
                v36 = v35 & ~qword_140E2DB80;
            }
            v37 = (v36 >> 12) & 0xFFFFFFFFFFLL;
            v38 = 48 * v37 - 0x220000000000LL;
            v56 = v38;
            if ( v37 <= qword_140E2DBE0 && (*(_QWORD *)(48 * v37 - 0x21FFFFFFFFD8LL) & 0x40000000000000LL) != 0 )
              break;
          }
        }
        v39 = 0;
LABEL_61:
        if ( _interlockedbittestandset64((volatile signed __int32 *)(v38 + 24), 0x3FuLL) )
          break;
        v40 = MI_READ_PTE_LOCK_FREE(BugCheckParameter2);
        v6 = a5;
        v41 = v56;
        if ( v40 == v35 )
        {
          if ( (*(_DWORD *)(*((_QWORD *)qword_140E2FF88 + ((*(_QWORD *)(v56 + 40) >> 43) & 0x3FFLL)) + 4LL) & 0x80u) == 0
            || (v41 = MiLockSpecialPurposeMemoryCachedPage(v56, 0)) != 0 )
          {
            if ( (*(_QWORD *)(v41 + 8) | 0x8000000000000000uLL) != BugCheckParameter2
              && (*(_QWORD *)(v41 + 40) & 0x10000000000LL) == 0 )
            {
              KeBugCheckEx(0x1Au, 0x411uLL, BugCheckParameter2, v35, *(_QWORD *)(v41 + 8));
            }
            if ( v41 )
            {
              v42 = *((_QWORD *)qword_140E2FF88 + ((*(_QWORD *)(v41 + 40) >> 43) & 0x3FFLL));
              if ( (*(_DWORD *)(v42 + 4) & 0x80u) != 0 )
                v42 = **(_QWORD **)(v42 + 17624);
              *v6 = *(_WORD *)v42;
              _InterlockedAnd64((volatile signed __int64 *)(v41 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              goto LABEL_21;
            }
          }
LABEL_20:
          *v6 = **((_WORD **)qword_140E2FF88 + HIWORD(KeGetCurrentThread()->ApcState.Process[2].ProcessListEntry.Blink));
LABEL_21:
          v21 = (v5 >> 5) & 0x1F;
          if ( (*(_DWORD *)(BugCheckParameter4 + 48) & 0x4200000) == 0x4200000 )
            *a4 = 0;
          return (unsigned int)v21;
        }
        _InterlockedAnd64((volatile signed __int64 *)(v56 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      }
      while ( 1 )
      {
        if ( (++v39 & HvlLongSpinCountMask) == 0 && (HvlEnlightenments & 0x40) != 0 )
        {
          if ( KiCheckVpBackingLongSpinWaitHypercall() )
          {
            HvlNotifyLongSpinWait(v39);
            v38 = v56;
            goto LABEL_106;
          }
          v38 = v56;
        }
        _mm_pause();
LABEL_106:
        if ( *(__int64 *)(v38 + 24) >= 0 )
          goto LABEL_61;
      }
    }
    if ( !(unsigned int)MiIsPrototypePteVadLookup(v5) )
    {
      v30 = v5;
      if ( qword_140E2DB80 )
      {
        if ( (v5 & 0x10) != 0 )
          v30 = v5 & 0xFFFFFFFFFFFFFFEFuLL;
        else
          v30 = v5 & ~qword_140E2DB80;
      }
      if ( (unsigned __int8)MI_PROTO_FORMAT_COMBINED(v5, v28, v30 >> 16) )
      {
        v49 = **(_WORD ***)(((v31 - 32) & 0xFFFFFFFFFFFFF000uLL) + 0x10);
      }
      else
      {
        IdealProcessorAssignmentBlock = KeGetCurrentThread()->ApcState.Process[1].IdealProcessorAssignmentBlock;
        if ( !IdealProcessorAssignmentBlock )
          goto LABEL_49;
        do
        {
          if ( v31 > *(_QWORD *)&IdealProcessorAssignmentBlock->ThreadSeed[8] )
          {
            IdealProcessorAssignmentBlock = *(_KI_IDEAL_PROCESSOR_ASSIGNMENT_BLOCK **)&IdealProcessorAssignmentBlock->Breakpoints.High.0;
          }
          else
          {
            if ( v31 >= *(_QWORD *)&IdealProcessorAssignmentBlock->ThreadSeed[4] )
              break;
            IdealProcessorAssignmentBlock = *(_KI_IDEAL_PROCESSOR_ASSIGNMENT_BLOCK **)&IdealProcessorAssignmentBlock->ExpectedConcurrencyCount.0;
          }
        }
        while ( IdealProcessorAssignmentBlock );
        if ( !IdealProcessorAssignmentBlock || !*(_QWORD *)&IdealProcessorAssignmentBlock->ThreadSeed[16] )
        {
LABEL_49:
          v33 = *(_DWORD *)(BugCheckParameter4 + 48);
          if ( (v33 & 0x70) != 0x20 || (v33 & 0xF80) != 0x380 )
            KeBugCheckEx(0x1Au, 0x41202uLL, BugCheckParameter2, v5, BugCheckParameter4);
          *v6 = **((_WORD **)qword_140E2FF88 + (*(_WORD *)(**(_QWORD **)(BugCheckParameter4 + 72) + 60LL) & 0x3FF));
          return MiGetImageProtoProtection(BugCheckParameter4, v31);
        }
        v49 = *(_WORD **)(*(_QWORD *)&IdealProcessorAssignmentBlock->ThreadSeed[20] + 24LL);
      }
      *v6 = *v49;
      return (unsigned int)MmMakeProtectNotWriteCopy[(unsigned int)MiCaptureProtectionFromLockedProto(v31)];
    }
    v21 = (v5 >> 5) & 0x1F;
    v43 = (__int64)(BugCheckParameter2 << 25) >> 16;
    if ( (v29 & 0x200000) == 0 )
    {
      *v6 = **((_WORD **)qword_140E2FF88 + (*(_WORD *)(**(_QWORD **)(BugCheckParameter4 + 72) + 60LL) & 0x3FF));
      ProtoPteAddress = (__int64 *)MiGetProtoPteAddress(BugCheckParameter4, v43 >> 12, 12, &v57);
      if ( !ProtoPteAddress || !(unsigned int)MiVadExtentCommitted(BugCheckParameter4, v43) )
        goto LABEL_76;
      if ( *(_QWORD *)(*v57 + 64) || (*(_DWORD *)(*v57 + 56) & 0x2000) != 0 )
        return (unsigned int)v21;
      if ( (int)MiTryLockProtoPoolPageAtDpc((unsigned __int64)ProtoPteAddress, v45, (__int64 *)&v58, 0LL) < 0 )
      {
        *a3 = ProtoPteAddress;
        LODWORD(v21) = 256;
        return (unsigned int)v21;
      }
      v48 = *ProtoPteAddress;
      LOBYTE(v46) = 17;
      MiUnlockProtoPoolPage(v58, v46, v47);
      if ( !v48 )
LABEL_76:
        LODWORD(v21) = 0;
    }
    return (unsigned int)v21;
  }
  v14 = (v5 >> 12) & 0xFFFFFFFFFFLL;
  v15 = 48 * v14 - 0x220000000000LL;
  if ( v11 == 16 )
  {
    if ( v14 <= qword_140E2DBE0 && (*(_QWORD *)(48 * v14 - 0x21FFFFFFFFD8LL) & 0x40000000000000LL) != 0 )
      *v6 = (*(_QWORD *)(v15 + 40) >> 43) & 0x3FF;
    result = (*(_DWORD *)(BugCheckParameter4 + 48) >> 7) & 0x1F;
    if ( (v5 & 0x10) != 0 )
    {
      return (*(_DWORD *)(BugCheckParameter4 + 48) >> 7) & 0x17 | 8u;
    }
    else if ( (v5 & 8) != 0 )
    {
      return (*(_DWORD *)(BugCheckParameter4 + 48) >> 7) & 7 | 0x18u;
    }
  }
  else
  {
    if ( (v9 & 0x70) == 0x40 )
    {
      if ( (unsigned int)MiRotatedToFrameBuffer(BugCheckParameter2) )
      {
        v50 = 1;
        if ( (v5 & 0x800) != 0 )
          v50 = 4;
        v51 = *(_DWORD *)(BugCheckParameter4 + 48) & 0xC00;
        if ( (*(_DWORD *)(BugCheckParameter4 + 48) & 0x380) != 0 && v51 == 3072 )
        {
          v50 |= 0x18u;
        }
        else if ( v51 == 1024 )
        {
          v50 |= 8u;
        }
        return v50;
      }
      v13 = (_DWORD *)(BugCheckParameter4 + 48);
    }
    *v6 = (*(_QWORD *)(v15 + 40) >> 43) & 0x3FF;
    if ( (*(_QWORD *)(v15 + 40) & 0x10000000000LL) != 0 )
    {
      v53 = 4;
      if ( (v5 & 0x800) == 0 )
        v53 = 1;
      v54 = v53 | 2;
      if ( (v5 & 0x8000000000000000uLL) != 0LL )
        v54 = v53;
      v55 = (*v13 >> 7) & 0x1F;
      if ( v55 >> 3 == 3 && (v55 & 7) != 0 )
      {
        v54 |= 0x18u;
      }
      else if ( v55 >> 3 == 1 )
      {
        v54 |= 8u;
      }
      if ( (*v13 & 0x4200000) == 0x4200000 )
        *a4 = 0;
      return v54;
    }
    else
    {
      if ( *(__int64 *)(v15 + 40) < 0 )
      {
        v16 = ((((__int64)(BugCheckParameter2 << 25) >> 16) & 0xFFFFFFFFF000uLL) >> 9) - 0x98000000000LL;
        v17 = MI_READ_PTE_LOCK_FREE(v16);
        v18 = *(_QWORD *)v16;
        v19 = v17 >> 60;
        if ( v16 >= 0xFFFFF6FB7DBED000uLL
          && v16 <= 0xFFFFF6FB7DBED7F8uLL
          && (v18 & 1) != 0
          && ((v18 & 0x42) == 0 || (v18 & 0x20) == 0) )
        {
          v23 = MiPteHasShadow();
          if ( v23 )
          {
            KernelWaitTime = v23[2].KernelWaitTime;
            if ( KernelWaitTime )
            {
              v26 = *(_QWORD *)(KernelWaitTime + 8 * ((v16 >> 3) & 0x1FF));
              if ( (v26 & 0x20) != 0 )
                v24 |= 0x20u;
              LOBYTE(v18) = v24 | 0x42;
              if ( (v26 & 0x42) == 0 )
                LOBYTE(v18) = v24;
            }
          }
        }
        LODWORD(v19) = v19 & 7;
        if ( (_DWORD)v19 )
        {
          if ( (v18 & 0x18) == 8 )
          {
            LODWORD(v19) = v19 | 0x18;
          }
          else
          {
            if ( (v18 & 0x10) == 0 )
              return (unsigned int)v19;
            LODWORD(v19) = v19 | 8;
          }
        }
        if ( !(_DWORD)v19 )
        {
          if ( (v19 = (*(_DWORD *)(v15 + 16) >> 5) & 0x1F, (*(_QWORD *)(v15 + 40) & 0x10000000000LL) == 0)
            && *(__int64 *)(v15 + 8) > 0
            || (Process = KeGetCurrentThread()->ApcState.Process, Process[1].IdealProcessorAssignmentBlock)
            && MiLocateCloneAddress(Process, *(_QWORD *)(v15 + 8) | 0x8000000000000000uLL, v19) )
          {
            LODWORD(v19) = MmMakeProtectNotWriteCopy[v19];
          }
        }
        return (unsigned int)v19;
      }
      result = (*(_DWORD *)(v15 + 16) >> 5) & 0x1F;
      if ( (*v13 & 0x4200000) == 0x4200000 )
        *a4 = 0;
    }
  }
  return result;
}
