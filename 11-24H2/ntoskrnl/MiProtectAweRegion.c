/*
 * XREFs of MiProtectAweRegion @ 0x1404BDA90
 * Callers:
 *     MmProtectVirtualMemory @ 0x1408DAC60 (MmProtectVirtualMemory.c)
 * Callees:
 *     MiPteInShadowRange @ 0x140202630 (MiPteInShadowRange.c)
 *     MiCaptureWriteWatchDirtyBit @ 0x140202774 (MiCaptureWriteWatchDirtyBit.c)
 *     MiCheckLinearProtectedPteAccessedBit @ 0x140203550 (MiCheckLinearProtectedPteAccessedBit.c)
 *     MiSanitizeShadowPxe @ 0x140203820 (MiSanitizeShadowPxe.c)
 *     MiWritePteShadow @ 0x1402038A0 (MiWritePteShadow.c)
 *     MiReleaseProcessorFlushList @ 0x140208120 (MiReleaseProcessorFlushList.c)
 *     MiMakeValidPte @ 0x140212550 (MiMakeValidPte.c)
 *     MiInsertTbFlushEntry @ 0x1402137F0 (MiInsertTbFlushEntry.c)
 *     MiInitializeTbFlushList @ 0x140214780 (MiInitializeTbFlushList.c)
 *     MiInsertLargeTbFlushEntry @ 0x14021C25C (MiInsertLargeTbFlushEntry.c)
 *     MiGetLeafVa @ 0x140240700 (MiGetLeafVa.c)
 *     MiLockWorkingSetShared @ 0x140241250 (MiLockWorkingSetShared.c)
 *     MiUnlockWorkingSetShared @ 0x140241CF0 (MiUnlockWorkingSetShared.c)
 *     MiLockLowestValidPageTableEx @ 0x1402454B0 (MiLockLowestValidPageTableEx.c)
 *     MiWriteValidPteNewProtection @ 0x140245FB0 (MiWriteValidPteNewProtection.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140246FA0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiMakeTransitionPteValid @ 0x140248450 (MiMakeTransitionPteValid.c)
 *     MiGetProcessorFlushList @ 0x1402990BC (MiGetProcessorFlushList.c)
 *     MiFlushTbList @ 0x1402A1330 (MiFlushTbList.c)
 *     MiUnlockPageTableInternal @ 0x1402C9C00 (MiUnlockPageTableInternal.c)
 *     MI_GET_GRAPHICS_PROTECTION_FROM_VAD @ 0x14030CBA0 (MI_GET_GRAPHICS_PROTECTION_FROM_VAD.c)
 *     MiRewritePteWithLockBit @ 0x140335F2C (MiRewritePteWithLockBit.c)
 *     MiMakeTransitionPte @ 0x140347DF0 (MiMakeTransitionPte.c)
 *     MiPageSizeToPteLevel @ 0x140414D2C (MiPageSizeToPteLevel.c)
 *     MiGetVadCacheAttribute @ 0x1404A0228 (MiGetVadCacheAttribute.c)
 *     MiGetAweViewPageSize @ 0x1404B4F9C (MiGetAweViewPageSize.c)
 *     MiUnlockAweVadsShared @ 0x1404B5F4C (MiUnlockAweVadsShared.c)
 *     MiLockAweVadsShared @ 0x1404BE2A0 (MiLockAweVadsShared.c)
 *     MiFlushGraphicsPtes @ 0x1404CFF34 (MiFlushGraphicsPtes.c)
 *     MiGetAweNode @ 0x1404F2AEC (MiGetAweNode.c)
 */

__int64 __fastcall MiProtectAweRegion(unsigned __int64 a1, unsigned __int64 a2, unsigned int a3, int a4, int *a5)
{
  struct _KTHREAD *CurrentThread; // rbp
  unsigned int v8; // r13d
  unsigned __int64 v9; // rdi
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
  int v29; // eax
  unsigned __int64 v30; // rdx
  unsigned __int64 v31; // rcx
  __int64 v32; // r9
  __int64 v33; // r10
  int v34; // ebp
  int v35; // ecx
  unsigned __int64 v36; // r12
  unsigned __int64 v37; // rsi
  unsigned __int64 v38; // r14
  unsigned __int8 v39; // bl
  unsigned __int64 v40; // r15
  unsigned __int64 valid; // rdx
  __int64 v42; // rdx
  __int64 v43; // r8
  __int64 v44; // r9
  __int64 v45; // rax
  unsigned __int64 v46; // rbx
  int v47; // ecx
  int v48; // edx
  unsigned __int64 LeafVa; // r14
  unsigned __int64 v50; // r15
  __int64 v51; // rsi
  __int64 v52; // rbx
  __int64 TransitionPte; // rax
  ULONG_PTR v54; // rbx
  __int64 v55; // rbx
  __int64 v56; // rcx
  __int64 v57; // r11
  unsigned __int64 ValidPte; // rax
  __int64 v59; // r8
  ULONG_PTR v60; // r9
  int v61; // eax
  unsigned __int64 TransitionPteValid; // rax
  __int64 v63; // rbx
  int v64; // esi
  __int64 v65; // rcx
  __int64 v66; // r8
  __int64 v67; // r9
  int v68; // eax
  int v69; // [rsp+30h] [rbp-D8h]
  __int64 p_Blink; // [rsp+38h] [rbp-D0h]
  int v71; // [rsp+40h] [rbp-C8h]
  int v72; // [rsp+44h] [rbp-C4h]
  int v73; // [rsp+48h] [rbp-C0h]
  int v74; // [rsp+4Ch] [rbp-BCh]
  unsigned __int64 v75; // [rsp+50h] [rbp-B8h]
  unsigned int v76; // [rsp+58h] [rbp-B0h]
  __int64 *ProcessorFlushList; // [rsp+60h] [rbp-A8h]
  int v78; // [rsp+68h] [rbp-A0h]
  unsigned __int64 v79; // [rsp+70h] [rbp-98h]
  __int64 v80; // [rsp+78h] [rbp-90h]
  __int64 v81; // [rsp+80h] [rbp-88h]
  __int64 v82; // [rsp+88h] [rbp-80h] BYREF
  ULONG_PTR v83; // [rsp+90h] [rbp-78h] BYREF
  unsigned __int64 v84; // [rsp+98h] [rbp-70h]
  _KPROCESS *Process; // [rsp+A0h] [rbp-68h]
  __int64 v86; // [rsp+B0h] [rbp-58h]
  unsigned __int64 v87; // [rsp+B8h] [rbp-50h]
  unsigned __int8 v88; // [rsp+110h] [rbp+8h]
  unsigned __int64 v89; // [rsp+118h] [rbp+10h]
  unsigned int v90; // [rsp+120h] [rbp+18h]

  v90 = a3;
  v83 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v74 = 0;
  v75 = 0LL;
  ProcessorFlushList = 0LL;
  Process = CurrentThread->ApcState.Process;
  p_Blink = (__int64)&Process[2].ReadyListHead.Blink;
  v8 = a3;
  v69 = 1;
  v9 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v10 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v89 = v10;
  MiLockAweVadsShared(CurrentThread);
  AweNode = MiGetAweNode(a1);
  v13 = *(_QWORD *)(AweNode + 24);
  v14 = *(_QWORD *)(AweNode + 32);
  v81 = v13;
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
    v13 = v81;
    v8 = v18 | v15;
    v90 = v8;
  }
  v19 = (int *)(v13 + 48);
  if ( (*(_DWORD *)(v14 + 8) & 1) != 0 )
  {
    v76 = 4;
    goto LABEL_30;
  }
  v20 = *v19;
  v76 = ((unsigned int)*v19 >> 7) & 0x1F;
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
    v74 = 1;
LABEL_30:
  MiUnlockAweVadsShared((__int64)CurrentThread, v11);
  v72 = *v19 & 0x600000;
  v79 = *(_QWORD *)(v14 + 16);
  v71 = 0;
  AweViewPageSize = MiGetAweViewPageSize(AweNode);
  v28 = v27;
  if ( AweViewPageSize )
    v28 = AweViewPageSize;
  v84 = v28;
  v29 = MiPageSizeToPteLevel(v28);
  v78 = v29;
  v34 = v29;
  if ( v29 < 1 )
  {
    v80 = v33;
  }
  else
  {
    v80 = 1LL;
    LODWORD(v32) = v32 | 0x4000000;
  }
  v73 = v32;
  if ( v33 != 1 )
  {
    if ( ((v9 >> 3) & 0x1FF) % v31 )
      return 3221225496LL;
    v30 = (((__int64)(v10 - v9) >> 3) + 1) % v31;
    if ( v30 )
      return 3221225496LL;
  }
  v35 = v29;
  if ( v29 )
  {
    v30 = 0xFFFFF68000000000uLL;
    v32 = 0x7FFFFFFFF8LL;
    do
    {
      v9 = ((v9 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v10 = ((v10 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      --v35;
    }
    while ( v35 );
    v89 = v10;
  }
  v36 = 0LL;
  v37 = 0LL;
  v87 = v9;
  v38 = v9;
  v39 = MiLockWorkingSetShared(p_Blink, v30, 1LL, v32);
  v88 = v39;
  if ( v9 <= v89 )
  {
    v40 = v79;
    valid = 0LL;
    while ( !valid || (v9 & 0xFFF) == 0 )
    {
      if ( ProcessorFlushList )
      {
        MiFlushTbList((__int64)ProcessorFlushList);
        MiReleaseProcessorFlushList();
        valid = v75;
        ProcessorFlushList = 0LL;
      }
      if ( valid )
      {
        if ( v36 )
        {
          if ( v74 )
          {
            MiFlushGraphicsPtes(v36, ((__int64)(v37 - v36) >> 3) + 1);
            valid = v75;
          }
          v36 = 0LL;
        }
        MiUnlockPageTableInternal(p_Blink, valid);
        MiUnlockWorkingSetShared(p_Blink, v39);
        MiLockWorkingSetShared(p_Blink, v42, v43, v44);
      }
      valid = MiLockLowestValidPageTableEx(p_Blink, v9, &v83, 0);
      v75 = valid;
      if ( valid == ((v9 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL )
        break;
      v9 = v9 & 0xFFFFFFFFFFFFF000uLL | 0xFF8;
LABEL_113:
      v9 += 8LL;
      if ( v9 > v89 )
      {
        if ( ProcessorFlushList )
        {
          MiFlushTbList((__int64)ProcessorFlushList);
          MiReleaseProcessorFlushList();
        }
        if ( v75 )
        {
          if ( v74 )
          {
            if ( v36 )
              MiFlushGraphicsPtes(v36, ((__int64)(v37 - v36) >> 3) + 1);
          }
          MiUnlockPageTableInternal(p_Blink, v75);
        }
        goto LABEL_121;
      }
    }
    if ( v72 == 6291456 && (v80 == 1 || !(((v9 >> 3) & 0x1FF) % v40)) )
      v71 = 0;
    v45 = MI_READ_PTE_LOCK_FREE(v9);
    v86 = v45;
    v46 = v45;
    if ( !v45 )
    {
LABEL_112:
      v39 = v88;
      valid = v75;
      goto LABEL_113;
    }
    if ( (v45 & 1) == 0 )
    {
      if ( (v45 & 0xC00) == 0x800 )
      {
        v61 = v69;
        if ( v9 == v38 )
          v61 = 1;
        v69 = v61;
        if ( v8 != 24 )
        {
          *(_QWORD *)v9 = (32LL * v8) ^ (v46 ^ (32LL * v8)) & 0xFFFFFFFFFFFFFC1FuLL;
          TransitionPteValid = MiMakeTransitionPteValid(v9);
          v63 = TransitionPteValid;
          if ( (v73 & 0x4000000) != 0 )
            v63 = TransitionPteValid | 0x80;
          v82 = v63;
          v64 = 0;
          if ( MiPteInShadowRange(v9) )
          {
            v68 = MiSanitizeShadowPxe(v65, (__int64)&v82, v66);
            v63 = v82;
            v64 = v68;
          }
          if ( _bittest64(&MiFlags, 0x24u) && (v63 & 0x20) == 0 && v9 >= 0xFFFFF6C000000000uLL )
            MiCheckLinearProtectedPteAccessedBit(v9, v63, 128LL);
          *(_QWORD *)v9 = v63;
          if ( v64 )
            MiWritePteShadow(v9, v63, v66, v67);
          v37 = v9;
          if ( !v36 )
            v36 = v9;
        }
      }
      goto LABEL_112;
    }
    v37 = v9;
    if ( !v36 )
      v36 = v9;
    if ( v9 == v38 )
    {
      v47 = (v45 & 0x800) != 0 ? 4 : 2;
      if ( v76 >> 3 == 1 )
      {
        v48 = v47 | 0x200;
LABEL_70:
        v69 = v48;
        goto LABEL_71;
      }
      v69 = (v45 & 0x800) != 0 ? 4 : 2;
      if ( v76 >> 3 == 3 )
      {
        v69 = (v45 & 0x800) != 0 ? 4 : 2;
        if ( (v76 & 7) != 0 )
        {
          v48 = v47 | 0x400;
          goto LABEL_70;
        }
      }
    }
LABEL_71:
    if ( v72 == 6291456 && !v71 && (v45 & 0x42) != 0 )
    {
      LeafVa = MiGetLeafVa(v9);
      v50 = v84 / v79;
      if ( v84 / v79 )
      {
        v51 = (__int64)Process;
        do
        {
          MiCaptureWriteWatchDirtyBit(v51, LeafVa, v81);
          LeafVa += v79 << 12;
          --v50;
        }
        while ( v50 );
        v46 = v86;
        v37 = v9;
        v8 = v90;
        v34 = v78;
      }
      v38 = v87;
      v40 = v79;
      v71 = 1;
    }
    v52 = (v46 >> 12) & 0xFFFFFFFFFFLL;
    if ( v8 == 24 )
    {
      TransitionPte = MiMakeTransitionPte(v52, 24);
      v54 = TransitionPte;
      if ( !v34 )
      {
        *(_QWORD *)v9 = TransitionPte;
LABEL_82:
        v55 = p_Blink;
LABEL_83:
        v56 = (__int64)ProcessorFlushList;
        if ( ProcessorFlushList )
        {
          v57 = 1LL;
        }
        else
        {
          ProcessorFlushList = MiGetProcessorFlushList();
          MiInitializeTbFlushList((__int64)ProcessorFlushList, v55, *((_DWORD *)ProcessorFlushList + 3), 0, 1);
        }
        if ( v34 )
          MiInsertLargeTbFlushEntry(v56, v34, v9);
        else
          MiInsertTbFlushEntry(v56, (__int64)(v9 << 25) >> 16, v57, 0);
        goto LABEL_112;
      }
    }
    else
    {
      ValidPte = MiMakeValidPte(v9, v52, v8 | v73);
      v54 = ValidPte;
      if ( !v34 )
        MiWriteValidPteNewProtection(v9, ValidPte, v59);
      if ( (v8 & 4) != 0 && v72 != 6291456 )
        v54 |= 0x42uLL;
      if ( !v34 )
        goto LABEL_82;
    }
    v60 = v54;
    v55 = p_Blink;
    MiRewritePteWithLockBit(p_Blink, 0, (volatile __int64 *)v9, v60);
    goto LABEL_83;
  }
LABEL_121:
  MiUnlockWorkingSetShared(p_Blink, v39);
  *a5 = v69;
  return 0LL;
}
