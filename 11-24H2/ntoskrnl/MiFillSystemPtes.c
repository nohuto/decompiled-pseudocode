/*
 * XREFs of MiFillSystemPtes @ 0x1402A0630
 * Callers:
 *     MmMapLockedPagesSpecifyCache @ 0x14029F5F0 (MmMapLockedPagesSpecifyCache.c)
 *     MiMapContiguousMemory @ 0x14034B0DC (MiMapContiguousMemory.c)
 *     MmMapMdl @ 0x140677E60 (MmMapMdl.c)
 *     MiAllocateZeroCalibrationBuffer @ 0x140694104 (MiAllocateZeroCalibrationBuffer.c)
 *     MiLockAndMapEntireDriver @ 0x1407F0F08 (MiLockAndMapEntireDriver.c)
 *     MiMapHotPatchImageInSystemSpace @ 0x1407F584C (MiMapHotPatchImageInSystemSpace.c)
 * Callees:
 *     MiCheckLinearProtectedPteAccessedBit @ 0x140203550 (MiCheckLinearProtectedPteAccessedBit.c)
 *     MiReleaseProcessorFlushList @ 0x140208120 (MiReleaseProcessorFlushList.c)
 *     MiMakeValidPte @ 0x140212550 (MiMakeValidPte.c)
 *     MiUserPdeOrAbove @ 0x1402127C8 (MiUserPdeOrAbove.c)
 *     MiInsertTbFlushEntry @ 0x1402137F0 (MiInsertTbFlushEntry.c)
 *     MiInitializeTbFlushList @ 0x140214780 (MiInitializeTbFlushList.c)
 *     MiReferenceIoPages @ 0x140238698 (MiReferenceIoPages.c)
 *     MiShowBadMapper @ 0x140275730 (MiShowBadMapper.c)
 *     MiGetProcessorFlushList @ 0x1402990BC (MiGetProcessorFlushList.c)
 *     MiClearMappingAndDereferenceIoSpace @ 0x14029E560 (MiClearMappingAndDereferenceIoSpace.c)
 *     MiLockPageInline @ 0x1402A1150 (MiLockPageInline.c)
 *     MiUnlockPage @ 0x1402A11F0 (MiUnlockPage.c)
 *     MiFlushTbList @ 0x1402A1330 (MiFlushTbList.c)
 *     MiGetPageTablePfnBuddyRaw @ 0x1402FB220 (MiGetPageTablePfnBuddyRaw.c)
 *     MiVaToFlushVm @ 0x1402FC5EC (MiVaToFlushVm.c)
 *     MiIoSpaceGetBounds @ 0x14038F8B0 (MiIoSpaceGetBounds.c)
 *     MiGetPfnPageSizeIndexUnsynchronized @ 0x14041DC14 (MiGetPfnPageSizeIndexUnsynchronized.c)
 *     MiIoPagesInRun @ 0x140472FEC (MiIoPagesInRun.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
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
  volatile LONG *v26; // r11
  unsigned __int64 v27; // r13
  unsigned __int64 v28; // r8
  unsigned __int64 *v29; // rcx
  unsigned __int64 *v30; // rax
  unsigned int v31; // edx
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
  volatile LONG *v43; // rdx
  char v44; // cl
  __int64 PageTablePfnBuddyRaw; // rax
  unsigned __int64 v46; // r8
  __int64 v47; // r10
  unsigned __int64 v48; // rdi
  unsigned __int64 v49; // r14
  __int64 v50; // r15
  unsigned __int8 v51; // bp
  __int64 v52; // rcx
  __int64 *ProcessorFlushList; // rbx
  __int64 v54; // rcx
  unsigned __int64 v55; // r8
  unsigned __int64 *v56; // rdx
  unsigned __int64 v57; // rcx
  int v58; // [rsp+30h] [rbp-88h] BYREF
  volatile LONG *v59; // [rsp+38h] [rbp-80h] BYREF
  unsigned __int64 v60; // [rsp+40h] [rbp-78h]
  unsigned __int64 *v61; // [rsp+48h] [rbp-70h]
  unsigned __int64 v62; // [rsp+50h] [rbp-68h]
  __int128 v63; // [rsp+58h] [rbp-60h] BYREF
  __int64 v64; // [rsp+68h] [rbp-50h]
  unsigned int v65; // [rsp+C0h] [rbp+8h]
  int v68; // [rsp+D0h] [rbp+18h]
  int v69; // [rsp+D8h] [rbp+20h] BYREF

  v6 = BugCheckParameter2;
  v64 = 0LL;
  v65 = 0;
  v7 = a2;
  v59 = 0LL;
  v8 = a4;
  v9 = 1;
  v10 = a3;
  *a6 = 0;
  v11 = 0LL;
  v63 = 0LL;
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
      v16 = HIBYTE(word_140E2EEC4);
      goto LABEL_16;
    }
    if ( v14 < 0xFFFF800000000000uLL )
      goto LABEL_15;
    if ( v14 < 0xFFFFF68000000000uLL || v14 > 0xFFFFF6FFFFFFFFFFuLL )
    {
      if ( v14 < qword_140E2F3C0 || v14 > qword_140E2F3D0 )
        v16 = (unsigned __int8)word_140E2EEC4;
      else
        v16 = HIBYTE(word_140E2EEC4);
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
  v22 = ((unsigned __int64)(unsigned __int8)word_140E2EEC4 << 8) ^ (((unsigned __int64)(unsigned __int8)word_140E2EEC4 << 8) ^ v20) & 0xFFFFFFFFFFFFFEFFuLL;
  v23 = v22 & 0xFFFFFFFFFFFFFEFFuLL;
  if ( (v8 & 0x8000000) == 0 )
    v23 = v22;
  v24 = v23 | 0x80;
  v17 = v15 == 0;
  v25 = 0xFFFFDE0000000020uLL;
  if ( v17 )
    v24 = v23;
  v26 = 0LL;
  v60 = 0LL;
  v27 = 0LL;
  v28 = 0LL;
  v29 = (unsigned __int64 *)(v10 - 8);
  v62 = v24 & 0xF0FFFFFFFFFFFFFFuLL | 0xA00000000000000LL;
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
    v61 = v30;
    v29 = v30;
    if ( (v21 & 2) == 0 || v27 != qword_140E37478 )
      break;
LABEL_76:
    --v18;
    v6 += 8LL;
  }
  if ( v27 > qword_140E2DD20 || (v26 = 0LL, (*(_QWORD *)(48 * v27 - 0x21FFFFFFFFD8LL) & 0x40000000000000LL) == 0) )
  {
    if ( v28 )
    {
      v31 = ((unsigned int)v59[((unsigned __int64)(2
                                                 * (((unsigned int)v27 & ((unsigned int)(1LL << ((unsigned __int8)dword_140E2DC78
                                                                                               - 12))
                                                                        - 1))
                                                  - *((_DWORD *)v59 + 6))) >> 5)
                             + 11] >> ((2
                                      * ((v27 & ((1LL << ((unsigned __int8)dword_140E2DC78 - 12)) - 1))
                                       - *((_BYTE *)v59 + 24))) & 0x1F)) & 3;
      v60 = v28 - 1;
    }
    else
    {
      if ( !HIDWORD(v64) || v27 > *((_QWORD *)&v63 + 1) || v27 < (unsigned __int64)v63 )
      {
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( KiIrqlFlags )
          KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL);
        MiIoSpaceGetBounds(&v63, v27);
        if ( KiIrqlFlags )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
        __writecr8(CurrentIrql);
        v29 = v61;
        v26 = 0LL;
      }
      if ( HIDWORD(v64) == 3 )
      {
        if ( v29 )
        {
          v41 = 1LL;
          if ( v18 > 1 )
          {
            v55 = v18 - 1;
            v56 = v29 + 1;
            do
            {
              v57 = *v56;
              if ( *v56 != *(v56 - 1) + 1
                || (v57 & 0x1FF) == 0
                || v57 <= qword_140E2DD20 && (*(_QWORD *)(48 * v57 - 0x21FFFFFFFFD8LL) & 0x40000000000000LL) != 0 )
              {
                break;
              }
              ++v41;
              ++v56;
              --v55;
            }
            while ( v55 );
          }
        }
        else
        {
          v41 = MiIoPagesInRun(v27, v18);
        }
        v42 = MiReferenceIoPages(1u, v27, v41, v9, v26, &v59);
        if ( v42 < 0 )
          goto LABEL_109;
        v43 = v59;
        v44 = dword_140E2DC78 - 12;
        *a6 |= 1u;
        v31 = ((unsigned int)v43[((unsigned __int64)(2
                                                   * (((unsigned int)v27 & ((unsigned int)(1LL << v44) - 1))
                                                    - *((_DWORD *)v43 + 6))) >> 5)
                               + 11] >> ((2 * ((v27 & ((1LL << v44) - 1)) - *((_BYTE *)v43 + 24))) & 0x1F)) & 3;
        v60 = v41 - 1;
      }
      else
      {
        v31 = v64;
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
    if ( v65 && v65 == v8 )
    {
      v65 = v8;
      ValidPte = (v27 << 12) ^ (v11 ^ (v27 << 12)) & 0xFFF0000000000FFFuLL;
      v11 = ValidPte;
    }
    else
    {
      ValidPte = MiMakeValidPte(v6, v27, v8 | 0xA0000000);
      v65 = v8;
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
    MiShowBadMapper(v27, 1uLL, 3);
    v25 = 0xFFFFDE0000000020uLL;
  }
  if ( *(__int64 *)(v35 + 40) < 0 )
  {
LABEL_65:
    if ( (HIWORD(*(_DWORD *)(v25 + 48 * v27)) & 0xC0) == 0xC0 )
    {
      if ( dword_140E3018C == 2
        && ((struct _KTHREAD *)qword_140E301C8 == KeGetCurrentThread()
         || qword_140E301C8 && _bittest64(&MiFlags, 0x28u) && KeGetCurrentIrql() == 15) )
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
        v68 = *(_DWORD *)(v25 + 48 * v27);
        BYTE2(v68) = ((_BYTE)v9 << 6) | BYTE2(v68) & 0x3F;
        *(_DWORD *)(v25 + 48 * v27) = v68;
      }
      if ( v39 != 17 )
      {
        MiUnlockPage(48 * v27 - 0x220000000000LL, v39);
        v25 = 0xFFFFDE0000000020uLL;
      }
    }
    if ( v9 == (unsigned __int8)BYTE2(*(_DWORD *)(v25 + 48 * v27)) >> 6 )
    {
      ValidPte = (v27 << 12) ^ (v62 ^ (v27 << 12)) & 0xFFF0000000000FFFuLL;
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
      MiCheckLinearProtectedPteAccessedBit(v6, ValidPte, 128LL);
    v29 = v61;
    v26 = 0LL;
    v21 = a5;
    v28 = v60;
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
      PageTablePfnBuddyRaw = MiGetPageTablePfnBuddyRaw(
                               48 * v27 - 0x220000000000LL,
                               HIWORD(*(_DWORD *)(48 * v27 - 0x21FFFFFFFFE0LL)),
                               0xFFFFF68000000000uLL);
      if ( PageTablePfnBuddyRaw != v47 )
      {
        v42 = -1073741800;
        goto LABEL_110;
      }
    }
    goto LABEL_65;
  }
  v69 = 0;
  v58 = 0;
  if ( (unsigned int)MiGetPfnPageSizeIndexUnsynchronized(48 * v27 - 0x220000000000LL, &v69, &v58) != 3 && v69 == 6 )
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
    MiInitializeTbFlushList((__int64)ProcessorFlushList, v50, *((_DWORD *)ProcessorFlushList + 3), 8, 1);
    MiInsertTbFlushEntry(v54, v49, v48, 0);
    MiFlushTbList(ProcessorFlushList);
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
