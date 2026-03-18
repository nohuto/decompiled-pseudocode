/*
 * XREFs of MiSetSystemCodeProtection @ 0x140435F3C
 * Callers:
 *     MiSetImageProtection @ 0x140435EEC (MiSetImageProtection.c)
 *     MmProtectDriverSection @ 0x14066B7C0 (MmProtectDriverSection.c)
 *     MiProtectSystemImage @ 0x140A90AEC (MiProtectSystemImage.c)
 *     MiProtectKernelCfgData @ 0x140C4EAD0 (MiProtectKernelCfgData.c)
 * Callees:
 *     MiWriteValidPteNewProtection @ 0x140219260 (MiWriteValidPteNewProtection.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021A250 (MI_READ_PTE_LOCK_FREE.c)
 *     MiReleasePageFileInfo @ 0x14021B9A0 (MiReleasePageFileInfo.c)
 *     MiGetPagePrivilege @ 0x14021CE30 (MiGetPagePrivilege.c)
 *     MiInitializeTbFlushList @ 0x140233BB0 (MiInitializeTbFlushList.c)
 *     MiMakeValidPte @ 0x1402383C0 (MiMakeValidPte.c)
 *     MiLockSpecialPurposeMemoryCachedPage @ 0x14023C31C (MiLockSpecialPurposeMemoryCachedPage.c)
 *     MiCaptureDirtyBitToPfn @ 0x14023ED00 (MiCaptureDirtyBitToPfn.c)
 *     MiReleaseProcessorFlushList @ 0x14023FFD0 (MiReleaseProcessorFlushList.c)
 *     MiInsertTbFlushEntry @ 0x1402432E0 (MiInsertTbFlushEntry.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x1402637E0 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiLockNestedPageTable @ 0x140285190 (MiLockNestedPageTable.c)
 *     MiGetProcessorFlushList @ 0x1402894BC (MiGetProcessorFlushList.c)
 *     MiFlushTbList @ 0x140291730 (MiFlushTbList.c)
 *     HvlNotifyLongSpinWait @ 0x140293260 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140293290 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiSectionControlArea @ 0x1402D4800 (MiSectionControlArea.c)
 *     MiLockWorkingSetShared @ 0x1402DF970 (MiLockWorkingSetShared.c)
 *     MiUnlockWorkingSetShared @ 0x1402E0410 (MiUnlockWorkingSetShared.c)
 *     MiInvalidPteConforms @ 0x140302590 (MiInvalidPteConforms.c)
 *     MiOffsetToProtos @ 0x140319D40 (MiOffsetToProtos.c)
 *     MiUnlockPageTableInternal @ 0x140321070 (MiUnlockPageTableInternal.c)
 *     MI_TIGHTER_PERMISSIONS @ 0x140436740 (MI_TIGHTER_PERMISSIONS.c)
 *     MiMarkPfnVerified @ 0x140436D24 (MiMarkPfnVerified.c)
 *     MiMakeDriverPagesPrivate @ 0x140436EA8 (MiMakeDriverPagesPrivate.c)
 *     MiRestrictSystemCodeProtection @ 0x1404FB574 (MiRestrictSystemCodeProtection.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 */

__int64 __fastcall MiSetSystemCodeProtection(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned int a4,
        int a5)
{
  __int64 *ProcessorFlushList; // r13
  unsigned int v6; // ebp
  unsigned __int64 v8; // rsi
  unsigned int v10; // r15d
  unsigned __int64 v11; // r12
  unsigned int v12; // r14d
  unsigned __int64 v13; // rdi
  unsigned __int64 v14; // rax
  unsigned __int64 ValidPte; // rbx
  unsigned __int64 v16; // rdi
  unsigned int v17; // eax
  __int64 v18; // rbx
  unsigned int v19; // ebp
  unsigned __int64 v21; // rbx
  _DWORD *v22; // r14
  unsigned __int64 v23; // rdx
  unsigned __int64 v24; // rcx
  __int64 v25; // rax
  ULONG_PTR v26; // rbx
  unsigned __int64 v27; // rcx
  unsigned __int64 v28; // rcx
  __int64 v29; // rdi
  unsigned int v30; // ebp
  bool v31; // zf
  unsigned __int64 v32; // rcx
  unsigned __int64 v33; // rax
  __int64 v34; // r8
  unsigned int v35; // [rsp+30h] [rbp-98h]
  unsigned __int64 v36; // [rsp+38h] [rbp-90h]
  int v37; // [rsp+40h] [rbp-88h]
  __int64 v38; // [rsp+48h] [rbp-80h]
  unsigned __int64 v39; // [rsp+50h] [rbp-78h] BYREF
  unsigned __int64 v40; // [rsp+58h] [rbp-70h]
  unsigned __int64 v41; // [rsp+60h] [rbp-68h]
  unsigned __int64 v42; // [rsp+68h] [rbp-60h]
  unsigned __int8 v44; // [rsp+D8h] [rbp+10h]
  unsigned int v46; // [rsp+E8h] [rbp+20h]

  v46 = a4;
  ProcessorFlushList = 0LL;
  v6 = a4;
  v39 = 0LL;
  v8 = a2;
  v10 = 1;
  if ( a4 != 24 && (a4 & 0x10) != 0 )
  {
    v6 = a4 & 0xFFFFFFEF;
    v37 = 1;
    v46 = a4 & 0xFFFFFFEF;
  }
  else
  {
    v37 = 0;
  }
  v11 = (__int64)(a2 << 25) >> 16;
  if ( (unsigned int)MI_IS_PHYSICAL_ADDRESS(v11) )
    return v10;
  v12 = v6;
  if ( v6 == 256 )
  {
    v42 = MiSectionControlArea(*(_QWORD *)(a1 + 112));
    v38 = 0LL;
    v40 = 0LL;
  }
  else
  {
    v40 = a3;
    v42 = 0LL;
    v12 = v6 & 0xFFFFFFFE;
    v38 = 0LL;
    if ( (v6 & 5) != 5 )
      v12 = v6;
    if ( (int)MiMakeDriverPagesPrivate(a1, v8, a3, (v12 >> 1) & 2) < 0 )
      return 0LL;
  }
  v13 = 0LL;
  v36 = 0LL;
  v44 = MiLockWorkingSetShared((__int64)&unk_140E37D40);
LABEL_24:
  while ( v8 <= a3 )
  {
    if ( !v13 )
      goto LABEL_51;
    if ( (v8 & 0xFFF) == 0 )
    {
      if ( ProcessorFlushList )
      {
        MiFlushTbList((__int64)ProcessorFlushList);
        MiReleaseProcessorFlushList();
        ProcessorFlushList = 0LL;
      }
      MiUnlockPageTableInternal((__int64)&unk_140E37D40, v13);
LABEL_51:
      v13 = ((v8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v36 = v13;
      MiLockNestedPageTable((__int64)&unk_140E37D40, v13);
    }
    if ( v8 > v40 )
    {
      v21 = v11 - *(_QWORD *)(a1 + 48);
      if ( v38 )
      {
        v22 = *(_DWORD **)(v38 + 16);
        v23 = 0LL;
        v38 = (__int64)v22;
        v39 = 0LL;
      }
      else
      {
        if ( ProcessorFlushList )
        {
          MiFlushTbList((__int64)ProcessorFlushList);
          MiReleaseProcessorFlushList();
          ProcessorFlushList = 0LL;
        }
        MiUnlockPageTableInternal((__int64)&unk_140E37D40, v13);
        MiUnlockWorkingSetShared((__int64)&unk_140E37D40, v44);
        v38 = MiOffsetToProtos(v42, v21, &v39);
        v22 = (_DWORD *)v38;
        MiLockWorkingSetShared((__int64)&unk_140E37D40);
        MiLockNestedPageTable((__int64)&unk_140E37D40, v13);
        v23 = v39;
      }
      v24 = (unsigned int)v22[11] - (unsigned __int64)(v22[13] & 0x3FFFFFFF) - v23;
      v12 = (v22[8] >> 1) & 0x1F;
      v40 = v8 + 8 * (v24 - 1);
      if ( (v12 & 5) == 5 )
        v12 &= ~1u;
    }
    v16 = *(_QWORD *)v8;
    if ( a5 )
      v17 = MiRestrictSystemCodeProtection(*(_QWORD *)v8, v12);
    else
      v17 = v12;
    v35 = v17;
    if ( (v16 & 1) != 0 )
    {
      v41 = (v16 >> 12) & 0xFFFFFFFFFFLL;
      v18 = 48 * v41 - 0x220000000000LL;
      if ( *(__int64 *)(v18 + 40) >= 0 )
      {
        if ( (MiGetPagePrivilege(48 * v41 - 0x220000000000LL, 2, 0LL) & 0x40) != 0 )
        {
          if ( (v35 & 6) != 0 )
            goto LABEL_41;
        }
        else if ( (MiFlags & 0x8000) != 0 && (v35 & 4) != 0 && ((*(_QWORD *)(v18 + 40) >> 60) & 7) == 3 )
        {
LABEL_41:
          v10 = 0;
          break;
        }
        v19 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v18 + 24), 0x3FuLL) )
        {
          do
          {
            if ( (++v19 & HvlLongSpinCountMask) == 0
              && (HvlEnlightenments & 0x40) != 0
              && KiCheckVpBackingLongSpinWaitHypercall() )
            {
              HvlNotifyLongSpinWait(v19);
            }
            else
            {
              _mm_pause();
            }
          }
          while ( *(__int64 *)(v18 + 24) < 0 );
        }
        *(_QWORD *)(v18 + 16) = (32LL * v35) ^ (*(_QWORD *)(v18 + 16) ^ (32LL * v35)) & 0xFFFFFFFFFFFFFC1FuLL;
        if ( v37 )
          MiMarkPfnVerified(v18, 4LL);
        v14 = 0LL;
        if ( (v16 & 0x42) != 0 )
          v14 = MiCaptureDirtyBitToPfn(v18);
        _InterlockedAnd64((volatile signed __int64 *)(v18 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( v14 )
          MiReleasePageFileInfo(*((_QWORD *)qword_140E2FF88 + ((*(_QWORD *)(v18 + 40) >> 43) & 0x3FFLL)), v14, 1LL);
        ValidPte = MiMakeValidPte(v8, v41, v35);
        if ( (v35 & 4) != 0 && (v16 & 0x42) != 0 && (v35 & 1) == 0 )
          ValidPte |= 0x42uLL;
        MiWriteValidPteNewProtection(v8, ValidPte);
        if ( (MiFlags & 0x100) == 0 && (MiFlags & 0x200) == 0 || (unsigned int)MI_TIGHTER_PERMISSIONS(v16, ValidPte) )
        {
          if ( !ProcessorFlushList )
          {
            ProcessorFlushList = MiGetProcessorFlushList();
            MiInitializeTbFlushList(
              (__int64)ProcessorFlushList,
              (__int64)&unk_140E37D40,
              *((_DWORD *)ProcessorFlushList + 3),
              0,
              32);
          }
          MiInsertTbFlushEntry((__int64)ProcessorFlushList, v11, 1LL, 0);
        }
LABEL_21:
        v6 = v46;
      }
LABEL_22:
      v8 += 8LL;
      v11 += 4096LL;
LABEL_23:
      v13 = v36;
    }
    else
    {
      if ( (v16 & 0x400) != 0 )
        goto LABEL_22;
      if ( (v16 & 0x800) == 0 )
      {
        if ( v16 && v6 != 256 )
          *(_QWORD *)v8 = (32LL * v17) ^ (v16 ^ (32LL * v17)) & 0xFFFFFFFFFFFFFC1FuLL;
        goto LABEL_22;
      }
      while ( 1 )
      {
        v25 = MI_READ_PTE_LOCK_FREE(v8);
        v6 = v46;
        v26 = v25;
        v13 = v36;
        if ( (v25 & 0x800) == 0 )
          break;
        if ( MiInvalidPteConforms(v25) )
        {
          if ( qword_140E2DB80 )
          {
            if ( (v26 & 0x10) != 0 )
              v27 &= ~0x10uLL;
            else
              v27 = v26 & ~qword_140E2DB80;
          }
          v28 = (v27 >> 12) & 0xFFFFFFFFFFLL;
          v29 = 48 * v28 - 0x220000000000LL;
          if ( v28 <= qword_140E2DBE0 && ((*(_QWORD *)(48 * v28 - 0x21FFFFFFFFD8LL) >> 54) & 1) != 0 )
          {
            v30 = 0;
            while ( _interlockedbittestandset64((volatile signed __int32 *)(v29 + 24), 0x3FuLL) )
            {
              do
              {
                if ( (++v30 & HvlLongSpinCountMask) == 0
                  && (HvlEnlightenments & 0x40) != 0
                  && KiCheckVpBackingLongSpinWaitHypercall() )
                {
                  HvlNotifyLongSpinWait(v30);
                }
                else
                {
                  _mm_pause();
                }
              }
              while ( *(__int64 *)(v29 + 24) < 0 );
            }
            if ( MI_READ_PTE_LOCK_FREE(v8) == v26 )
            {
              if ( (*(_DWORD *)(*((_QWORD *)qword_140E2FF88 + ((*(_QWORD *)(v29 + 40) >> 43) & 0x3FFLL)) + 4LL) & 0x80u) != 0 )
              {
                v6 = v46;
                v29 = MiLockSpecialPurposeMemoryCachedPage(v29, 0);
                if ( !v29 )
                  goto LABEL_23;
              }
              if ( (*(_QWORD *)(v29 + 8) | 0x8000000000000000uLL) != v8
                && (*(_QWORD *)(v29 + 40) & 0x10000000000LL) == 0 )
              {
                KeBugCheckEx(0x1Au, 0x411uLL, v8, v26, *(_QWORD *)(v29 + 8));
              }
              v6 = v46;
              v31 = v29 == 0;
              v13 = v36;
              if ( !v31 )
              {
                v32 = *(_QWORD *)v8;
                v33 = *(_QWORD *)v8;
                if ( qword_140E2DB80 )
                {
                  if ( (v32 & 0x10) != 0 )
                    v33 &= ~0x10uLL;
                  else
                    v33 = v32 & ~qword_140E2DB80;
                }
                v34 = 32LL * v35;
                *(_QWORD *)(48 * ((v33 >> 12) & 0xFFFFFFFFFFLL) - 0x21FFFFFFFFF0LL) = v34 ^ (*(_QWORD *)(48 * ((v33 >> 12) & 0xFFFFFFFFFFLL) - 0x21FFFFFFFFF0LL) ^ v34) & 0xFFFFFFFFFFFFFC1FuLL;
                *(_QWORD *)v8 = v34 ^ (v32 ^ v34) & 0xFFFFFFFFFFFFFC1FuLL;
                _InterlockedAnd64(
                  (volatile signed __int64 *)(48 * ((v33 >> 12) & 0xFFFFFFFFFFLL) - 0x21FFFFFFFFE8LL),
                  0x7FFFFFFFFFFFFFFFuLL);
                goto LABEL_21;
              }
              goto LABEL_24;
            }
            _InterlockedAnd64((volatile signed __int64 *)(v29 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          }
        }
      }
    }
  }
  if ( ProcessorFlushList )
  {
    MiFlushTbList((__int64)ProcessorFlushList);
    MiReleaseProcessorFlushList();
  }
  if ( v36 )
    MiUnlockPageTableInternal((__int64)&unk_140E37D40, v36);
  MiUnlockWorkingSetShared((__int64)&unk_140E37D40, v44);
  return v10;
}
