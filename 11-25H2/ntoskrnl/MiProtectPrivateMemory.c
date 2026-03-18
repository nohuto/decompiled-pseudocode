/*
 * XREFs of MiProtectPrivateMemory @ 0x14037F8B0
 * Callers:
 *     MmProtectVirtualMemory @ 0x1408F78C8 (MmProtectVirtualMemory.c)
 * Callees:
 *     MiLockWorkingSetShared @ 0x140212A90 (MiLockWorkingSetShared.c)
 *     MiReleaseProcessorFlushList @ 0x140237CC0 (MiReleaseProcessorFlushList.c)
 *     MiGetPageProtection @ 0x140245740 (MiGetPageProtection.c)
 *     MiFaultInPagedPool @ 0x140246044 (MiFaultInPagedPool.c)
 *     MiUnlockPageTable @ 0x14028B6B0 (MiUnlockPageTable.c)
 *     KeShouldYieldProcessor @ 0x1402B0440 (KeShouldYieldProcessor.c)
 *     MiMakeSystemAddressValid @ 0x1402B67C0 (MiMakeSystemAddressValid.c)
 *     MiUnlockWorkingSetShared @ 0x1402B9D50 (MiUnlockWorkingSetShared.c)
 *     MiFlushTbList @ 0x14032BCA0 (MiFlushTbList.c)
 *     MiComputePageCommitment @ 0x14037DDA4 (MiComputePageCommitment.c)
 *     MiSanitizePfnProtection @ 0x14037E100 (MiSanitizePfnProtection.c)
 *     MiSetProtectionOnTransitionPte @ 0x14037F4E0 (MiSetProtectionOnTransitionPte.c)
 *     MiUpdatePfnProtection @ 0x14037F744 (MiUpdatePfnProtection.c)
 *     MiRevertValidPte @ 0x140380260 (MiRevertValidPte.c)
 *     MiGetProcessorFlushList @ 0x140381500 (MiGetProcessorFlushList.c)
 *     MiIncreaseUsedPtes @ 0x1403837D0 (MiIncreaseUsedPtes.c)
 *     MiMakeDemandZeroPte @ 0x140385190 (MiMakeDemandZeroPte.c)
 *     MiRotatedToFrameBuffer @ 0x140387DA8 (MiRotatedToFrameBuffer.c)
 *     MiMakeProtoPrivate @ 0x1403DE138 (MiMakeProtoPrivate.c)
 *     MI_GET_GRAPHICS_PROTECTION_FROM_VAD @ 0x14043CF80 (MI_GET_GRAPHICS_PROTECTION_FROM_VAD.c)
 *     MiMakeProtoLeafValid @ 0x1404677A8 (MiMakeProtoLeafValid.c)
 *     MiMakeVaRangeNoAccess @ 0x1404A0378 (MiMakeVaRangeNoAccess.c)
 *     MiFlushGraphicsPtes @ 0x1404D7CB4 (MiFlushGraphicsPtes.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     MiChargeFullProcessCommitment @ 0x1409020A0 (MiChargeFullProcessCommitment.c)
 *     MiReturnFullProcessCommitment @ 0x1409E454C (MiReturnFullProcessCommitment.c)
 */

__int64 __fastcall MiProtectPrivateMemory(
        ULONG_PTR a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned int updated,
        __int16 a5,
        unsigned __int8 a6,
        _DWORD *a7,
        __int64 a8)
{
  int v11; // r14d
  __int64 p_Blink; // rbp
  ULONG_PTR v13; // r15
  unsigned __int64 v14; // r12
  unsigned int v15; // esi
  unsigned __int64 v16; // rdx
  __int64 v17; // rbx
  unsigned __int8 v18; // di
  ULONG_PTR v19; // rbx
  __int64 v20; // rsi
  unsigned __int64 v21; // r13
  int PageProtection; // eax
  ULONG_PTR v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r9
  int v26; // r8d
  int v27; // eax
  __int64 v28; // r8
  ULONG_PTR v29; // rdi
  BOOL v30; // ecx
  __int64 v31; // rdi
  int v32; // eax
  __int64 result; // rax
  __int64 *v34; // rax
  __int64 v35; // rdx
  unsigned int *MmInternal; // rcx
  __int64 v37; // rax
  int ProtoPrivate; // eax
  ULONG_PTR v39; // rax
  ULONG_PTR v40; // rax
  __int64 v41; // rax
  __int64 v42; // rcx
  __int64 v43; // rax
  __int64 v44; // rcx
  __int64 v45; // rax
  bool v46; // zf
  int v47; // ecx
  int v48; // [rsp+40h] [rbp-98h]
  __int64 ProcessorFlushList; // [rsp+48h] [rbp-90h]
  ULONG_PTR v50; // [rsp+50h] [rbp-88h]
  int v52; // [rsp+60h] [rbp-78h] BYREF
  int v53; // [rsp+64h] [rbp-74h]
  ULONG_PTR v54; // [rsp+68h] [rbp-70h]
  __int64 v55; // [rsp+70h] [rbp-68h]
  __int64 v56; // [rsp+78h] [rbp-60h] BYREF
  __int64 v57; // [rsp+80h] [rbp-58h]
  unsigned __int64 *v58; // [rsp+88h] [rbp-50h] BYREF
  __int64 v59; // [rsp+90h] [rbp-48h]
  _KPROCESS *Process; // [rsp+98h] [rbp-40h]
  __int64 v62; // [rsp+F0h] [rbp+18h] BYREF

  v58 = 0LL;
  LOWORD(v62) = 0;
  v52 = 0;
  v56 = 0LL;
  v11 = 0;
  ProcessorFlushList = 0LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  p_Blink = (__int64)&Process[2].ReadyListHead.Blink;
  v13 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v14 = ((a3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v53 = 0;
  v15 = 3;
  v16 = *(unsigned int *)(a1 + 48);
  v50 = 0LL;
  v54 = 0LL;
  v55 = 1LL;
  if ( (v16 & 0xA00000) == 0xA00000 )
  {
    v43 = (v16 >> 19) & 3;
    v44 = MiVadPageSizes[v43];
    v15 = MiVadPageIndices[v43];
    v45 = 16LL;
    v46 = v44 == 16;
    v57 = v44;
    v47 = 0;
    if ( !v46 )
      v45 = 1LL;
    v55 = v45;
    LOBYTE(v47) = (v16 & 0x4200000) == 69206016;
    v53 = v47;
  }
  else
  {
    v57 = 1LL;
  }
  v48 = 0;
  v59 = ((unsigned int)v16 >> 12) & 0x7F;
  a6 = MiLockWorkingSetShared((__int64)&Process[2].ReadyListHead.Blink);
  if ( MiComputePageCommitment(a2, a3, a1, a6, 0, &v56, 0LL) != ((__int64)(v14 - v13) >> 3) + 1 )
  {
    MiUnlockWorkingSetShared(p_Blink, a6);
    return 3221225517LL;
  }
  v17 = v56;
  if ( v56 )
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
    v42 = 2 - v15;
    do
    {
      v19 = ((v19 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v14 = ((v14 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      --v42;
    }
    while ( v42 );
  }
  v20 = a1;
  v21 = ((v19 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  while ( 1 )
  {
    MiMakeSystemAddressValid(v19, v59, v18, 0);
    if ( !*(_QWORD *)v19 )
      break;
    PageProtection = MiGetPageProtection(a1, v19, &v58, &v52, &v62);
    if ( !v58 )
    {
      v48 = 1;
      v26 = MmProtectToValue[PageProtection];
      v27 = v52;
      goto LABEL_11;
    }
    MiUnlockPageTable(p_Blink, v21);
    MiUnlockWorkingSetShared(p_Blink, v18);
    MiFaultInPagedPool((ULONG_PTR)v58);
    MiLockWorkingSetShared(p_Blink);
  }
  v27 = MI_GET_GRAPHICS_PROTECTION_FROM_VAD(a1);
  v52 = v27;
LABEL_11:
  v28 = v27 | (unsigned int)v26;
  *a7 = v28;
  while ( v19 <= v14 )
  {
    if ( (v19 & 0xFFF) == 0 || v48 )
    {
      v48 = 0;
      if ( v21 && ProcessorFlushList )
      {
        MiFlushTbList(ProcessorFlushList);
        MiReleaseProcessorFlushList();
        v11 = 0;
        ProcessorFlushList = 0LL;
      }
      if ( v50 )
      {
        MiFlushGraphicsPtes(v50);
        v50 = 0LL;
      }
      if ( v21 )
        MiUnlockPageTable(p_Blink, v21);
      if ( (*(_DWORD *)(p_Blink + 184) & 0xFu) <= 5
        && ((*(_DWORD *)(p_Blink + 184) & 0xF) != 1
          ? (v34 = (__int64 *)(p_Blink + 192))
          : (v34 = (__int64 *)&unk_140E38500),
            (v35 = *v34, (MmInternal = (unsigned int *)KeGetCurrentPrcb()->MmInternal) == 0LL)
          ? (v37 = 0LL)
          : (v37 = MmInternal[81]),
            (*(_DWORD *)((v37 << 6) + v35) & 0x40000000) != 0)
        || KeShouldYieldProcessor() )
      {
        MiUnlockWorkingSetShared(p_Blink, v18);
        MiLockWorkingSetShared(p_Blink);
      }
      v21 = ((v19 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      MiMakeSystemAddressValid(v19, v59, v18, 0);
    }
    v29 = *(_QWORD *)v19;
    if ( (*(_QWORD *)v19 & 1) != 0 )
    {
      if ( !ProcessorFlushList )
      {
        ProcessorFlushList = MiGetProcessorFlushList(v24, v23, v28, v25);
        v11 = ProcessorFlushList;
        *(_DWORD *)(ProcessorFlushList + 16) = 0;
        *(_DWORD *)(ProcessorFlushList + 20) = 32;
        *(_QWORD *)ProcessorFlushList = p_Blink;
        *(_BYTE *)(ProcessorFlushList + 24) = (*(_DWORD *)(p_Blink + 184) & 0x800) != 0;
        if ( (*(_DWORD *)(p_Blink + 184) & 0xF) != 0
          || (struct _LIST_ENTRY **)p_Blink == &KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink )
        {
          v30 = (*(_DWORD *)(p_Blink + 184) & 0xF) == 0;
        }
        else
        {
          *(_DWORD *)(ProcessorFlushList + 16) |= 9u;
          v30 = 0;
        }
        *(_DWORD *)(ProcessorFlushList + 16) &= 0xFFFFFFDB;
        *(_DWORD *)(ProcessorFlushList + 8) = v30;
        *(_WORD *)(ProcessorFlushList + 25) = 0;
        *(_DWORD *)(ProcessorFlushList + 28) = 0;
        *(_QWORD *)(ProcessorFlushList + 32) = 0LL;
        *(_QWORD *)(ProcessorFlushList + 40) = 0LL;
      }
      v31 = (v29 >> 12) & 0xFFFFFFFFFFLL;
      if ( (*(_DWORD *)(a1 + 48) & 0x70) == 0x40 && (unsigned int)MiRotatedToFrameBuffer(v19) )
      {
        v20 = a1;
        goto LABEL_25;
      }
      if ( *(__int64 *)(48 * v31 - 0x220000000000LL + 40) < 0 )
      {
        MiFlushTbList(ProcessorFlushList);
        MiReleaseProcessorFlushList();
        ProcessorFlushList = 0LL;
        v11 = 0;
        if ( v50 )
        {
          MiFlushGraphicsPtes(v50);
          v50 = 0LL;
        }
        v18 = a6;
        ProtoPrivate = MiMakeProtoPrivate(p_Blink, a6, v19);
        if ( ProtoPrivate )
        {
          if ( ProtoPrivate != 1 )
          {
            v21 = 0LL;
            v48 = 1;
            MiLockWorkingSetShared(p_Blink);
            goto LABEL_70;
          }
          --v56;
          v20 = a1;
        }
        else
        {
LABEL_70:
          v20 = a1;
        }
      }
      else
      {
        if ( (a5 & 0x101) == 0 )
        {
          v20 = a1;
          updated = MiUpdatePfnProtection(a1, 48 * v31 - 0x220000000000LL, updated);
LABEL_25:
          MiRevertValidPte(v20, v19, updated, v31, ProcessorFlushList);
          goto LABEL_26;
        }
        v20 = a1;
        if ( (unsigned int)MiMakeVaRangeNoAccess(a1, v19, v14, v11, a8) )
        {
LABEL_26:
          if ( v53 )
          {
            v39 = v50;
            if ( !v50 )
              v39 = v19;
            v50 = v39;
            v54 = v19 + 8 * (v55 - 1);
          }
          v18 = a6;
          v13 += 8 * v57;
          v19 += 8 * v55;
        }
        else
        {
          v18 = a6;
          *(_DWORD *)(ProcessorFlushList + 20) |= 1u;
        }
      }
    }
    else if ( (v29 & 0x400) != 0 )
    {
      if ( ProcessorFlushList )
      {
        MiFlushTbList(ProcessorFlushList);
        MiReleaseProcessorFlushList();
        v11 = 0;
        ProcessorFlushList = 0LL;
      }
      if ( v50 )
      {
        MiFlushGraphicsPtes(v50);
        v50 = 0LL;
      }
      v18 = a6;
      if ( (int)MiMakeProtoLeafValid(v19) < 0 )
      {
        v13 += 8LL;
        v19 += 8LL;
      }
      v48 = 1;
    }
    else if ( (v29 & 0x800) != 0 )
    {
      v32 = MiSetProtectionOnTransitionPte(v20, (ULONG_PTR *)v19, updated, 1);
      v24 = v57;
      if ( v57 == 1 )
      {
        if ( v32 )
          goto LABEL_33;
        goto LABEL_32;
      }
      if ( v53 )
      {
        v40 = v50;
        if ( !v50 )
          v40 = v19;
        v50 = v40;
        v41 = v55;
        v23 = v19 + 8 * (v55 - 1);
        v54 = v23;
      }
      else
      {
        v41 = v55;
      }
      v18 = a6;
      v13 += 8 * v57;
      v19 += 8 * v41;
    }
    else
    {
      if ( v57 != 1 )
        KeBugCheckEx(0x1Au, 0x44000uLL, v13, *(_QWORD *)v19, 0LL);
      if ( v29 )
      {
        v23 = (unsigned int)MiSanitizePfnProtection(v20, (v29 >> 5) & 0x1F, updated);
        v24 = 32 * v23;
        updated = v23;
        *(_QWORD *)v13 = (32 * v23) ^ (v29 ^ (32 * v23)) & 0xFFFFFFFFFFFFFC1FuLL;
      }
      else
      {
        MiIncreaseUsedPtes(v24, ((v13 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, 1LL, 0LL);
        updated = MiSanitizePfnProtection(v20, (*(_DWORD *)(v20 + 48) >> 7) & 0x1F, updated);
        *(_QWORD *)v13 = MiMakeDemandZeroPte(updated);
      }
LABEL_32:
      v13 += 8LL;
      v19 += 8LL;
LABEL_33:
      v18 = a6;
    }
  }
  if ( ProcessorFlushList )
  {
    MiFlushTbList(ProcessorFlushList);
    MiReleaseProcessorFlushList();
  }
  if ( v50 )
    MiFlushGraphicsPtes(v50);
  if ( v21 )
    MiUnlockPageTable(p_Blink, v21);
  MiUnlockWorkingSetShared(p_Blink, v18);
  if ( v56 )
    MiReturnFullProcessCommitment(Process, v56);
  return 0LL;
}
