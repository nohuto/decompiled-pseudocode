/*
 * XREFs of MiMapMdlCommon @ 0x1404EDDA4
 * Callers:
 *     MmMapLockedPagesWithReservedMapping @ 0x14041D8B0 (MmMapLockedPagesWithReservedMapping.c)
 *     MmMapLockedRestartPages @ 0x1407E8790 (MmMapLockedRestartPages.c)
 * Callees:
 *     MiLockNestedPageTable @ 0x140201F50 (MiLockNestedPageTable.c)
 *     MiCheckLinearProtectedPteAccessedBit @ 0x140203550 (MiCheckLinearProtectedPteAccessedBit.c)
 *     MiLockWorkingSetSharedAtDpc @ 0x14020BF58 (MiLockWorkingSetSharedAtDpc.c)
 *     MiMakeValidPte @ 0x140212550 (MiMakeValidPte.c)
 *     MiReferenceIoPages @ 0x140238698 (MiReferenceIoPages.c)
 *     MiLockWorkingSetShared @ 0x140241250 (MiLockWorkingSetShared.c)
 *     MiUnlockWorkingSetShared @ 0x140241CF0 (MiUnlockWorkingSetShared.c)
 *     MiAssignInitialPageAttribute @ 0x14026C070 (MiAssignInitialPageAttribute.c)
 *     MiShowBadMapper @ 0x140275730 (MiShowBadMapper.c)
 *     MiIncreaseUsedPtes @ 0x140299D80 (MiIncreaseUsedPtes.c)
 *     MiUnlockPageTableInternal @ 0x1402C9C00 (MiUnlockPageTableInternal.c)
 *     MiLookupIoPageNode @ 0x14038F750 (MiLookupIoPageNode.c)
 *     MiIoSpaceGetBounds @ 0x14038F8B0 (MiIoSpaceGetBounds.c)
 *     MiMakeProtectionPfnCompatible @ 0x1403F26B0 (MiMakeProtectionPfnCompatible.c)
 *     MiMapMdlWithLargePages @ 0x1404C0630 (MiMapMdlWithLargePages.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall MiMapMdlCommon(char *a1, unsigned __int64 a2, __int64 a3, char a4, int a5)
{
  char v5; // r14
  __int64 v6; // r11
  unsigned __int64 v7; // r12
  __int64 v8; // r9
  char *v9; // rdi
  __int64 v10; // r10
  __int64 v11; // r9
  volatile LONG *v12; // r10
  BOOL v13; // ebx
  unsigned __int64 v14; // r15
  unsigned int v15; // esi
  __int64 CurrentIrql; // rcx
  unsigned __int64 v17; // rdx
  int v18; // r12d
  _QWORD *v19; // r13
  unsigned __int64 v20; // r14
  __int64 v21; // rdi
  int ProtectionPfnCompatible; // edx
  unsigned __int8 v23; // di
  __int64 v24; // rdx
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // r8
  unsigned __int64 *v27; // rdx
  unsigned __int64 v28; // rcx
  int v29; // eax
  bool v30; // zf
  unsigned __int64 v31; // rdi
  unsigned int v32; // r14d
  int v33; // r12d
  char *v34; // rsi
  signed __int64 v35; // r13
  unsigned __int64 v36; // rsi
  int v37; // r15d
  int v38; // eax
  unsigned __int8 v39; // bl
  __int64 v40; // rdx
  int v41; // r10d
  int v42; // ecx
  unsigned __int64 ValidPte; // rax
  ULONG_PTR v44; // rbx
  __int64 result; // rax
  __int16 v46; // cx
  unsigned __int8 v47; // [rsp+38h] [rbp-41h]
  int v48; // [rsp+40h] [rbp-39h]
  unsigned __int64 v49; // [rsp+48h] [rbp-31h]
  unsigned __int64 v50; // [rsp+50h] [rbp-29h]
  __int128 v51; // [rsp+58h] [rbp-21h] BYREF
  __int64 v52; // [rsp+68h] [rbp-11h]
  __int64 v53; // [rsp+70h] [rbp-9h]
  volatile LONG *v54; // [rsp+78h] [rbp-1h] BYREF
  __int64 v55; // [rsp+80h] [rbp+7h]
  char *BugCheckParameter2; // [rsp+E0h] [rbp+67h]
  __int64 v58; // [rsp+E8h] [rbp+6Fh]

  v58 = a3;
  BugCheckParameter2 = (char *)a2;
  v5 = a4;
  v6 = *((unsigned int *)a1 + 11);
  v7 = a2;
  v8 = *((unsigned int *)a1 + 10) + 4095LL;
  v9 = a1;
  v10 = ((int)v6 + *((_DWORD *)a1 + 8)) & 0xFFFLL;
  v52 = 0LL;
  v11 = (unsigned __int64)(v10 + v8) >> 12;
  v50 = v11;
  v54 = 0LL;
  v51 = 0LL;
  v12 = 0LL;
  v55 = v6 + ((__int64)(a2 << 25) >> 16);
  v13 = 0;
  v48 = 1;
  v14 = 0LL;
  v15 = 1;
  CurrentIrql = KeGetCurrentIrql();
  v53 = CurrentIrql;
  if ( (a2 & 0xFFF) == 0 && !a3 && (v11 & 0x1FF) == 0 )
    v13 = (*((_DWORD *)v9 + 12) & 0x1FFLL) == 0;
  v17 = 0LL;
  v49 = 0LL;
  if ( v11 )
  {
    v18 = 24;
    v19 = v9 + 40;
    while ( 1 )
    {
      v20 = v19[1];
      if ( v20 <= qword_140E2DD20 )
      {
        if ( ((*(_QWORD *)(48 * v20 - 0x21FFFFFFFFD8LL) >> 54) & 1) != 0 )
        {
          v21 = 48 * v20 - 0x220000000000LL;
          if ( !(unsigned __int16)*(_DWORD *)(v21 + 32) && dword_140E3018C == (_DWORD)v12 )
            MiShowBadMapper(v19[1], 2uLL, 3);
          if ( (HIWORD(*(_DWORD *)(v21 + 32)) & 0xC0) == 0xC0 )
            MiAssignInitialPageAttribute(48 * v20 - 0x220000000000LL, a5);
          ProtectionPfnCompatible = MiMakeProtectionPfnCompatible(a4, 48 * v20 - 0x220000000000LL);
          v12 = 0LL;
          goto LABEL_47;
        }
        CurrentIrql = v53;
      }
      if ( v14 )
        goto LABEL_41;
      if ( HIDWORD(v52) == (_DWORD)v12 || v20 < (unsigned __int64)v51 || v20 > *((_QWORD *)&v51 + 1) )
      {
        if ( (_BYTE)CurrentIrql == 2 )
        {
          v23 = 17;
        }
        else
        {
          v23 = KeGetCurrentIrql();
          __writecr8(2uLL);
          if ( KiIrqlFlags != (_DWORD)v12 )
          {
            LOBYTE(v17) = 2;
            LOBYTE(CurrentIrql) = v23;
            KiRaiseIrqlProcessIrqlFlags(CurrentIrql, v17);
          }
        }
        MiIoSpaceGetBounds((__int64)&v51, v20);
        if ( v23 != 17 )
        {
          if ( KiIrqlFlags != (_DWORD)v12 )
          {
            LOBYTE(v24) = v23;
            KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v24);
            v12 = 0LL;
          }
          __writecr8(v23);
        }
        v11 = v50;
        v17 = v49;
      }
      if ( HIDWORD(v52) != 3 )
      {
        v15 = v52;
        goto LABEL_43;
      }
      v25 = v11 - v17;
      v14 = 1LL;
      if ( v11 - v17 > 1 )
      {
        v26 = v25 - 1;
        v27 = v19 + 2;
        if ( v25 != 1 )
        {
          do
          {
            v28 = *v27;
            if ( *v27 != *(v27 - 1) + 1
              || (v28 & 0x1FF) == 0
              || v28 <= qword_140E2DD20 && ((*(_QWORD *)(48 * v28 - 0x21FFFFFFFFD8LL) >> 54) & 1) != 0 )
            {
              break;
            }
            ++v14;
            ++v27;
            --v26;
          }
          while ( v26 );
          v12 = 0LL;
        }
      }
      v29 = MiReferenceIoPages(1u, v20, v14, a5, v12, &v54);
      v12 = 0LL;
      if ( v29 >= 0 )
      {
LABEL_41:
        v15 = ((unsigned int)v54[((unsigned __int64)(2
                                                   * (((unsigned int)v20 & ((unsigned int)(1LL << ((unsigned __int8)dword_140E2DC78
                                                                                                 - 12))
                                                                          - 1))
                                                    - *((_DWORD *)v54 + 6))) >> 5)
                               + 11] >> ((2
                                        * ((v20 & ((1LL << ((unsigned __int8)dword_140E2DC78 - 12)) - 1))
                                         - *((_BYTE *)v54 + 24))) & 0x1F)) & 3;
      }
      else
      {
        v13 = 0;
        v15 = a5;
        v14 = 1LL;
      }
      --v14;
LABEL_43:
      ProtectionPfnCompatible = a4 & 7;
      if ( v15 )
      {
        if ( v15 == 2 )
          ProtectionPfnCompatible |= 0x18u;
      }
      else
      {
        ProtectionPfnCompatible |= 0x10u;
      }
LABEL_47:
      if ( v13 )
      {
        if ( (v49 & 0x1FF) == 0 )
        {
          v30 = (v20 & 0x1FF) == 0;
          v48 = v15;
          v18 = ProtectionPfnCompatible;
          goto LABEL_54;
        }
        if ( v20 == *v19 + 1LL && ProtectionPfnCompatible == v18 )
        {
          v30 = v15 == v48;
LABEL_54:
          if ( !v30 )
            v13 = (int)v12;
          goto LABEL_56;
        }
        v13 = (int)v12;
      }
LABEL_56:
      ++v19;
      v11 = v50;
      v17 = v49 + 1;
      CurrentIrql = v53;
      v49 = v17;
      if ( v17 >= v50 )
      {
        v9 = a1;
        v7 = (unsigned __int64)BugCheckParameter2;
        a3 = v58;
        v5 = a4;
        break;
      }
    }
  }
  HIDWORD(v52) = (_DWORD)v12;
  if ( v13 )
  {
    MiMapMdlWithLargePages(v9, v7, a3, v5, a5, (__int64)&v51);
    goto LABEL_111;
  }
  v31 = (unsigned __int64)v12;
  v32 = (unsigned int)v12;
  if ( a3 )
  {
    v33 = 1;
    if ( (_BYTE)CurrentIrql == 2 )
    {
      v47 = 17;
      MiLockWorkingSetSharedAtDpc(a3);
    }
    else
    {
      v47 = MiLockWorkingSetShared(a3, v17, a3, v11);
    }
    LODWORD(v12) = 0;
  }
  else
  {
    v33 = (int)v12;
    v47 = 17;
  }
  v34 = BugCheckParameter2;
  v35 = a1 - BugCheckParameter2;
  do
  {
    if ( v33 )
    {
      if ( !v31 )
        goto LABEL_73;
      if ( ((unsigned __int16)v34 & 0xFFF) == 0 )
      {
        if ( v32 )
        {
          MiIncreaseUsedPtes(CurrentIrql, v31, v32, 2LL);
          v32 = 0;
        }
        MiUnlockPageTableInternal(v58, v31);
LABEL_73:
        v31 = (((unsigned __int64)v34 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        MiLockNestedPageTable(v58, v31);
        LODWORD(v12) = 0;
      }
    }
    v36 = *(_QWORD *)&v34[v35 + 48];
    v37 = (int)v12;
    if ( v36 <= qword_140E2DD20 )
    {
      CurrentIrql = 6 * v36;
      if ( ((*(_QWORD *)(48 * v36 - 0x21FFFFFFFFD8LL) >> 54) & 1) != 0 )
      {
        v38 = MiMakeProtectionPfnCompatible(a4, 48 * v36 - 0x220000000000LL);
        goto LABEL_97;
      }
    }
    if ( HIDWORD(v52) == (_DWORD)v12 || v36 < (unsigned __int64)v51 || v36 > *((_QWORD *)&v51 + 1) )
    {
      if ( (_BYTE)v53 == 2 )
      {
        v39 = 17;
      }
      else
      {
        v39 = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( KiIrqlFlags != (_DWORD)v12 )
        {
          LOBYTE(v17) = 2;
          LOBYTE(CurrentIrql) = v39;
          KiRaiseIrqlProcessIrqlFlags(CurrentIrql, v17);
        }
      }
      MiIoSpaceGetBounds((__int64)&v51, v36);
      if ( v39 != 17 )
      {
        if ( KiIrqlFlags != v41 )
        {
          LOBYTE(v40) = v39;
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v40);
        }
        __writecr8(v39);
      }
    }
    if ( HIDWORD(v52) == 3 )
    {
      v42 = MiLookupIoPageNode(v36, 0LL);
      if ( v42 != 3 )
        goto LABEL_93;
      v42 = a5;
    }
    else
    {
      v42 = v52;
    }
    v37 = 1;
LABEL_93:
    v38 = a4 & 7;
    if ( v42 )
    {
      if ( v42 == 2 )
        v38 |= 0x18u;
    }
    else
    {
      v38 |= 0x10u;
    }
LABEL_97:
    ValidPte = MiMakeValidPte((unsigned __int64)BugCheckParameter2, v36, v38 | 0xA0000000);
    LODWORD(v12) = 0;
    v44 = ValidPte;
    if ( v37 )
      v44 = ValidPte | 0x200;
    if ( _bittest64(&MiFlags, 0x24u) )
    {
      if ( (v44 & 0x20) == 0 )
      {
        CurrentIrql = 0x4000000000LL;
        if ( (unsigned __int64)BugCheckParameter2 >= 0xFFFFF6C000000000uLL )
        {
          MiCheckLinearProtectedPteAccessedBit((ULONG_PTR)BugCheckParameter2, v44, 128LL);
          LODWORD(v12) = 0;
        }
      }
    }
    *(_QWORD *)BugCheckParameter2 = v44;
    v34 = BugCheckParameter2 + 8;
    ++v32;
    v30 = v50-- == 1;
    BugCheckParameter2 += 8;
  }
  while ( !v30 );
  if ( v33 )
  {
    if ( v31 )
    {
      if ( v32 )
        MiIncreaseUsedPtes(CurrentIrql, v31, v32, 2LL);
      MiUnlockPageTableInternal(v58, v31);
    }
    MiUnlockWorkingSetShared(v58, v47);
  }
  v9 = a1;
LABEL_111:
  result = v55;
  v46 = *((_WORD *)v9 + 5) | 1;
  *((_QWORD *)v9 + 3) = v55;
  *((_WORD *)v9 + 5) = v46;
  if ( (v46 & 0x10) != 0 )
    *((_WORD *)v9 + 5) = v46 | 0x20;
  return result;
}
