/*
 * XREFs of MiFillSystemPtes @ 0x14032AD60
 * Callers:
 *     MmMapLockedPagesSpecifyCache @ 0x140329CF0 (MmMapLockedPagesSpecifyCache.c)
 *     MiMapContiguousMemory @ 0x140413F8C (MiMapContiguousMemory.c)
 *     MmMapMdl @ 0x14066B340 (MmMapMdl.c)
 *     MiAllocateZeroCalibrationBuffer @ 0x140687BD4 (MiAllocateZeroCalibrationBuffer.c)
 *     MiLockAndMapEntireDriver @ 0x1407E0A98 (MiLockAndMapEntireDriver.c)
 *     MiMapHotPatchImageInSystemSpace @ 0x1407E52D0 (MiMapHotPatchImageInSystemSpace.c)
 * Callees:
 *     MiMakeValidPte @ 0x14020EF10 (MiMakeValidPte.c)
 *     MiUserPdeOrAbove @ 0x14020F170 (MiUserPdeOrAbove.c)
 *     MiReleaseProcessorFlushList @ 0x140237CC0 (MiReleaseProcessorFlushList.c)
 *     MiReferenceIoPages @ 0x1402AD138 (MiReferenceIoPages.c)
 *     MiGetPageTablePfnBuddyRaw @ 0x1402C9D00 (MiGetPageTablePfnBuddyRaw.c)
 *     MiVaToFlushVm @ 0x140327844 (MiVaToFlushVm.c)
 *     MiInsertTbFlushEntry @ 0x1403278B0 (MiInsertTbFlushEntry.c)
 *     MiClearMappingAndDereferenceIoSpace @ 0x1403292C0 (MiClearMappingAndDereferenceIoSpace.c)
 *     MiUnlockPage @ 0x14032B850 (MiUnlockPage.c)
 *     MiLockPageInline @ 0x14032B8A0 (MiLockPageInline.c)
 *     MiFlushTbList @ 0x14032BCA0 (MiFlushTbList.c)
 *     MiCheckLinearProtectedPteAccessedBit @ 0x14037CB60 (MiCheckLinearProtectedPteAccessedBit.c)
 *     MiGetProcessorFlushList @ 0x140381500 (MiGetProcessorFlushList.c)
 *     MiInitializeTbFlushList @ 0x140388790 (MiInitializeTbFlushList.c)
 *     MiIoSpaceGetBounds @ 0x140392208 (MiIoSpaceGetBounds.c)
 *     MiShowBadMapper @ 0x1403BAD60 (MiShowBadMapper.c)
 *     MiGetPfnPageSizeIndexUnsynchronized @ 0x1404337D0 (MiGetPfnPageSizeIndexUnsynchronized.c)
 *     MiIoPagesInRun @ 0x140476A2C (MiIoPagesInRun.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 */

__int64 __fastcall MiFillSystemPtes(
        ULONG_PTR BugCheckParameter2,
        unsigned __int64 a2,
        __int64 a3,
        unsigned int a4,
        char a5,
        _DWORD *a6)
{
  _DWORD *v6; // r11
  unsigned __int64 v7; // r14
  unsigned int v8; // esi
  int v9; // ebp
  __int64 v10; // r10
  ULONG_PTR v12; // rdi
  unsigned __int64 v13; // rbx
  unsigned __int64 v14; // rax
  int v15; // r9d
  int v16; // eax
  __int64 v17; // rdx
  unsigned __int64 v18; // r13
  unsigned __int64 v19; // r12
  unsigned __int64 v20; // r8
  char v21; // dl
  unsigned __int64 v22; // r8
  unsigned __int64 v23; // rcx
  unsigned __int64 v24; // r8
  __int64 v25; // rax
  bool v26; // zf
  unsigned __int64 v27; // r9
  unsigned __int64 *v28; // rcx
  unsigned __int64 *v29; // rax
  int v30; // edx
  ULONG_PTR ValidPte; // rbx
  int v33; // r15d
  unsigned __int64 v34; // r8
  unsigned __int64 v35; // rdi
  bool v36; // cc
  int v37; // eax
  __int64 v38; // r15
  int v39; // edx
  unsigned __int64 v40; // rcx
  unsigned __int8 v41; // r8
  unsigned __int8 CurrentIrql; // bl
  unsigned __int64 v43; // rbx
  unsigned __int64 v44; // rdx
  char v45; // cl
  PEPROCESS PageTablePfnBuddyRaw; // rax
  struct _KPROCESS *v47; // r10
  int PfnPageSizeIndexUnsynchronized; // eax
  unsigned __int64 v49; // r13
  unsigned int v50; // ebp
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r8
  __int64 v54; // r9
  unsigned __int8 v55; // si
  __int64 ProcessorFlushList; // rbx
  __int64 v57; // rcx
  __int64 v58; // rdx
  __int64 v59; // r8
  unsigned __int64 v60; // r8
  unsigned __int64 *v61; // rdx
  unsigned __int64 v62; // rcx
  int v63; // [rsp+30h] [rbp-88h] BYREF
  unsigned __int64 v64; // [rsp+38h] [rbp-80h] BYREF
  unsigned __int64 v65; // [rsp+40h] [rbp-78h]
  unsigned __int64 *v66; // [rsp+48h] [rbp-70h]
  unsigned __int64 v67; // [rsp+50h] [rbp-68h]
  __int128 v68; // [rsp+58h] [rbp-60h] BYREF
  __int64 v69; // [rsp+68h] [rbp-50h]
  unsigned int v70; // [rsp+C0h] [rbp+8h]
  int v73; // [rsp+D0h] [rbp+18h]
  int v74; // [rsp+D8h] [rbp+20h] BYREF

  v6 = 0LL;
  v69 = 0LL;
  v7 = BugCheckParameter2;
  v70 = 0;
  v8 = a4;
  v64 = 0LL;
  v9 = 1;
  v10 = a3;
  *a6 = 0;
  v12 = 0LL;
  v68 = 0LL;
  if ( a4 )
  {
    if ( a4 != 31 )
    {
      if ( a4 >> 3 == 3 )
      {
        if ( (a4 & 7) != 0 )
          v9 = 2;
      }
      else
      {
        v9 = a4 >> 3 != 1;
      }
    }
  }
  else
  {
    v9 = 3;
  }
  v13 = MmProtectToPteMask[a4 & 0x1F] & 0xFFF0000000000E5EuLL | 0x21;
  if ( BugCheckParameter2 >= 0xFFFFF68000000000uLL )
  {
    if ( BugCheckParameter2 <= 0xFFFFF6FFFFFFFFFFuLL )
    {
      if ( BugCheckParameter2 >= 0xFFFFF6FB40000000uLL && BugCheckParameter2 <= 0xFFFFF6FB7FFFFFFFuLL )
      {
        if ( BugCheckParameter2 == 0xFFFFF6FB7DBEDF68uLL )
        {
          v13 = MmProtectToPteMask[a4 & 0x1F] & 0x7FF0000000000E5ELL | 0x8000000000000021uLL;
        }
        else if ( (a4 & 0x4000000) == 0 )
        {
          v13 = MmProtectToPteMask[a4 & 0x1F] & 0x7FF0000000000E5ELL | 0x21;
        }
        v37 = MiUserPdeOrAbove(BugCheckParameter2);
        v10 = a3;
        if ( v37 )
          v13 |= 4uLL;
      }
      v14 = (__int64)(v7 << 25) >> 16;
      v15 = v8 & 0x4000000;
      if ( (v8 & 0x4000000) != 0 && v14 >= 0xFFFFF68000000000uLL )
      {
        do
        {
          if ( v14 > 0xFFFFF6FFFFFFFFFFuLL )
            break;
          v14 = (__int64)(v14 << 25) >> 16;
        }
        while ( v14 >= 0xFFFFF68000000000uLL );
      }
      if ( v14 <= 0x7FFFFFFEFFFFLL )
      {
        v13 |= 4uLL;
      }
      else if ( v14 >= 0xFFFF800000000000uLL )
      {
        if ( v14 >= 0xFFFFF68000000000uLL && v14 <= 0xFFFFF6FFFFFFFFFFuLL )
        {
LABEL_21:
          v6 = 0LL;
          goto LABEL_22;
        }
        if ( v14 < qword_140E2F040 || (v36 = v14 <= qword_140E2F050, v16 = HIBYTE(word_140E2EB44), !v36) )
          v16 = (unsigned __int8)word_140E2EB44;
LABEL_19:
        if ( v16 )
          v13 |= 0x100uLL;
        goto LABEL_21;
      }
      v16 = HIBYTE(word_140E2EB44);
      goto LABEL_19;
    }
    v6 = 0LL;
  }
  v13 = MmProtectToPteMask[a4 & 0x1F] & 0xFFF0000000000E5EuLL | 0x121;
  v15 = a4 & 0x4000000;
LABEL_22:
  v65 = 0LL;
  v17 = v13 | 0x42;
  v18 = a2;
  v19 = 0LL;
  if ( (v8 & 5) != 4 )
    v17 = v13;
  v20 = v17 & 0xFFFFFFFFFFFFFFFBuLL;
  if ( (v8 & 0x40000000) == 0 )
    v20 = v17;
  v21 = a5;
  v22 = ((unsigned __int64)(unsigned __int8)word_140E2EB44 << 8) ^ (((unsigned __int64)(unsigned __int8)word_140E2EB44 << 8) ^ v20) & 0xFFFFFFFFFFFFFEFFuLL;
  v23 = v22 & 0xFFFFFFFFFFFFFEFFuLL;
  if ( (v8 & 0x8000000) == 0 )
    v23 = v22;
  v24 = 0LL;
  v25 = v23 | 0x80;
  v26 = v15 == 0;
  v27 = 0xFFFFDE0000000020uLL;
  if ( v26 )
    v25 = v23;
  v28 = (unsigned __int64 *)(v10 - 8);
  v67 = v25 & 0xF0FFFFFFFFFFFFFFuLL | 0xA00000000000000LL;
  if ( v10 >= 0 )
  {
    v19 = v10 - 1;
    v28 = 0LL;
  }
  while ( 1 )
  {
    if ( !v18 )
      return 0LL;
    v29 = v28 + 1;
    if ( v28 )
      v19 = *v29;
    else
      ++v19;
    if ( !v28 )
      v29 = 0LL;
    v66 = v29;
    v28 = v29;
    if ( (v21 & 2) == 0 || v19 != qword_140E370F8 )
      break;
LABEL_81:
    --v18;
    v7 += 8LL;
  }
  if ( v19 > qword_140E2D9A0 || (v6 = 0LL, (*(_QWORD *)(48 * v19 - 0x21FFFFFFFFD8LL) & 0x40000000000000LL) == 0) )
  {
    if ( v24 )
    {
      v30 = (*(_DWORD *)(v64
                       + 4
                       * ((unsigned __int64)(2
                                           * (((unsigned int)v19 & ((unsigned int)(1LL << ((unsigned __int8)dword_140E2D8F8
                                                                                         - 12))
                                                                  - 1))
                                            - *(_DWORD *)(v64 + 24))) >> 5)
                       + 44) >> ((2
                                * ((v19 & ((1LL << ((unsigned __int8)dword_140E2D8F8 - 12)) - 1)) - *(_BYTE *)(v64 + 24))) & 0x1F)) & 3;
      v65 = v24 - 1;
    }
    else
    {
      if ( !HIDWORD(v69) || v19 > *((_QWORD *)&v68 + 1) || v19 < (unsigned __int64)v68 )
      {
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( KiIrqlFlags )
          KiRaiseIrqlProcessIrqlFlags(CurrentIrql);
        MiIoSpaceGetBounds(&v68, v19);
        if ( KiIrqlFlags )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
        __writecr8(CurrentIrql);
        v28 = v66;
        v6 = 0LL;
      }
      if ( HIDWORD(v69) == 3 )
      {
        if ( v28 )
        {
          v43 = 1LL;
          if ( v18 > 1 )
          {
            v60 = v18 - 1;
            v61 = v28 + 1;
            do
            {
              v62 = *v61;
              if ( *v61 != *(v61 - 1) + 1
                || (v62 & 0x1FF) == 0
                || v62 <= qword_140E2D9A0 && (*(_QWORD *)(48 * v62 - 0x21FFFFFFFFD8LL) & 0x40000000000000LL) != 0 )
              {
                break;
              }
              ++v43;
              ++v61;
              --v60;
            }
            while ( v60 );
          }
        }
        else
        {
          v43 = MiIoPagesInRun(v19, v18);
        }
        v33 = MiReferenceIoPages(1u, v19, v43, v9, v6, &v64);
        if ( v33 < 0 )
          goto LABEL_49;
        v44 = v64;
        v45 = dword_140E2D8F8 - 12;
        *a6 |= 1u;
        v30 = (*(_DWORD *)(v44
                         + 4
                         * ((unsigned __int64)(2
                                             * (((unsigned int)v19 & ((unsigned int)(1LL << v45) - 1))
                                              - *(_DWORD *)(v44 + 24))) >> 5)
                         + 44) >> ((2 * ((v19 & ((1LL << v45) - 1)) - *(_BYTE *)(v44 + 24))) & 0x1F)) & 3;
        v65 = v43 - 1;
      }
      else
      {
        v30 = v69;
      }
    }
    v8 &= 7u;
    if ( v30 )
    {
      if ( v30 == 2 )
        v8 |= 0x18u;
    }
    else
    {
      v8 |= 0x10u;
    }
    if ( v70 && v70 == v8 )
    {
      v70 = v8;
      ValidPte = (v19 << 12) ^ (v12 ^ (v19 << 12)) & 0xFFF0000000000FFFuLL;
      v12 = ValidPte;
    }
    else
    {
      ValidPte = MiMakeValidPte(v7, v19, v8 | 0xA0000000);
      v70 = v8;
      v12 = ValidPte;
    }
    goto LABEL_79;
  }
  v38 = 48 * v19 - 0x220000000000LL;
  v39 = v21 & 1;
  if ( v39
    && ((*(_BYTE *)(48 * v19 - 0x21FFFFFFFFDELL) & 7) != 5 || !_bittest64((const signed __int64 *)(v38 + 40), 0x35u)) )
  {
    KeBugCheckEx(0x1Au, 0x1246uLL, v19, 0LL, 0LL);
  }
  if ( !(unsigned __int16)*(_DWORD *)(48 * v19 - 0x21FFFFFFFFE0LL)
    && (!v39
     || (*(_BYTE *)(48 * v19 - 0x21FFFFFFFFDELL) & 7) != 5
     || !_bittest64((const signed __int64 *)(v38 + 40), 0x35u)) )
  {
    MiShowBadMapper(v19, 1uLL);
    v27 = 0xFFFFDE0000000020uLL;
  }
  if ( *(__int64 *)(v38 + 40) < 0 )
    goto LABEL_70;
  if ( (*(_QWORD *)(v38 + 40) & 0x10000000000LL) != 0 )
  {
    v74 = 0;
    v63 = 0;
    PfnPageSizeIndexUnsynchronized = MiGetPfnPageSizeIndexUnsynchronized(48 * v19 - 0x220000000000LL, &v74, &v63);
    if ( v74 != 6 || PfnPageSizeIndexUnsynchronized == 3 )
    {
      v33 = -1073741800;
LABEL_49:
      v34 = 0xFFFFF68000000000uLL;
      goto LABEL_50;
    }
    v27 = 0xFFFFDE0000000020uLL;
    goto LABEL_70;
  }
  if ( (v40 = (__int64)(*(_QWORD *)(48 * v19 - 0x21FFFFFFFFF8LL) << 25) >> 16, v40 < 0xFFFFF68000000000uLL)
    || v40 > 0xFFFFF6FFFFFFFFFFuLL
    || (*(_QWORD *)(v38 + 40) & 0xFFFFFFFFFFLL) == 0x3FFFFFFFFELL
    || (*(_DWORD *)(48 * v19 - 0x21FFFFFFFFE0LL) & 0x200000) != 0
    && (*(_QWORD *)(48 * v19 - 0x21FFFFFFFFE8LL) & 0x3FFFFFFFFFFFFFFFLL) == 0
    && (unsigned __int16)*(_DWORD *)(48 * v19 - 0x21FFFFFFFFE0LL)
    || (*(_DWORD *)(48 * v19 - 0x21FFFFFFFFE0LL) & 0x80000) != 0
    || (PageTablePfnBuddyRaw = MiGetPageTablePfnBuddyRaw(48 * v19 - 0x220000000000LL), PageTablePfnBuddyRaw == v47) )
  {
LABEL_70:
    if ( (HIWORD(*(_DWORD *)(v27 + 48 * v19)) & 0xC0) == 0xC0 )
    {
      if ( dword_140E2FE0C == 2
        && ((struct _KTHREAD *)qword_140E2FE48 == KeGetCurrentThread()
         || qword_140E2FE48 && _bittest64(&MiFlags, 0x28u) && KeGetCurrentIrql() == 15) )
      {
        v41 = 17;
      }
      else
      {
        v41 = MiLockPageInline(48 * v19 - 0x220000000000LL);
        v27 = 0xFFFFDE0000000020uLL;
      }
      if ( (HIWORD(*(_DWORD *)(v27 + 48 * v19)) & 0xC0) == 0xC0 )
      {
        v73 = *(_DWORD *)(v27 + 48 * v19);
        BYTE2(v73) = ((_BYTE)v9 << 6) | BYTE2(v73) & 0x3F;
        *(_DWORD *)(v27 + 48 * v19) = v73;
      }
      if ( v41 != 17 )
      {
        MiUnlockPage(48 * v19 - 0x220000000000LL, v41);
        v27 = 0xFFFFDE0000000020uLL;
      }
    }
    if ( v9 == (unsigned __int8)BYTE2(*(_DWORD *)(v27 + 48 * v19)) >> 6 )
    {
      ValidPte = (v19 << 12) ^ (v67 ^ (v19 << 12)) & 0xFFF0000000000FFFuLL;
    }
    else
    {
      v8 &= 7u;
      if ( BYTE2(*(_DWORD *)(v27 + 48 * v19)) < 0x40u )
      {
        v8 |= 8u;
      }
      else if ( (HIWORD(*(_DWORD *)(v27 + 48 * v19)) & 0xC0) == 0x80 )
      {
        v8 |= 0x18u;
      }
      ValidPte = MiMakeValidPte(v7, v19, v8 | 0xA0000000);
    }
LABEL_79:
    if ( _bittest64(&MiFlags, 0x24u) && (ValidPte & 0x20) == 0 && v7 >= 0xFFFFF6C000000000uLL )
      MiCheckLinearProtectedPteAccessedBit(v7, ValidPte);
    v28 = v66;
    v6 = 0LL;
    v21 = a5;
    v24 = v65;
    *(_QWORD *)v7 = ValidPte;
    v27 = 0xFFFFDE0000000020uLL;
    goto LABEL_81;
  }
  v33 = -1073741800;
LABEL_50:
  v35 = a2 - v18;
  if ( a2 != v18 )
  {
    v49 = (__int64)((v7 << 25) + ((v18 - a2) << 28) - (v34 << 25)) >> 16;
    v50 = (unsigned int)MiVaToFlushVm(v49);
    MiClearMappingAndDereferenceIoSpace(v49, v35);
    v55 = KeGetCurrentIrql();
    if ( v55 < 2u )
    {
      v52 = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags )
        KiRaiseIrqlProcessIrqlFlags(v52);
    }
    ProcessorFlushList = MiGetProcessorFlushList(v52, v51, v53, v54);
    MiInitializeTbFlushList(ProcessorFlushList, v50, *(_DWORD *)(ProcessorFlushList + 12), 8, 1);
    MiInsertTbFlushEntry(v57, v49, v35, 0);
    MiFlushTbList(ProcessorFlushList, v58, v59);
    MiReleaseProcessorFlushList();
    if ( v55 < 2u )
    {
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v55);
      __writecr8(v55);
    }
  }
  return (unsigned int)v33;
}
