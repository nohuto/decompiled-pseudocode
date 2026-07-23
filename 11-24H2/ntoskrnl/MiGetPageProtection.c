/*
 * XREFs of MiGetPageProtection @ 0x14030C130
 * Callers:
 *     MiProtectPrivateMemory @ 0x140211610 (MiProtectPrivateMemory.c)
 *     MiCommitExistingVad @ 0x140306380 (MiCommitExistingVad.c)
 *     MiQueryAddressState @ 0x14030ABA0 (MiQueryAddressState.c)
 * Callees:
 *     MiLockSpecialPurposeMemoryCachedPage @ 0x140204044 (MiLockSpecialPurposeMemoryCachedPage.c)
 *     MiRotatedToFrameBuffer @ 0x140213AD4 (MiRotatedToFrameBuffer.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140246FA0 (MI_READ_PTE_LOCK_FREE.c)
 *     MI_PROTO_FORMAT_COMBINED @ 0x140269F40 (MI_PROTO_FORMAT_COMBINED.c)
 *     MiUnlockProtoPoolPage @ 0x14029C7F0 (MiUnlockProtoPoolPage.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiPteHasShadow @ 0x140307500 (MiPteHasShadow.c)
 *     MiGetProtoPteAddress @ 0x14030BEC0 (MiGetProtoPteAddress.c)
 *     MiIsPrototypePteVadLookup @ 0x14030D150 (MiIsPrototypePteVadLookup.c)
 *     MiGetImageProtoProtection @ 0x140339AF0 (MiGetImageProtoProtection.c)
 *     MiTryLockProtoPoolPageAtDpc @ 0x14033EECC (MiTryLockProtoPoolPageAtDpc.c)
 *     MiInvalidPteConforms @ 0x1403461F0 (MiInvalidPteConforms.c)
 *     MiLocateCloneAddress @ 0x1403C9CE8 (MiLocateCloneAddress.c)
 *     MiVadExtentCommitted @ 0x14043EDF0 (MiVadExtentCommitted.c)
 *     MiCaptureProtectionFromLockedProto @ 0x14044D614 (MiCaptureProtectionFromLockedProto.c)
 *     MiGetValidAwePartitionId @ 0x1404F2A44 (MiGetValidAwePartitionId.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
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
  int v28; // r8d
  unsigned __int64 v29; // r8
  _KI_IDEAL_PROCESSOR_ASSIGNMENT_BLOCK *IdealProcessorAssignmentBlock; // rax
  int v31; // ecx
  __int64 v32; // rax
  ULONG_PTR v33; // rbx
  unsigned __int64 v34; // rcx
  unsigned __int64 v35; // rcx
  __int64 v36; // rdx
  unsigned int v37; // r14d
  __int64 v38; // rax
  __int64 v39; // r8
  __int64 v40; // r9
  unsigned __int64 v41; // rsi
  __int64 *ProtoPteAddress; // r14
  __int64 v43; // rdx
  unsigned __int64 v44; // rdx
  __int64 v45; // r8
  __int64 v46; // r9
  __int64 v47; // rbx
  _WORD *v48; // rax
  unsigned int v49; // edx
  int v50; // r8d
  unsigned int v51; // ecx
  int v52; // eax
  unsigned int v53; // ecx
  unsigned int v54; // edx
  __int64 v55; // [rsp+70h] [rbp+8h]
  __int64 v56; // [rsp+78h] [rbp+10h] BYREF
  __int64 v57; // [rsp+80h] [rbp+18h] BYREF

  v5 = *(_QWORD *)BugCheckParameter2;
  v6 = a5;
  *a3 = 0LL;
  v9 = *(_DWORD *)(BugCheckParameter4 + 48);
  v57 = 0LL;
  v11 = v9 & 0x70;
  v56 = 0LL;
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
        v51 = (*(_DWORD *)(BugCheckParameter4 + 48) >> 7) & 0x1F;
        if ( v51 >> 3 == 3 && ((*(_DWORD *)(BugCheckParameter4 + 48) >> 7) & 7) != 0 )
        {
          result = (unsigned int)result | 0x18;
        }
        else if ( v51 >> 3 == 1 )
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
          v32 = MI_READ_PTE_LOCK_FREE(BugCheckParameter2);
          v33 = v32;
          if ( (v32 & 0x800) == 0 )
            goto LABEL_20;
          if ( (unsigned int)MiInvalidPteConforms(v32) )
          {
            if ( qword_140E2DCC0 )
            {
              if ( (v33 & 0x10) != 0 )
                v34 &= ~0x10uLL;
              else
                v34 = v33 & ~qword_140E2DCC0;
            }
            v35 = (v34 >> 12) & 0xFFFFFFFFFFLL;
            v36 = 48 * v35 - 0x220000000000LL;
            v55 = v36;
            if ( v35 <= qword_140E2DD20 && (*(_QWORD *)(48 * v35 - 0x21FFFFFFFFD8LL) & 0x40000000000000LL) != 0 )
              break;
          }
        }
        v37 = 0;
LABEL_58:
        if ( _interlockedbittestandset64((volatile signed __int32 *)(v36 + 24), 0x3FuLL) )
          break;
        v38 = MI_READ_PTE_LOCK_FREE(BugCheckParameter2);
        v6 = a5;
        v39 = v55;
        if ( v38 == v33 )
        {
          if ( (*(_DWORD *)(*((_QWORD *)qword_140E300C8 + ((*(_QWORD *)(v55 + 40) >> 43) & 0x3FFLL)) + 4LL) & 0x80u) == 0
            || (v39 = MiLockSpecialPurposeMemoryCachedPage(v55, 0)) != 0 )
          {
            if ( (*(_QWORD *)(v39 + 8) | 0x8000000000000000uLL) != BugCheckParameter2
              && (*(_QWORD *)(v39 + 40) & 0x10000000000LL) == 0 )
            {
              KeBugCheckEx(0x1Au, 0x411uLL, BugCheckParameter2, v33, *(_QWORD *)(v39 + 8));
            }
            if ( v39 )
            {
              v40 = *((_QWORD *)qword_140E300C8 + ((*(_QWORD *)(v39 + 40) >> 43) & 0x3FFLL));
              if ( (*(_DWORD *)(v40 + 4) & 0x80u) != 0 )
                v40 = **(_QWORD **)(v40 + 17624);
              *v6 = *(_WORD *)v40;
              _InterlockedAnd64((volatile signed __int64 *)(v39 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              goto LABEL_21;
            }
          }
LABEL_20:
          *v6 = **((_WORD **)qword_140E300C8 + HIWORD(KeGetCurrentThread()->ApcState.Process[2].ProcessListEntry.Blink));
LABEL_21:
          v21 = (v5 >> 5) & 0x1F;
          if ( (*(_DWORD *)(BugCheckParameter4 + 48) & 0x4200000) == 0x4200000 )
            *a4 = 0;
          return (unsigned int)v21;
        }
        _InterlockedAnd64((volatile signed __int64 *)(v55 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      }
      while ( 1 )
      {
        if ( (++v37 & HvlLongSpinCountMask) == 0 && (HvlEnlightenments & 0x40) != 0 )
        {
          if ( KiCheckVpBackingLongSpinWaitHypercall() )
          {
            HvlNotifyLongSpinWait(v37);
            v36 = v55;
            goto LABEL_102;
          }
          v36 = v55;
        }
        _mm_pause();
LABEL_102:
        if ( *(__int64 *)(v36 + 24) >= 0 )
          goto LABEL_58;
      }
    }
    if ( !(unsigned int)MiIsPrototypePteVadLookup(v5, BugCheckParameter2) )
    {
      if ( MI_PROTO_FORMAT_COMBINED(v5) )
      {
        v48 = **(_WORD ***)(((v29 - 32) & 0xFFFFFFFFFFFFF000uLL) + 0x10);
      }
      else
      {
        IdealProcessorAssignmentBlock = KeGetCurrentThread()->ApcState.Process[1].IdealProcessorAssignmentBlock;
        if ( !IdealProcessorAssignmentBlock )
          goto LABEL_46;
        do
        {
          if ( v29 > *(_QWORD *)&IdealProcessorAssignmentBlock->ThreadSeed[8] )
          {
            IdealProcessorAssignmentBlock = *(_KI_IDEAL_PROCESSOR_ASSIGNMENT_BLOCK **)&IdealProcessorAssignmentBlock->Breakpoints.High.0;
          }
          else
          {
            if ( v29 >= *(_QWORD *)&IdealProcessorAssignmentBlock->ThreadSeed[4] )
              break;
            IdealProcessorAssignmentBlock = *(_KI_IDEAL_PROCESSOR_ASSIGNMENT_BLOCK **)&IdealProcessorAssignmentBlock->ExpectedConcurrencyCount.0;
          }
        }
        while ( IdealProcessorAssignmentBlock );
        if ( !IdealProcessorAssignmentBlock || !*(_QWORD *)&IdealProcessorAssignmentBlock->ThreadSeed[16] )
        {
LABEL_46:
          v31 = *(_DWORD *)(BugCheckParameter4 + 48);
          if ( (v31 & 0x70) != 0x20 || (v31 & 0xF80) != 0x380 )
            KeBugCheckEx(0x1Au, 0x41202uLL, BugCheckParameter2, v5, BugCheckParameter4);
          *v6 = **((_WORD **)qword_140E300C8 + (*(_WORD *)(**(_QWORD **)(BugCheckParameter4 + 72) + 60LL) & 0x3FF));
          return MiGetImageProtoProtection(BugCheckParameter4, v29);
        }
        v48 = *(_WORD **)(*(_QWORD *)&IdealProcessorAssignmentBlock->ThreadSeed[20] + 24LL);
      }
      *v6 = *v48;
      return (unsigned int)MmMakeProtectNotWriteCopy[(unsigned int)MiCaptureProtectionFromLockedProto(v29)];
    }
    v21 = (v5 >> 5) & 0x1F;
    v41 = (__int64)(BugCheckParameter2 << 25) >> 16;
    if ( (v28 & 0x200000) == 0 )
    {
      *v6 = **((_WORD **)qword_140E300C8 + (*(_WORD *)(**(_QWORD **)(BugCheckParameter4 + 72) + 60LL) & 0x3FF));
      ProtoPteAddress = (__int64 *)MiGetProtoPteAddress(BugCheckParameter4, v41 >> 12, 0xCu, &v56);
      if ( !ProtoPteAddress || !(unsigned int)MiVadExtentCommitted(BugCheckParameter4, v41) )
        goto LABEL_73;
      if ( *(_QWORD *)(*(_QWORD *)v56 + 64LL) || (*(_DWORD *)(*(_QWORD *)v56 + 56LL) & 0x2000) != 0 )
        return (unsigned int)v21;
      if ( (int)MiTryLockProtoPoolPageAtDpc(ProtoPteAddress, v43, &v57, 0LL) < 0 )
      {
        *a3 = ProtoPteAddress;
        LODWORD(v21) = 256;
        return (unsigned int)v21;
      }
      v47 = *ProtoPteAddress;
      LOBYTE(v44) = 17;
      MiUnlockProtoPoolPage(v57, v44, v45, v46);
      if ( !v47 )
LABEL_73:
        LODWORD(v21) = 0;
    }
    return (unsigned int)v21;
  }
  v14 = (v5 >> 12) & 0xFFFFFFFFFFLL;
  v15 = 48 * v14 - 0x220000000000LL;
  if ( v11 == 16 )
  {
    if ( v14 <= qword_140E2DD20 && (*(_QWORD *)(48 * v14 - 0x21FFFFFFFFD8LL) & 0x40000000000000LL) != 0 )
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
        v49 = 1;
        if ( (v5 & 0x800) != 0 )
          v49 = 4;
        v50 = *(_DWORD *)(BugCheckParameter4 + 48) & 0xC00;
        if ( (*(_DWORD *)(BugCheckParameter4 + 48) & 0x380) != 0 && v50 == 3072 )
        {
          v49 |= 0x18u;
        }
        else if ( v50 == 1024 )
        {
          v49 |= 8u;
        }
        return v49;
      }
      v13 = (_DWORD *)(BugCheckParameter4 + 48);
    }
    *v6 = (*(_QWORD *)(v15 + 40) >> 43) & 0x3FF;
    if ( (*(_QWORD *)(v15 + 40) & 0x10000000000LL) != 0 )
    {
      v52 = 4;
      if ( (v5 & 0x800) == 0 )
        v52 = 1;
      v53 = v52 | 2;
      if ( (v5 & 0x8000000000000000uLL) != 0LL )
        v53 = v52;
      v54 = (*v13 >> 7) & 0x1F;
      if ( v54 >> 3 == 3 && (v54 & 7) != 0 )
      {
        v53 |= 0x18u;
      }
      else if ( v54 >> 3 == 1 )
      {
        v53 |= 8u;
      }
      if ( (*v13 & 0x4200000) == 0x4200000 )
        *a4 = 0;
      return v53;
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
            && MiLocateCloneAddress(Process, *(_QWORD *)(v15 + 8) | 0x8000000000000000uLL) )
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
