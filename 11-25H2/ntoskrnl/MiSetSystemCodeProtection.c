/*
 * XREFs of MiSetSystemCodeProtection @ 0x1403F3480
 * Callers:
 *     MiSetImageProtection @ 0x1403F3430 (MiSetImageProtection.c)
 *     MmProtectDriverSection @ 0x14065FC80 (MmProtectDriverSection.c)
 *     MiProtectSystemImage @ 0x140A8B9E8 (MiProtectSystemImage.c)
 *     MiProtectKernelCfgData @ 0x140C3D8A0 (MiProtectKernelCfgData.c)
 * Callees:
 *     MiMakeValidPte @ 0x14020EF10 (MiMakeValidPte.c)
 *     MiLockWorkingSetShared @ 0x140212A90 (MiLockWorkingSetShared.c)
 *     MiCaptureDirtyBitToPfn @ 0x14022F970 (MiCaptureDirtyBitToPfn.c)
 *     MiGetPagePrivilege @ 0x140230BA0 (MiGetPagePrivilege.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140231F50 (MI_READ_PTE_LOCK_FREE.c)
 *     MiInvalidPteConforms @ 0x1402343E0 (MiInvalidPteConforms.c)
 *     MiReleasePageFileInfo @ 0x1402346B0 (MiReleasePageFileInfo.c)
 *     MiReleaseProcessorFlushList @ 0x140237CC0 (MiReleaseProcessorFlushList.c)
 *     MiUnlockPageTable @ 0x14028B6B0 (MiUnlockPageTable.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x1402AC190 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiWriteValidPteNewProtection @ 0x1402B83C0 (MiWriteValidPteNewProtection.c)
 *     MiUnlockWorkingSetShared @ 0x1402B9D50 (MiUnlockWorkingSetShared.c)
 *     MiOffsetToProtos @ 0x1402BBD30 (MiOffsetToProtos.c)
 *     MiLockNestedPageTable @ 0x1402FB780 (MiLockNestedPageTable.c)
 *     MiInsertTbFlushEntry @ 0x1403278B0 (MiInsertTbFlushEntry.c)
 *     MiFlushTbList @ 0x14032BCA0 (MiFlushTbList.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiLockSpecialPurposeMemoryCachedPage @ 0x14033F5DC (MiLockSpecialPurposeMemoryCachedPage.c)
 *     MiGetProcessorFlushList @ 0x140381500 (MiGetProcessorFlushList.c)
 *     MiInitializeTbFlushList @ 0x140388790 (MiInitializeTbFlushList.c)
 *     MiSectionControlArea @ 0x1403B4FE0 (MiSectionControlArea.c)
 *     MI_TIGHTER_PERMISSIONS @ 0x1403F3C10 (MI_TIGHTER_PERMISSIONS.c)
 *     MiMarkPfnVerified @ 0x1403F4204 (MiMarkPfnVerified.c)
 *     MiMakeDriverPagesPrivate @ 0x1403F4388 (MiMakeDriverPagesPrivate.c)
 *     KeYieldProcessorEx @ 0x1403F49C0 (KeYieldProcessorEx.c)
 *     MiRestrictSystemCodeProtection @ 0x1404F8E68 (MiRestrictSystemCodeProtection.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 */

__int64 __fastcall MiSetSystemCodeProtection(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned int a4,
        int a5)
{
  __int64 *ProcessorFlushList; // r13
  unsigned int v6; // r14d
  unsigned __int64 v8; // rsi
  unsigned int v10; // r12d
  unsigned __int64 v11; // r15
  unsigned int v12; // ebp
  unsigned __int64 v13; // rdi
  __int64 v14; // r8
  __int64 v15; // r9
  unsigned __int64 v16; // rax
  unsigned __int64 ValidPte; // rbx
  unsigned __int64 v18; // rdi
  unsigned int v19; // eax
  __int64 v20; // rbx
  int v21; // r14d
  unsigned __int64 v23; // rbx
  _DWORD *v24; // rbp
  __int64 v25; // r8
  __int64 v26; // r9
  unsigned __int64 v27; // rdx
  unsigned __int64 v28; // rcx
  __int64 v29; // rax
  ULONG_PTR v30; // rbx
  unsigned __int64 v31; // rcx
  unsigned __int64 v32; // rcx
  __int64 v33; // rdi
  bool v34; // zf
  unsigned __int64 v35; // rcx
  unsigned __int64 v36; // rax
  unsigned int v37; // [rsp+30h] [rbp-A8h]
  unsigned __int64 v38; // [rsp+38h] [rbp-A0h]
  int v39; // [rsp+40h] [rbp-98h]
  __int64 v40; // [rsp+48h] [rbp-90h]
  int v41; // [rsp+50h] [rbp-88h] BYREF
  unsigned __int64 v42; // [rsp+58h] [rbp-80h] BYREF
  unsigned __int64 v43; // [rsp+60h] [rbp-78h]
  unsigned __int64 v44; // [rsp+68h] [rbp-70h]
  unsigned __int64 v45; // [rsp+70h] [rbp-68h]
  unsigned __int8 v47; // [rsp+E8h] [rbp+10h]
  unsigned int v49; // [rsp+F8h] [rbp+20h]

  v49 = a4;
  ProcessorFlushList = 0LL;
  v6 = a4;
  v42 = 0LL;
  v8 = a2;
  v10 = 1;
  if ( a4 != 24 && (a4 & 0x10) != 0 )
  {
    v6 = a4 & 0xFFFFFFEF;
    v39 = 1;
    v49 = a4 & 0xFFFFFFEF;
  }
  else
  {
    v39 = 0;
  }
  v11 = (__int64)(a2 << 25) >> 16;
  if ( (unsigned int)MI_IS_PHYSICAL_ADDRESS(v11) )
    return v10;
  v12 = v6;
  if ( v6 == 256 )
  {
    v45 = MiSectionControlArea(*(_QWORD *)(a1 + 112));
    v40 = 0LL;
    v43 = 0LL;
  }
  else
  {
    v43 = a3;
    v45 = 0LL;
    v12 = v6 & 0xFFFFFFFE;
    v40 = 0LL;
    if ( (v6 & 5) != 5 )
      v12 = v6;
    if ( (int)MiMakeDriverPagesPrivate(a1, v8, a3, (v12 >> 1) & 2) < 0 )
      return 0LL;
  }
  v13 = 0LL;
  v38 = 0LL;
  v47 = MiLockWorkingSetShared((__int64)&unk_140E37B00);
LABEL_24:
  while ( v8 <= a3 )
  {
    if ( !v13 )
      goto LABEL_49;
    if ( (v8 & 0xFFF) == 0 )
    {
      if ( ProcessorFlushList )
      {
        MiFlushTbList((__int64)ProcessorFlushList);
        MiReleaseProcessorFlushList();
        ProcessorFlushList = 0LL;
      }
      MiUnlockPageTable((__int64)&unk_140E37B00, v13);
LABEL_49:
      v13 = ((v8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v38 = v13;
      MiLockNestedPageTable((__int64)&unk_140E37B00, v13, v14, v15);
    }
    if ( v8 > v43 )
    {
      v23 = v11 - *(_QWORD *)(a1 + 48);
      if ( v40 )
      {
        v24 = *(_DWORD **)(v40 + 16);
        v27 = 0LL;
        v40 = (__int64)v24;
        v42 = 0LL;
      }
      else
      {
        if ( ProcessorFlushList )
        {
          MiFlushTbList((__int64)ProcessorFlushList);
          MiReleaseProcessorFlushList();
          ProcessorFlushList = 0LL;
        }
        MiUnlockPageTable((__int64)&unk_140E37B00, v13);
        MiUnlockWorkingSetShared((__int64)&unk_140E37B00, v47);
        v40 = MiOffsetToProtos(v45, v23, &v42);
        v24 = (_DWORD *)v40;
        MiLockWorkingSetShared((__int64)&unk_140E37B00);
        MiLockNestedPageTable((__int64)&unk_140E37B00, v13, v25, v26);
        v27 = v42;
      }
      v28 = (unsigned int)v24[11] - (unsigned __int64)(v24[13] & 0x3FFFFFFF) - v27;
      v12 = (v24[8] >> 1) & 0x1F;
      v43 = v8 + 8 * (v28 - 1);
      if ( (v12 & 5) == 5 )
        v12 &= ~1u;
    }
    v18 = *(_QWORD *)v8;
    if ( a5 )
      v19 = MiRestrictSystemCodeProtection(*(_QWORD *)v8, v12);
    else
      v19 = v12;
    v37 = v19;
    if ( (v18 & 1) != 0 )
    {
      v44 = (v18 >> 12) & 0xFFFFFFFFFFLL;
      v20 = 48 * v44 - 0x220000000000LL;
      if ( *(__int64 *)(v20 + 40) >= 0 )
      {
        if ( (MiGetPagePrivilege(48 * v44 - 0x220000000000LL, 2, 0LL) & 0x40) != 0 )
        {
          if ( (v37 & 6) != 0 )
            goto LABEL_37;
        }
        else if ( (MiFlags & 0x8000) != 0 && (v37 & 4) != 0 && ((*(_QWORD *)(v20 + 40) >> 60) & 7) == 3 )
        {
LABEL_37:
          v10 = 0;
          break;
        }
        v21 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v20 + 24), 0x3FuLL) )
        {
          do
          {
            if ( (++v21 & HvlLongSpinCountMask) == 0
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
          while ( *(__int64 *)(v20 + 24) < 0 );
        }
        *(_QWORD *)(v20 + 16) = (32LL * v37) ^ (*(_QWORD *)(v20 + 16) ^ (32LL * v37)) & 0xFFFFFFFFFFFFFC1FuLL;
        if ( v39 )
          MiMarkPfnVerified(v20, 4LL);
        v16 = 0LL;
        if ( (v18 & 0x42) != 0 )
          v16 = MiCaptureDirtyBitToPfn(v20);
        _InterlockedAnd64((volatile signed __int64 *)(v20 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( v16 )
          MiReleasePageFileInfo(*((_QWORD *)qword_140E2FD48 + ((*(_QWORD *)(v20 + 40) >> 43) & 0x3FFLL)), v16, 1);
        ValidPte = MiMakeValidPte(v8, v44, v37);
        if ( (v37 & 5) == 4 && (v18 & 0x42) != 0 )
          ValidPte |= 0x42uLL;
        MiWriteValidPteNewProtection(v8, ValidPte);
        if ( (MiFlags & 0x100) == 0 && (MiFlags & 0x200) == 0 || (unsigned int)MI_TIGHTER_PERMISSIONS(v18, ValidPte) )
        {
          if ( !ProcessorFlushList )
          {
            ProcessorFlushList = MiGetProcessorFlushList();
            MiInitializeTbFlushList(
              (__int64)ProcessorFlushList,
              (__int64)&unk_140E37B00,
              *((_DWORD *)ProcessorFlushList + 3),
              0,
              32);
          }
          MiInsertTbFlushEntry((__int64)ProcessorFlushList, v11, 1LL, 0);
        }
        v6 = v49;
      }
LABEL_22:
      v8 += 8LL;
      v11 += 4096LL;
LABEL_23:
      v13 = v38;
    }
    else
    {
      if ( (v18 & 0x400) != 0 )
        goto LABEL_22;
      if ( (v18 & 0x800) == 0 )
      {
        if ( v18 && v6 != 256 )
          *(_QWORD *)v8 = (32LL * v19) ^ (v18 ^ (32LL * v19)) & 0xFFFFFFFFFFFFFC1FuLL;
        goto LABEL_22;
      }
      while ( 1 )
      {
        v29 = MI_READ_PTE_LOCK_FREE(v8);
        v13 = v38;
        v30 = v29;
        if ( (v29 & 0x800) == 0 )
          break;
        if ( MiInvalidPteConforms(v29) )
        {
          if ( qword_140E2D940 )
          {
            if ( (v30 & 0x10) != 0 )
              v31 &= ~0x10uLL;
            else
              v31 = v30 & ~qword_140E2D940;
          }
          v32 = (v31 >> 12) & 0xFFFFFFFFFFLL;
          v33 = 48 * v32 - 0x220000000000LL;
          if ( v32 <= qword_140E2D9A0 && ((*(_QWORD *)(48 * v32 - 0x21FFFFFFFFD8LL) >> 54) & 1) != 0 )
          {
            v41 = 0;
            while ( _interlockedbittestandset64((volatile signed __int32 *)(v33 + 24), 0x3FuLL) )
            {
              do
                KeYieldProcessorEx(&v41);
              while ( *(__int64 *)(v33 + 24) < 0 );
            }
            if ( MI_READ_PTE_LOCK_FREE(v8) == v30 )
            {
              if ( (*(_DWORD *)(*((_QWORD *)qword_140E2FD48 + ((*(_QWORD *)(v33 + 40) >> 43) & 0x3FFLL)) + 4LL) & 0x80u) != 0 )
              {
                v33 = MiLockSpecialPurposeMemoryCachedPage(v33, 0LL, v14, v15);
                if ( !v33 )
                  goto LABEL_23;
              }
              if ( (*(_QWORD *)(v33 + 8) | 0x8000000000000000uLL) != v8
                && (*(_QWORD *)(v33 + 40) & 0x10000000000LL) == 0 )
              {
                KeBugCheckEx(0x1Au, 0x411uLL, v8, v30, *(_QWORD *)(v33 + 8));
              }
              v34 = v33 == 0;
              v13 = v38;
              if ( !v34 )
              {
                v35 = *(_QWORD *)v8;
                v36 = *(_QWORD *)v8;
                if ( qword_140E2D940 )
                {
                  if ( (v35 & 0x10) != 0 )
                    v36 &= ~0x10uLL;
                  else
                    v36 = v35 & ~qword_140E2D940;
                }
                v15 = 6 * ((v36 >> 12) & 0xFFFFFFFFFFLL);
                v14 = 32LL * v37;
                *(_QWORD *)(48 * ((v36 >> 12) & 0xFFFFFFFFFFLL) - 0x21FFFFFFFFF0LL) = v14 ^ (*(_QWORD *)(48 * ((v36 >> 12) & 0xFFFFFFFFFFLL) - 0x21FFFFFFFFF0LL) ^ v14) & 0xFFFFFFFFFFFFFC1FuLL;
                *(_QWORD *)v8 = v14 ^ (v35 ^ v14) & 0xFFFFFFFFFFFFFC1FuLL;
                _InterlockedAnd64(
                  (volatile signed __int64 *)(48 * ((v36 >> 12) & 0xFFFFFFFFFFLL) - 0x21FFFFFFFFE8LL),
                  0x7FFFFFFFFFFFFFFFuLL);
                goto LABEL_22;
              }
              goto LABEL_24;
            }
            _InterlockedAnd64((volatile signed __int64 *)(v33 + 24), 0x7FFFFFFFFFFFFFFFuLL);
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
  if ( v38 )
    MiUnlockPageTable((__int64)&unk_140E37B00, v38);
  MiUnlockWorkingSetShared((__int64)&unk_140E37B00, v47);
  return v10;
}
