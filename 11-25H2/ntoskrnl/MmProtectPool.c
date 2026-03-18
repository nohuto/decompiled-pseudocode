/*
 * XREFs of MmProtectPool @ 0x14039FEDC
 * Callers:
 *     ExProtectPoolEx @ 0x14039FD08 (ExProtectPoolEx.c)
 * Callees:
 *     MiMakeValidPte @ 0x14020EF10 (MiMakeValidPte.c)
 *     MiLockWorkingSetShared @ 0x140212A90 (MiLockWorkingSetShared.c)
 *     MiGetSystemRegionType @ 0x140219770 (MiGetSystemRegionType.c)
 *     MiCaptureDirtyBitToPfn @ 0x14022F970 (MiCaptureDirtyBitToPfn.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140231F50 (MI_READ_PTE_LOCK_FREE.c)
 *     MiReleasePageFileInfo @ 0x1402346B0 (MiReleasePageFileInfo.c)
 *     MiReleaseProcessorFlushList @ 0x140237CC0 (MiReleaseProcessorFlushList.c)
 *     MiGetWsleContents @ 0x140239750 (MiGetWsleContents.c)
 *     MiUnlockPageTable @ 0x14028B6B0 (MiUnlockPageTable.c)
 *     MiLockNonPagedPoolPte @ 0x1402AAF08 (MiLockNonPagedPoolPte.c)
 *     MmAccessFault @ 0x1402B5880 (MmAccessFault.c)
 *     MiWriteValidPteNewProtection @ 0x1402B83C0 (MiWriteValidPteNewProtection.c)
 *     MiUnlockWorkingSetShared @ 0x1402B9D50 (MiUnlockWorkingSetShared.c)
 *     MiMakeProtectionMask @ 0x1402C2BF0 (MiMakeProtectionMask.c)
 *     MiLockNestedPageTable @ 0x1402FB780 (MiLockNestedPageTable.c)
 *     MiInsertTbFlushEntry @ 0x1403278B0 (MiInsertTbFlushEntry.c)
 *     MiFlushTbList @ 0x14032BCA0 (MiFlushTbList.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiMakeTransitionPte @ 0x140339DF0 (MiMakeTransitionPte.c)
 *     MiCheckLinearProtectedPteAccessedBit @ 0x14037CB60 (MiCheckLinearProtectedPteAccessedBit.c)
 *     MiGetProcessorFlushList @ 0x140381500 (MiGetProcessorFlushList.c)
 *     MiFreeWsleList @ 0x1403815C4 (MiFreeWsleList.c)
 *     MiCopyOnWrite @ 0x140386068 (MiCopyOnWrite.c)
 *     MiVmAccessLoggingEnabled @ 0x140386C1C (MiVmAccessLoggingEnabled.c)
 *     MiInitializeTbFlushList @ 0x140388790 (MiInitializeTbFlushList.c)
 *     MI_WSLE_LOG_ACCESS @ 0x140389E74 (MI_WSLE_LOG_ACCESS.c)
 *     MiCopyOnWriteCheckConditions @ 0x1403DE840 (MiCopyOnWriteCheckConditions.c)
 *     MI_TIGHTER_PERMISSIONS @ 0x1403F3C10 (MI_TIGHTER_PERMISSIONS.c)
 *     KeYieldProcessorEx @ 0x1403F49C0 (KeYieldProcessorEx.c)
 *     MiLockTransitionLeafPageEx @ 0x14040D774 (MiLockTransitionLeafPageEx.c)
 *     MiFindLargeMapping @ 0x14044EF90 (MiFindLargeMapping.c)
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
  __int64 v18; // r8
  __int64 v19; // r9
  unsigned __int64 v20; // rbx
  char v21; // al
  unsigned int v22; // r15d
  unsigned __int64 v23; // rdx
  __int64 v24; // rdx
  unsigned __int64 v25; // rbp
  unsigned __int64 ValidPte; // rax
  ULONG_PTR v27; // rdi
  __int64 v28; // rbx
  unsigned __int64 v29; // rbx
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rbp
  unsigned __int64 v33; // rdi
  unsigned __int64 v34; // r8
  unsigned __int64 v35; // rax
  __int64 v36; // rbp
  unsigned __int64 v37; // rdi
  int v38; // edi
  unsigned __int64 v39; // rax
  int v40; // ebx
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 v43; // r8
  ULONG_PTR TransitionPte; // rax
  signed __int64 v45; // rdi
  signed __int64 v46; // rax
  __int64 v47; // rcx
  int v48; // edi
  unsigned int v49; // r11d
  __int64 v50; // rcx
  int v51; // eax
  unsigned int v52; // ebx
  __int64 v53; // r8
  __int64 v54; // r9
  __int64 v55; // rax
  unsigned __int64 v56; // rcx
  unsigned __int8 v57; // cf
  __int64 v58; // rax
  __int64 v59; // r9
  __int64 v60; // r8
  unsigned __int64 v61; // rdx
  unsigned __int64 v62; // rax
  __int64 *v63; // [rsp+30h] [rbp-98h]
  unsigned int v64; // [rsp+38h] [rbp-90h]
  int v65; // [rsp+3Ch] [rbp-8Ch] BYREF
  int v66; // [rsp+40h] [rbp-88h] BYREF
  unsigned __int64 v67; // [rsp+48h] [rbp-80h]
  unsigned __int64 v68; // [rsp+50h] [rbp-78h]
  __int64 v69; // [rsp+58h] [rbp-70h]
  unsigned __int8 v70; // [rsp+E0h] [rbp+18h]
  int v71; // [rsp+E8h] [rbp+20h]

  if ( (a3 & 0x10) != 0 && (MiFlags & 0x8000) != 0 )
    a3 &= ~0x10u;
  ProtectionMask = MiMakeProtectionMask(a3);
  v64 = ProtectionMask;
  v6 = ProtectionMask;
  if ( ProtectionMask >= 8 && ProtectionMask != 24 || (ProtectionMask & 5) == 5 )
    return 0LL;
  v7 = 0;
  v71 = 0;
  v8 = a1 + v5 - 1;
  v9 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  SystemRegionType = MiGetSystemRegionType(a1);
  v11 = &unk_140E37D80;
  if ( SystemRegionType != 5 )
  {
    if ( SystemRegionType == 4 && !(unsigned int)MiFindLargeMapping(a1, v8) )
    {
      v7 = 1;
      v71 = 1;
      v11 = &unk_140E38140;
      goto LABEL_9;
    }
    return 0LL;
  }
LABEL_9:
  v13 = 0LL;
  v67 = 0LL;
  v14 = *((unsigned __int16 *)v11 + 87);
  v15 = 0LL;
  v68 = ((v8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  ProcessorFlushList = 0LL;
  v63 = 0LL;
  v69 = *((_QWORD *)qword_140E2FD48 + v14);
  v17 = MiLockWorkingSetShared((__int64)v11);
  v70 = v17;
  if ( v9 > v68 )
    goto LABEL_32;
  v18 = 0xFFFFFFFFFFLL;
  v19 = 0xFFFFDE0000000000uLL;
  do
  {
    if ( v13 )
    {
      if ( (v9 & 0xFFF) != 0 )
        goto LABEL_13;
      if ( v15 )
      {
        MiFlushTbList(v15);
        MiReleaseProcessorFlushList();
        v15 = 0LL;
        ProcessorFlushList = 0LL;
        v63 = 0LL;
      }
      MiUnlockPageTable((__int64)v11, v13);
    }
    v13 = ((v9 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v67 = v13;
    MiLockNestedPageTable((__int64)v11, v13, v18, v19);
LABEL_13:
    v20 = *(_QWORD *)v9;
    v21 = v11[46] & 0xF;
    if ( v6 == 24 )
    {
      if ( v21 == 7 )
      {
        if ( (v20 & 1) != 0 )
        {
          if ( v7 )
          {
            v35 = MiLockNonPagedPoolPte(v9);
            v20 = *(_QWORD *)v9;
            v36 = v35;
          }
          else
          {
            v36 = 48 * ((v20 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
            v65 = 0;
            while ( _interlockedbittestandset64((volatile signed __int32 *)(v36 + 24), 0x3FuLL) )
            {
              do
                KeYieldProcessorEx(&v65);
              while ( *(__int64 *)(v36 + 24) < 0 );
            }
          }
          v43 = 0xFFFFFFFFFFLL;
          *(_QWORD *)(v36 + 16) = *(_QWORD *)(v36 + 16) & 0xFFFFFFFFFFFFFC1FuLL | 0x300;
          while ( 1 )
          {
            TransitionPte = MiMakeTransitionPte(v43 & (v20 >> 12), 24);
            v45 = TransitionPte;
            if ( !v71 )
            {
              *(_QWORD *)v9 = TransitionPte;
              goto LABEL_124;
            }
            if ( (MiFlags & 0x2000000) != 0 )
              _mm_lfence();
            if ( _bittest64(&MiFlags, 0x24u) && (TransitionPte & 0x21) == 1 && v9 >= 0xFFFFF6C000000000uLL )
            {
              MiCheckLinearProtectedPteAccessedBit(v9, TransitionPte, 128);
              v43 = 0xFFFFFFFFFFLL;
            }
            v46 = _InterlockedCompareExchange64((volatile signed __int64 *)v9, v45, v20);
            if ( v20 == v46 )
              break;
            v20 = v46;
          }
          if ( (v20 & 0x200) != 0 )
            *(_QWORD *)(v36 + 24) = *(_QWORD *)(v36 + 24) & 0xC000000000000000uLL | 0x10000;
LABEL_124:
          _InterlockedAnd64((volatile signed __int64 *)(v36 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          v28 = v9 << 25;
LABEL_24:
          v29 = v28 >> 16;
          if ( !v15 )
          {
            if ( !ProcessorFlushList )
            {
              ProcessorFlushList = MiGetProcessorFlushList();
              v63 = ProcessorFlushList;
            }
            v15 = (__int64)ProcessorFlushList;
            MiInitializeTbFlushList(
              (__int64)ProcessorFlushList,
              (__int64)v11,
              *((_DWORD *)ProcessorFlushList + 3),
              0,
              32);
          }
          MiInsertTbFlushEntry(v15, v29, 1LL, 0);
        }
      }
      else if ( (v20 & 1) != 0 )
      {
        if ( *(__int64 *)(48 * ((v20 >> 12) & 0xFFFFFFFFFFLL) - 0x21FFFFFFFFD8LL) < 0 )
        {
          if ( v15 )
          {
            MiFlushTbList(v15);
            MiReleaseProcessorFlushList();
            v15 = 0LL;
            ProcessorFlushList = 0LL;
            v63 = 0LL;
          }
          v51 = MiCopyOnWrite((__int64)(v9 << 25) >> 16, (volatile signed __int64 *)v9, 0xFFFFFFFFFFFFFFFFuLL, 0, 0LL);
          v9 -= 8LL;
          v52 = v51;
          if ( v51 < 0 )
          {
            MiUnlockPageTable((__int64)v11, v13);
            MiUnlockWorkingSetShared((__int64)v11, v70);
            MiCopyOnWriteCheckConditions(v11, v52, 0LL);
            MiLockWorkingSetShared((__int64)v11);
            MiLockNestedPageTable((__int64)v11, v13, v53, v54);
          }
        }
        else
        {
          if ( (unsigned int)MiVmAccessLoggingEnabled((__int64)v11) )
            MI_WSLE_LOG_ACCESS((__int64)v11, v9);
          if ( (MiGetWsleContents(v47, (__int64)(v9 << 25) >> 16) & 0xF) != 8 )
          {
            if ( ProcessorFlushList )
            {
              v48 = 0;
            }
            else
            {
              v48 = 1;
              ProcessorFlushList = MiGetProcessorFlushList();
              v63 = ProcessorFlushList;
            }
            MiInitializeTbFlushList(
              (__int64)(ProcessorFlushList + 517),
              (__int64)v11,
              *((_DWORD *)ProcessorFlushList + 1037),
              2,
              1);
            MiInsertTbFlushEntry(v50, (__int64)(v9 << 25) >> 16, v49, 0);
            if ( !MiFreeWsleList((__int64)v11, (ULONG_PTR)(ProcessorFlushList + 517), 0) )
              v9 -= 8LL;
            if ( v48 )
            {
              MiReleaseProcessorFlushList();
              ProcessorFlushList = 0LL;
              v63 = 0LL;
            }
          }
        }
      }
      else
      {
        if ( (v20 & 0x400) != 0 )
        {
LABEL_83:
          if ( v15 )
          {
            MiFlushTbList(v15);
            MiReleaseProcessorFlushList();
            v15 = 0LL;
            ProcessorFlushList = 0LL;
            v63 = 0LL;
          }
          MiUnlockPageTable((__int64)v11, v13);
          MiUnlockWorkingSetShared((__int64)v11, v70);
          MmAccessFault(0LL, (__int64)(v9 << 25) >> 16, 0, 0LL);
LABEL_86:
          MiLockWorkingSetShared((__int64)v11);
          MiLockNestedPageTable((__int64)v11, v13, v41, v42);
LABEL_48:
          v9 -= 8LL;
          goto LABEL_26;
        }
        if ( (v20 & 0x800) != 0 )
        {
          v55 = MiLockTransitionLeafPageEx(v9);
          if ( !v55 )
            goto LABEL_48;
          v56 = *(_QWORD *)v9 & 0xFFFFFFFFFFFFFC1FuLL;
          *(_QWORD *)(v55 + 16) = *(_QWORD *)(v55 + 16) & 0xFFFFFFFFFFFFFC1FuLL ^ 0x300;
          *(_QWORD *)v9 = v56 ^ 0x300;
          _InterlockedAnd64((volatile signed __int64 *)(v55 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        }
        else
        {
          *(_QWORD *)v9 = v20 & 0xFFFFFFFFFFFFFC1FuLL ^ 0x300;
        }
      }
    }
    else if ( v21 == 7 )
    {
      v22 = v6 | 0x80000000;
      while ( 1 )
      {
        v23 = v20;
        if ( (v20 & 1) == 0 && qword_140E2D940 && (v20 & 0x10) == 0 )
          v23 = v20 & ~qword_140E2D940;
        v24 = (v23 >> 12) & 0xFFFFFFFFFFLL;
        v25 = 48 * v24 - 0x220000000000LL;
        ValidPte = MiMakeValidPte(v9, v24, v22);
        v27 = ValidPte;
        if ( (v20 & 1) == 0 )
        {
          if ( (*(_QWORD *)(v25 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 1 )
          {
            v66 = 0;
            while ( _interlockedbittestandset64((volatile signed __int32 *)(v25 + 24), 0x3FuLL) )
            {
              do
                KeYieldProcessorEx(&v66);
              while ( *(__int64 *)(v25 + 24) < 0 );
            }
            *(_QWORD *)(v25 + 24) = *(_QWORD *)(v25 + 24) & 0xC000000000000000uLL | 1;
            _InterlockedAnd64((volatile signed __int64 *)(v25 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            v27 |= 0x200uLL;
          }
          v6 = v64;
          v57 = _bittest64(&MiFlags, 0x24u);
          *(_QWORD *)(v25 + 16) = (32LL * v64) ^ (*(_QWORD *)(v25 + 16) ^ (32LL * v64)) & 0xFFFFFFFFFFFFFC1FuLL;
          if ( v57 && (v27 & 0x20) == 0 && v9 >= 0xFFFFF6C000000000uLL )
            MiCheckLinearProtectedPteAccessedBit(v9, v27, 128);
          *(_QWORD *)v9 = v27;
          goto LABEL_76;
        }
        if ( !v71 )
          break;
        v25 = MiLockNonPagedPoolPte(v9);
        v30 = MI_READ_PTE_LOCK_FREE(v9);
        if ( v30 == v20 )
        {
          if ( (v20 & 0x200) != 0 )
            v27 |= 0x200uLL;
          if ( (MiFlags & 0x2000000) != 0 )
            _mm_lfence();
          if ( _bittest64(&MiFlags, 0x24u) && (v27 & 0x21) == 1 && v9 >= 0xFFFFF6C000000000uLL )
            MiCheckLinearProtectedPteAccessedBit(v9, v27, 128);
          v30 = _InterlockedCompareExchange64((volatile signed __int64 *)v9, v27, v20);
          if ( v20 == v30 )
            goto LABEL_20;
        }
        _InterlockedAnd64((volatile signed __int64 *)(v25 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        v20 = v30;
      }
      MiWriteValidPteNewProtection(v9, ValidPte);
LABEL_20:
      v6 = v64;
      *(_QWORD *)(v25 + 16) = (32LL * v64) ^ (*(_QWORD *)(v25 + 16) ^ (32LL * v64)) & 0xFFFFFFFFFFFFFC1FuLL;
      if ( v71 )
        _InterlockedAnd64((volatile signed __int64 *)(v25 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( (MiFlags & 0x100) == 0 || (unsigned int)MI_TIGHTER_PERMISSIONS(v20, v27) )
      {
        v28 = v9 << 25;
        ProcessorFlushList = v63;
        goto LABEL_24;
      }
LABEL_76:
      ProcessorFlushList = v63;
    }
    else if ( (v20 & 1) != 0 )
    {
      v31 = (v20 >> 12) & 0xFFFFFFFFFFLL;
      v32 = 48 * v31 - 0x220000000000LL;
      if ( *(__int64 *)(v32 + 40) < 0 )
      {
        if ( v15 )
        {
          MiFlushTbList(v15);
          MiReleaseProcessorFlushList();
          v15 = 0LL;
          ProcessorFlushList = 0LL;
          v63 = 0LL;
        }
        v40 = MiCopyOnWrite((__int64)(v9 << 25) >> 16, (volatile signed __int64 *)v9, 0xFFFFFFFFFFFFFFFFuLL, 0, 0LL);
        if ( v40 < 0 )
        {
          MiUnlockPageTable((__int64)v11, v13);
          MiUnlockWorkingSetShared((__int64)v11, v70);
          MiCopyOnWriteCheckConditions(v11, (unsigned int)v40, 0LL);
          goto LABEL_86;
        }
        goto LABEL_48;
      }
      v33 = v20 & 0x7F00000000000000LL | MiMakeValidPte(v9, v31, v6 | 0x80000000) & 0x80FFFFFFFFFFFFFFuLL;
      if ( (MiFlags & 0x2000000) != 0 )
        _mm_lfence();
      v34 = 0xFFFFF68000000000uLL;
      if ( _bittest64(&MiFlags, 0x24u) && (v33 & 0x21) == 1 && v9 >= 0xFFFFF6C000000000uLL )
      {
        MiCheckLinearProtectedPteAccessedBit(v9, v33, 128);
        v34 = 0xFFFFF68000000000uLL;
      }
      if ( v20 != _InterlockedCompareExchange64((volatile signed __int64 *)v9, v33, v20) )
        goto LABEL_48;
      if ( (MiFlags & 0x100) == 0 || (unsigned int)MI_TIGHTER_PERMISSIONS(v20, v33) )
      {
        v37 = (__int64)((v9 << 25) - (v34 << 25)) >> 16;
        if ( !v15 )
        {
          if ( !ProcessorFlushList )
          {
            ProcessorFlushList = MiGetProcessorFlushList();
            v63 = ProcessorFlushList;
          }
          v15 = (__int64)ProcessorFlushList;
          MiInitializeTbFlushList((__int64)ProcessorFlushList, (__int64)v11, *((_DWORD *)ProcessorFlushList + 3), 0, 32);
        }
        MiInsertTbFlushEntry(v15, v37, 1LL, 0);
      }
      v38 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v32 + 24), 0x3FuLL) )
      {
        do
        {
          if ( (++v38 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && KiCheckVpBackingLongSpinWaitHypercall() )
          {
            HvlNotifyLongSpinWait();
          }
          else
          {
            _mm_pause();
          }
        }
        while ( *(__int64 *)(v32 + 24) < 0 );
      }
      v39 = 0LL;
      *(_QWORD *)(v32 + 16) = (32LL * v6) ^ (*(_QWORD *)(v32 + 16) ^ (32LL * v6)) & 0xFFFFFFFFFFFFFC1FuLL;
      if ( (v20 & 0x42) != 0 )
        v39 = MiCaptureDirtyBitToPfn(v32);
      _InterlockedAnd64((volatile signed __int64 *)(v32 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( v39 )
        MiReleasePageFileInfo(v69, v39, 1);
    }
    else
    {
      if ( (v20 & 0x400) != 0 )
        goto LABEL_83;
      if ( (v20 & 0x800) != 0 )
      {
        v58 = MiLockTransitionLeafPageEx(v9);
        v59 = v58;
        if ( !v58 )
          goto LABEL_48;
        v60 = 32LL * v6;
        v61 = v60 ^ (*(_QWORD *)(v58 + 16) ^ v60) & 0xFFFFFFFFFFFFFC1FuLL;
        v62 = v60 ^ (*(_QWORD *)v9 ^ v60) & 0xFFFFFFFFFFFFFC1FuLL;
        *(_QWORD *)(v59 + 16) = v61;
        *(_QWORD *)v9 = v62;
        _InterlockedAnd64((volatile signed __int64 *)(v59 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      }
      else
      {
        *(_QWORD *)v9 = (32LL * v6) ^ (v20 ^ (32LL * v6)) & 0xFFFFFFFFFFFFFC1FuLL;
      }
    }
LABEL_26:
    v13 = v67;
    v9 += 8LL;
    v7 = v71;
    v18 = 0xFFFFFFFFFFLL;
    v19 = 0xFFFFDE0000000000uLL;
  }
  while ( v9 <= v68 );
  if ( v15 )
  {
    MiFlushTbList(v15);
    MiReleaseProcessorFlushList();
  }
  if ( v13 )
    MiUnlockPageTable((__int64)v11, v13);
  v17 = v70;
LABEL_32:
  MiUnlockWorkingSetShared((__int64)v11, v17);
  return 1LL;
}
