/*
 * XREFs of MiSetSystemCodeProtection @ 0x1404289BC
 * Callers:
 *     MiSetImageProtection @ 0x14042896C (MiSetImageProtection.c)
 *     MmProtectDriverSection @ 0x14066C990 (MmProtectDriverSection.c)
 *     MiProtectSystemImage @ 0x140A8D1E8 (MiProtectSystemImage.c)
 *     MiProtectKernelCfgData @ 0x140C50C60 (MiProtectKernelCfgData.c)
 * Callees:
 *     MiLockNestedPageTable @ 0x140201F50 (MiLockNestedPageTable.c)
 *     MiLockSpecialPurposeMemoryCachedPage @ 0x140204044 (MiLockSpecialPurposeMemoryCachedPage.c)
 *     MiCaptureDirtyBitToPfn @ 0x140206E50 (MiCaptureDirtyBitToPfn.c)
 *     MiReleaseProcessorFlushList @ 0x140208120 (MiReleaseProcessorFlushList.c)
 *     MiMakeValidPte @ 0x140212550 (MiMakeValidPte.c)
 *     MiInsertTbFlushEntry @ 0x1402137F0 (MiInsertTbFlushEntry.c)
 *     MiInitializeTbFlushList @ 0x140214780 (MiInitializeTbFlushList.c)
 *     MiLockWorkingSetShared @ 0x140241250 (MiLockWorkingSetShared.c)
 *     MiUnlockWorkingSetShared @ 0x140241CF0 (MiUnlockWorkingSetShared.c)
 *     MiWriteValidPteNewProtection @ 0x140245FB0 (MiWriteValidPteNewProtection.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140246FA0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiReleasePageFileInfo @ 0x1402486F0 (MiReleasePageFileInfo.c)
 *     MiGetPagePrivilege @ 0x140249B80 (MiGetPagePrivilege.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x140293050 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiGetProcessorFlushList @ 0x1402990BC (MiGetProcessorFlushList.c)
 *     MiFlushTbList @ 0x1402A1330 (MiFlushTbList.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiOffsetToProtos @ 0x1402C28D0 (MiOffsetToProtos.c)
 *     MiUnlockPageTableInternal @ 0x1402C9C00 (MiUnlockPageTableInternal.c)
 *     MiInvalidPteConforms @ 0x1403461F0 (MiInvalidPteConforms.c)
 *     MiSectionControlArea @ 0x140355A80 (MiSectionControlArea.c)
 *     MI_TIGHTER_PERMISSIONS @ 0x1404291C0 (MI_TIGHTER_PERMISSIONS.c)
 *     MiMarkPfnVerified @ 0x1404297A4 (MiMarkPfnVerified.c)
 *     MiMakeDriverPagesPrivate @ 0x140429928 (MiMakeDriverPagesPrivate.c)
 *     MiRestrictSystemCodeProtection @ 0x1404F8E38 (MiRestrictSystemCodeProtection.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
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
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  unsigned __int64 v16; // rdi
  __int64 v17; // r9
  unsigned __int64 v18; // rax
  unsigned __int64 ValidPte; // rbx
  __int64 v20; // r8
  unsigned __int64 v21; // rdi
  unsigned int v22; // eax
  __int64 v23; // rbx
  unsigned int v24; // ebp
  unsigned __int64 v26; // rbx
  _DWORD *v27; // r14
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // r9
  unsigned __int64 v31; // rdx
  unsigned __int64 v32; // rcx
  __int64 v33; // rax
  ULONG_PTR v34; // rbx
  unsigned __int64 v35; // rcx
  unsigned __int64 v36; // rcx
  __int64 v37; // rdi
  unsigned int v38; // ebp
  bool v39; // zf
  unsigned __int64 v40; // rcx
  unsigned __int64 v41; // rax
  __int64 v42; // r8
  unsigned int v43; // [rsp+30h] [rbp-98h]
  unsigned __int64 v44; // [rsp+38h] [rbp-90h]
  int v45; // [rsp+40h] [rbp-88h]
  __int64 v46; // [rsp+48h] [rbp-80h]
  unsigned __int64 v47; // [rsp+50h] [rbp-78h] BYREF
  unsigned __int64 v48; // [rsp+58h] [rbp-70h]
  unsigned __int64 v49; // [rsp+60h] [rbp-68h]
  unsigned __int64 v50; // [rsp+68h] [rbp-60h]
  unsigned __int8 v52; // [rsp+D8h] [rbp+10h]
  unsigned int v54; // [rsp+E8h] [rbp+20h]

  v54 = a4;
  ProcessorFlushList = 0LL;
  v6 = a4;
  v47 = 0LL;
  v8 = a2;
  v10 = 1;
  if ( a4 != 24 && (a4 & 0x10) != 0 )
  {
    v6 = a4 & 0xFFFFFFEF;
    v45 = 1;
    v54 = a4 & 0xFFFFFFEF;
  }
  else
  {
    v45 = 0;
  }
  v11 = (__int64)(a2 << 25) >> 16;
  if ( (unsigned int)MI_IS_PHYSICAL_ADDRESS(v11) )
    return v10;
  v12 = v6;
  if ( v6 == 256 )
  {
    v50 = MiSectionControlArea(*(_QWORD *)(a1 + 112));
    v46 = 0LL;
    v48 = 0LL;
  }
  else
  {
    v48 = a3;
    v50 = 0LL;
    v12 = v6 & 0xFFFFFFFE;
    v46 = 0LL;
    if ( (v6 & 5) != 5 )
      v12 = v6;
    if ( (int)MiMakeDriverPagesPrivate(a1, v8, a3, (v12 >> 1) & 2) < 0 )
      return 0LL;
  }
  v16 = 0LL;
  v44 = 0LL;
  v52 = MiLockWorkingSetShared((__int64)&unk_140E37E80, v13, v14, v15);
LABEL_24:
  while ( v8 <= a3 )
  {
    if ( !v16 )
      goto LABEL_51;
    if ( (v8 & 0xFFF) == 0 )
    {
      if ( ProcessorFlushList )
      {
        MiFlushTbList((__int64)ProcessorFlushList);
        MiReleaseProcessorFlushList();
        ProcessorFlushList = 0LL;
      }
      MiUnlockPageTableInternal((__int64)&unk_140E37E80, v16);
LABEL_51:
      v16 = ((v8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v44 = v16;
      MiLockNestedPageTable((__int64)&unk_140E37E80, v16);
    }
    if ( v8 > v48 )
    {
      v26 = v11 - *(_QWORD *)(a1 + 48);
      if ( v46 )
      {
        v27 = *(_DWORD **)(v46 + 16);
        v31 = 0LL;
        v46 = (__int64)v27;
        v47 = 0LL;
      }
      else
      {
        if ( ProcessorFlushList )
        {
          MiFlushTbList((__int64)ProcessorFlushList);
          MiReleaseProcessorFlushList();
          ProcessorFlushList = 0LL;
        }
        MiUnlockPageTableInternal((__int64)&unk_140E37E80, v16);
        MiUnlockWorkingSetShared((__int64)&unk_140E37E80, v52);
        v46 = MiOffsetToProtos(v50, v26, &v47);
        v27 = (_DWORD *)v46;
        MiLockWorkingSetShared((__int64)&unk_140E37E80, v28, v29, v30);
        MiLockNestedPageTable((__int64)&unk_140E37E80, v16);
        v31 = v47;
      }
      v32 = (unsigned int)v27[11] - (unsigned __int64)(v27[13] & 0x3FFFFFFF) - v31;
      v12 = (v27[8] >> 1) & 0x1F;
      v48 = v8 + 8 * (v32 - 1);
      if ( (v12 & 5) == 5 )
        v12 &= ~1u;
    }
    v21 = *(_QWORD *)v8;
    if ( a5 )
      v22 = MiRestrictSystemCodeProtection(*(_QWORD *)v8, v12);
    else
      v22 = v12;
    v43 = v22;
    if ( (v21 & 1) != 0 )
    {
      v49 = (v21 >> 12) & 0xFFFFFFFFFFLL;
      v23 = 48 * v49 - 0x220000000000LL;
      if ( *(__int64 *)(v23 + 40) >= 0 )
      {
        if ( (MiGetPagePrivilege(48 * v49 - 0x220000000000LL, 2, 0LL) & 0x40) != 0 )
        {
          if ( (v43 & 6) != 0 )
            goto LABEL_41;
        }
        else if ( (MiFlags & 0x8000) != 0 && (v43 & 4) != 0 && ((*(_QWORD *)(v23 + 40) >> 60) & 7) == 3 )
        {
LABEL_41:
          v10 = 0;
          break;
        }
        v24 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v23 + 24), 0x3FuLL) )
        {
          do
          {
            if ( (++v24 & HvlLongSpinCountMask) == 0
              && (HvlEnlightenments & 0x40) != 0
              && KiCheckVpBackingLongSpinWaitHypercall() )
            {
              HvlNotifyLongSpinWait(v24);
            }
            else
            {
              _mm_pause();
            }
          }
          while ( *(__int64 *)(v23 + 24) < 0 );
        }
        *(_QWORD *)(v23 + 16) = (32LL * v43) ^ (*(_QWORD *)(v23 + 16) ^ (32LL * v43)) & 0xFFFFFFFFFFFFFC1FuLL;
        if ( v45 )
          MiMarkPfnVerified(v23, 4LL);
        v18 = 0LL;
        if ( (v21 & 0x42) != 0 )
          v18 = MiCaptureDirtyBitToPfn(v23);
        _InterlockedAnd64((volatile signed __int64 *)(v23 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( v18 )
          MiReleasePageFileInfo(*((_QWORD *)qword_140E300C8 + ((*(_QWORD *)(v23 + 40) >> 43) & 0x3FFLL)), v18, 1LL, v17);
        ValidPte = MiMakeValidPte(v8, v49, v43);
        if ( (v43 & 4) != 0 && (v21 & 0x42) != 0 && (v43 & 1) == 0 )
          ValidPte |= 0x42uLL;
        MiWriteValidPteNewProtection(v8, ValidPte, v20);
        if ( (MiFlags & 0x100) == 0 && (MiFlags & 0x200) == 0 || (unsigned int)MI_TIGHTER_PERMISSIONS(v21, ValidPte) )
        {
          if ( !ProcessorFlushList )
          {
            ProcessorFlushList = MiGetProcessorFlushList();
            MiInitializeTbFlushList(
              (__int64)ProcessorFlushList,
              (__int64)&unk_140E37E80,
              *((_DWORD *)ProcessorFlushList + 3),
              0,
              32);
          }
          MiInsertTbFlushEntry((__int64)ProcessorFlushList, v11, 1LL, 0);
        }
LABEL_21:
        v6 = v54;
      }
LABEL_22:
      v8 += 8LL;
      v11 += 4096LL;
LABEL_23:
      v16 = v44;
    }
    else
    {
      if ( (v21 & 0x400) != 0 )
        goto LABEL_22;
      if ( (v21 & 0x800) == 0 )
      {
        if ( v21 && v6 != 256 )
          *(_QWORD *)v8 = (32LL * v22) ^ (v21 ^ (32LL * v22)) & 0xFFFFFFFFFFFFFC1FuLL;
        goto LABEL_22;
      }
      while ( 1 )
      {
        v33 = MI_READ_PTE_LOCK_FREE(v8);
        v6 = v54;
        v34 = v33;
        v16 = v44;
        if ( (v33 & 0x800) == 0 )
          break;
        if ( MiInvalidPteConforms(v33) )
        {
          if ( qword_140E2DCC0 )
          {
            if ( (v34 & 0x10) != 0 )
              v35 &= ~0x10uLL;
            else
              v35 = v34 & ~qword_140E2DCC0;
          }
          v36 = (v35 >> 12) & 0xFFFFFFFFFFLL;
          v37 = 48 * v36 - 0x220000000000LL;
          if ( v36 <= qword_140E2DD20 && ((*(_QWORD *)(48 * v36 - 0x21FFFFFFFFD8LL) >> 54) & 1) != 0 )
          {
            v38 = 0;
            while ( _interlockedbittestandset64((volatile signed __int32 *)(v37 + 24), 0x3FuLL) )
            {
              do
              {
                if ( (++v38 & HvlLongSpinCountMask) == 0
                  && (HvlEnlightenments & 0x40) != 0
                  && KiCheckVpBackingLongSpinWaitHypercall() )
                {
                  HvlNotifyLongSpinWait(v38);
                }
                else
                {
                  _mm_pause();
                }
              }
              while ( *(__int64 *)(v37 + 24) < 0 );
            }
            if ( MI_READ_PTE_LOCK_FREE(v8) == v34 )
            {
              if ( (*(_DWORD *)(*((_QWORD *)qword_140E300C8 + ((*(_QWORD *)(v37 + 40) >> 43) & 0x3FFLL)) + 4LL) & 0x80u) != 0 )
              {
                v6 = v54;
                v37 = MiLockSpecialPurposeMemoryCachedPage(v37, 0);
                if ( !v37 )
                  goto LABEL_23;
              }
              if ( (*(_QWORD *)(v37 + 8) | 0x8000000000000000uLL) != v8
                && (*(_QWORD *)(v37 + 40) & 0x10000000000LL) == 0 )
              {
                KeBugCheckEx(0x1Au, 0x411uLL, v8, v34, *(_QWORD *)(v37 + 8));
              }
              v6 = v54;
              v39 = v37 == 0;
              v16 = v44;
              if ( !v39 )
              {
                v40 = *(_QWORD *)v8;
                v41 = *(_QWORD *)v8;
                if ( qword_140E2DCC0 )
                {
                  if ( (v40 & 0x10) != 0 )
                    v41 &= ~0x10uLL;
                  else
                    v41 = v40 & ~qword_140E2DCC0;
                }
                v42 = 32LL * v43;
                *(_QWORD *)(48 * ((v41 >> 12) & 0xFFFFFFFFFFLL) - 0x21FFFFFFFFF0LL) = v42 ^ (*(_QWORD *)(48 * ((v41 >> 12) & 0xFFFFFFFFFFLL) - 0x21FFFFFFFFF0LL) ^ v42) & 0xFFFFFFFFFFFFFC1FuLL;
                *(_QWORD *)v8 = v42 ^ (v40 ^ v42) & 0xFFFFFFFFFFFFFC1FuLL;
                _InterlockedAnd64(
                  (volatile signed __int64 *)(48 * ((v41 >> 12) & 0xFFFFFFFFFFLL) - 0x21FFFFFFFFE8LL),
                  0x7FFFFFFFFFFFFFFFuLL);
                goto LABEL_21;
              }
              goto LABEL_24;
            }
            _InterlockedAnd64((volatile signed __int64 *)(v37 + 24), 0x7FFFFFFFFFFFFFFFuLL);
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
  if ( v44 )
    MiUnlockPageTableInternal((__int64)&unk_140E37E80, v44);
  MiUnlockWorkingSetShared((__int64)&unk_140E37E80, v52);
  return v10;
}
