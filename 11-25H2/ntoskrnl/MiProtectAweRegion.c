/*
 * XREFs of MiProtectAweRegion @ 0x1404C3BAC
 * Callers:
 *     MmProtectVirtualMemory @ 0x1408F78C8 (MmProtectVirtualMemory.c)
 * Callees:
 *     MiMakeValidPte @ 0x14020EF10 (MiMakeValidPte.c)
 *     MiRewritePteWithLockBit @ 0x1402110AC (MiRewritePteWithLockBit.c)
 *     MiLockWorkingSetShared @ 0x140212A90 (MiLockWorkingSetShared.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140231F50 (MI_READ_PTE_LOCK_FREE.c)
 *     MiMakeTransitionPteValid @ 0x140234420 (MiMakeTransitionPteValid.c)
 *     MiReleaseProcessorFlushList @ 0x140237CC0 (MiReleaseProcessorFlushList.c)
 *     MiPteInShadowRange @ 0x1402480C0 (MiPteInShadowRange.c)
 *     MiUnlockPageTable @ 0x14028B6B0 (MiUnlockPageTable.c)
 *     MiCaptureWriteWatchDirtyBit @ 0x1402A3914 (MiCaptureWriteWatchDirtyBit.c)
 *     MiGetLeafVa @ 0x1402B5480 (MiGetLeafVa.c)
 *     MiLockLowestValidPageTableEx @ 0x1402B7890 (MiLockLowestValidPageTableEx.c)
 *     MiWriteValidPteNewProtection @ 0x1402B83C0 (MiWriteValidPteNewProtection.c)
 *     MiUnlockWorkingSetShared @ 0x1402B9D50 (MiUnlockWorkingSetShared.c)
 *     MiInsertTbFlushEntry @ 0x1403278B0 (MiInsertTbFlushEntry.c)
 *     MiFlushTbList @ 0x14032BCA0 (MiFlushTbList.c)
 *     MiMakeTransitionPte @ 0x140339DF0 (MiMakeTransitionPte.c)
 *     MiCheckLinearProtectedPteAccessedBit @ 0x14037CB60 (MiCheckLinearProtectedPteAccessedBit.c)
 *     MiGetProcessorFlushList @ 0x140381500 (MiGetProcessorFlushList.c)
 *     MiInitializeTbFlushList @ 0x140388790 (MiInitializeTbFlushList.c)
 *     MiInsertLargeTbFlushEntry @ 0x14038BC74 (MiInsertLargeTbFlushEntry.c)
 *     MiGetAweViewPageSize @ 0x1403FBB48 (MiGetAweViewPageSize.c)
 *     MiPageSizeToPteLevel @ 0x1403FD95C (MiPageSizeToPteLevel.c)
 *     MiSanitizeShadowPxe @ 0x1403FDBDC (MiSanitizeShadowPxe.c)
 *     MiWritePteShadow @ 0x1403FDC5C (MiWritePteShadow.c)
 *     MI_GET_GRAPHICS_PROTECTION_FROM_VAD @ 0x14043CF80 (MI_GET_GRAPHICS_PROTECTION_FROM_VAD.c)
 *     MiGetVadCacheAttribute @ 0x1404A60A4 (MiGetVadCacheAttribute.c)
 *     MiUnlockAweVadsShared @ 0x1404BBD6C (MiUnlockAweVadsShared.c)
 *     MiLockAweVadsShared @ 0x1404C43BC (MiLockAweVadsShared.c)
 *     MiFlushGraphicsPtes @ 0x1404D7CB4 (MiFlushGraphicsPtes.c)
 *     MiGetAweNode @ 0x1404F293C (MiGetAweNode.c)
 */

__int64 __fastcall MiProtectAweRegion(unsigned __int64 a1, unsigned __int64 a2, unsigned int a3, int a4, int *a5)
{
  struct _KTHREAD *CurrentThread; // rbp
  unsigned int v8; // r13d
  ULONG_PTR v9; // rdi
  unsigned __int64 v10; // r12
  __int64 v11; // rdx
  ULONG_PTR v12; // r11
  __int64 AweNode; // r15
  __int64 v14; // rcx
  __int64 v15; // r14
  int v16; // r13d
  int VadCacheAttribute; // r8d
  int v18; // r9d
  int v19; // eax
  int *v20; // rbx
  int v21; // r9d
  int v22; // r8d
  int v23; // eax
  int v24; // eax
  unsigned int v25; // r8d
  __int64 AweViewPageSize; // rax
  unsigned __int64 v28; // r10
  unsigned __int64 v29; // rcx
  unsigned __int64 v30; // rcx
  int v31; // r9d
  __int64 v32; // r10
  int v33; // ebp
  int v34; // ecx
  ULONG_PTR v35; // r12
  ULONG_PTR v36; // r14
  unsigned __int8 v37; // bl
  unsigned __int64 v38; // r15
  unsigned __int64 valid; // rdx
  __int64 v40; // rax
  unsigned __int64 v41; // rbx
  int v42; // ecx
  int v43; // edx
  unsigned __int64 LeafVa; // r14
  unsigned __int64 v45; // r15
  __int64 v46; // rsi
  __int64 v47; // rbx
  __int64 TransitionPte; // rax
  ULONG_PTR v49; // rbx
  __int64 v50; // rbx
  __int64 v51; // rcx
  __int64 v52; // r11
  unsigned __int64 ValidPte; // rax
  ULONG_PTR v54; // r9
  int v55; // eax
  unsigned __int64 TransitionPteValid; // rax
  ULONG_PTR v57; // rbx
  int v58; // esi
  int v59; // [rsp+30h] [rbp-D8h]
  __int64 p_Blink; // [rsp+38h] [rbp-D0h]
  int v61; // [rsp+40h] [rbp-C8h]
  int v62; // [rsp+44h] [rbp-C4h]
  int v63; // [rsp+48h] [rbp-C0h]
  int v64; // [rsp+4Ch] [rbp-BCh]
  unsigned __int64 v65; // [rsp+50h] [rbp-B8h]
  unsigned int v66; // [rsp+58h] [rbp-B0h]
  __int64 *ProcessorFlushList; // [rsp+60h] [rbp-A8h]
  int v68; // [rsp+68h] [rbp-A0h]
  unsigned __int64 v69; // [rsp+70h] [rbp-98h]
  __int64 v70; // [rsp+78h] [rbp-90h]
  __int64 v71; // [rsp+80h] [rbp-88h]
  ULONG_PTR v72; // [rsp+90h] [rbp-78h] BYREF
  unsigned __int64 v73; // [rsp+98h] [rbp-70h]
  _KPROCESS *Process; // [rsp+A0h] [rbp-68h]
  __int64 v75; // [rsp+B0h] [rbp-58h]
  ULONG_PTR v76; // [rsp+B8h] [rbp-50h]
  unsigned __int8 v77; // [rsp+110h] [rbp+8h]
  ULONG_PTR v78; // [rsp+118h] [rbp+10h]
  unsigned int v79; // [rsp+120h] [rbp+18h]

  v79 = a3;
  v72 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v64 = 0;
  v65 = 0LL;
  ProcessorFlushList = 0LL;
  Process = CurrentThread->ApcState.Process;
  p_Blink = (__int64)&Process[2].ReadyListHead.Blink;
  v8 = a3;
  v59 = 1;
  v9 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v10 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v78 = v10;
  MiLockAweVadsShared(CurrentThread);
  AweNode = MiGetAweNode(a1, v11);
  v14 = *(_QWORD *)(AweNode + 24);
  v15 = *(_QWORD *)(AweNode + 32);
  v71 = v14;
  *(_BYTE *)(AweNode + 64) = 0;
  if ( v8 != 24 )
  {
    v16 = v8 & 7;
    if ( v16 != 1 && v16 != 4 )
      goto LABEL_26;
    VadCacheAttribute = MiGetVadCacheAttribute(v14);
    if ( VadCacheAttribute )
    {
      v19 = 0;
      if ( VadCacheAttribute == 2 )
        v19 = v18;
    }
    else
    {
      v19 = 8;
    }
    v14 = v71;
    v8 = v19 | v16;
    v79 = v8;
  }
  v20 = (int *)(v14 + 48);
  if ( (*(_DWORD *)(v15 + 8) & 1) != 0 )
  {
    v66 = 4;
    goto LABEL_30;
  }
  v21 = *v20;
  v66 = ((unsigned int)*v20 >> 7) & 0x1F;
  if ( (((unsigned int)*v20 >> 7) & 7) == 1 && (v8 & 7) != 1 )
    goto LABEL_26;
  if ( !a4 )
    goto LABEL_28;
  v22 = MI_GET_GRAPHICS_PROTECTION_FROM_VAD(v14);
  v23 = a4 & 0x20000;
  if ( (v22 & 0x20000) != 0 )
  {
    if ( !v23 )
      goto LABEL_26;
  }
  else if ( v23 )
  {
    goto LABEL_26;
  }
  v24 = a4 & 0x40000;
  if ( (v22 & 0x40000) != 0 )
  {
    if ( !v24 )
      goto LABEL_26;
    goto LABEL_22;
  }
  if ( v24 )
  {
LABEL_26:
    MiUnlockAweVadsShared((__int64)CurrentThread, v12);
    return 3221225496LL;
  }
LABEL_22:
  v25 = v22 & 0xFFF9FFFF;
  if ( (v25 & 0x1C000) == 0 && (a4 & 0x1C000) != 0
    || (v25 & 0x12000) == 0 && (a4 & 0x12000) != 0
    || v25 == 2048 && (a4 & 0xFFF9F7FF) != 0 )
  {
    goto LABEL_26;
  }
LABEL_28:
  if ( (v21 & 0x4200000) == 0x4200000 )
    v64 = 1;
LABEL_30:
  MiUnlockAweVadsShared((__int64)CurrentThread, v12);
  v62 = *v20 & 0x600000;
  v69 = *(_QWORD *)(v15 + 16);
  v61 = 0;
  AweViewPageSize = MiGetAweViewPageSize(AweNode);
  v29 = v28;
  if ( AweViewPageSize )
    v29 = AweViewPageSize;
  v73 = v29;
  v68 = MiPageSizeToPteLevel(v29);
  v33 = v68;
  if ( v68 < 1 )
  {
    v70 = v32;
  }
  else
  {
    v70 = 1LL;
    v31 |= 0x4000000u;
  }
  v63 = v31;
  if ( v32 != 1 && (((v9 >> 3) & 0x1FF) % v30 || (((__int64)(v10 - v9) >> 3) + 1) % v30) )
    return 3221225496LL;
  v34 = v68;
  if ( v68 )
  {
    do
    {
      v9 = ((v9 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v10 = ((v10 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      --v34;
    }
    while ( v34 );
    v78 = v10;
  }
  v35 = 0LL;
  v76 = v9;
  v36 = v9;
  v37 = MiLockWorkingSetShared(p_Blink);
  v77 = v37;
  if ( v9 <= v78 )
  {
    v38 = v69;
    valid = 0LL;
    while ( !valid || (v9 & 0xFFF) == 0 )
    {
      if ( ProcessorFlushList )
      {
        MiFlushTbList((__int64)ProcessorFlushList);
        MiReleaseProcessorFlushList();
        valid = v65;
        ProcessorFlushList = 0LL;
      }
      if ( valid )
      {
        if ( v35 )
        {
          if ( v64 )
          {
            MiFlushGraphicsPtes(v35);
            valid = v65;
          }
          v35 = 0LL;
        }
        MiUnlockPageTable(p_Blink, valid);
        MiUnlockWorkingSetShared(p_Blink, v37);
        MiLockWorkingSetShared(p_Blink);
      }
      valid = MiLockLowestValidPageTableEx(p_Blink, v9, &v72, 0);
      v65 = valid;
      if ( valid == ((v9 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL )
        break;
      v9 = v9 & 0xFFFFFFFFFFFFF000uLL | 0xFF8;
LABEL_112:
      v9 += 8LL;
      if ( v9 > v78 )
      {
        if ( ProcessorFlushList )
        {
          MiFlushTbList((__int64)ProcessorFlushList);
          MiReleaseProcessorFlushList();
        }
        if ( v65 )
        {
          if ( v64 )
          {
            if ( v35 )
              MiFlushGraphicsPtes(v35);
          }
          MiUnlockPageTable(p_Blink, v65);
        }
        goto LABEL_120;
      }
    }
    if ( v62 == 6291456 && (v70 == 1 || !(((v9 >> 3) & 0x1FF) % v38)) )
      v61 = 0;
    v40 = MI_READ_PTE_LOCK_FREE(v9);
    v75 = v40;
    v41 = v40;
    if ( !v40 )
    {
LABEL_111:
      v37 = v77;
      valid = v65;
      goto LABEL_112;
    }
    if ( (v40 & 1) == 0 )
    {
      if ( (v40 & 0xC00) == 0x800 )
      {
        v55 = v59;
        if ( v9 == v36 )
          v55 = 1;
        v59 = v55;
        if ( v8 != 24 )
        {
          *(_QWORD *)v9 = (32LL * v8) ^ (v41 ^ (32LL * v8)) & 0xFFFFFFFFFFFFFC1FuLL;
          TransitionPteValid = MiMakeTransitionPteValid(v9);
          v57 = TransitionPteValid;
          if ( (v63 & 0x4000000) != 0 )
            v57 = TransitionPteValid | 0x80;
          v58 = 0;
          if ( MiPteInShadowRange(v9) )
            v58 = MiSanitizeShadowPxe();
          if ( _bittest64(&MiFlags, 0x24u) && (v57 & 0x20) == 0 && v9 >= 0xFFFFF6C000000000uLL )
            MiCheckLinearProtectedPteAccessedBit(v9, v57, 128);
          *(_QWORD *)v9 = v57;
          if ( v58 )
            MiWritePteShadow();
          if ( !v35 )
            v35 = v9;
        }
      }
      goto LABEL_111;
    }
    if ( !v35 )
      v35 = v9;
    if ( v9 == v36 )
    {
      v42 = (v40 & 0x800) != 0 ? 4 : 2;
      if ( v66 >> 3 == 1 )
      {
        v43 = v42 | 0x200;
LABEL_69:
        v59 = v43;
        goto LABEL_70;
      }
      v59 = (v40 & 0x800) != 0 ? 4 : 2;
      if ( v66 >> 3 == 3 )
      {
        v59 = (v40 & 0x800) != 0 ? 4 : 2;
        if ( (v66 & 7) != 0 )
        {
          v43 = v42 | 0x400;
          goto LABEL_69;
        }
      }
    }
LABEL_70:
    if ( v62 == 6291456 && !v61 && (v40 & 0x42) != 0 )
    {
      LeafVa = MiGetLeafVa(v9);
      v45 = v73 / v69;
      if ( v73 / v69 )
      {
        v46 = (__int64)Process;
        do
        {
          MiCaptureWriteWatchDirtyBit(v46, LeafVa, v71);
          LeafVa += v69 << 12;
          --v45;
        }
        while ( v45 );
        v41 = v75;
        v8 = v79;
        v33 = v68;
      }
      v36 = v76;
      v38 = v69;
      v61 = 1;
    }
    v47 = (v41 >> 12) & 0xFFFFFFFFFFLL;
    if ( v8 == 24 )
    {
      TransitionPte = MiMakeTransitionPte(v47, 24);
      v49 = TransitionPte;
      if ( !v33 )
      {
        *(_QWORD *)v9 = TransitionPte;
LABEL_81:
        v50 = p_Blink;
LABEL_82:
        v51 = (__int64)ProcessorFlushList;
        if ( ProcessorFlushList )
        {
          v52 = 1LL;
        }
        else
        {
          ProcessorFlushList = MiGetProcessorFlushList();
          MiInitializeTbFlushList((__int64)ProcessorFlushList, v50, *((_DWORD *)ProcessorFlushList + 3), 0, 1);
        }
        if ( v33 )
          MiInsertLargeTbFlushEntry(v51, v33, v9);
        else
          MiInsertTbFlushEntry(v51, (__int64)(v9 << 25) >> 16, v52, 0);
        goto LABEL_111;
      }
    }
    else
    {
      ValidPte = MiMakeValidPte(v9, v47, v8 | v63);
      v49 = ValidPte;
      if ( !v33 )
        MiWriteValidPteNewProtection(v9, ValidPte);
      if ( (v8 & 4) != 0 && v62 != 6291456 )
        v49 |= 0x42uLL;
      if ( !v33 )
        goto LABEL_81;
    }
    v54 = v49;
    v50 = p_Blink;
    MiRewritePteWithLockBit(p_Blink, 0, (volatile __int64 *)v9, v54);
    goto LABEL_82;
  }
LABEL_120:
  MiUnlockWorkingSetShared(p_Blink, v37);
  *a5 = v59;
  return 0LL;
}
