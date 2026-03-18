/*
 * XREFs of MmProtectPool @ 0x1403889FC
 * Callers:
 *     ExProtectPoolEx @ 0x140388828 (ExProtectPoolEx.c)
 * Callees:
 *     MmAccessFault @ 0x140216750 (MmAccessFault.c)
 *     MiWriteValidPteNewProtection @ 0x140219260 (MiWriteValidPteNewProtection.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021A250 (MI_READ_PTE_LOCK_FREE.c)
 *     MiReleasePageFileInfo @ 0x14021B9A0 (MiReleasePageFileInfo.c)
 *     MiGetSystemRegionType @ 0x14022AD20 (MiGetSystemRegionType.c)
 *     MiCheckLinearProtectedPteAccessedBit @ 0x140232A20 (MiCheckLinearProtectedPteAccessedBit.c)
 *     MiInitializeTbFlushList @ 0x140233BB0 (MiInitializeTbFlushList.c)
 *     MiMakeValidPte @ 0x1402383C0 (MiMakeValidPte.c)
 *     MiCaptureDirtyBitToPfn @ 0x14023ED00 (MiCaptureDirtyBitToPfn.c)
 *     MiReleaseProcessorFlushList @ 0x14023FFD0 (MiReleaseProcessorFlushList.c)
 *     MiInsertTbFlushEntry @ 0x1402432E0 (MiInsertTbFlushEntry.c)
 *     MiLockNestedPageTable @ 0x140285190 (MiLockNestedPageTable.c)
 *     MiFreeWsleList @ 0x140287894 (MiFreeWsleList.c)
 *     MiGetProcessorFlushList @ 0x1402894BC (MiGetProcessorFlushList.c)
 *     MiFlushTbList @ 0x140291730 (MiFlushTbList.c)
 *     HvlNotifyLongSpinWait @ 0x140293260 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140293290 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiLockWorkingSetShared @ 0x1402DF970 (MiLockWorkingSetShared.c)
 *     MiUnlockWorkingSetShared @ 0x1402E0410 (MiUnlockWorkingSetShared.c)
 *     MiVmAccessLoggingEnabled @ 0x1402E47A4 (MiVmAccessLoggingEnabled.c)
 *     MiCopyOnWrite @ 0x1402E47DC (MiCopyOnWrite.c)
 *     MiGetWsleContents @ 0x1402E5390 (MiGetWsleContents.c)
 *     MiMakeTransitionPte @ 0x1402E67B0 (MiMakeTransitionPte.c)
 *     MiMakeProtectionMask @ 0x1402EAF70 (MiMakeProtectionMask.c)
 *     MI_WSLE_LOG_ACCESS @ 0x1402EFF38 (MI_WSLE_LOG_ACCESS.c)
 *     MiUnlockPageTableInternal @ 0x140321070 (MiUnlockPageTableInternal.c)
 *     MiLockTransitionLeafPageEx @ 0x14036A520 (MiLockTransitionLeafPageEx.c)
 *     KeYieldProcessorEx @ 0x1403F9C60 (KeYieldProcessorEx.c)
 *     MiCopyOnWriteCheckConditions @ 0x140406AD8 (MiCopyOnWriteCheckConditions.c)
 *     MI_TIGHTER_PERMISSIONS @ 0x140436740 (MI_TIGHTER_PERMISSIONS.c)
 *     MiLockNonPagedPoolPte @ 0x14043F4AC (MiLockNonPagedPoolPte.c)
 *     MiFindLargeMapping @ 0x140450034 (MiFindLargeMapping.c)
 */

__int64 __fastcall MmProtectPool(unsigned __int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int ProtectionMask; // eax
  __int64 v5; // r9
  unsigned int v6; // r15d
  int v7; // ebp
  unsigned __int64 v8; // r14
  ULONG_PTR v9; // rsi
  int SystemRegionType; // eax
  _DWORD *v11; // r13
  unsigned __int64 v13; // rdi
  __int64 v14; // rcx
  __int64 v15; // r12
  __int64 *ProcessorFlushList; // r14
  unsigned __int8 v17; // al
  unsigned __int64 v18; // rbx
  char v19; // al
  unsigned int v20; // r15d
  unsigned __int64 v21; // rdx
  __int64 v22; // rdx
  __int64 v23; // rbp
  unsigned __int64 ValidPte; // rax
  ULONG_PTR v25; // rdi
  __int64 v26; // rbx
  unsigned __int64 v27; // rbx
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rbp
  unsigned __int64 v31; // rdi
  unsigned __int64 v32; // r8
  __int64 v33; // rax
  __int64 v34; // rbp
  unsigned __int64 v35; // rdi
  unsigned int v36; // edi
  unsigned __int64 v37; // rax
  int v38; // ebx
  __int64 v39; // r8
  ULONG_PTR TransitionPte; // rax
  signed __int64 v41; // rdi
  signed __int64 v42; // rax
  __int64 v43; // rcx
  int v44; // edi
  unsigned int v45; // r11d
  __int64 v46; // rcx
  int v47; // eax
  unsigned int v48; // ebx
  __int64 v49; // rax
  unsigned __int64 v50; // rcx
  unsigned __int8 v51; // cf
  __int64 v52; // rax
  __int64 v53; // r9
  __int64 v54; // r8
  unsigned __int64 v55; // rdx
  unsigned __int64 v56; // rax
  __int64 *v57; // [rsp+30h] [rbp-98h]
  unsigned int v58; // [rsp+38h] [rbp-90h]
  int v59; // [rsp+3Ch] [rbp-8Ch] BYREF
  int v60; // [rsp+40h] [rbp-88h] BYREF
  unsigned __int64 v61; // [rsp+48h] [rbp-80h]
  unsigned __int64 v62; // [rsp+50h] [rbp-78h]
  __int64 v63; // [rsp+58h] [rbp-70h]
  unsigned __int8 v64; // [rsp+E0h] [rbp+18h]
  int v65; // [rsp+E8h] [rbp+20h]

  if ( (a3 & 0x10) != 0 && (MiFlags & 0x8000) != 0 )
    a3 &= ~0x10u;
  ProtectionMask = MiMakeProtectionMask(a3);
  v58 = ProtectionMask;
  v6 = ProtectionMask;
  if ( ProtectionMask >= 8 && ProtectionMask != 24 || (ProtectionMask & 5) == 5 )
    return 0LL;
  v7 = 0;
  v65 = 0;
  v8 = a1 + v5 - 1;
  v9 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  SystemRegionType = MiGetSystemRegionType(a1);
  v11 = &unk_140E37FC0;
  if ( SystemRegionType == 5 )
    goto LABEL_9;
  if ( SystemRegionType != 4 || (unsigned int)MiFindLargeMapping(a1, v8) )
    return 0LL;
  v7 = 1;
  v65 = 1;
  v11 = &unk_140E38380;
LABEL_9:
  v13 = 0LL;
  v61 = 0LL;
  v14 = *((unsigned __int16 *)v11 + 87);
  v15 = 0LL;
  v62 = ((v8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  ProcessorFlushList = 0LL;
  v57 = 0LL;
  v63 = *((_QWORD *)qword_140E2FF88 + v14);
  v17 = MiLockWorkingSetShared((__int64)v11);
  v64 = v17;
  if ( v9 > v62 )
    goto LABEL_31;
  do
  {
    if ( v13 )
    {
      if ( (v9 & 0xFFF) != 0 )
        goto LABEL_12;
      if ( v15 )
      {
        MiFlushTbList(v15);
        MiReleaseProcessorFlushList();
        v15 = 0LL;
        ProcessorFlushList = 0LL;
        v57 = 0LL;
      }
      MiUnlockPageTableInternal((__int64)v11, v13);
    }
    v13 = ((v9 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v61 = v13;
    MiLockNestedPageTable((__int64)v11, v13);
LABEL_12:
    v18 = *(_QWORD *)v9;
    v19 = v11[46] & 0xF;
    if ( v6 == 24 )
    {
      if ( v19 == 7 )
      {
        if ( (v18 & 1) != 0 )
        {
          if ( v7 )
          {
            v33 = MiLockNonPagedPoolPte(v9);
            v18 = *(_QWORD *)v9;
            v34 = v33;
          }
          else
          {
            v34 = 48 * ((v18 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
            v59 = 0;
            while ( _interlockedbittestandset64((volatile signed __int32 *)(v34 + 24), 0x3FuLL) )
            {
              do
                KeYieldProcessorEx(&v59);
              while ( *(__int64 *)(v34 + 24) < 0 );
            }
          }
          v39 = 0xFFFFFFFFFFLL;
          *(_QWORD *)(v34 + 16) = *(_QWORD *)(v34 + 16) & 0xFFFFFFFFFFFFFC1FuLL | 0x300;
          while ( 1 )
          {
            TransitionPte = MiMakeTransitionPte(v39 & (v18 >> 12), 24);
            v41 = TransitionPte;
            if ( !v65 )
            {
              *(_QWORD *)v9 = TransitionPte;
              goto LABEL_123;
            }
            if ( (MiFlags & 0x2000000) != 0 )
              _mm_lfence();
            if ( _bittest64(&MiFlags, 0x24u) && (TransitionPte & 0x21) == 1 && v9 >= 0xFFFFF6C000000000uLL )
            {
              MiCheckLinearProtectedPteAccessedBit(v9, TransitionPte, 128);
              v39 = 0xFFFFFFFFFFLL;
            }
            v42 = _InterlockedCompareExchange64((volatile signed __int64 *)v9, v41, v18);
            if ( v18 == v42 )
              break;
            v18 = v42;
          }
          if ( (v18 & 0x200) != 0 )
            *(_QWORD *)(v34 + 24) = *(_QWORD *)(v34 + 24) & 0xC000000000000000uLL | 0x10000;
LABEL_123:
          _InterlockedAnd64((volatile signed __int64 *)(v34 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          v26 = v9 << 25;
LABEL_23:
          v27 = v26 >> 16;
          if ( !v15 )
          {
            if ( !ProcessorFlushList )
            {
              ProcessorFlushList = MiGetProcessorFlushList();
              v57 = ProcessorFlushList;
            }
            v15 = (__int64)ProcessorFlushList;
            MiInitializeTbFlushList(
              (__int64)ProcessorFlushList,
              (__int64)v11,
              *((_DWORD *)ProcessorFlushList + 3),
              0,
              32);
          }
          MiInsertTbFlushEntry(v15, v27, 1LL, 0);
        }
      }
      else if ( (v18 & 1) != 0 )
      {
        if ( *(__int64 *)(48 * ((v18 >> 12) & 0xFFFFFFFFFFLL) - 0x21FFFFFFFFD8LL) < 0 )
        {
          if ( v15 )
          {
            MiFlushTbList(v15);
            MiReleaseProcessorFlushList();
            v15 = 0LL;
            ProcessorFlushList = 0LL;
            v57 = 0LL;
          }
          v47 = MiCopyOnWrite((__int64)(v9 << 25) >> 16, (volatile signed __int64 *)v9, 0xFFFFFFFFFFFFFFFFuLL, 0, 0LL);
          v9 -= 8LL;
          v48 = v47;
          if ( v47 < 0 )
          {
            MiUnlockPageTableInternal((__int64)v11, v13);
            MiUnlockWorkingSetShared((__int64)v11, v64);
            MiCopyOnWriteCheckConditions(v11, v48, 0LL);
            MiLockWorkingSetShared((__int64)v11);
            MiLockNestedPageTable((__int64)v11, v13);
          }
        }
        else
        {
          if ( (unsigned int)MiVmAccessLoggingEnabled((__int64)v11) )
            MI_WSLE_LOG_ACCESS((__int64)v11, v9);
          if ( (MiGetWsleContents(v43, (__int64)(v9 << 25) >> 16) & 0xF) != 8 )
          {
            if ( ProcessorFlushList )
            {
              v44 = 0;
            }
            else
            {
              v44 = 1;
              ProcessorFlushList = MiGetProcessorFlushList();
              v57 = ProcessorFlushList;
            }
            MiInitializeTbFlushList(
              (__int64)(ProcessorFlushList + 517),
              (__int64)v11,
              *((_DWORD *)ProcessorFlushList + 1037),
              2,
              1);
            MiInsertTbFlushEntry(v46, (__int64)(v9 << 25) >> 16, v45, 0);
            if ( !MiFreeWsleList((__int64)v11, (ULONG_PTR)(ProcessorFlushList + 517), 0) )
              v9 -= 8LL;
            if ( v44 )
            {
              MiReleaseProcessorFlushList();
              ProcessorFlushList = 0LL;
              v57 = 0LL;
            }
          }
        }
      }
      else
      {
        if ( (v18 & 0x400) != 0 )
        {
LABEL_81:
          if ( v15 )
          {
            MiFlushTbList(v15);
            MiReleaseProcessorFlushList();
            v15 = 0LL;
            ProcessorFlushList = 0LL;
            v57 = 0LL;
          }
          MiUnlockPageTableInternal((__int64)v11, v13);
          MiUnlockWorkingSetShared((__int64)v11, v64);
          MmAccessFault(0LL, (__int64)(v9 << 25) >> 16, 0, 0LL);
LABEL_84:
          MiLockWorkingSetShared((__int64)v11);
          MiLockNestedPageTable((__int64)v11, v13);
LABEL_47:
          v9 -= 8LL;
          goto LABEL_25;
        }
        if ( (v18 & 0x800) != 0 )
        {
          v49 = MiLockTransitionLeafPageEx(v9, 0LL, 0);
          if ( !v49 )
            goto LABEL_47;
          v50 = *(_QWORD *)v9 & 0xFFFFFFFFFFFFFC1FuLL;
          *(_QWORD *)(v49 + 16) = *(_QWORD *)(v49 + 16) & 0xFFFFFFFFFFFFFC1FuLL ^ 0x300;
          *(_QWORD *)v9 = v50 ^ 0x300;
          _InterlockedAnd64((volatile signed __int64 *)(v49 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        }
        else
        {
          *(_QWORD *)v9 = v18 & 0xFFFFFFFFFFFFFC1FuLL ^ 0x300;
        }
      }
    }
    else if ( v19 == 7 )
    {
      v20 = v6 | 0x80000000;
      while ( 1 )
      {
        v21 = v18;
        if ( (v18 & 1) == 0 && qword_140E2DB80 && (v18 & 0x10) == 0 )
          v21 = v18 & ~qword_140E2DB80;
        v22 = (v21 >> 12) & 0xFFFFFFFFFFLL;
        v23 = 48 * v22 - 0x220000000000LL;
        ValidPte = MiMakeValidPte(v9, v22, v20);
        v25 = ValidPte;
        if ( (v18 & 1) == 0 )
        {
          if ( (*(_QWORD *)(v23 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 1 )
          {
            v60 = 0;
            while ( _interlockedbittestandset64((volatile signed __int32 *)(v23 + 24), 0x3FuLL) )
            {
              do
                KeYieldProcessorEx(&v60);
              while ( *(__int64 *)(v23 + 24) < 0 );
            }
            *(_QWORD *)(v23 + 24) = *(_QWORD *)(v23 + 24) & 0xC000000000000000uLL | 1;
            _InterlockedAnd64((volatile signed __int64 *)(v23 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            v25 |= 0x200uLL;
          }
          v6 = v58;
          v51 = _bittest64(&MiFlags, 0x24u);
          *(_QWORD *)(v23 + 16) = (32LL * v58) ^ (*(_QWORD *)(v23 + 16) ^ (32LL * v58)) & 0xFFFFFFFFFFFFFC1FuLL;
          if ( v51 && (v25 & 0x20) == 0 && v9 >= 0xFFFFF6C000000000uLL )
            MiCheckLinearProtectedPteAccessedBit(v9, v25, 128);
          *(_QWORD *)v9 = v25;
          goto LABEL_77;
        }
        if ( !v65 )
          break;
        v23 = MiLockNonPagedPoolPte(v9);
        v28 = MI_READ_PTE_LOCK_FREE(v9);
        if ( v28 == v18 )
        {
          if ( (v18 & 0x200) != 0 )
            v25 |= 0x200uLL;
          if ( (MiFlags & 0x2000000) != 0 )
            _mm_lfence();
          if ( _bittest64(&MiFlags, 0x24u) && (v25 & 0x21) == 1 && v9 >= 0xFFFFF6C000000000uLL )
            MiCheckLinearProtectedPteAccessedBit(v9, v25, 128);
          v28 = _InterlockedCompareExchange64((volatile signed __int64 *)v9, v25, v18);
          if ( v18 == v28 )
            goto LABEL_19;
        }
        _InterlockedAnd64((volatile signed __int64 *)(v23 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        v18 = v28;
      }
      MiWriteValidPteNewProtection(v9, ValidPte);
LABEL_19:
      v6 = v58;
      *(_QWORD *)(v23 + 16) = (32LL * v58) ^ (*(_QWORD *)(v23 + 16) ^ (32LL * v58)) & 0xFFFFFFFFFFFFFC1FuLL;
      if ( v65 )
        _InterlockedAnd64((volatile signed __int64 *)(v23 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( (MiFlags & 0x100) == 0 || (unsigned int)MI_TIGHTER_PERMISSIONS(v18, v25) )
      {
        v26 = v9 << 25;
        ProcessorFlushList = v57;
        goto LABEL_23;
      }
LABEL_77:
      ProcessorFlushList = v57;
    }
    else if ( (v18 & 1) != 0 )
    {
      v29 = (v18 >> 12) & 0xFFFFFFFFFFLL;
      v30 = 48 * v29 - 0x220000000000LL;
      if ( *(__int64 *)(v30 + 40) < 0 )
      {
        if ( v15 )
        {
          MiFlushTbList(v15);
          MiReleaseProcessorFlushList();
          v15 = 0LL;
          ProcessorFlushList = 0LL;
          v57 = 0LL;
        }
        v38 = MiCopyOnWrite((__int64)(v9 << 25) >> 16, (volatile signed __int64 *)v9, 0xFFFFFFFFFFFFFFFFuLL, 0, 0LL);
        if ( v38 < 0 )
        {
          MiUnlockPageTableInternal((__int64)v11, v13);
          MiUnlockWorkingSetShared((__int64)v11, v64);
          MiCopyOnWriteCheckConditions(v11, (unsigned int)v38, 0LL);
          goto LABEL_84;
        }
        goto LABEL_47;
      }
      v31 = v18 & 0x7F00000000000000LL | MiMakeValidPte(v9, v29, v6 | 0x80000000) & 0x80FFFFFFFFFFFFFFuLL;
      if ( (MiFlags & 0x2000000) != 0 )
        _mm_lfence();
      v32 = 0xFFFFF68000000000uLL;
      if ( _bittest64(&MiFlags, 0x24u) && (v31 & 0x21) == 1 && v9 >= 0xFFFFF6C000000000uLL )
      {
        MiCheckLinearProtectedPteAccessedBit(v9, v31, 128);
        v32 = 0xFFFFF68000000000uLL;
      }
      if ( v18 != _InterlockedCompareExchange64((volatile signed __int64 *)v9, v31, v18) )
        goto LABEL_47;
      if ( (MiFlags & 0x100) == 0 || (unsigned int)MI_TIGHTER_PERMISSIONS(v18, v31) )
      {
        v35 = (__int64)((v9 << 25) - (v32 << 25)) >> 16;
        if ( !v15 )
        {
          if ( !ProcessorFlushList )
          {
            ProcessorFlushList = MiGetProcessorFlushList();
            v57 = ProcessorFlushList;
          }
          v15 = (__int64)ProcessorFlushList;
          MiInitializeTbFlushList((__int64)ProcessorFlushList, (__int64)v11, *((_DWORD *)ProcessorFlushList + 3), 0, 32);
        }
        MiInsertTbFlushEntry(v15, v35, 1LL, 0);
      }
      v36 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v30 + 24), 0x3FuLL) )
      {
        do
        {
          if ( (++v36 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && KiCheckVpBackingLongSpinWaitHypercall() )
          {
            HvlNotifyLongSpinWait(v36);
          }
          else
          {
            _mm_pause();
          }
        }
        while ( *(__int64 *)(v30 + 24) < 0 );
      }
      v37 = 0LL;
      *(_QWORD *)(v30 + 16) = (32LL * v6) ^ (*(_QWORD *)(v30 + 16) ^ (32LL * v6)) & 0xFFFFFFFFFFFFFC1FuLL;
      if ( (v18 & 0x42) != 0 )
        v37 = MiCaptureDirtyBitToPfn(v30);
      _InterlockedAnd64((volatile signed __int64 *)(v30 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( v37 )
        MiReleasePageFileInfo(v63, v37, 1LL);
    }
    else
    {
      if ( (v18 & 0x400) != 0 )
        goto LABEL_81;
      if ( (v18 & 0x800) != 0 )
      {
        v52 = MiLockTransitionLeafPageEx(v9, 0LL, 0);
        v53 = v52;
        if ( !v52 )
          goto LABEL_47;
        v54 = 32LL * v6;
        v55 = v54 ^ (*(_QWORD *)(v52 + 16) ^ v54) & 0xFFFFFFFFFFFFFC1FuLL;
        v56 = v54 ^ (*(_QWORD *)v9 ^ v54) & 0xFFFFFFFFFFFFFC1FuLL;
        *(_QWORD *)(v53 + 16) = v55;
        *(_QWORD *)v9 = v56;
        _InterlockedAnd64((volatile signed __int64 *)(v53 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      }
      else
      {
        *(_QWORD *)v9 = (32LL * v6) ^ (v18 ^ (32LL * v6)) & 0xFFFFFFFFFFFFFC1FuLL;
      }
    }
LABEL_25:
    v13 = v61;
    v9 += 8LL;
    v7 = v65;
  }
  while ( v9 <= v62 );
  if ( v15 )
  {
    MiFlushTbList(v15);
    MiReleaseProcessorFlushList();
  }
  if ( v13 )
    MiUnlockPageTableInternal((__int64)v11, v13);
  v17 = v64;
LABEL_31:
  MiUnlockWorkingSetShared((__int64)v11, v17);
  return 1LL;
}
