/*
 * XREFs of MiProtectPrivateMemory @ 0x140211610
 * Callers:
 *     MmProtectVirtualMemory @ 0x1408DAC60 (MmProtectVirtualMemory.c)
 * Callees:
 *     MiReleaseProcessorFlushList @ 0x140208120 (MiReleaseProcessorFlushList.c)
 *     MiRevertValidPte @ 0x140212130 (MiRevertValidPte.c)
 *     MiSetProtectionOnTransitionPte @ 0x140212844 (MiSetProtectionOnTransitionPte.c)
 *     MiComputePageCommitment @ 0x140212C0C (MiComputePageCommitment.c)
 *     MiSanitizePfnProtection @ 0x140212F30 (MiSanitizePfnProtection.c)
 *     MiRotatedToFrameBuffer @ 0x140213AD4 (MiRotatedToFrameBuffer.c)
 *     KeShouldYieldProcessor @ 0x14023BA60 (KeShouldYieldProcessor.c)
 *     MiLockWorkingSetShared @ 0x140241250 (MiLockWorkingSetShared.c)
 *     MiUnlockWorkingSetShared @ 0x140241CF0 (MiUnlockWorkingSetShared.c)
 *     MiMakeSystemAddressValid @ 0x140244700 (MiMakeSystemAddressValid.c)
 *     MiGetProcessorFlushList @ 0x1402990BC (MiGetProcessorFlushList.c)
 *     MiIncreaseUsedPtes @ 0x140299D80 (MiIncreaseUsedPtes.c)
 *     MiFlushTbList @ 0x1402A1330 (MiFlushTbList.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiUnlockPageTableInternal @ 0x1402C9C00 (MiUnlockPageTableInternal.c)
 *     MiGetPageProtection @ 0x14030C130 (MiGetPageProtection.c)
 *     MiFaultInPagedPool @ 0x14030CAC4 (MiFaultInPagedPool.c)
 *     MI_GET_GRAPHICS_PROTECTION_FROM_VAD @ 0x14030CBA0 (MI_GET_GRAPHICS_PROTECTION_FROM_VAD.c)
 *     MiMakeDemandZeroPte @ 0x140392C40 (MiMakeDemandZeroPte.c)
 *     MiMakeProtoLeafValid @ 0x1403C7C20 (MiMakeProtoLeafValid.c)
 *     MiMakeProtoPrivate @ 0x1403C9630 (MiMakeProtoPrivate.c)
 *     MiMakeVaRangeNoAccess @ 0x14049351C (MiMakeVaRangeNoAccess.c)
 *     MiFlushGraphicsPtes @ 0x1404CFF34 (MiFlushGraphicsPtes.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     MiChargeFullProcessCommitment @ 0x140919BC0 (MiChargeFullProcessCommitment.c)
 *     MiReturnFullProcessCommitment @ 0x1409D8398 (MiReturnFullProcessCommitment.c)
 */

__int64 __fastcall MiProtectPrivateMemory(
        ULONG_PTR a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        int a4,
        __int16 a5,
        unsigned __int8 a6,
        _DWORD *a7,
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
  unsigned __int8 v17; // di
  ULONG_PTR v18; // rbx
  __int64 v19; // rsi
  __int64 v20; // rdx
  int PageProtection; // eax
  ULONG_PTR v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r9
  int v25; // r8d
  int v26; // eax
  __int64 v27; // r8
  ULONG_PTR v28; // rdi
  __int64 ProcessorFlushList; // rax
  __int64 v30; // rdi
  ULONG_PTR v31; // r10
  __int64 v32; // rsi
  unsigned int v33; // ebp
  unsigned __int64 v34; // rax
  __int64 v35; // rcx
  int v36; // ecx
  int v37; // ecx
  unsigned __int64 DemandZeroPte; // rax
  int v39; // eax
  __int64 result; // rax
  __int64 *v41; // rax
  __int64 v42; // rdx
  unsigned int *MmInternal; // rcx
  __int64 v44; // rax
  unsigned int v45; // edx
  int v46; // edx
  int v47; // eax
  int ProtoPrivate; // eax
  __int64 v49; // rdx
  __int64 v50; // r8
  __int64 v51; // r9
  ULONG_PTR v52; // rax
  ULONG_PTR v53; // rax
  __int64 v54; // rax
  __int64 v55; // rcx
  __int64 v56; // rax
  __int64 v57; // rcx
  __int64 v58; // rax
  bool v59; // zf
  int v60; // ecx
  int v61; // [rsp+40h] [rbp-A8h]
  __int64 v62; // [rsp+48h] [rbp-A0h]
  ULONG_PTR v63; // [rsp+50h] [rbp-98h]
  int v64; // [rsp+5Ch] [rbp-8Ch]
  __int64 v65; // [rsp+60h] [rbp-88h]
  ULONG_PTR v66; // [rsp+68h] [rbp-80h]
  __int64 v67; // [rsp+70h] [rbp-78h]
  __int64 v68; // [rsp+78h] [rbp-70h] BYREF
  __int64 v69; // [rsp+80h] [rbp-68h]
  ULONG_PTR v70; // [rsp+88h] [rbp-60h]
  __int64 v71; // [rsp+90h] [rbp-58h]
  unsigned __int64 v72; // [rsp+98h] [rbp-50h]
  _KPROCESS *Process; // [rsp+A0h] [rbp-48h]
  __int64 v75; // [rsp+100h] [rbp+18h] BYREF

  LODWORD(v8) = a4;
  v70 = 0LL;
  v9 = a3;
  LOWORD(v75) = 0;
  v10 = a2;
  v68 = 0LL;
  v11 = 0;
  v62 = 0LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  p_Blink = &Process[2].ReadyListHead.Blink;
  v13 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v14 = ((a3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v64 = 0;
  v15 = 3;
  v16 = *(unsigned int *)(a1 + 48);
  v72 = v14;
  v63 = 0LL;
  v66 = 0LL;
  v67 = 1LL;
  if ( (v16 & 0xA00000) == 0xA00000 )
  {
    v56 = (v16 >> 19) & 3;
    v57 = MiVadPageSizes[v56];
    v15 = MiVadPageIndices[v56];
    v58 = 16LL;
    v59 = v57 == 16;
    v69 = v57;
    v60 = 0;
    if ( !v59 )
      v58 = 1LL;
    v67 = v58;
    LOBYTE(v60) = (v16 & 0x4200000) == 69206016;
    v64 = v60;
  }
  else
  {
    v69 = 1LL;
  }
  v61 = 0;
  v71 = ((unsigned int)v16 >> 12) & 0x7F;
  a6 = MiLockWorkingSetShared(&Process[2].ReadyListHead.Blink);
  if ( MiComputePageCommitment(v10, v9, a1, a6, 0, (__int64)&v68, 0LL) != ((__int64)(v14 - v13) >> 3) + 1 )
  {
    MiUnlockWorkingSetShared(p_Blink, a6);
    return 3221225517LL;
  }
  if ( v68 )
  {
    MiUnlockWorkingSetShared(p_Blink, a6);
    result = MiChargeFullProcessCommitment(Process);
    if ( (int)result < 0 )
      return result;
    v17 = MiLockWorkingSetShared(p_Blink);
    a6 = v17;
  }
  else
  {
    v17 = a6;
  }
  v18 = v13;
  if ( v15 <= 1 )
  {
    v55 = 2 - v15;
    do
    {
      v18 = ((v18 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v14 = ((v14 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      --v55;
    }
    while ( v55 );
    v72 = v14;
  }
  v19 = ((v18 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v65 = v19;
  while ( 1 )
  {
    MiMakeSystemAddressValid(v18);
    if ( !*(_QWORD *)v18 )
      break;
    PageProtection = MiGetPageProtection(a1, v18, (__int64)&v75);
    if ( !v70 )
    {
      v61 = 1;
      v25 = MmProtectToValue[PageProtection];
      v26 = 0;
      goto LABEL_11;
    }
    MiUnlockPageTableInternal(p_Blink, v19);
    MiUnlockWorkingSetShared(p_Blink, v17);
    MiFaultInPagedPool(v70);
    MiLockWorkingSetShared(p_Blink);
  }
  v26 = MI_GET_GRAPHICS_PROTECTION_FROM_VAD(a1, v20, (unsigned int)MmProtectToValue[(*(_DWORD *)(a1 + 48) >> 7) & 0x1F]);
LABEL_11:
  v27 = v26 | (unsigned int)v25;
  *a7 = v27;
  while ( v18 <= v14 )
  {
    if ( (v18 & 0xFFF) == 0 || v61 )
    {
      v61 = 0;
      if ( v19 && v62 )
      {
        MiFlushTbList(v62);
        MiReleaseProcessorFlushList();
        v11 = 0;
        v62 = 0LL;
      }
      if ( v63 )
      {
        MiFlushGraphicsPtes(v63, ((__int64)(v66 - v63) >> 3) + 1);
        v63 = 0LL;
      }
      if ( v19 )
        MiUnlockPageTableInternal(p_Blink, v19);
      if ( ((_DWORD)p_Blink[23] & 0xFu) <= 5
        && (((_DWORD)p_Blink[23] & 0xF) != 1 ? (v41 = (__int64 *)(p_Blink + 24)) : (v41 = (__int64 *)&unk_140E38880),
            (v42 = *v41, (MmInternal = (unsigned int *)KeGetCurrentPrcb()->MmInternal) == 0LL)
          ? (v44 = 0LL)
          : (v44 = MmInternal[81]),
            (*(_DWORD *)((v44 << 6) + v42) & 0x40000000) != 0)
        || KeShouldYieldProcessor() )
      {
        MiUnlockWorkingSetShared(p_Blink, v17);
        MiLockWorkingSetShared(p_Blink);
      }
      v19 = ((v18 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v65 = v19;
      MiMakeSystemAddressValid(v18);
    }
    v28 = *(_QWORD *)v18;
    if ( (*(_QWORD *)v18 & 1) != 0 )
    {
      if ( !v62 )
      {
        ProcessorFlushList = MiGetProcessorFlushList(v23, v22, v27);
        v22 = 0LL;
        v62 = ProcessorFlushList;
        v11 = ProcessorFlushList;
        *(_DWORD *)(ProcessorFlushList + 16) = 0;
        *(_DWORD *)(ProcessorFlushList + 20) = 32;
        *(_QWORD *)ProcessorFlushList = p_Blink;
        *(_BYTE *)(ProcessorFlushList + 24) = ((_DWORD)p_Blink[23] & 0x800) != 0;
        if ( ((_DWORD)p_Blink[23] & 0xF) != 0
          || p_Blink == &KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink )
        {
          v23 = ((_DWORD)p_Blink[23] & 0xF) == 0;
        }
        else
        {
          *(_DWORD *)(ProcessorFlushList + 16) |= 9u;
          v23 = 0LL;
        }
        *(_DWORD *)(ProcessorFlushList + 16) &= 0xFFFFFFDB;
        *(_DWORD *)(ProcessorFlushList + 8) = v23;
        *(_WORD *)(ProcessorFlushList + 25) = 0;
        *(_DWORD *)(ProcessorFlushList + 28) = 0;
        *(_QWORD *)(ProcessorFlushList + 32) = 0LL;
        *(_QWORD *)(ProcessorFlushList + 40) = 0LL;
      }
      v30 = (v28 >> 12) & 0xFFFFFFFFFFLL;
      LODWORD(v31) = a1;
      v32 = 48 * v30 - 0x220000000000LL;
      if ( (*(_DWORD *)(a1 + 48) & 0x70) == 0x40 )
      {
        v47 = MiRotatedToFrameBuffer(v18);
        v31 = a1;
        if ( v47 )
          goto LABEL_35;
      }
      if ( *(__int64 *)(v32 + 40) < 0 )
      {
        MiFlushTbList(v62);
        MiReleaseProcessorFlushList();
        v62 = 0LL;
        v11 = 0;
        if ( v63 )
        {
          MiFlushGraphicsPtes(v63, ((__int64)(v66 - v63) >> 3) + 1);
          v63 = 0LL;
        }
        v17 = a6;
        ProtoPrivate = MiMakeProtoPrivate(p_Blink, a6, v18);
        if ( ProtoPrivate )
        {
          if ( ProtoPrivate == 1 )
          {
            --v68;
            v19 = v65;
          }
          else
          {
            v19 = 0LL;
            v61 = 1;
            v65 = 0LL;
            MiLockWorkingSetShared(p_Blink);
          }
        }
        else
        {
LABEL_61:
          v19 = v65;
        }
      }
      else
      {
        if ( (a5 & 0x101) == 0 )
        {
          v33 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v32 + 24), 0x3FuLL) )
          {
            do
            {
              if ( (++v33 & HvlLongSpinCountMask) == 0
                && (HvlEnlightenments & 0x40) != 0
                && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v23, v22, v27, v24) )
              {
                HvlNotifyLongSpinWait(v33);
              }
              else
              {
                _mm_pause();
              }
            }
            while ( *(__int64 *)(v32 + 24) < 0 );
          }
          v34 = *(_QWORD *)(v32 + 16);
          v31 = a1;
          v35 = (v34 >> 5) & 0x1F;
          if ( (_DWORD)v8 == 24 )
          {
            LODWORD(v8) = 24;
          }
          else if ( (_DWORD)v35 == 24
                 && ((v45 = *(_DWORD *)(a1 + 48), (v45 & 0x200000) == 0)
                   ? (v46 = *(_DWORD *)(*(_QWORD *)(a1 + 72) + 32LL) >> 1)
                   : (v46 = v45 >> 7),
                     v22 = v46 & 0x1F,
                     LOBYTE(v35) = v22,
                     (_DWORD)v22 == 24)
                 || (v36 = v35 & 0x18) == 0 )
          {
            v37 = v8 & 0x18;
            if ( v37 == 24 )
            {
              LODWORD(v8) = v8 & 0xFFFFFFE7;
            }
            else if ( v37 == 8 )
            {
              goto LABEL_31;
            }
          }
          else
          {
            switch ( v36 )
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
          if ( v34 )
            DemandZeroPte = (32LL * (unsigned int)v8) ^ ((32LL * (unsigned int)v8) ^ v34) & 0xFFFFFFFFFFFFFC1FuLL;
          else
            DemandZeroPte = MiMakeDemandZeroPte((unsigned int)v8, v22, v27, v24);
          *(_QWORD *)(v32 + 16) = DemandZeroPte;
          _InterlockedAnd64((volatile signed __int64 *)(v32 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          v14 = v72;
LABEL_35:
          MiRevertValidPte(v31, v18, (unsigned int)v8, v30, v62);
          goto LABEL_36;
        }
        if ( (unsigned int)MiMakeVaRangeNoAccess(v31, v18, v14, v11, a8) )
        {
LABEL_36:
          if ( v64 )
          {
            v52 = v63;
            if ( !v63 )
              v52 = v18;
            v63 = v52;
            v66 = v18 + 8 * (v67 - 1);
          }
          v19 = v65;
          v17 = a6;
          v13 += 8 * v69;
          v18 += 8 * v67;
        }
        else
        {
          v19 = v65;
          v17 = a6;
          *(_DWORD *)(v62 + 20) |= 1u;
        }
      }
    }
    else if ( (v28 & 0x400) != 0 )
    {
      if ( v62 )
      {
        MiFlushTbList(v62);
        MiReleaseProcessorFlushList();
        v11 = 0;
        v62 = 0LL;
      }
      if ( v63 )
      {
        MiFlushGraphicsPtes(v63, ((__int64)(v66 - v63) >> 3) + 1);
        v63 = 0LL;
      }
      v17 = a6;
      if ( (int)MiMakeProtoLeafValid(v18) < 0 )
      {
        v13 += 8LL;
        v18 += 8LL;
      }
      v61 = 1;
    }
    else
    {
      if ( (v28 & 0x800) == 0 )
      {
        if ( v69 != 1 )
          KeBugCheckEx(0x1Au, 0x44000uLL, v13, *(_QWORD *)v18, 0LL);
        if ( v28 )
        {
          v8 = (unsigned int)MiSanitizePfnProtection(a1, (v28 >> 5) & 0x1F, (unsigned int)v8);
          v23 = 32 * v8;
          *(_QWORD *)v13 = (32 * v8) ^ (v28 ^ (32 * v8)) & 0xFFFFFFFFFFFFFC1FuLL;
        }
        else
        {
          MiIncreaseUsedPtes(v23, ((v13 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, 1LL);
          v8 = (unsigned int)MiSanitizePfnProtection(a1, (*(_DWORD *)(a1 + 48) >> 7) & 0x1F, (unsigned int)v8);
          *(_QWORD *)v13 = MiMakeDemandZeroPte(v8, v49, v50, v51);
        }
        goto LABEL_42;
      }
      v39 = MiSetProtectionOnTransitionPte(a1, v18, (unsigned int)v8, 1LL);
      v23 = v69;
      if ( v69 == 1 )
      {
        if ( v39 )
        {
          v17 = a6;
          goto LABEL_61;
        }
LABEL_42:
        v17 = a6;
        v13 += 8LL;
        v18 += 8LL;
      }
      else
      {
        if ( v64 )
        {
          v53 = v63;
          if ( !v63 )
            v53 = v18;
          v63 = v53;
          v54 = v67;
          v22 = v18 + 8 * (v67 - 1);
          v66 = v22;
        }
        else
        {
          v54 = v67;
        }
        v17 = a6;
        v13 += 8 * v69;
        v18 += 8 * v54;
      }
    }
  }
  if ( v62 )
  {
    MiFlushTbList(v62);
    MiReleaseProcessorFlushList();
  }
  if ( v63 )
    MiFlushGraphicsPtes(v63, ((__int64)(v66 - v63) >> 3) + 1);
  if ( v19 )
    MiUnlockPageTableInternal(p_Blink, v19);
  MiUnlockWorkingSetShared(p_Blink, v17);
  if ( v68 )
    MiReturnFullProcessCommitment(Process);
  return 0LL;
}
