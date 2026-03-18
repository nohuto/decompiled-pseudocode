/*
 * XREFs of MiProtectAweRegion @ 0x1404C2558
 * Callers:
 *     MmProtectVirtualMemory @ 0x1408DCA30 (MmProtectVirtualMemory.c)
 * Callees:
 *     MiRewritePteWithLockBit @ 0x14020CBCC (MiRewritePteWithLockBit.c)
 *     MiLockLowestValidPageTableEx @ 0x140218760 (MiLockLowestValidPageTableEx.c)
 *     MiWriteValidPteNewProtection @ 0x140219260 (MiWriteValidPteNewProtection.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021A250 (MI_READ_PTE_LOCK_FREE.c)
 *     MiMakeTransitionPteValid @ 0x14021B700 (MiMakeTransitionPteValid.c)
 *     MiCheckLinearProtectedPteAccessedBit @ 0x140232A20 (MiCheckLinearProtectedPteAccessedBit.c)
 *     MiInitializeTbFlushList @ 0x140233BB0 (MiInitializeTbFlushList.c)
 *     MiSanitizeShadowPxe @ 0x140233C54 (MiSanitizeShadowPxe.c)
 *     MiWritePteShadow @ 0x140233CD4 (MiWritePteShadow.c)
 *     MiMakeValidPte @ 0x1402383C0 (MiMakeValidPte.c)
 *     MiReleaseProcessorFlushList @ 0x14023FFD0 (MiReleaseProcessorFlushList.c)
 *     MiInsertTbFlushEntry @ 0x1402432E0 (MiInsertTbFlushEntry.c)
 *     MiPteInShadowRange @ 0x1402863E0 (MiPteInShadowRange.c)
 *     MiGetProcessorFlushList @ 0x1402894BC (MiGetProcessorFlushList.c)
 *     MiFlushTbList @ 0x140291730 (MiFlushTbList.c)
 *     MiGetLeafVa @ 0x1402DEE20 (MiGetLeafVa.c)
 *     MiLockWorkingSetShared @ 0x1402DF970 (MiLockWorkingSetShared.c)
 *     MiUnlockWorkingSetShared @ 0x1402E0410 (MiUnlockWorkingSetShared.c)
 *     MiMakeTransitionPte @ 0x1402E67B0 (MiMakeTransitionPte.c)
 *     MI_GET_GRAPHICS_PROTECTION_FROM_VAD @ 0x140302420 (MI_GET_GRAPHICS_PROTECTION_FROM_VAD.c)
 *     MiUnlockPageTableInternal @ 0x140321070 (MiUnlockPageTableInternal.c)
 *     MiInsertLargeTbFlushEntry @ 0x1403A4A2C (MiInsertLargeTbFlushEntry.c)
 *     MiPageSizeToPteLevel @ 0x14041EFEC (MiPageSizeToPteLevel.c)
 *     MiGetVadCacheAttribute @ 0x1404A5498 (MiGetVadCacheAttribute.c)
 *     MiGetAweViewPageSize @ 0x1404BA0FC (MiGetAweViewPageSize.c)
 *     MiUnlockAweVadsShared @ 0x1404BB0AC (MiUnlockAweVadsShared.c)
 *     MiLockAweVadsShared @ 0x1404C2D68 (MiLockAweVadsShared.c)
 *     MiFlushGraphicsPtes @ 0x1404D6AE4 (MiFlushGraphicsPtes.c)
 *     MiCaptureWriteWatchDirtyBit @ 0x1404F31F8 (MiCaptureWriteWatchDirtyBit.c)
 *     MiGetAweNode @ 0x1404F51EC (MiGetAweNode.c)
 */

__int64 __fastcall MiProtectAweRegion(unsigned __int64 a1, unsigned __int64 a2, unsigned int a3, int a4, int *a5)
{
  struct _KTHREAD *CurrentThread; // rbp
  unsigned int v8; // r13d
  ULONG_PTR v9; // rdi
  unsigned __int64 v10; // r12
  ULONG_PTR v11; // r11
  __int64 AweNode; // r15
  __int64 v13; // rcx
  __int64 v14; // r14
  int v15; // r13d
  int VadCacheAttribute; // r8d
  int v17; // r9d
  int v18; // eax
  int *v19; // rbx
  int v20; // r9d
  int v21; // r8d
  int v22; // eax
  int v23; // eax
  unsigned int v24; // r8d
  __int64 AweViewPageSize; // rax
  unsigned __int64 v27; // r10
  unsigned __int64 v28; // rcx
  unsigned __int64 v29; // rcx
  int v30; // r9d
  __int64 v31; // r10
  int v32; // ebp
  int v33; // ecx
  ULONG_PTR v34; // r12
  ULONG_PTR v35; // rsi
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
  _KPROCESS *v46; // rsi
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
  AweNode = MiGetAweNode(a1);
  v13 = *(_QWORD *)(AweNode + 24);
  v14 = *(_QWORD *)(AweNode + 32);
  v71 = v13;
  *(_BYTE *)(AweNode + 64) = 0;
  if ( v8 != 24 )
  {
    v15 = v8 & 7;
    if ( v15 != 1 && v15 != 4 )
      goto LABEL_26;
    VadCacheAttribute = MiGetVadCacheAttribute(v13);
    if ( VadCacheAttribute )
    {
      v18 = 0;
      if ( VadCacheAttribute == 2 )
        v18 = v17;
    }
    else
    {
      v18 = 8;
    }
    v13 = v71;
    v8 = v18 | v15;
    v79 = v8;
  }
  v19 = (int *)(v13 + 48);
  if ( (*(_DWORD *)(v14 + 8) & 1) != 0 )
  {
    v66 = 4;
    goto LABEL_30;
  }
  v20 = *v19;
  v66 = ((unsigned int)*v19 >> 7) & 0x1F;
  if ( (((unsigned int)*v19 >> 7) & 7) == 1 && (v8 & 7) != 1 )
    goto LABEL_26;
  if ( !a4 )
    goto LABEL_28;
  v21 = MI_GET_GRAPHICS_PROTECTION_FROM_VAD(v13);
  v22 = a4 & 0x20000;
  if ( (v21 & 0x20000) != 0 )
  {
    if ( !v22 )
      goto LABEL_26;
  }
  else if ( v22 )
  {
    goto LABEL_26;
  }
  v23 = a4 & 0x40000;
  if ( (v21 & 0x40000) != 0 )
  {
    if ( !v23 )
      goto LABEL_26;
    goto LABEL_22;
  }
  if ( v23 )
  {
LABEL_26:
    MiUnlockAweVadsShared((__int64)CurrentThread, v11);
    return 3221225496LL;
  }
LABEL_22:
  v24 = v21 & 0xFFF9FFFF;
  if ( (v24 & 0x1C000) == 0 && (a4 & 0x1C000) != 0
    || (v24 & 0x12000) == 0 && (a4 & 0x12000) != 0
    || v24 == 2048 && (a4 & 0xFFF9F7FF) != 0 )
  {
    goto LABEL_26;
  }
LABEL_28:
  if ( (v20 & 0x4200000) == 0x4200000 )
    v64 = 1;
LABEL_30:
  MiUnlockAweVadsShared((__int64)CurrentThread, v11);
  v62 = *v19 & 0x600000;
  v69 = *(_QWORD *)(v14 + 16);
  v61 = 0;
  AweViewPageSize = MiGetAweViewPageSize(AweNode);
  v28 = v27;
  if ( AweViewPageSize )
    v28 = AweViewPageSize;
  v73 = v28;
  v68 = MiPageSizeToPteLevel(v28);
  v32 = v68;
  if ( v68 < 1 )
  {
    v70 = v31;
  }
  else
  {
    v70 = 1LL;
    v30 |= 0x4000000u;
  }
  v63 = v30;
  if ( v31 != 1 && (((v9 >> 3) & 0x1FF) % v29 || (((__int64)(v10 - v9) >> 3) + 1) % v29) )
    return 3221225496LL;
  v33 = v68;
  if ( v68 )
  {
    do
    {
      v9 = ((v9 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v10 = ((v10 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      --v33;
    }
    while ( v33 );
    v78 = v10;
  }
  v34 = 0LL;
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
        if ( v34 )
        {
          if ( v64 )
          {
            MiFlushGraphicsPtes(v34, ((__int64)(v35 - v34) >> 3) + 1);
            valid = v65;
          }
          v34 = 0LL;
        }
        MiUnlockPageTableInternal(p_Blink, valid);
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
            if ( v34 )
              MiFlushGraphicsPtes(v34, ((__int64)(v35 - v34) >> 3) + 1);
          }
          MiUnlockPageTableInternal(p_Blink, v65);
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
          v35 = v9;
          if ( !v34 )
            v34 = v9;
        }
      }
      goto LABEL_111;
    }
    v35 = v9;
    if ( !v34 )
      v34 = v9;
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
        v46 = Process;
        do
        {
          MiCaptureWriteWatchDirtyBit(v46, LeafVa, v71);
          LeafVa += v69 << 12;
          --v45;
        }
        while ( v45 );
        v41 = v75;
        v35 = v9;
        v8 = v79;
        v32 = v68;
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
      if ( !v32 )
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
        if ( v32 )
          MiInsertLargeTbFlushEntry(v51, v32, v9);
        else
          MiInsertTbFlushEntry(v51, (__int64)(v9 << 25) >> 16, v52, 0);
        goto LABEL_111;
      }
    }
    else
    {
      ValidPte = MiMakeValidPte(v9, v47, v8 | v63);
      v49 = ValidPte;
      if ( !v32 )
        MiWriteValidPteNewProtection(v9, ValidPte);
      if ( (v8 & 4) != 0 && v62 != 6291456 )
        v49 |= 0x42uLL;
      if ( !v32 )
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
