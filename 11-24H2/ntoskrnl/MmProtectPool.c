/*
 * XREFs of MmProtectPool @ 0x14038233C
 * Callers:
 *     ExProtectPoolEx @ 0x140382168 (ExProtectPoolEx.c)
 * Callees:
 *     MiLockNestedPageTable @ 0x140201F50 (MiLockNestedPageTable.c)
 *     MiCheckLinearProtectedPteAccessedBit @ 0x140203550 (MiCheckLinearProtectedPteAccessedBit.c)
 *     MiCaptureDirtyBitToPfn @ 0x140206E50 (MiCaptureDirtyBitToPfn.c)
 *     MiReleaseProcessorFlushList @ 0x140208120 (MiReleaseProcessorFlushList.c)
 *     MiMakeValidPte @ 0x140212550 (MiMakeValidPte.c)
 *     MiInsertTbFlushEntry @ 0x1402137F0 (MiInsertTbFlushEntry.c)
 *     MiInitializeTbFlushList @ 0x140214780 (MiInitializeTbFlushList.c)
 *     MiLockWorkingSetShared @ 0x140241250 (MiLockWorkingSetShared.c)
 *     MiUnlockWorkingSetShared @ 0x140241CF0 (MiUnlockWorkingSetShared.c)
 *     MmAccessFault @ 0x140243610 (MmAccessFault.c)
 *     MiWriteValidPteNewProtection @ 0x140245FB0 (MiWriteValidPteNewProtection.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140246FA0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiReleasePageFileInfo @ 0x1402486F0 (MiReleasePageFileInfo.c)
 *     MI_WSLE_LOG_ACCESS @ 0x1402590F0 (MI_WSLE_LOG_ACCESS.c)
 *     MiFreeWsleList @ 0x140297494 (MiFreeWsleList.c)
 *     MiGetProcessorFlushList @ 0x1402990BC (MiGetProcessorFlushList.c)
 *     MiFlushTbList @ 0x1402A1330 (MiFlushTbList.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiUnlockPageTableInternal @ 0x1402C9C00 (MiUnlockPageTableInternal.c)
 *     MiLockTransitionLeafPageEx @ 0x1402EC2C0 (MiLockTransitionLeafPageEx.c)
 *     MiGetSystemRegionType @ 0x1402FDF90 (MiGetSystemRegionType.c)
 *     MiGetWsleContents @ 0x140344BE0 (MiGetWsleContents.c)
 *     MiVmAccessLoggingEnabled @ 0x140346A3C (MiVmAccessLoggingEnabled.c)
 *     MiCopyOnWrite @ 0x140346A74 (MiCopyOnWrite.c)
 *     MiMakeTransitionPte @ 0x140347DF0 (MiMakeTransitionPte.c)
 *     MiMakeProtectionMask @ 0x14034C5B0 (MiMakeProtectionMask.c)
 *     MiCopyOnWriteCheckConditions @ 0x1403C927C (MiCopyOnWriteCheckConditions.c)
 *     KeYieldProcessorEx @ 0x1403EFB70 (KeYieldProcessorEx.c)
 *     MI_TIGHTER_PERMISSIONS @ 0x1404291C0 (MI_TIGHTER_PERMISSIONS.c)
 *     MiLockNonPagedPoolPte @ 0x1404355DC (MiLockNonPagedPoolPte.c)
 *     MiFindLargeMapping @ 0x1404452A4 (MiFindLargeMapping.c)
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
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  _DWORD *v14; // r13
  unsigned __int64 v16; // rdi
  __int64 v17; // rcx
  __int64 v18; // r12
  __int64 *ProcessorFlushList; // r14
  unsigned __int8 v20; // al
  unsigned __int64 v21; // rbx
  char v22; // al
  unsigned int v23; // r15d
  unsigned __int64 v24; // rdx
  __int64 v25; // rdx
  __int64 v26; // rbp
  unsigned __int64 ValidPte; // rax
  __int64 v28; // r8
  ULONG_PTR v29; // rdi
  __int64 v30; // rbx
  unsigned __int64 v31; // rbx
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rbp
  unsigned __int64 v35; // rdi
  unsigned __int64 v36; // r8
  __int64 v37; // rax
  __int64 v38; // rbp
  unsigned __int64 v39; // rdi
  __int64 v40; // r9
  unsigned int v41; // edi
  unsigned __int64 v42; // rax
  __int64 v43; // rdx
  __int64 v44; // r8
  __int64 v45; // r9
  int v46; // ebx
  __int64 v47; // r8
  ULONG_PTR TransitionPte; // rax
  signed __int64 v49; // rdi
  signed __int64 v50; // rax
  __int64 v51; // rcx
  int v52; // edi
  unsigned int v53; // r11d
  __int64 v54; // rcx
  int v55; // eax
  unsigned int v56; // ebx
  __int64 v57; // rdx
  __int64 v58; // r8
  __int64 v59; // r9
  __int64 v60; // rax
  unsigned __int64 v61; // rcx
  unsigned __int8 v62; // cf
  __int64 v63; // rax
  __int64 v64; // r9
  __int64 v65; // r8
  unsigned __int64 v66; // rdx
  unsigned __int64 v67; // rax
  __int64 *v68; // [rsp+30h] [rbp-98h]
  unsigned int v69; // [rsp+38h] [rbp-90h]
  int v70; // [rsp+3Ch] [rbp-8Ch] BYREF
  int v71; // [rsp+40h] [rbp-88h] BYREF
  unsigned __int64 v72; // [rsp+48h] [rbp-80h]
  unsigned __int64 v73; // [rsp+50h] [rbp-78h]
  __int64 v74; // [rsp+58h] [rbp-70h]
  unsigned __int8 v75; // [rsp+E0h] [rbp+18h]
  int v76; // [rsp+E8h] [rbp+20h]

  if ( (a3 & 0x10) != 0 && (MiFlags & 0x8000) != 0 )
    a3 &= ~0x10u;
  ProtectionMask = MiMakeProtectionMask(a3);
  v69 = ProtectionMask;
  v6 = ProtectionMask;
  if ( ProtectionMask >= 8 && ProtectionMask != 24 || (ProtectionMask & 5) == 5 )
    return 0LL;
  v7 = 0;
  v76 = 0;
  v8 = a1 + v5 - 1;
  v9 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  SystemRegionType = MiGetSystemRegionType(a1);
  v14 = &unk_140E38100;
  if ( SystemRegionType == 5 )
    goto LABEL_9;
  if ( SystemRegionType != 4 || (unsigned int)MiFindLargeMapping(a1, v8) )
    return 0LL;
  v7 = 1;
  v76 = 1;
  v14 = &unk_140E384C0;
LABEL_9:
  v16 = 0LL;
  v72 = 0LL;
  v17 = *((unsigned __int16 *)v14 + 87);
  v18 = 0LL;
  v73 = ((v8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  ProcessorFlushList = 0LL;
  v68 = 0LL;
  v74 = *((_QWORD *)qword_140E300C8 + v17);
  v20 = MiLockWorkingSetShared((__int64)v14, v11, v12, v13);
  v75 = v20;
  if ( v9 > v73 )
    goto LABEL_31;
  do
  {
    if ( v16 )
    {
      if ( (v9 & 0xFFF) != 0 )
        goto LABEL_12;
      if ( v18 )
      {
        MiFlushTbList(v18);
        MiReleaseProcessorFlushList();
        v18 = 0LL;
        ProcessorFlushList = 0LL;
        v68 = 0LL;
      }
      MiUnlockPageTableInternal((__int64)v14, v16);
    }
    v16 = ((v9 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v72 = v16;
    MiLockNestedPageTable((__int64)v14, v16);
LABEL_12:
    v21 = *(_QWORD *)v9;
    v22 = v14[46] & 0xF;
    if ( v6 == 24 )
    {
      if ( v22 == 7 )
      {
        if ( (v21 & 1) != 0 )
        {
          if ( v7 )
          {
            v37 = MiLockNonPagedPoolPte(v9);
            v21 = *(_QWORD *)v9;
            v38 = v37;
          }
          else
          {
            v38 = 48 * ((v21 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
            v70 = 0;
            while ( _interlockedbittestandset64((volatile signed __int32 *)(v38 + 24), 0x3FuLL) )
            {
              do
                KeYieldProcessorEx(&v70);
              while ( *(__int64 *)(v38 + 24) < 0 );
            }
          }
          v47 = 0xFFFFFFFFFFLL;
          *(_QWORD *)(v38 + 16) = *(_QWORD *)(v38 + 16) & 0xFFFFFFFFFFFFFC1FuLL | 0x300;
          while ( 1 )
          {
            TransitionPte = MiMakeTransitionPte(v47 & (v21 >> 12), 24);
            v49 = TransitionPte;
            if ( !v76 )
            {
              *(_QWORD *)v9 = TransitionPte;
              goto LABEL_123;
            }
            if ( (MiFlags & 0x2000000) != 0 )
              _mm_lfence();
            if ( _bittest64(&MiFlags, 0x24u) && (TransitionPte & 0x21) == 1 && v9 >= 0xFFFFF6C000000000uLL )
            {
              MiCheckLinearProtectedPteAccessedBit(v9, TransitionPte, 128LL);
              v47 = 0xFFFFFFFFFFLL;
            }
            v50 = _InterlockedCompareExchange64((volatile signed __int64 *)v9, v49, v21);
            if ( v21 == v50 )
              break;
            v21 = v50;
          }
          if ( (v21 & 0x200) != 0 )
            *(_QWORD *)(v38 + 24) = *(_QWORD *)(v38 + 24) & 0xC000000000000000uLL | 0x10000;
LABEL_123:
          _InterlockedAnd64((volatile signed __int64 *)(v38 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          v30 = v9 << 25;
LABEL_23:
          v31 = v30 >> 16;
          if ( !v18 )
          {
            if ( !ProcessorFlushList )
            {
              ProcessorFlushList = MiGetProcessorFlushList();
              v68 = ProcessorFlushList;
            }
            v18 = (__int64)ProcessorFlushList;
            MiInitializeTbFlushList(
              (__int64)ProcessorFlushList,
              (__int64)v14,
              *((_DWORD *)ProcessorFlushList + 3),
              0,
              32);
          }
          MiInsertTbFlushEntry(v18, v31, 1LL, 0);
        }
      }
      else if ( (v21 & 1) != 0 )
      {
        if ( *(__int64 *)(48 * ((v21 >> 12) & 0xFFFFFFFFFFLL) - 0x21FFFFFFFFD8LL) < 0 )
        {
          if ( v18 )
          {
            MiFlushTbList(v18);
            MiReleaseProcessorFlushList();
            v18 = 0LL;
            ProcessorFlushList = 0LL;
            v68 = 0LL;
          }
          v55 = MiCopyOnWrite((__int64)(v9 << 25) >> 16, (volatile signed __int64 *)v9, 0xFFFFFFFFFFFFFFFFuLL, 0, 0LL);
          v9 -= 8LL;
          v56 = v55;
          if ( v55 < 0 )
          {
            MiUnlockPageTableInternal((__int64)v14, v16);
            MiUnlockWorkingSetShared((__int64)v14, v75);
            MiCopyOnWriteCheckConditions(v14, v56, 0LL);
            MiLockWorkingSetShared((__int64)v14, v57, v58, v59);
            MiLockNestedPageTable((__int64)v14, v16);
          }
        }
        else
        {
          if ( (unsigned int)MiVmAccessLoggingEnabled((__int64)v14) )
            MI_WSLE_LOG_ACCESS((__int64)v14, v9);
          if ( (MiGetWsleContents(v51, (__int64)(v9 << 25) >> 16) & 0xF) != 8 )
          {
            if ( ProcessorFlushList )
            {
              v52 = 0;
            }
            else
            {
              v52 = 1;
              ProcessorFlushList = MiGetProcessorFlushList();
              v68 = ProcessorFlushList;
            }
            MiInitializeTbFlushList(
              (__int64)(ProcessorFlushList + 517),
              (__int64)v14,
              *((_DWORD *)ProcessorFlushList + 1037),
              2,
              1);
            MiInsertTbFlushEntry(v54, (__int64)(v9 << 25) >> 16, v53, 0);
            if ( !MiFreeWsleList((__int64)v14, (ULONG_PTR)(ProcessorFlushList + 517), 0) )
              v9 -= 8LL;
            if ( v52 )
            {
              MiReleaseProcessorFlushList();
              ProcessorFlushList = 0LL;
              v68 = 0LL;
            }
          }
        }
      }
      else
      {
        if ( (v21 & 0x400) != 0 )
        {
LABEL_81:
          if ( v18 )
          {
            MiFlushTbList(v18);
            MiReleaseProcessorFlushList();
            v18 = 0LL;
            ProcessorFlushList = 0LL;
            v68 = 0LL;
          }
          MiUnlockPageTableInternal((__int64)v14, v16);
          MiUnlockWorkingSetShared((__int64)v14, v75);
          MmAccessFault(0LL, (__int64)(v9 << 25) >> 16, 0, 0LL);
LABEL_84:
          MiLockWorkingSetShared((__int64)v14, v43, v44, v45);
          MiLockNestedPageTable((__int64)v14, v16);
LABEL_47:
          v9 -= 8LL;
          goto LABEL_25;
        }
        if ( (v21 & 0x800) != 0 )
        {
          v60 = MiLockTransitionLeafPageEx(v9, 0LL, 0);
          if ( !v60 )
            goto LABEL_47;
          v61 = *(_QWORD *)v9 & 0xFFFFFFFFFFFFFC1FuLL;
          *(_QWORD *)(v60 + 16) = *(_QWORD *)(v60 + 16) & 0xFFFFFFFFFFFFFC1FuLL ^ 0x300;
          *(_QWORD *)v9 = v61 ^ 0x300;
          _InterlockedAnd64((volatile signed __int64 *)(v60 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        }
        else
        {
          *(_QWORD *)v9 = v21 & 0xFFFFFFFFFFFFFC1FuLL ^ 0x300;
        }
      }
    }
    else if ( v22 == 7 )
    {
      v23 = v6 | 0x80000000;
      while ( 1 )
      {
        v24 = v21;
        if ( (v21 & 1) == 0 && qword_140E2DCC0 && (v21 & 0x10) == 0 )
          v24 = v21 & ~qword_140E2DCC0;
        v25 = (v24 >> 12) & 0xFFFFFFFFFFLL;
        v26 = 48 * v25 - 0x220000000000LL;
        ValidPte = MiMakeValidPte(v9, v25, v23);
        v29 = ValidPte;
        if ( (v21 & 1) == 0 )
        {
          if ( (*(_QWORD *)(v26 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 1 )
          {
            v71 = 0;
            while ( _interlockedbittestandset64((volatile signed __int32 *)(v26 + 24), 0x3FuLL) )
            {
              do
                KeYieldProcessorEx(&v71);
              while ( *(__int64 *)(v26 + 24) < 0 );
            }
            *(_QWORD *)(v26 + 24) = *(_QWORD *)(v26 + 24) & 0xC000000000000000uLL | 1;
            _InterlockedAnd64((volatile signed __int64 *)(v26 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            v29 |= 0x200uLL;
          }
          v6 = v69;
          v62 = _bittest64(&MiFlags, 0x24u);
          *(_QWORD *)(v26 + 16) = (32LL * v69) ^ (*(_QWORD *)(v26 + 16) ^ (32LL * v69)) & 0xFFFFFFFFFFFFFC1FuLL;
          if ( v62 && (v29 & 0x20) == 0 && v9 >= 0xFFFFF6C000000000uLL )
            MiCheckLinearProtectedPteAccessedBit(v9, v29, 128LL);
          *(_QWORD *)v9 = v29;
          goto LABEL_77;
        }
        if ( !v76 )
          break;
        v26 = MiLockNonPagedPoolPte(v9);
        v32 = MI_READ_PTE_LOCK_FREE(v9);
        if ( v32 == v21 )
        {
          if ( (v21 & 0x200) != 0 )
            v29 |= 0x200uLL;
          if ( (MiFlags & 0x2000000) != 0 )
            _mm_lfence();
          if ( _bittest64(&MiFlags, 0x24u) && (v29 & 0x21) == 1 && v9 >= 0xFFFFF6C000000000uLL )
            MiCheckLinearProtectedPteAccessedBit(v9, v29, 128LL);
          v32 = _InterlockedCompareExchange64((volatile signed __int64 *)v9, v29, v21);
          if ( v21 == v32 )
            goto LABEL_19;
        }
        _InterlockedAnd64((volatile signed __int64 *)(v26 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        v21 = v32;
      }
      MiWriteValidPteNewProtection(v9, ValidPte, v28);
LABEL_19:
      v6 = v69;
      *(_QWORD *)(v26 + 16) = (32LL * v69) ^ (*(_QWORD *)(v26 + 16) ^ (32LL * v69)) & 0xFFFFFFFFFFFFFC1FuLL;
      if ( v76 )
        _InterlockedAnd64((volatile signed __int64 *)(v26 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( (MiFlags & 0x100) == 0 || (unsigned int)MI_TIGHTER_PERMISSIONS(v21, v29) )
      {
        v30 = v9 << 25;
        ProcessorFlushList = v68;
        goto LABEL_23;
      }
LABEL_77:
      ProcessorFlushList = v68;
    }
    else if ( (v21 & 1) != 0 )
    {
      v33 = (v21 >> 12) & 0xFFFFFFFFFFLL;
      v34 = 48 * v33 - 0x220000000000LL;
      if ( *(__int64 *)(v34 + 40) < 0 )
      {
        if ( v18 )
        {
          MiFlushTbList(v18);
          MiReleaseProcessorFlushList();
          v18 = 0LL;
          ProcessorFlushList = 0LL;
          v68 = 0LL;
        }
        v46 = MiCopyOnWrite((__int64)(v9 << 25) >> 16, (volatile signed __int64 *)v9, 0xFFFFFFFFFFFFFFFFuLL, 0, 0LL);
        if ( v46 < 0 )
        {
          MiUnlockPageTableInternal((__int64)v14, v16);
          MiUnlockWorkingSetShared((__int64)v14, v75);
          MiCopyOnWriteCheckConditions(v14, (unsigned int)v46, 0LL);
          goto LABEL_84;
        }
        goto LABEL_47;
      }
      v35 = v21 & 0x7F00000000000000LL | MiMakeValidPte(v9, v33, v6 | 0x80000000) & 0x80FFFFFFFFFFFFFFuLL;
      if ( (MiFlags & 0x2000000) != 0 )
        _mm_lfence();
      v36 = 0xFFFFF68000000000uLL;
      if ( _bittest64(&MiFlags, 0x24u) && (v35 & 0x21) == 1 && v9 >= 0xFFFFF6C000000000uLL )
      {
        MiCheckLinearProtectedPteAccessedBit(v9, v35, 128LL);
        v36 = 0xFFFFF68000000000uLL;
      }
      if ( v21 != _InterlockedCompareExchange64((volatile signed __int64 *)v9, v35, v21) )
        goto LABEL_47;
      if ( (MiFlags & 0x100) == 0 || (unsigned int)MI_TIGHTER_PERMISSIONS(v21, v35) )
      {
        v39 = (__int64)((v9 << 25) - (v36 << 25)) >> 16;
        if ( !v18 )
        {
          if ( !ProcessorFlushList )
          {
            ProcessorFlushList = MiGetProcessorFlushList();
            v68 = ProcessorFlushList;
          }
          v18 = (__int64)ProcessorFlushList;
          MiInitializeTbFlushList((__int64)ProcessorFlushList, (__int64)v14, *((_DWORD *)ProcessorFlushList + 3), 0, 32);
        }
        MiInsertTbFlushEntry(v18, v39, 1LL, 0);
      }
      v41 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v34 + 24), 0x3FuLL) )
      {
        do
        {
          if ( (++v41 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && KiCheckVpBackingLongSpinWaitHypercall() )
          {
            HvlNotifyLongSpinWait(v41);
          }
          else
          {
            _mm_pause();
          }
        }
        while ( *(__int64 *)(v34 + 24) < 0 );
      }
      v42 = 0LL;
      *(_QWORD *)(v34 + 16) = (32LL * v6) ^ (*(_QWORD *)(v34 + 16) ^ (32LL * v6)) & 0xFFFFFFFFFFFFFC1FuLL;
      if ( (v21 & 0x42) != 0 )
        v42 = MiCaptureDirtyBitToPfn(v34);
      _InterlockedAnd64((volatile signed __int64 *)(v34 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( v42 )
        MiReleasePageFileInfo(v74, v42, 1LL, v40);
    }
    else
    {
      if ( (v21 & 0x400) != 0 )
        goto LABEL_81;
      if ( (v21 & 0x800) != 0 )
      {
        v63 = MiLockTransitionLeafPageEx(v9, 0LL, 0);
        v64 = v63;
        if ( !v63 )
          goto LABEL_47;
        v65 = 32LL * v6;
        v66 = v65 ^ (*(_QWORD *)(v63 + 16) ^ v65) & 0xFFFFFFFFFFFFFC1FuLL;
        v67 = v65 ^ (*(_QWORD *)v9 ^ v65) & 0xFFFFFFFFFFFFFC1FuLL;
        *(_QWORD *)(v64 + 16) = v66;
        *(_QWORD *)v9 = v67;
        _InterlockedAnd64((volatile signed __int64 *)(v64 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      }
      else
      {
        *(_QWORD *)v9 = (32LL * v6) ^ (v21 ^ (32LL * v6)) & 0xFFFFFFFFFFFFFC1FuLL;
      }
    }
LABEL_25:
    v16 = v72;
    v9 += 8LL;
    v7 = v76;
  }
  while ( v9 <= v73 );
  if ( v18 )
  {
    MiFlushTbList(v18);
    MiReleaseProcessorFlushList();
  }
  if ( v16 )
    MiUnlockPageTableInternal((__int64)v14, v16);
  v20 = v75;
LABEL_31:
  MiUnlockWorkingSetShared((__int64)v14, v20);
  return 1LL;
}
