/*
 * XREFs of MiIdentifyPfn @ 0x1403113F0
 * Callers:
 *     MiMakePageAvoidRead @ 0x140253334 (MiMakePageAvoidRead.c)
 *     MiCombineWithExisting @ 0x140294840 (MiCombineWithExisting.c)
 *     MiCombineInitialInstance @ 0x140294F94 (MiCombineInitialInstance.c)
 *     MiDemoteCombinedPte @ 0x140296374 (MiDemoteCombinedPte.c)
 *     MiIdentifyPfnWrapper @ 0x140311220 (MiIdentifyPfnWrapper.c)
 *     MmSetPfnListInfo @ 0x140311F44 (MmSetPfnListInfo.c)
 *     MiCopyOnWrite @ 0x140346A74 (MiCopyOnWrite.c)
 *     MiDecommitPrivatePageTail @ 0x1404EFCE0 (MiDecommitPrivatePageTail.c)
 *     MmTryIdentifyPage @ 0x140673A4C (MmTryIdentifyPage.c)
 *     MiUpdateBadPfnIdentity @ 0x140675B60 (MiUpdateBadPfnIdentity.c)
 * Callees:
 *     MiStartingOffset @ 0x14020C7B0 (MiStartingOffset.c)
 *     MiGetLeafVa @ 0x140240700 (MiGetLeafVa.c)
 *     MiGetTopLevelPfn @ 0x1402FB290 (MiGetTopLevelPfn.c)
 *     MiGetSystemRegionType @ 0x1402FDF90 (MiGetSystemRegionType.c)
 *     MiGetPfnPageSizeIndex @ 0x140310FA0 (MiGetPfnPageSizeIndex.c)
 *     MiGetBaseResidentPage @ 0x140310FE0 (MiGetBaseResidentPage.c)
 *     MiHyperPage @ 0x1403125F8 (MiHyperPage.c)
 *     MiGetPfnPidSafe @ 0x140313734 (MiGetPfnPidSafe.c)
 *     MiGetPfnPriority @ 0x140335630 (MiGetPfnPriority.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140338DA0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403394D0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiGetLeafPfnBuddy @ 0x14042D1D0 (MiGetLeafPfnBuddy.c)
 */

unsigned __int64 __fastcall MiIdentifyPfn(unsigned __int64 a1, __int64 *a2)
{
  __int64 v4; // rbx
  _QWORD *v5; // rax
  __int64 v6; // rdx
  unsigned int PfnPriority; // eax
  int v8; // r11d
  __int64 BaseResidentPage; // rdi
  unsigned int v10; // r15d
  int PfnPageSizeIndex; // eax
  unsigned int v12; // r12d
  __int64 v13; // r9
  __int64 v14; // r13
  unsigned int v15; // r10d
  __int64 v16; // r8
  __int64 v17; // r13
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // rbx
  unsigned __int64 result; // rax
  unsigned __int64 v21; // rbx
  __int64 v22; // r14
  __int64 v23; // r14
  __int64 v24; // rdi
  unsigned int v25; // ebx
  volatile LONG *v26; // rcx
  unsigned __int64 v27; // rdx
  unsigned __int64 v28; // rax
  __int64 v29; // rax
  unsigned __int64 v30; // r12
  __int64 v31; // r8
  __int64 v32; // r9
  unsigned int SystemRegionType; // ecx
  __int64 v34; // r8
  __int64 v35; // rax
  __int64 v36; // r11
  unsigned __int64 v37; // rax
  unsigned __int64 v38; // rdi
  __int64 v39; // rax
  unsigned __int64 v40; // rax
  unsigned __int64 v41; // r13
  unsigned __int64 LeafVa; // rax
  __int64 v43; // r8
  unsigned __int64 v44; // r11
  int v45; // eax
  __int64 v46; // rax
  unsigned __int64 v47; // rax
  unsigned __int64 v48; // rax
  __int64 v49; // rax
  unsigned __int64 v50; // rcx
  unsigned __int64 v51; // rbx
  __int64 v52; // rcx
  __int64 v53; // rax
  unsigned __int64 v54; // rcx
  __int64 v55; // rcx
  __int64 v56; // rcx
  __int64 v57; // rcx
  __int64 v58; // rcx
  __int64 v59; // rax
  _QWORD *v60; // rax
  unsigned __int64 v61; // r10
  unsigned __int64 LeafPfnBuddy; // rax
  unsigned __int64 v63; // r10
  unsigned int PfnPidSafe; // r12d
  unsigned __int64 v65; // rcx
  __int64 TopLevelPfn; // rax
  __int64 v67; // r11
  __int64 v68; // [rsp+30h] [rbp-19h]
  __int128 v69; // [rsp+38h] [rbp-11h] BYREF
  __int128 v70; // [rsp+48h] [rbp-1h]
  __int128 v71; // [rsp+58h] [rbp+Fh]
  unsigned __int64 v72; // [rsp+C0h] [rbp+77h]

  *(_OWORD *)a2 = 0LL;
  a2[2] = 0LL;
  v69 = 0LL;
  v70 = 0LL;
  v71 = 0LL;
  if ( stru_140E300F0.Buffer )
  {
    v54 = (a1 >> 18) & 0x3FFFFF;
    if ( _bittest64((const signed __int64 *)stru_140E300F0.Buffer, v54) )
    {
      v52 = *(_QWORD *)(qword_140E30100 + 8 * v54) & 7LL;
      if ( v52 == 5 || !v52 )
        goto LABEL_122;
      v55 = v52 - 1;
      if ( !v55 )
      {
        v53 = 270LL;
        goto LABEL_123;
      }
      v56 = v55 - 1;
      if ( !v56 )
      {
        v53 = 286LL;
        goto LABEL_123;
      }
      v57 = v56 - 1;
      if ( !v57 )
      {
        v53 = 366LL;
        goto LABEL_123;
      }
      if ( v57 == 1 )
        v53 = 350LL;
      else
LABEL_122:
        v53 = 382LL;
LABEL_123:
      *a2 = v53;
      a2[1] = a1;
      return (a1 & 0xFFFFFFFFFFFC0000uLL) - a1 + 0x40000;
    }
  }
  v4 = 48 * a1 - 0x220000000000LL;
  v5 = (_QWORD *)v4;
  v6 = 6LL;
  do
  {
    *(_QWORD *)((char *)&v69 + (_QWORD)v5 - v4) = *v5;
    ++v5;
    --v6;
  }
  while ( v6 );
  *a2 = *a2 & 0xFFFFFFFFFFFFFF8FuLL | (16LL * (BYTE2(v71) & 7));
  a2[1] = a1;
  PfnPriority = MiGetPfnPriority(&v69);
  *a2 = ((unsigned __int64)PfnPriority << 57) ^ (*a2 ^ ((unsigned __int64)PfnPriority << 57)) & 0xF1FFFFFFFFFFFFFFuLL;
  if ( (*((_QWORD *)&v71 + 1) & 0x10000000000LL) != 0 )
  {
    BaseResidentPage = MiGetBaseResidentPage(48 * a1 - 0x220000000000LL);
    v10 = *(_BYTE *)(BaseResidentPage + 34) & 7;
    PfnPageSizeIndex = MiGetPfnPageSizeIndex(BaseResidentPage);
    v12 = 0;
    v72 = 0LL;
    LODWORD(v13) = 0;
    v14 = MiPageSizes[PfnPageSizeIndex];
    v15 = 1;
    v16 = a1 & ~(v14 - 1);
    v17 = v16 + v14 - a1;
    v68 = v17;
    if ( v10 != 6 )
    {
      v18 = 0LL;
      goto LABEL_7;
    }
    if ( ((*(_QWORD *)(BaseResidentPage + 40) >> 60) & 7) == 1 )
    {
      LODWORD(v13) = 1;
    }
    else
    {
      v39 = *(_QWORD *)(BaseResidentPage + 16) >> 3;
      if ( (*(_QWORD *)(BaseResidentPage + 16) & 0x400LL) != 0 )
        LOBYTE(v39) = *(_QWORD *)(BaseResidentPage + 16) >> 11;
      if ( (v39 & 1) != 0 )
        *a2 |= 0x80uLL;
    }
    v18 = *(_QWORD *)(BaseResidentPage + 8);
    v72 = v18;
    if ( v18 )
    {
      if ( ((*(_QWORD *)(BaseResidentPage + 40) >> 60) & 7) == 1 )
      {
        v40 = *(_QWORD *)(BaseResidentPage + 8);
      }
      else
      {
        v40 = *(_QWORD *)(BaseResidentPage + 8) | 0x8000000000000000uLL;
        v72 = v40;
      }
      if ( (unsigned __int64)((__int64)(v40 << 25) >> 16) >= 0xFFFFF68000000000uLL )
      {
        v41 = (__int64)(v40 << 25) >> 16;
        do
        {
          if ( v41 > 0xFFFFF6FFFFFFFFFFuLL )
            break;
          v72 = v41;
          v41 = (__int64)(v41 << 25) >> 16;
        }
        while ( v41 >= 0xFFFFF68000000000uLL );
        v17 = v68;
      }
      v72 += 8 * (a1 - v16);
      LeafVa = MiGetLeafVa(v72);
      if ( LeafVa > v44 )
        goto LABEL_88;
      if ( (*(_QWORD *)BaseResidentPage & 0xFFFFFFFFFFuLL) <= 0x40000
        || (LeafPfnBuddy = MiGetLeafPfnBuddy(BaseResidentPage, v15, v43, v13), LeafPfnBuddy >= 0xFFFFDE0000000000uLL)
        && LeafPfnBuddy < 48 * qword_140E2DD20 - 0x21FFFFFFFFD0LL
        || !LeafPfnBuddy )
      {
        v10 = v15;
LABEL_88:
        v18 = v72;
        goto LABEL_7;
      }
      v18 = v72;
      if ( *(_QWORD *)LeafPfnBuddy != 399680LL )
        v12 = *(_DWORD *)(LeafPfnBuddy + 464);
    }
LABEL_7:
    if ( BaseResidentPage != v4 )
      _InterlockedAnd64((volatile signed __int64 *)(BaseResidentPage + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( v10 == 6 )
    {
      v21 = *a2 & 0xFFFFFFFFFFFFFE8FuLL | 0x160;
      *a2 = v21;
      if ( (_DWORD)v13 )
      {
        *a2 = v21 & 0xFE000000000001F9uLL | ((unsigned __int64)v12 << 9) | 9;
        return v17;
      }
      if ( (unsigned int)MiGetSystemRegionType(v18) == 4 )
      {
        *a2 = v21 & 0xFE000000000001F3uLL | ((unsigned __int64)*(unsigned int *)(v72 - 344) << 9) | 3;
        a2[2] = 0xFFFFF6FB7DBED000uLL;
        return v17;
      }
      v38 = MiGetLeafVa(v72);
      if ( (unsigned int)MiGetSystemRegionType(v38) == 4 )
      {
        a2[2] = v38;
        *a2 = v21 & 0xFFFFFFFFFFFFFFF0uLL | 5;
        return v17;
      }
      a2[2] = v38 & 0xFFFFFFFFFFFFF000uLL;
      if ( v38 <= 0x7FFFFFFEFFFFLL )
      {
        v51 = v21 & 0xFE000000000001FFuLL | ((unsigned __int64)v12 << 9);
        *a2 = v51;
        v19 = v51 & 0xFFFFFFFFFFFFFFF0uLL | 0xD;
      }
      else
      {
        v19 = v21 & 0xFFFFFFFFFFFFFFF0uLL | 6;
      }
    }
    else
    {
      if ( v10 == 5 )
        v10 = v15;
      v19 = *a2 & 0xF1FFFFFFFFFFFF8FuLL | (16LL * v10);
    }
    *a2 = v19;
    return v17;
  }
  if ( v8 == 6 )
  {
    if ( (v69 & 1) == 0 || (BYTE3(v71) & 8) != 0 || (unsigned __int16)v71 > 1u )
      *a2 |= 0x100uLL;
  }
  else
  {
    if ( v8 != 4 )
    {
      switch ( v8 )
      {
        case 0:
        case 1:
        case 5:
          return 1LL;
        case 2:
        case 3:
          goto LABEL_57;
        case 4:
        case 6:
          goto LABEL_24;
        case 7:
          v58 = *((_QWORD *)&v69 + 1);
          v59 = *((_QWORD *)&v71 + 1);
          *a2 |= 0x100uLL;
          if ( v59 >= 0 )
            a2[2] = (v58 << 25 >> 16) & 0xFFFFFFFFFFFFF000uLL;
          if ( ((*((_QWORD *)&v71 + 1) >> 60) & 7) == 1 )
          {
            v63 = *a2 & 0xFE000000000001F9uLL | ((unsigned __int64)(unsigned int)MiGetPfnPidSafe(&v69, 3LL) << 9) | 9;
          }
          else
          {
            v63 = *a2 & 0xFFFFFFFFFFFFFFF0uLL;
            if ( (*((_QWORD *)&v71 + 1) & 0xFFFFFFFFFFLL) == 0x3FFFFFFFFELL )
              v63 = *a2 & 0xFFFFFFFFFFFFFFF0uLL | 0xA;
          }
          *a2 = v63;
          result = 1LL;
          break;
      }
      return result;
    }
LABEL_57:
    if ( (_WORD)v71 )
      *a2 |= 0x100uLL;
    if ( (*((_QWORD *)&v70 + 1) & 0x4000000000000000LL) != 0 )
    {
      if ( v71 >= 0 )
        a2[2] = ((__int64)(*((_QWORD *)&v69 + 1) << 25) >> 16) & 0xFFFFFFFFFFFFF000uLL;
      goto LABEL_67;
    }
    v37 = (unsigned __int64)v70 >> 11;
    if ( (v70 & 0x400) == 0 )
      v37 = (unsigned __int64)v70 >> 3;
    if ( (v37 & 1) != 0 )
      *a2 |= 0x80uLL;
  }
LABEL_24:
  if ( v71 >= 0 )
  {
    v30 = *((_QWORD *)&v69 + 1);
    if ( *((_QWORD *)&v69 + 1) && ((*((_QWORD *)&v71 + 1) >> 60) & 7) != 1 )
      v30 = *((_QWORD *)&v69 + 1) | 0x8000000000000000uLL;
    if ( (unsigned int)MiGetSystemRegionType(v30) == 4 )
    {
      *a2 = *a2 & 0xFE000000000001F3uLL | ((unsigned __int64)*(unsigned int *)(v30 - 344) << 9) | 3;
      result = 1LL;
      a2[2] = 0xFFFFF6FB7DBED000uLL;
      return result;
    }
    if ( v30 == -8LL )
    {
      *a2 = *a2 & 0xFFFFFFFFFFFFFFF0uLL | 5;
      a2[2] = (__int64)MmBadPointer;
      return 1LL;
    }
    if ( ((*((_QWORD *)&v71 + 1) >> 60) & 7) == 1 )
    {
      v60 = (_QWORD *)MiGetLeafPfnBuddy(&v69, 1LL, v31, v32);
      if ( ((unsigned __int64)v60 < 0xFFFFDE0000000000uLL
         || (unsigned __int64)v60 >= 48 * qword_140E2DD20 - 0x21FFFFFFFFD0LL)
        && v60 )
      {
        if ( *v60 == 399680LL )
          PfnPidSafe = 0;
        else
          PfnPidSafe = MiGetPfnPidSafe(&v69, 3LL);
        v65 = *a2 & 0xFE000000000001FFuLL | ((unsigned __int64)PfnPidSafe << 9);
      }
      else
      {
        v65 = *a2 & 0xFFFFFFFFFFFFFF8FuLL | 0x10;
      }
      result = v61;
      *a2 = v65 & 0xFFFFFFFFFFFFFFF0uLL | 9;
      return result;
    }
    if ( v30 )
    {
      if ( v30 > 0xFFFFFFFFFFFFFFFDuLL )
      {
        *a2 = *a2 & 0xF1FFFFFFFFFFFF8FuLL | 0x10;
        return 1LL;
      }
      v30 = (__int64)(v30 << 25) >> 16;
    }
    SystemRegionType = MiGetSystemRegionType(v30);
    if ( SystemRegionType == 4 )
    {
      v47 = *a2 & 0xFFFFFFFFFFFFFFF5uLL;
      a2[2] = v30;
      *a2 = v47 | 5;
      return 1LL;
    }
    a2[2] = v30 & 0xFFFFFFFFFFFFF000uLL;
    if ( (*((_QWORD *)&v71 + 1) & 0xFFFFFFFFFFLL) == 0x3FFFFFFFFELL )
    {
      v46 = *a2;
      if ( SystemRegionType != 8 )
      {
        *a2 = v46 & 0xFFFFFFFFFFFFFFF0uLL | 0xA;
        return 1LL;
      }
LABEL_96:
      *a2 = v46 & 0xFFFFFFFFFFFFFFF0uLL | 6;
      return 1LL;
    }
    if ( v30 > 0x7FFFFFFEFFFFLL )
    {
      if ( ((*((_QWORD *)&v71 + 1) >> 60) & 7) == 2 )
      {
        *a2 = *a2 & 0xFFFFFFFFFFFFFFF0uLL | 0xB;
        return 1LL;
      }
      if ( SystemRegionType == 5 )
      {
        *a2 = *a2 & 0xFFFFFFFFFFFFFFF0uLL | 4;
        return 1LL;
      }
      if ( SystemRegionType <= 0x11 )
      {
        v45 = 174336;
        if ( _bittest(&v45, SystemRegionType) )
        {
          v46 = *a2;
          goto LABEL_96;
        }
      }
    }
    if ( (BYTE2(v71) & 7) == 6 && ((v69 & 1) == 0 || (BYTE3(v71) & 8) != 0) )
    {
      if ( v30 > 0x7FFFFFFEFFFFLL && (unsigned int)MiHyperPage(&v69, 0x7FFFFFFEFFFFLL, v34) )
      {
        TopLevelPfn = MiGetTopLevelPfn(48 * a1 - 0x220000000000LL);
        *a2 = *a2 & 0xFE000000000001FFuLL | ((unsigned __int64)(unsigned int)MiGetPfnPidSafe(TopLevelPfn, 2LL) << 9);
        if ( v67 != v4 )
          _InterlockedAnd64((volatile signed __int64 *)(v67 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        v48 = *a2 & 0xFFFFFFFFFFFFFFF0uLL | 0xC;
      }
      else if ( v30 < 0xFFFFF68000000000uLL || v30 > 0xFFFFF6FFFFFFFFFFuLL )
      {
        v48 = *a2 & 0xFFFFFFFFFFFFFFF0uLL | 5;
      }
      else
      {
        v48 = *a2 & 0xFFFFFFFFFFFFFFF0uLL | 3;
      }
      *a2 = v48;
      return 1LL;
    }
    v35 = MiGetTopLevelPfn(48 * a1 - 0x220000000000LL);
    *a2 = *a2 & 0xFE000000000001FFuLL | ((unsigned __int64)(unsigned int)MiGetPfnPidSafe(v35, 2LL) << 9);
    if ( v36 != v4 )
      _InterlockedAnd64((volatile signed __int64 *)(v36 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( v30 >= 0xFFFFF68000000000uLL && v30 <= 0xFFFFF6FFFFFFFFFFuLL )
    {
      *a2 = *a2 & 0xFFFFFFFFFFFFFFF0uLL | 3;
      return 1LL;
    }
    if ( v30 >= qword_140E2F3C0 && v30 <= qword_140E2F3D0 )
    {
      *a2 = *a2 & 0xFFFFFFFFFFFFFFF0uLL | 0xC;
      return 1LL;
    }
LABEL_67:
    *a2 &= 0xFFFFFFFFFFFFFFF0uLL;
    return 1LL;
  }
  v22 = v70;
  if ( (v70 & 0x400) != 0 )
  {
    if ( qword_140E2DCC0 && (v70 & 0x10) == 0 )
      v22 = v70 & ~qword_140E2DCC0;
    v23 = v22 >> 16;
    v24 = *(_QWORD *)v23;
    v25 = *(_DWORD *)(*(_QWORD *)v23 + 56LL);
    ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(*(_QWORD *)v23 + 72LL));
    v26 = (volatile LONG *)(v24 + 72);
    if ( (*(_QWORD *)(v24 + 64) & 0xFFFFFFFFFFFFFFF0uLL) != 0 )
    {
      a2[2] = *(_QWORD *)((*(_QWORD *)(v24 + 64) & 0xFFFFFFFFFFFFFFF0uLL) + 0x18);
      ExReleaseSpinLockExclusiveFromDpcLevel(v26);
      a2[2] = ((unsigned __int64)v25 >> 5) ^ (a2[2] ^ ((unsigned __int64)v25 >> 5)) & 0xFFFFFFFFFFFFFFFEuLL;
      if ( *(_QWORD *)(v23 + 8) )
      {
        if ( (*(_DWORD *)(v23 + 32) & 0x20000) != 0 && (v25 & 0x8000000) != 0 )
          v27 = *(_QWORD *)(v23 + 8);
        else
          v27 = *((_QWORD *)&v69 + 1) | 0x8000000000000000uLL;
        v28 = MiStartingOffset((__int64 *)v23, v27, 0xFFFFFFFF);
        *a2 = v28 ^ (*a2 ^ v28) & 0xFE000000000001FFuLL;
      }
      v29 = *a2;
      if ( (v25 & 9) == 8 )
      {
        *a2 = v29 & 0xFFFFFFFFFFFFFFF0uLL | 8;
        return 1LL;
      }
      else
      {
        *a2 = v29 & 0xFFFFFFFFFFFFFFF0uLL | 1;
        return 1LL;
      }
    }
    else
    {
      *a2 = *a2 & 0xFFFFFFFFFFFFFE8FuLL | 0x10;
      ExReleaseSpinLockExclusiveFromDpcLevel(v26);
      return 1LL;
    }
  }
  else
  {
    a2[2] = *((_QWORD *)&v69 + 1) | 0x8000000000000000uLL;
    if ( (*((_QWORD *)&v71 + 1) & 0x10000000000LL) == 0 && *((__int64 *)&v69 + 1) > 0 )
    {
      v49 = *((_QWORD *)&v69 + 1);
      a2[2] |= 1uLL;
      v50 = *(_QWORD *)((v49 | 0x8000000000000000uLL) + 0x18);
      if ( v50 >= 0x1000000000000LL )
        v50 = 0xFFFFFFFFFFFFLL;
      *a2 = (v50 << 9) ^ (*a2 ^ (v50 << 9)) & 0xFE000000000001FFuLL;
    }
    *a2 = *a2 & 0xFFFFFFFFFFFFFFF0uLL | 2;
    return 1LL;
  }
}
