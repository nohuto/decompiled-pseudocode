/*
 * XREFs of MiGetPageProtection @ 0x140245740
 * Callers:
 *     MiQueryAddressState @ 0x140244320 (MiQueryAddressState.c)
 *     MiProtectPrivateMemory @ 0x14037F8B0 (MiProtectPrivateMemory.c)
 *     MiCommitExistingVad @ 0x1403840D0 (MiCommitExistingVad.c)
 * Callees:
 *     MiTryLockProtoPoolPageAtDpc @ 0x14022B5E4 (MiTryLockProtoPoolPageAtDpc.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140231F50 (MI_READ_PTE_LOCK_FREE.c)
 *     MiInvalidPteConforms @ 0x1402343E0 (MiInvalidPteConforms.c)
 *     MiUnlockProtoPoolPage @ 0x1402353A0 (MiUnlockProtoPoolPage.c)
 *     MiGetProtoPteAddress @ 0x1402454D0 (MiGetProtoPteAddress.c)
 *     MiIsPrototypePteVadLookup @ 0x140246860 (MiIsPrototypePteVadLookup.c)
 *     MI_PROTO_FORMAT_COMBINED @ 0x1402CF530 (MI_PROTO_FORMAT_COMBINED.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiLockSpecialPurposeMemoryCachedPage @ 0x14033F5DC (MiLockSpecialPurposeMemoryCachedPage.c)
 *     MiRotatedToFrameBuffer @ 0x140387DA8 (MiRotatedToFrameBuffer.c)
 *     MiLocateCloneAddress @ 0x1403DE800 (MiLocateCloneAddress.c)
 *     MiGetImageProtoProtection @ 0x1403E0BF0 (MiGetImageProtoProtection.c)
 *     MiVadExtentCommitted @ 0x14044CA84 (MiVadExtentCommitted.c)
 *     MiCaptureProtectionFromLockedProto @ 0x140457934 (MiCaptureProtectionFromLockedProto.c)
 *     MiGetValidAwePartitionId @ 0x1404F2894 (MiGetValidAwePartitionId.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 */

__int64 __fastcall MiGetPageProtection(
        ULONG_PTR BugCheckParameter4,
        ULONG_PTR BugCheckParameter2,
        unsigned __int64 **a3,
        _DWORD *a4,
        _WORD *a5)
{
  ULONG_PTR v5; // rdi
  _WORD *v6; // r14
  __int64 v9; // r8
  char v11; // cl
  int v12; // ecx
  _DWORD *v14; // r11
  unsigned __int64 v15; // rdx
  __int64 v16; // rbp
  __int64 result; // rax
  char v18; // al
  __int64 v19; // r8
  unsigned __int64 v20; // rbx
  _KPROCESS *Process; // rcx
  __int64 v22; // rdi
  _DWORD *v23; // r9
  int v24; // r8d
  unsigned __int64 v25; // r8
  _KI_IDEAL_PROCESSOR_ASSIGNMENT_BLOCK *IdealProcessorAssignmentBlock; // rax
  int v27; // ecx
  __int64 v28; // rax
  ULONG_PTR v29; // rbx
  unsigned __int64 v30; // rcx
  unsigned __int64 v31; // rcx
  __int64 v32; // r8
  unsigned int v33; // r14d
  __int64 v34; // rax
  __int64 v35; // r8
  __int64 v36; // r9
  unsigned __int64 v37; // rsi
  unsigned __int64 *ProtoPteAddress; // r14
  __int64 v39; // rdx
  __int64 v40; // r8
  unsigned __int64 v41; // r9
  unsigned __int64 v42; // rbx
  _WORD *v43; // rax
  unsigned int v44; // edx
  int v45; // r8d
  unsigned int v46; // ecx
  int v47; // eax
  unsigned int v48; // ecx
  unsigned int v49; // edx
  __int64 v50; // [rsp+70h] [rbp+8h]
  unsigned __int64 *v51; // [rsp+78h] [rbp+10h] BYREF
  ULONG_PTR v52; // [rsp+80h] [rbp+18h] BYREF

  v5 = *(_QWORD *)BugCheckParameter2;
  v6 = a5;
  *a3 = 0LL;
  v9 = *(unsigned int *)(BugCheckParameter4 + 48);
  v11 = *(_DWORD *)(BugCheckParameter4 + 48);
  v52 = 0LL;
  v12 = v11 & 0x70;
  v51 = 0LL;
  *a4 = 0;
  *v6 = 0;
  v14 = (_DWORD *)(BugCheckParameter4 + 48);
  if ( v12 == 48 )
  {
    if ( (v9 & 0x200000) == 0 || (v9 & 0xC000000) != 0x8000000 )
    {
      *v6 = MiGetValidAwePartitionId(v5);
      if ( (v5 & 1) != 0 )
      {
        result = 4LL;
        if ( (v5 & 0x800) == 0 )
          result = 1LL;
        v46 = (*(_DWORD *)(BugCheckParameter4 + 48) >> 7) & 0x1F;
        if ( v46 >> 3 == 3 && ((*(_DWORD *)(BugCheckParameter4 + 48) >> 7) & 7) != 0 )
        {
          result = (unsigned int)result | 0x18;
        }
        else if ( v46 >> 3 == 1 )
        {
          result = (unsigned int)result | 8;
        }
      }
      else
      {
        result = 24LL;
      }
      if ( (*(_DWORD *)(BugCheckParameter4 + 48) & 0x4200000) == 0x4200000 )
        *v23 = 0;
      return result;
    }
    v14 = (_DWORD *)(BugCheckParameter4 + 48);
  }
  if ( (v5 & 1) == 0 )
  {
    if ( (v5 & 0x400) != 0 )
    {
      if ( !(unsigned int)MiIsPrototypePteVadLookup(v5, BugCheckParameter2, v9) )
      {
        if ( (unsigned __int8)MI_PROTO_FORMAT_COMBINED(v5) )
        {
          v43 = **(_WORD ***)(((v25 - 32) & 0xFFFFFFFFFFFFF000uLL) + 0x10);
        }
        else
        {
          IdealProcessorAssignmentBlock = KeGetCurrentThread()->ApcState.Process[1].IdealProcessorAssignmentBlock;
          if ( !IdealProcessorAssignmentBlock )
            goto LABEL_44;
          do
          {
            if ( v25 > *(_QWORD *)&IdealProcessorAssignmentBlock->ThreadSeed[8] )
            {
              IdealProcessorAssignmentBlock = *(_KI_IDEAL_PROCESSOR_ASSIGNMENT_BLOCK **)&IdealProcessorAssignmentBlock->Breakpoints.High.0;
            }
            else
            {
              if ( v25 >= *(_QWORD *)&IdealProcessorAssignmentBlock->ThreadSeed[4] )
                break;
              IdealProcessorAssignmentBlock = *(_KI_IDEAL_PROCESSOR_ASSIGNMENT_BLOCK **)&IdealProcessorAssignmentBlock->ExpectedConcurrencyCount.0;
            }
          }
          while ( IdealProcessorAssignmentBlock );
          if ( !IdealProcessorAssignmentBlock || !*(_QWORD *)&IdealProcessorAssignmentBlock->ThreadSeed[16] )
          {
LABEL_44:
            v27 = *(_DWORD *)(BugCheckParameter4 + 48);
            if ( (v27 & 0x70) != 0x20 || (v27 & 0xF80) != 0x380 )
              KeBugCheckEx(0x1Au, 0x41202uLL, BugCheckParameter2, v5, BugCheckParameter4);
            *v6 = **((_WORD **)qword_140E2FD48 + (*(_WORD *)(**(_QWORD **)(BugCheckParameter4 + 72) + 60LL) & 0x3FF));
            return MiGetImageProtoProtection(BugCheckParameter4, v25);
          }
          v43 = *(_WORD **)(*(_QWORD *)&IdealProcessorAssignmentBlock->ThreadSeed[20] + 24LL);
        }
        *v6 = *v43;
        return (unsigned int)MmMakeProtectNotWriteCopy[(unsigned int)MiCaptureProtectionFromLockedProto(v25)];
      }
      v22 = (v5 >> 5) & 0x1F;
      v37 = (__int64)(BugCheckParameter2 << 25) >> 16;
      if ( (v24 & 0x200000) == 0 )
      {
        *v6 = **((_WORD **)qword_140E2FD48 + (*(_WORD *)(**(_QWORD **)(BugCheckParameter4 + 72) + 60LL) & 0x3FF));
        ProtoPteAddress = (unsigned __int64 *)MiGetProtoPteAddress(BugCheckParameter4, v37 >> 12, 12, &v51);
        if ( !ProtoPteAddress || !(unsigned int)MiVadExtentCommitted(BugCheckParameter4, v37) )
          return 0LL;
        if ( !*(_QWORD *)(*v51 + 64) && (*(_DWORD *)(*v51 + 56) & 0x2000) == 0 )
        {
          if ( (int)MiTryLockProtoPoolPageAtDpc(ProtoPteAddress, v39, (__int64 *)&v52, 0LL) < 0 )
          {
            *a3 = ProtoPteAddress;
            return 256LL;
          }
          v42 = *ProtoPteAddress;
          MiUnlockProtoPoolPage(v52, 0x11u, v40, v41);
          if ( !v42 )
            return 0LL;
        }
      }
      return (unsigned int)v22;
    }
    if ( (v5 & 0x800) == 0 )
      goto LABEL_24;
    while ( 1 )
    {
      while ( 1 )
      {
        v28 = MI_READ_PTE_LOCK_FREE(BugCheckParameter2);
        v29 = v28;
        if ( (v28 & 0x800) == 0 )
          goto LABEL_24;
        if ( MiInvalidPteConforms(v28) )
        {
          if ( qword_140E2D940 )
          {
            if ( (v29 & 0x10) != 0 )
              v30 &= ~0x10uLL;
            else
              v30 = v29 & ~qword_140E2D940;
          }
          v31 = (v30 >> 12) & 0xFFFFFFFFFFLL;
          v32 = 48 * v31 - 0x220000000000LL;
          v50 = v32;
          if ( v31 <= qword_140E2D9A0 && (*(_QWORD *)(48 * v31 - 0x21FFFFFFFFD8LL) & 0x40000000000000LL) != 0 )
            break;
        }
      }
      v33 = 0;
LABEL_55:
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v32 + 24), 0x3FuLL) )
        break;
      v34 = MI_READ_PTE_LOCK_FREE(BugCheckParameter2);
      v6 = a5;
      v35 = v50;
      if ( v34 == v29 )
      {
        if ( (*(_DWORD *)(*((_QWORD *)qword_140E2FD48 + ((*(_QWORD *)(v50 + 40) >> 43) & 0x3FFLL)) + 4LL) & 0x80u) == 0
          || (v35 = MiLockSpecialPurposeMemoryCachedPage(v50, 0LL)) != 0 )
        {
          if ( (*(_QWORD *)(v35 + 8) | 0x8000000000000000uLL) != BugCheckParameter2
            && (*(_QWORD *)(v35 + 40) & 0x10000000000LL) == 0 )
          {
            KeBugCheckEx(0x1Au, 0x411uLL, BugCheckParameter2, v29, *(_QWORD *)(v35 + 8));
          }
          if ( v35 )
          {
            v36 = *((_QWORD *)qword_140E2FD48 + ((*(_QWORD *)(v35 + 40) >> 43) & 0x3FFLL));
            if ( (*(_DWORD *)(v36 + 4) & 0x80u) != 0 )
              v36 = **(_QWORD **)(v36 + 17624);
            *v6 = *(_WORD *)v36;
            _InterlockedAnd64((volatile signed __int64 *)(v35 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            goto LABEL_25;
          }
        }
LABEL_24:
        *v6 = **((_WORD **)qword_140E2FD48 + HIWORD(KeGetCurrentThread()->ApcState.Process[2].ProcessListEntry.Blink));
LABEL_25:
        v22 = (v5 >> 5) & 0x1F;
        if ( (*(_DWORD *)(BugCheckParameter4 + 48) & 0x4200000) == 0x4200000 )
          *a4 = 0;
        return (unsigned int)v22;
      }
      _InterlockedAnd64((volatile signed __int64 *)(v50 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    }
    while ( 1 )
    {
      if ( (++v33 & HvlLongSpinCountMask) == 0 && (HvlEnlightenments & 0x40) != 0 )
      {
        if ( (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v31) )
        {
          HvlNotifyLongSpinWait(v33);
          v32 = v50;
          goto LABEL_91;
        }
        v32 = v50;
      }
      _mm_pause();
LABEL_91:
      if ( *(__int64 *)(v32 + 24) >= 0 )
        goto LABEL_55;
    }
  }
  v15 = (v5 >> 12) & 0xFFFFFFFFFFLL;
  v16 = 48 * v15 - 0x220000000000LL;
  if ( v12 == 16 )
  {
    if ( v15 <= qword_140E2D9A0 && (*(_QWORD *)(48 * v15 - 0x21FFFFFFFFD8LL) & 0x40000000000000LL) != 0 )
      *v6 = (*(_QWORD *)(v16 + 40) >> 43) & 0x3FF;
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
        v44 = 1;
        if ( (v5 & 0x800) != 0 )
          v44 = 4;
        v45 = *(_DWORD *)(BugCheckParameter4 + 48) & 0xC00;
        if ( (*(_DWORD *)(BugCheckParameter4 + 48) & 0x380) != 0 && v45 == 3072 )
        {
          v44 |= 0x18u;
        }
        else if ( v45 == 1024 )
        {
          v44 |= 8u;
        }
        return v44;
      }
      v14 = (_DWORD *)(BugCheckParameter4 + 48);
    }
    *v6 = (*(_QWORD *)(v16 + 40) >> 43) & 0x3FF;
    if ( (*(_QWORD *)(v16 + 40) & 0x10000000000LL) == 0 )
    {
      if ( *(__int64 *)(v16 + 40) >= 0 )
      {
        result = (*(_DWORD *)(v16 + 16) >> 5) & 0x1F;
        if ( (*v14 & 0x4200000) == 0x4200000 )
          *a4 = 0;
        return result;
      }
      v20 = MI_READ_PTE_LOCK_FREE(((((__int64)(BugCheckParameter2 << 25) >> 16) & 0xFFFFFFFFF000uLL) >> 9) - 0x98000000000LL);
      v18 = MI_READ_PTE_LOCK_FREE(((((__int64)(BugCheckParameter2 << 25) >> 16) & 0xFFFFFFFFF000uLL) >> 9) - 0x98000000000LL);
      LODWORD(v20) = (v20 >> 60) & 7;
      if ( (_DWORD)v20 )
      {
        if ( (v18 & 0x18) == 8 )
        {
          LODWORD(v20) = v20 | 0x18;
        }
        else
        {
          if ( (v18 & 0x10) == 0 )
            return (unsigned int)v20;
          LODWORD(v20) = v20 | 8;
        }
      }
      if ( !(_DWORD)v20 )
      {
        if ( (v20 = (*(_DWORD *)(v16 + 16) >> 5) & 0x1F, (*(_QWORD *)(v16 + 40) & 0x10000000000LL) == 0)
          && *(__int64 *)(v16 + 8) > 0
          || (Process = KeGetCurrentThread()->ApcState.Process, Process[1].IdealProcessorAssignmentBlock)
          && MiLocateCloneAddress(Process, *(_QWORD *)(v16 + 8) | 0x8000000000000000uLL, v19) )
        {
          LODWORD(v20) = MmMakeProtectNotWriteCopy[v20];
        }
      }
      return (unsigned int)v20;
    }
    v47 = 4;
    if ( (v5 & 0x800) == 0 )
      v47 = 1;
    v48 = v47 | 2;
    if ( (v5 & 0x8000000000000000uLL) != 0LL )
      v48 = v47;
    v49 = (*v14 >> 7) & 0x1F;
    if ( v49 >> 3 == 3 && (v49 & 7) != 0 )
    {
      v48 |= 0x18u;
    }
    else if ( v49 >> 3 == 1 )
    {
      v48 |= 8u;
    }
    if ( (*v14 & 0x4200000) == 0x4200000 )
      *a4 = 0;
    return v48;
  }
  return result;
}
