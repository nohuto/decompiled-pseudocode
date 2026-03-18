/*
 * XREFs of MiFillSystemPtes @ 0x140290A30
 * Callers:
 *     MmMapLockedPagesSpecifyCache @ 0x14028F9F0 (MmMapLockedPagesSpecifyCache.c)
 *     MiMapContiguousMemory @ 0x1402E9A9C (MiMapContiguousMemory.c)
 *     MmMapMdl @ 0x140676C90 (MmMapMdl.c)
 *     MiAllocateZeroCalibrationBuffer @ 0x140693034 (MiAllocateZeroCalibrationBuffer.c)
 *     MiLockAndMapEntireDriver @ 0x1407F0938 (MiLockAndMapEntireDriver.c)
 *     MiMapHotPatchImageInSystemSpace @ 0x1407F5158 (MiMapHotPatchImageInSystemSpace.c)
 * Callees:
 *     MiGetPageTablePfnBuddyRaw @ 0x140227FA0 (MiGetPageTablePfnBuddyRaw.c)
 *     MiVaToFlushVm @ 0x1402293EC (MiVaToFlushVm.c)
 *     MiCheckLinearProtectedPteAccessedBit @ 0x140232A20 (MiCheckLinearProtectedPteAccessedBit.c)
 *     MiInitializeTbFlushList @ 0x140233BB0 (MiInitializeTbFlushList.c)
 *     MiMakeValidPte @ 0x1402383C0 (MiMakeValidPte.c)
 *     MiUserPdeOrAbove @ 0x140238638 (MiUserPdeOrAbove.c)
 *     MiReleaseProcessorFlushList @ 0x14023FFD0 (MiReleaseProcessorFlushList.c)
 *     MiInsertTbFlushEntry @ 0x1402432E0 (MiInsertTbFlushEntry.c)
 *     MiReferenceIoPages @ 0x140283108 (MiReferenceIoPages.c)
 *     MiGetProcessorFlushList @ 0x1402894BC (MiGetProcessorFlushList.c)
 *     MiClearMappingAndDereferenceIoSpace @ 0x14028E960 (MiClearMappingAndDereferenceIoSpace.c)
 *     MiLockPageInline @ 0x140291550 (MiLockPageInline.c)
 *     MiUnlockPage @ 0x1402915F0 (MiUnlockPage.c)
 *     MiFlushTbList @ 0x140291730 (MiFlushTbList.c)
 *     MiIoSpaceGetBounds @ 0x1403D0398 (MiIoSpaceGetBounds.c)
 *     MiShowBadMapper @ 0x1403D0830 (MiShowBadMapper.c)
 *     MiGetPfnPageSizeIndexUnsynchronized @ 0x140463848 (MiGetPfnPageSizeIndexUnsynchronized.c)
 *     MiIoPagesInRun @ 0x140476A4C (MiIoPagesInRun.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 */

__int64 __fastcall MiFillSystemPtes(
        ULONG_PTR BugCheckParameter2,
        unsigned __int64 a2,
        __int64 a3,
        unsigned int a4,
        char a5,
        _DWORD *a6)
{
  unsigned __int64 v6; // r12
  unsigned __int64 v7; // r13
  unsigned int v8; // r15d
  int v9; // ebp
  __int64 v10; // r10
  ULONG_PTR v11; // rdi
  __int64 v12; // r14
  unsigned __int64 v13; // rbx
  unsigned __int64 v14; // rax
  int v15; // r9d
  int v16; // eax
  bool v17; // zf
  unsigned __int64 v18; // r14
  __int64 v19; // rdx
  unsigned __int64 v20; // r8
  char v21; // dl
  unsigned __int64 v22; // r8
  unsigned __int64 v23; // rcx
  __int64 v24; // rax
  unsigned __int64 v25; // r9
  _DWORD *v26; // r11
  unsigned __int64 v27; // r13
  unsigned __int64 v28; // r8
  unsigned __int64 *v29; // rcx
  unsigned __int64 *v30; // rax
  int v31; // edx
  ULONG_PTR ValidPte; // rbx
  int v34; // eax
  __int64 v35; // rsi
  int v36; // r8d
  _BYTE *v37; // rdx
  unsigned __int64 v38; // rcx
  unsigned __int8 v39; // r8
  unsigned __int8 CurrentIrql; // bl
  unsigned __int64 v41; // rbx
  int v42; // esi
  unsigned __int64 v43; // rdx
  char v44; // cl
  PEPROCESS PageTablePfnBuddyRaw; // rax
  unsigned __int64 v46; // r8
  struct _KPROCESS *v47; // r10
  unsigned __int64 v48; // rdi
  __int64 v49; // r14
  void *v50; // r15
  unsigned __int8 v51; // bp
  __int64 v52; // rcx
  __int64 *ProcessorFlushList; // rbx
  __int64 v54; // rcx
  __int64 v55; // rdx
  unsigned __int64 v56; // r8
  unsigned __int64 *v57; // rdx
  unsigned __int64 v58; // rcx
  int v59; // [rsp+30h] [rbp-88h] BYREF
  unsigned __int64 v60; // [rsp+38h] [rbp-80h] BYREF
  unsigned __int64 v61; // [rsp+40h] [rbp-78h]
  unsigned __int64 *v62; // [rsp+48h] [rbp-70h]
  unsigned __int64 v63; // [rsp+50h] [rbp-68h]
  __int128 v64; // [rsp+58h] [rbp-60h] BYREF
  __int64 v65; // [rsp+68h] [rbp-50h]
  unsigned int v66; // [rsp+C0h] [rbp+8h]
  int v69; // [rsp+D0h] [rbp+18h]
  int v70; // [rsp+D8h] [rbp+20h] BYREF

  v6 = BugCheckParameter2;
  v65 = 0LL;
  v66 = 0;
  v7 = a2;
  v60 = 0LL;
  v8 = a4;
  v9 = 1;
  v10 = a3;
  *a6 = 0;
  v11 = 0LL;
  v64 = 0LL;
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
  v12 = a4 & 0x1F;
  v13 = MmProtectToPteMask[v12] & 0xFFF0000000000E5EuLL | 0x21;
  if ( BugCheckParameter2 < 0xFFFFF68000000000uLL || BugCheckParameter2 > 0xFFFFF6FFFFFFFFFFuLL )
  {
    v13 = MmProtectToPteMask[v12] & 0xFFF0000000000E5EuLL | 0x121;
    v15 = a4 & 0x4000000;
  }
  else
  {
    if ( BugCheckParameter2 >= 0xFFFFF6FB40000000uLL && BugCheckParameter2 <= 0xFFFFF6FB7FFFFFFFuLL )
    {
      if ( BugCheckParameter2 == 0xFFFFF6FB7DBEDF68uLL )
      {
        v13 = MmProtectToPteMask[v12] & 0x7FF0000000000E5ELL | 0x8000000000000021uLL;
      }
      else if ( (a4 & 0x4000000) == 0 )
      {
        v13 = MmProtectToPteMask[v12] & 0x7FF0000000000E5ELL | 0x21;
      }
      v34 = MiUserPdeOrAbove(BugCheckParameter2);
      v10 = a3;
      if ( v34 )
        v13 |= 4uLL;
    }
    v14 = (__int64)(v6 << 25) >> 16;
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
      v7 = a2;
    }
    if ( v14 <= 0x7FFFFFFEFFFFLL )
    {
      v13 |= 4uLL;
LABEL_15:
      v16 = HIBYTE(word_140E2ED84);
      goto LABEL_16;
    }
    if ( v14 < 0xFFFF800000000000uLL )
      goto LABEL_15;
    if ( v14 < 0xFFFFF68000000000uLL || v14 > 0xFFFFF6FFFFFFFFFFuLL )
    {
      if ( v14 < qword_140E2F280 || v14 > qword_140E2F290 )
        v16 = (unsigned __int8)word_140E2ED84;
      else
        v16 = HIBYTE(word_140E2ED84);
LABEL_16:
      if ( v16 )
        v13 |= 0x100uLL;
    }
  }
  v17 = (v12 & 5) == 4;
  v18 = v7;
  v19 = v13 | 0x42;
  if ( !v17 )
    v19 = v13;
  v20 = v19 & 0xFFFFFFFFFFFFFFFBuLL;
  if ( (v8 & 0x40000000) == 0 )
    v20 = v19;
  v21 = a5;
  v22 = ((unsigned __int64)(unsigned __int8)word_140E2ED84 << 8) ^ (((unsigned __int64)(unsigned __int8)word_140E2ED84 << 8) ^ v20) & 0xFFFFFFFFFFFFFEFFuLL;
  v23 = v22 & 0xFFFFFFFFFFFFFEFFuLL;
  if ( (v8 & 0x8000000) == 0 )
    v23 = v22;
  v24 = v23 | 0x80;
  v17 = v15 == 0;
  v25 = 0xFFFFDE0000000020uLL;
  if ( v17 )
    v24 = v23;
  v26 = 0LL;
  v61 = 0LL;
  v27 = 0LL;
  v28 = 0LL;
  v29 = (unsigned __int64 *)(v10 - 8);
  v63 = v24 & 0xF0FFFFFFFFFFFFFFuLL | 0xA00000000000000LL;
  if ( v10 >= 0 )
  {
    v27 = v10 - 1;
    v29 = 0LL;
  }
  while ( 1 )
  {
    if ( !v18 )
      return 0LL;
    v30 = v29 + 1;
    if ( v29 )
      v27 = *v30;
    else
      ++v27;
    if ( !v29 )
      v30 = 0LL;
    v62 = v30;
    v29 = v30;
    if ( (v21 & 2) == 0 || v27 != qword_140E37338 )
      break;
LABEL_76:
    --v18;
    v6 += 8LL;
  }
  if ( v27 > qword_140E2DBE0 || (v26 = 0LL, (*(_QWORD *)(48 * v27 - 0x21FFFFFFFFD8LL) & 0x40000000000000LL) == 0) )
  {
    if ( v28 )
    {
      v31 = (*(_DWORD *)(v60
                       + 4
                       * ((unsigned __int64)(2
                                           * (((unsigned int)v27 & ((unsigned int)(1LL << ((unsigned __int8)dword_140E2DB38
                                                                                         - 12))
                                                                  - 1))
                                            - *(_DWORD *)(v60 + 24))) >> 5)
                       + 44) >> ((2
                                * ((v27 & ((1LL << ((unsigned __int8)dword_140E2DB38 - 12)) - 1)) - *(_BYTE *)(v60 + 24))) & 0x1F)) & 3;
      v61 = v28 - 1;
    }
    else
    {
      if ( !HIDWORD(v65) || v27 > *((_QWORD *)&v64 + 1) || v27 < (unsigned __int64)v64 )
      {
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( KiIrqlFlags )
          KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL);
        MiIoSpaceGetBounds(&v64, v27);
        if ( KiIrqlFlags )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
        __writecr8(CurrentIrql);
        v29 = v62;
        v26 = 0LL;
      }
      if ( HIDWORD(v65) == 3 )
      {
        if ( v29 )
        {
          v41 = 1LL;
          if ( v18 > 1 )
          {
            v56 = v18 - 1;
            v57 = v29 + 1;
            do
            {
              v58 = *v57;
              if ( *v57 != *(v57 - 1) + 1
                || (v58 & 0x1FF) == 0
                || v58 <= qword_140E2DBE0 && (*(_QWORD *)(48 * v58 - 0x21FFFFFFFFD8LL) & 0x40000000000000LL) != 0 )
              {
                break;
              }
              ++v41;
              ++v57;
              --v56;
            }
            while ( v56 );
          }
        }
        else
        {
          v41 = MiIoPagesInRun(v27, v18);
        }
        v42 = MiReferenceIoPages(1u, v27, v41, v9, v26, &v60);
        if ( v42 < 0 )
          goto LABEL_109;
        v43 = v60;
        v44 = dword_140E2DB38 - 12;
        *a6 |= 1u;
        v31 = (*(_DWORD *)(v43
                         + 4
                         * ((unsigned __int64)(2
                                             * (((unsigned int)v27 & ((unsigned int)(1LL << v44) - 1))
                                              - *(_DWORD *)(v43 + 24))) >> 5)
                         + 44) >> ((2 * ((v27 & ((1LL << v44) - 1)) - *(_BYTE *)(v43 + 24))) & 0x1F)) & 3;
        v61 = v41 - 1;
      }
      else
      {
        v31 = v65;
      }
    }
    v8 &= 7u;
    if ( v31 )
    {
      if ( v31 == 2 )
        v8 |= 0x18u;
    }
    else
    {
      v8 |= 0x10u;
    }
    if ( v66 && v66 == v8 )
    {
      v66 = v8;
      ValidPte = (v27 << 12) ^ (v11 ^ (v27 << 12)) & 0xFFF0000000000FFFuLL;
      v11 = ValidPte;
    }
    else
    {
      ValidPte = MiMakeValidPte(v6, v27, v8 | 0xA0000000);
      v66 = v8;
      v11 = ValidPte;
    }
    goto LABEL_74;
  }
  v35 = 48 * v27 - 0x220000000000LL;
  v17 = (v21 & 1) == 0;
  v36 = v21 & 1;
  v37 = (_BYTE *)(48 * v27 - 0x21FFFFFFFFDELL);
  if ( !v17 && ((*v37 & 7) != 5 || !_bittest64((const signed __int64 *)(v35 + 40), 0x35u)) )
    KeBugCheckEx(0x1Au, 0x1246uLL, v27, 0LL, 0LL);
  if ( !(unsigned __int16)*(_DWORD *)(48 * v27 - 0x21FFFFFFFFE0LL)
    && (!v36 || (*v37 & 7) != 5 || !_bittest64((const signed __int64 *)(v35 + 40), 0x35u)) )
  {
    MiShowBadMapper(v27, 1uLL);
    v25 = 0xFFFFDE0000000020uLL;
  }
  if ( *(__int64 *)(v35 + 40) < 0 )
  {
LABEL_65:
    if ( (HIWORD(*(_DWORD *)(v25 + 48 * v27)) & 0xC0) == 0xC0 )
    {
      if ( dword_140E3004C == 2
        && ((struct _KTHREAD *)qword_140E30088 == KeGetCurrentThread()
         || qword_140E30088 && _bittest64(&MiFlags, 0x28u) && KeGetCurrentIrql() == 15) )
      {
        v39 = 17;
      }
      else
      {
        v39 = MiLockPageInline(48 * v27 - 0x220000000000LL);
        v25 = 0xFFFFDE0000000020uLL;
      }
      if ( (HIWORD(*(_DWORD *)(v25 + 48 * v27)) & 0xC0) == 0xC0 )
      {
        v69 = *(_DWORD *)(v25 + 48 * v27);
        BYTE2(v69) = ((_BYTE)v9 << 6) | BYTE2(v69) & 0x3F;
        *(_DWORD *)(v25 + 48 * v27) = v69;
      }
      if ( v39 != 17 )
      {
        MiUnlockPage(48 * v27 - 0x220000000000LL, v39);
        v25 = 0xFFFFDE0000000020uLL;
      }
    }
    if ( v9 == (unsigned __int8)BYTE2(*(_DWORD *)(v25 + 48 * v27)) >> 6 )
    {
      ValidPte = (v27 << 12) ^ (v63 ^ (v27 << 12)) & 0xFFF0000000000FFFuLL;
    }
    else
    {
      v8 &= 7u;
      if ( BYTE2(*(_DWORD *)(v25 + 48 * v27)) < 0x40u )
      {
        v8 |= 8u;
      }
      else if ( (HIWORD(*(_DWORD *)(v25 + 48 * v27)) & 0xC0) == 0x80 )
      {
        v8 |= 0x18u;
      }
      ValidPte = MiMakeValidPte(v6, v27, v8 | 0xA0000000);
    }
LABEL_74:
    if ( _bittest64(&MiFlags, 0x24u) && (ValidPte & 0x20) == 0 && v6 >= 0xFFFFF6C000000000uLL )
      MiCheckLinearProtectedPteAccessedBit(v6, ValidPte, 128);
    v29 = v62;
    v26 = 0LL;
    v21 = a5;
    v28 = v61;
    *(_QWORD *)v6 = ValidPte;
    v25 = 0xFFFFDE0000000020uLL;
    goto LABEL_76;
  }
  if ( (*(_QWORD *)(v35 + 40) & 0x10000000000LL) == 0 )
  {
    v38 = (__int64)(*(_QWORD *)(48 * v27 - 0x21FFFFFFFFF8LL) << 25) >> 16;
    if ( v38 >= 0xFFFFF68000000000uLL
      && v38 <= 0xFFFFF6FFFFFFFFFFuLL
      && (*(_QWORD *)(v35 + 40) & 0xFFFFFFFFFFLL) != 0x3FFFFFFFFELL
      && ((*(_DWORD *)(48 * v27 - 0x21FFFFFFFFE0LL) & 0x200000) == 0
       || (*(_QWORD *)(48 * v27 - 0x21FFFFFFFFE8LL) & 0x3FFFFFFFFFFFFFFFLL) != 0
       || !(unsigned __int16)*(_DWORD *)(48 * v27 - 0x21FFFFFFFFE0LL))
      && (*(_DWORD *)(48 * v27 - 0x21FFFFFFFFE0LL) & 0x80000) == 0 )
    {
      PageTablePfnBuddyRaw = MiGetPageTablePfnBuddyRaw(48 * v27 - 0x220000000000LL);
      if ( PageTablePfnBuddyRaw != v47 )
      {
        v42 = -1073741800;
        goto LABEL_110;
      }
    }
    goto LABEL_65;
  }
  v70 = 0;
  v59 = 0;
  if ( (unsigned int)MiGetPfnPageSizeIndexUnsynchronized(48 * v27 - 0x220000000000LL, &v70, &v59) != 3 && v70 == 6 )
  {
    v25 = 0xFFFFDE0000000020uLL;
    goto LABEL_65;
  }
  v42 = -1073741800;
LABEL_109:
  v46 = 0xFFFFF68000000000uLL;
LABEL_110:
  v48 = a2 - v18;
  if ( a2 != v18 )
  {
    v49 = (__int64)((v6 << 25) + ((v18 - a2) << 28) - (v46 << 25)) >> 16;
    v50 = MiVaToFlushVm(v49);
    MiClearMappingAndDereferenceIoSpace(v49, v48);
    v51 = KeGetCurrentIrql();
    if ( v51 < 2u )
    {
      v52 = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags )
        KiRaiseIrqlProcessIrqlFlags(v52, 2LL);
    }
    ProcessorFlushList = MiGetProcessorFlushList();
    MiInitializeTbFlushList((__int64)ProcessorFlushList, (__int64)v50, *((_DWORD *)ProcessorFlushList + 3), 8, 1);
    MiInsertTbFlushEntry(v54, v49, v48, 0);
    MiFlushTbList(ProcessorFlushList, v55);
    MiReleaseProcessorFlushList();
    if ( v51 < 2u )
    {
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v51);
      __writecr8(v51);
    }
  }
  return (unsigned int)v42;
}
