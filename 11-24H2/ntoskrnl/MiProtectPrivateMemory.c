/*
 * XREFs of MiProtectPrivateMemory @ 0x140237480
 * Callers:
 *     MmProtectVirtualMemory @ 0x1408DCA30 (MmProtectVirtualMemory.c)
 * Callees:
 *     MiMakeSystemAddressValid @ 0x1402176A0 (MiMakeSystemAddressValid.c)
 *     MiRevertValidPte @ 0x140237FA0 (MiRevertValidPte.c)
 *     MiSetProtectionOnTransitionPte @ 0x1402386B4 (MiSetProtectionOnTransitionPte.c)
 *     MiComputePageCommitment @ 0x140238A7C (MiComputePageCommitment.c)
 *     MiSanitizePfnProtection @ 0x140238DA0 (MiSanitizePfnProtection.c)
 *     MiRotatedToFrameBuffer @ 0x140238E74 (MiRotatedToFrameBuffer.c)
 *     MiMakeProtoPrivate @ 0x140239334 (MiMakeProtoPrivate.c)
 *     MiReleaseProcessorFlushList @ 0x14023FFD0 (MiReleaseProcessorFlushList.c)
 *     MiGetProcessorFlushList @ 0x1402894BC (MiGetProcessorFlushList.c)
 *     MiIncreaseUsedPtes @ 0x14028A180 (MiIncreaseUsedPtes.c)
 *     MiFlushTbList @ 0x140291730 (MiFlushTbList.c)
 *     HvlNotifyLongSpinWait @ 0x140293260 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140293290 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KeShouldYieldProcessor @ 0x1402DA180 (KeShouldYieldProcessor.c)
 *     MiLockWorkingSetShared @ 0x1402DF970 (MiLockWorkingSetShared.c)
 *     MiUnlockWorkingSetShared @ 0x1402E0410 (MiUnlockWorkingSetShared.c)
 *     MiMakeDemandZeroPte @ 0x1402E3CC0 (MiMakeDemandZeroPte.c)
 *     MiGetPageProtection @ 0x1403019B0 (MiGetPageProtection.c)
 *     MiFaultInPagedPool @ 0x140302344 (MiFaultInPagedPool.c)
 *     MI_GET_GRAPHICS_PROTECTION_FROM_VAD @ 0x140302420 (MI_GET_GRAPHICS_PROTECTION_FROM_VAD.c)
 *     MiUnlockPageTableInternal @ 0x140321070 (MiUnlockPageTableInternal.c)
 *     MiMakeProtoLeafValid @ 0x1404056C4 (MiMakeProtoLeafValid.c)
 *     MiMakeVaRangeNoAccess @ 0x140498B94 (MiMakeVaRangeNoAccess.c)
 *     MiFlushGraphicsPtes @ 0x1404D6AE4 (MiFlushGraphicsPtes.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     MiChargeFullProcessCommitment @ 0x1408E3010 (MiChargeFullProcessCommitment.c)
 *     MiReturnFullProcessCommitment @ 0x1409DE7C8 (MiReturnFullProcessCommitment.c)
 */

__int64 __fastcall MiProtectPrivateMemory(
        ULONG_PTR a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        int a4,
        __int16 a5,
        unsigned __int8 a6,
        int *a7,
        __int64 a8)
{
  __int64 v8; // r15
  int v9; // ebx
  int v10; // edi
  int v11; // r14d
  struct _LIST_ENTRY **p_Blink; // r13
  ULONG_PTR v13; // r12
  unsigned __int64 v14; // rbp
  unsigned int v15; // esi
  unsigned __int64 v16; // rdx
  __int64 v17; // rbx
  unsigned __int8 v18; // di
  ULONG_PTR v19; // rbx
  __int64 v20; // rsi
  __int64 v21; // rdx
  int PageProtection; // eax
  ULONG_PTR v23; // rdx
  __int64 v24; // rcx
  int v25; // r8d
  int v26; // eax
  ULONG_PTR v27; // rdi
  __int64 ProcessorFlushList; // rax
  __int64 v29; // rdi
  int v30; // r10d
  __int64 v31; // rsi
  unsigned int v32; // ebp
  unsigned __int64 v33; // rax
  __int64 v34; // rcx
  int v35; // ecx
  int v36; // ecx
  unsigned __int64 DemandZeroPte; // rax
  int v38; // eax
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 result; // rax
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 *v46; // rax
  __int64 v47; // rdx
  unsigned int *MmInternal; // rcx
  __int64 v49; // rax
  unsigned int v50; // edx
  int v51; // edx
  int v52; // edx
  int v53; // eax
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // r8
  int ProtoPrivate; // eax
  ULONG_PTR v58; // rax
  ULONG_PTR v59; // rax
  __int64 v60; // rax
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // r8
  __int64 v64; // rcx
  __int64 v65; // rax
  __int64 v66; // rcx
  __int64 v67; // rax
  bool v68; // zf
  int v69; // ecx
  int v70; // [rsp+40h] [rbp-A8h]
  __int64 v71; // [rsp+48h] [rbp-A0h]
  ULONG_PTR v72; // [rsp+50h] [rbp-98h]
  int v73; // [rsp+5Ch] [rbp-8Ch]
  __int64 v74; // [rsp+60h] [rbp-88h]
  ULONG_PTR v75; // [rsp+68h] [rbp-80h]
  __int64 v76; // [rsp+70h] [rbp-78h]
  __int64 v77; // [rsp+78h] [rbp-70h] BYREF
  __int64 v78; // [rsp+80h] [rbp-68h]
  ULONG_PTR BugCheckParameter2; // [rsp+88h] [rbp-60h]
  __int64 v80; // [rsp+90h] [rbp-58h]
  unsigned __int64 v81; // [rsp+98h] [rbp-50h]
  _KPROCESS *Process; // [rsp+A0h] [rbp-48h]
  __int64 v84; // [rsp+100h] [rbp+18h] BYREF

  LODWORD(v8) = a4;
  BugCheckParameter2 = 0LL;
  v9 = a3;
  LOWORD(v84) = 0;
  v10 = a2;
  v77 = 0LL;
  v11 = 0;
  v71 = 0LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  p_Blink = &Process[2].ReadyListHead.Blink;
  v13 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v14 = ((a3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v73 = 0;
  v15 = 3;
  v16 = *(unsigned int *)(a1 + 48);
  v81 = v14;
  v72 = 0LL;
  v75 = 0LL;
  v76 = 1LL;
  if ( (v16 & 0xA00000) == 0xA00000 )
  {
    v65 = (v16 >> 19) & 3;
    v66 = MiVadPageSizes[v65];
    v15 = MiVadPageIndices[v65];
    v67 = 16LL;
    v68 = v66 == 16;
    v78 = v66;
    v69 = 0;
    if ( !v68 )
      v67 = 1LL;
    v76 = v67;
    LOBYTE(v69) = (v16 & 0x4200000) == 69206016;
    v73 = v69;
  }
  else
  {
    v78 = 1LL;
  }
  v70 = 0;
  v80 = ((unsigned int)v16 >> 12) & 0x7F;
  a6 = MiLockWorkingSetShared(&Process[2].ReadyListHead.Blink);
  if ( MiComputePageCommitment(v10, v9, a1, a6, 0, (__int64)&v77, 0LL) != ((__int64)(v14 - v13) >> 3) + 1 )
  {
    MiUnlockWorkingSetShared(p_Blink, a6);
    return 3221225517LL;
  }
  v17 = v77;
  if ( v77 )
  {
    MiUnlockWorkingSetShared(p_Blink, a6);
    result = MiChargeFullProcessCommitment(Process, v17);
    if ( (int)result < 0 )
      return result;
    v18 = MiLockWorkingSetShared(p_Blink);
    a6 = v18;
  }
  else
  {
    v18 = a6;
  }
  v19 = v13;
  if ( v15 <= 1 )
  {
    v64 = 2 - v15;
    do
    {
      v19 = ((v19 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v14 = ((v14 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      --v64;
    }
    while ( v64 );
    v81 = v14;
  }
  v20 = ((v19 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v74 = v20;
  while ( 1 )
  {
    MiMakeSystemAddressValid(v19, v80, v18, 0);
    if ( !*(_QWORD *)v19 )
      break;
    PageProtection = MiGetPageProtection(a1, v19, (__int64)&v84);
    if ( !BugCheckParameter2 )
    {
      v70 = 1;
      v25 = MmProtectToValue[PageProtection];
      v26 = 0;
      goto LABEL_11;
    }
    MiUnlockPageTableInternal(p_Blink, v20);
    MiUnlockWorkingSetShared(p_Blink, v18);
    MiFaultInPagedPool(BugCheckParameter2);
    MiLockWorkingSetShared(p_Blink);
  }
  v26 = MI_GET_GRAPHICS_PROTECTION_FROM_VAD(a1, v21, (unsigned int)MmProtectToValue[(*(_DWORD *)(a1 + 48) >> 7) & 0x1F]);
LABEL_11:
  *a7 = v26 | v25;
  while ( v19 <= v14 )
  {
    if ( (v19 & 0xFFF) == 0 || v70 )
    {
      v70 = 0;
      if ( v20 && v71 )
      {
        MiFlushTbList(v71, v23);
        MiReleaseProcessorFlushList(v44, v43, v45);
        v11 = 0;
        v71 = 0LL;
      }
      if ( v72 )
      {
        MiFlushGraphicsPtes(v72, ((__int64)(v75 - v72) >> 3) + 1);
        v72 = 0LL;
      }
      if ( v20 )
        MiUnlockPageTableInternal(p_Blink, v20);
      if ( ((_DWORD)p_Blink[23] & 0xFu) <= 5
        && (((_DWORD)p_Blink[23] & 0xF) != 1 ? (v46 = (__int64 *)(p_Blink + 24)) : (v46 = (__int64 *)&unk_140E38740),
            (v47 = *v46, (MmInternal = (unsigned int *)KeGetCurrentPrcb()->MmInternal) == 0LL)
          ? (v49 = 0LL)
          : (v49 = MmInternal[81]),
            (*(_DWORD *)((v49 << 6) + v47) & 0x40000000) != 0)
        || KeShouldYieldProcessor() )
      {
        MiUnlockWorkingSetShared(p_Blink, v18);
        MiLockWorkingSetShared(p_Blink);
      }
      v20 = ((v19 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v74 = v20;
      MiMakeSystemAddressValid(v19, v80, v18, 0);
    }
    v27 = *(_QWORD *)v19;
    if ( (*(_QWORD *)v19 & 1) != 0 )
    {
      if ( !v71 )
      {
        ProcessorFlushList = MiGetProcessorFlushList(v24, v23);
        v23 = 0LL;
        v71 = ProcessorFlushList;
        v11 = ProcessorFlushList;
        *(_DWORD *)(ProcessorFlushList + 16) = 0;
        *(_DWORD *)(ProcessorFlushList + 20) = 32;
        *(_QWORD *)ProcessorFlushList = p_Blink;
        *(_BYTE *)(ProcessorFlushList + 24) = ((_DWORD)p_Blink[23] & 0x800) != 0;
        if ( ((_DWORD)p_Blink[23] & 0xF) != 0
          || p_Blink == &KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink )
        {
          v24 = ((_DWORD)p_Blink[23] & 0xF) == 0;
        }
        else
        {
          *(_DWORD *)(ProcessorFlushList + 16) |= 9u;
          v24 = 0LL;
        }
        *(_DWORD *)(ProcessorFlushList + 16) &= 0xFFFFFFDB;
        *(_DWORD *)(ProcessorFlushList + 8) = v24;
        *(_WORD *)(ProcessorFlushList + 25) = 0;
        *(_DWORD *)(ProcessorFlushList + 28) = 0;
        *(_QWORD *)(ProcessorFlushList + 32) = 0LL;
        *(_QWORD *)(ProcessorFlushList + 40) = 0LL;
      }
      v29 = (v27 >> 12) & 0xFFFFFFFFFFLL;
      v30 = a1;
      v31 = 48 * v29 - 0x220000000000LL;
      if ( (*(_DWORD *)(a1 + 48) & 0x70) == 0x40 )
      {
        v53 = MiRotatedToFrameBuffer(v19);
        v30 = a1;
        if ( v53 )
          goto LABEL_35;
      }
      if ( *(__int64 *)(v31 + 40) < 0 )
      {
        MiFlushTbList(v71, v23);
        MiReleaseProcessorFlushList(v55, v54, v56);
        v71 = 0LL;
        v11 = 0;
        if ( v72 )
        {
          MiFlushGraphicsPtes(v72, ((__int64)(v75 - v72) >> 3) + 1);
          v72 = 0LL;
        }
        v18 = a6;
        ProtoPrivate = MiMakeProtoPrivate(p_Blink, a6, v19);
        if ( ProtoPrivate )
        {
          if ( ProtoPrivate == 1 )
          {
            --v77;
            v20 = v74;
          }
          else
          {
            v20 = 0LL;
            v70 = 1;
            v74 = 0LL;
            MiLockWorkingSetShared(p_Blink);
          }
        }
        else
        {
LABEL_61:
          v20 = v74;
        }
      }
      else
      {
        if ( (a5 & 0x101) == 0 )
        {
          v32 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v31 + 24), 0x3FuLL) )
          {
            do
            {
              if ( (++v32 & HvlLongSpinCountMask) == 0
                && (HvlEnlightenments & 0x40) != 0
                && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v24) )
              {
                HvlNotifyLongSpinWait(v32);
              }
              else
              {
                _mm_pause();
              }
            }
            while ( *(__int64 *)(v31 + 24) < 0 );
          }
          v33 = *(_QWORD *)(v31 + 16);
          v30 = a1;
          v34 = (v33 >> 5) & 0x1F;
          if ( (_DWORD)v8 == 24 )
          {
            LODWORD(v8) = 24;
          }
          else if ( (_DWORD)v34 == 24
                 && ((v50 = *(_DWORD *)(a1 + 48), (v50 & 0x200000) == 0)
                   ? (v51 = *(_DWORD *)(*(_QWORD *)(a1 + 72) + 32LL) >> 1)
                   : (v51 = v50 >> 7),
                     v52 = v51 & 0x1F,
                     LOBYTE(v34) = v52,
                     v52 == 24)
                 || (v35 = v34 & 0x18) == 0 )
          {
            v36 = v8 & 0x18;
            if ( v36 == 24 )
            {
              LODWORD(v8) = v8 & 0xFFFFFFE7;
            }
            else if ( v36 == 8 )
            {
              goto LABEL_31;
            }
          }
          else
          {
            switch ( v35 )
            {
              case 16:
LABEL_31:
                LODWORD(v8) = v8 & 0xFFFFFFF7;
                break;
              case 8:
                LODWORD(v8) = v8 & 0xFFFFFFE7 | 8;
                break;
              case 24:
                LODWORD(v8) = v8 | 0x18;
                break;
            }
          }
          if ( v33 )
            DemandZeroPte = (32LL * (unsigned int)v8) ^ ((32LL * (unsigned int)v8) ^ v33) & 0xFFFFFFFFFFFFFC1FuLL;
          else
            DemandZeroPte = MiMakeDemandZeroPte((unsigned int)v8);
          *(_QWORD *)(v31 + 16) = DemandZeroPte;
          _InterlockedAnd64((volatile signed __int64 *)(v31 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          v14 = v81;
LABEL_35:
          MiRevertValidPte(v30, v19, v8, v29, v71);
          goto LABEL_36;
        }
        if ( (unsigned int)MiMakeVaRangeNoAccess(v30, v19, v14, v11, a8) )
        {
LABEL_36:
          if ( v73 )
          {
            v58 = v72;
            if ( !v72 )
              v58 = v19;
            v72 = v58;
            v75 = v19 + 8 * (v76 - 1);
          }
          v20 = v74;
          v18 = a6;
          v13 += 8 * v78;
          v19 += 8 * v76;
        }
        else
        {
          v20 = v74;
          v18 = a6;
          *(_DWORD *)(v71 + 20) |= 1u;
        }
      }
    }
    else if ( (v27 & 0x400) != 0 )
    {
      if ( v71 )
      {
        MiFlushTbList(v71, v23);
        MiReleaseProcessorFlushList(v62, v61, v63);
        v11 = 0;
        v71 = 0LL;
      }
      if ( v72 )
      {
        MiFlushGraphicsPtes(v72, ((__int64)(v75 - v72) >> 3) + 1);
        v72 = 0LL;
      }
      v18 = a6;
      if ( (int)MiMakeProtoLeafValid(v19) < 0 )
      {
        v13 += 8LL;
        v19 += 8LL;
      }
      v70 = 1;
    }
    else
    {
      if ( (v27 & 0x800) == 0 )
      {
        if ( v78 != 1 )
          KeBugCheckEx(0x1Au, 0x44000uLL, v13, *(_QWORD *)v19, 0LL);
        if ( v27 )
        {
          v8 = (unsigned int)MiSanitizePfnProtection(a1, (v27 >> 5) & 0x1F, (unsigned int)v8);
          v24 = 32 * v8;
          *(_QWORD *)v13 = (32 * v8) ^ (v27 ^ (32 * v8)) & 0xFFFFFFFFFFFFFC1FuLL;
        }
        else
        {
          MiIncreaseUsedPtes(v24, ((v13 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, 1LL, 0LL);
          v8 = (unsigned int)MiSanitizePfnProtection(a1, (*(_DWORD *)(a1 + 48) >> 7) & 0x1F, (unsigned int)v8);
          *(_QWORD *)v13 = MiMakeDemandZeroPte(v8);
        }
        goto LABEL_42;
      }
      v38 = MiSetProtectionOnTransitionPte(a1, v19, (unsigned int)v8, 1LL);
      v24 = v78;
      if ( v78 == 1 )
      {
        if ( v38 )
        {
          v18 = a6;
          goto LABEL_61;
        }
LABEL_42:
        v18 = a6;
        v13 += 8LL;
        v19 += 8LL;
      }
      else
      {
        if ( v73 )
        {
          v59 = v72;
          if ( !v72 )
            v59 = v19;
          v72 = v59;
          v60 = v76;
          v23 = v19 + 8 * (v76 - 1);
          v75 = v23;
        }
        else
        {
          v60 = v76;
        }
        v18 = a6;
        v13 += 8 * v78;
        v19 += 8 * v60;
      }
    }
  }
  if ( v71 )
  {
    MiFlushTbList(v71, v23);
    MiReleaseProcessorFlushList(v40, v39, v41);
  }
  if ( v72 )
    MiFlushGraphicsPtes(v72, ((__int64)(v75 - v72) >> 3) + 1);
  if ( v20 )
    MiUnlockPageTableInternal(p_Blink, v20);
  MiUnlockWorkingSetShared(p_Blink, v18);
  if ( v77 )
    MiReturnFullProcessCommitment(Process, v77);
  return 0LL;
}
