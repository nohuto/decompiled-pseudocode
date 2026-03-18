/*
 * XREFs of MiIdentifyPfn @ 0x140307510
 * Callers:
 *     MiCopyOnWrite @ 0x1402E47DC (MiCopyOnWrite.c)
 *     MiMakePageAvoidRead @ 0x1402EF168 (MiMakePageAvoidRead.c)
 *     MiCombineWithExisting @ 0x1402F92E0 (MiCombineWithExisting.c)
 *     MiIdentifyPfnWrapper @ 0x140307340 (MiIdentifyPfnWrapper.c)
 *     MmSetPfnListInfo @ 0x140308064 (MmSetPfnListInfo.c)
 *     MiCombineInitialInstance @ 0x14036C3E0 (MiCombineInitialInstance.c)
 *     MiDemoteCombinedPte @ 0x1403FABBC (MiDemoteCombinedPte.c)
 *     MiDecommitPrivatePageTail @ 0x1404F2240 (MiDecommitPrivatePageTail.c)
 *     MmTryIdentifyPage @ 0x14067287C (MmTryIdentifyPage.c)
 *     MiUpdateBadPfnIdentity @ 0x140674990 (MiUpdateBadPfnIdentity.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14020FA40 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140210170 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiGetPfnPriority @ 0x1402141E0 (MiGetPfnPriority.c)
 *     MiGetTopLevelPfn @ 0x140228010 (MiGetTopLevelPfn.c)
 *     MiGetSystemRegionType @ 0x14022AD20 (MiGetSystemRegionType.c)
 *     MiStartingOffset @ 0x140244020 (MiStartingOffset.c)
 *     MiGetLeafVa @ 0x1402DEE20 (MiGetLeafVa.c)
 *     MiGetPfnPageSizeIndex @ 0x1403070C0 (MiGetPfnPageSizeIndex.c)
 *     MiGetBaseResidentPage @ 0x140307100 (MiGetBaseResidentPage.c)
 *     MiHyperPage @ 0x140308718 (MiHyperPage.c)
 *     MiGetPfnPidSafe @ 0x140309854 (MiGetPfnPidSafe.c)
 *     MiGetLeafPfnBuddy @ 0x14043A990 (MiGetLeafPfnBuddy.c)
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
  int v13; // r9d
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
  unsigned int SystemRegionType; // ecx
  __int64 v32; // r8
  __int64 v33; // rax
  __int64 v34; // r11
  unsigned __int64 v35; // rax
  unsigned __int64 v36; // rdi
  __int64 v37; // rax
  unsigned __int64 v38; // rax
  unsigned __int64 v39; // r13
  unsigned __int64 LeafVa; // rax
  unsigned __int64 v41; // r11
  int v42; // eax
  __int64 v43; // rax
  unsigned __int64 v44; // rax
  unsigned __int64 v45; // rax
  __int64 v46; // rax
  unsigned __int64 v47; // rcx
  unsigned __int64 v48; // rbx
  __int64 v49; // rcx
  __int64 v50; // rax
  unsigned __int64 v51; // rcx
  __int64 v52; // rcx
  __int64 v53; // rcx
  __int64 v54; // rcx
  __int64 v55; // rcx
  __int64 v56; // rax
  _QWORD *v57; // rax
  unsigned __int64 v58; // r10
  unsigned __int64 LeafPfnBuddy; // rax
  unsigned __int64 v60; // r10
  unsigned int PfnPidSafe; // r12d
  unsigned __int64 v62; // rcx
  __int64 TopLevelPfn; // rax
  __int64 v64; // r11
  __int64 v65; // [rsp+30h] [rbp-19h]
  __int128 v66; // [rsp+38h] [rbp-11h] BYREF
  __int128 v67; // [rsp+48h] [rbp-1h]
  __int128 v68; // [rsp+58h] [rbp+Fh]
  unsigned __int64 v69; // [rsp+C0h] [rbp+77h]

  *(_OWORD *)a2 = 0LL;
  a2[2] = 0LL;
  v66 = 0LL;
  v67 = 0LL;
  v68 = 0LL;
  if ( qword_140E2FFB8 )
  {
    v51 = (a1 >> 18) & 0x3FFFFF;
    if ( _bittest64((const signed __int64 *)qword_140E2FFB8, v51) )
    {
      v49 = *(_QWORD *)(qword_140E2FFC0 + 8 * v51) & 7LL;
      if ( v49 == 5 || !v49 )
        goto LABEL_122;
      v52 = v49 - 1;
      if ( !v52 )
      {
        v50 = 270LL;
        goto LABEL_123;
      }
      v53 = v52 - 1;
      if ( !v53 )
      {
        v50 = 286LL;
        goto LABEL_123;
      }
      v54 = v53 - 1;
      if ( !v54 )
      {
        v50 = 366LL;
        goto LABEL_123;
      }
      if ( v54 == 1 )
        v50 = 350LL;
      else
LABEL_122:
        v50 = 382LL;
LABEL_123:
      *a2 = v50;
      a2[1] = a1;
      return (a1 & 0xFFFFFFFFFFFC0000uLL) - a1 + 0x40000;
    }
  }
  v4 = 48 * a1 - 0x220000000000LL;
  v5 = (_QWORD *)v4;
  v6 = 6LL;
  do
  {
    *(_QWORD *)((char *)&v66 + (_QWORD)v5 - v4) = *v5;
    ++v5;
    --v6;
  }
  while ( v6 );
  *a2 = *a2 & 0xFFFFFFFFFFFFFF8FuLL | (16LL * (BYTE2(v68) & 7));
  a2[1] = a1;
  PfnPriority = MiGetPfnPriority((unsigned __int64)&v66);
  *a2 = ((unsigned __int64)PfnPriority << 57) ^ (*a2 ^ ((unsigned __int64)PfnPriority << 57)) & 0xF1FFFFFFFFFFFFFFuLL;
  if ( (*((_QWORD *)&v68 + 1) & 0x10000000000LL) != 0 )
  {
    BaseResidentPage = MiGetBaseResidentPage(48 * a1 - 0x220000000000LL);
    v10 = *(_BYTE *)(BaseResidentPage + 34) & 7;
    PfnPageSizeIndex = MiGetPfnPageSizeIndex(BaseResidentPage);
    v12 = 0;
    v69 = 0LL;
    v13 = 0;
    v14 = MiPageSizes[PfnPageSizeIndex];
    v15 = 1;
    v16 = a1 & ~(v14 - 1);
    v17 = v16 + v14 - a1;
    v65 = v17;
    if ( v10 != 6 )
    {
      v18 = 0LL;
      goto LABEL_7;
    }
    if ( ((*(_QWORD *)(BaseResidentPage + 40) >> 60) & 7) == 1 )
    {
      v13 = 1;
    }
    else
    {
      v37 = *(_QWORD *)(BaseResidentPage + 16) >> 3;
      if ( (*(_QWORD *)(BaseResidentPage + 16) & 0x400LL) != 0 )
        LOBYTE(v37) = *(_QWORD *)(BaseResidentPage + 16) >> 11;
      if ( (v37 & 1) != 0 )
        *a2 |= 0x80uLL;
    }
    v18 = *(_QWORD *)(BaseResidentPage + 8);
    v69 = v18;
    if ( v18 )
    {
      if ( ((*(_QWORD *)(BaseResidentPage + 40) >> 60) & 7) == 1 )
      {
        v38 = *(_QWORD *)(BaseResidentPage + 8);
      }
      else
      {
        v38 = *(_QWORD *)(BaseResidentPage + 8) | 0x8000000000000000uLL;
        v69 = v38;
      }
      if ( (unsigned __int64)((__int64)(v38 << 25) >> 16) >= 0xFFFFF68000000000uLL )
      {
        v39 = (__int64)(v38 << 25) >> 16;
        do
        {
          if ( v39 > 0xFFFFF6FFFFFFFFFFuLL )
            break;
          v69 = v39;
          v39 = (__int64)(v39 << 25) >> 16;
        }
        while ( v39 >= 0xFFFFF68000000000uLL );
        v17 = v65;
      }
      v69 += 8 * (a1 - v16);
      LeafVa = MiGetLeafVa(v69);
      if ( LeafVa > v41 )
        goto LABEL_88;
      if ( (*(_QWORD *)BaseResidentPage & 0xFFFFFFFFFFuLL) <= 0x40000
        || (LeafPfnBuddy = MiGetLeafPfnBuddy(BaseResidentPage, v15), LeafPfnBuddy >= 0xFFFFDE0000000000uLL)
        && LeafPfnBuddy < 48 * qword_140E2DBE0 - 0x21FFFFFFFFD0LL
        || !LeafPfnBuddy )
      {
        v10 = v15;
LABEL_88:
        v18 = v69;
        goto LABEL_7;
      }
      v18 = v69;
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
      if ( v13 )
      {
        *a2 = v21 & 0xFE000000000001F9uLL | ((unsigned __int64)v12 << 9) | 9;
        return v17;
      }
      if ( (unsigned int)MiGetSystemRegionType(v18) == 4 )
      {
        *a2 = v21 & 0xFE000000000001F3uLL | ((unsigned __int64)*(unsigned int *)(v69 - 344) << 9) | 3;
        a2[2] = 0xFFFFF6FB7DBED000uLL;
        return v17;
      }
      v36 = MiGetLeafVa(v69);
      if ( (unsigned int)MiGetSystemRegionType(v36) == 4 )
      {
        a2[2] = v36;
        *a2 = v21 & 0xFFFFFFFFFFFFFFF0uLL | 5;
        return v17;
      }
      a2[2] = v36 & 0xFFFFFFFFFFFFF000uLL;
      if ( v36 <= 0x7FFFFFFEFFFFLL )
      {
        v48 = v21 & 0xFE000000000001FFuLL | ((unsigned __int64)v12 << 9);
        *a2 = v48;
        v19 = v48 & 0xFFFFFFFFFFFFFFF0uLL | 0xD;
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
    if ( (v66 & 1) == 0 || (BYTE3(v68) & 8) != 0 || (unsigned __int16)v68 > 1u )
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
          v55 = *((_QWORD *)&v66 + 1);
          v56 = *((_QWORD *)&v68 + 1);
          *a2 |= 0x100uLL;
          if ( v56 >= 0 )
            a2[2] = (v55 << 25 >> 16) & 0xFFFFFFFFFFFFF000uLL;
          if ( ((*((_QWORD *)&v68 + 1) >> 60) & 7) == 1 )
          {
            v60 = *a2 & 0xFE000000000001F9uLL | ((unsigned __int64)(unsigned int)MiGetPfnPidSafe(&v66, 3LL) << 9) | 9;
          }
          else
          {
            v60 = *a2 & 0xFFFFFFFFFFFFFFF0uLL;
            if ( (*((_QWORD *)&v68 + 1) & 0xFFFFFFFFFFLL) == 0x3FFFFFFFFELL )
              v60 = *a2 & 0xFFFFFFFFFFFFFFF0uLL | 0xA;
          }
          *a2 = v60;
          result = 1LL;
          break;
      }
      return result;
    }
LABEL_57:
    if ( (_WORD)v68 )
      *a2 |= 0x100uLL;
    if ( (*((_QWORD *)&v67 + 1) & 0x4000000000000000LL) != 0 )
    {
      if ( v68 >= 0 )
        a2[2] = ((__int64)(*((_QWORD *)&v66 + 1) << 25) >> 16) & 0xFFFFFFFFFFFFF000uLL;
      goto LABEL_67;
    }
    v35 = (unsigned __int64)v67 >> 11;
    if ( (v67 & 0x400) == 0 )
      v35 = (unsigned __int64)v67 >> 3;
    if ( (v35 & 1) != 0 )
      *a2 |= 0x80uLL;
  }
LABEL_24:
  if ( v68 >= 0 )
  {
    v30 = *((_QWORD *)&v66 + 1);
    if ( *((_QWORD *)&v66 + 1) && ((*((_QWORD *)&v68 + 1) >> 60) & 7) != 1 )
      v30 = *((_QWORD *)&v66 + 1) | 0x8000000000000000uLL;
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
    if ( ((*((_QWORD *)&v68 + 1) >> 60) & 7) == 1 )
    {
      v57 = (_QWORD *)MiGetLeafPfnBuddy(&v66, 1LL);
      if ( ((unsigned __int64)v57 < 0xFFFFDE0000000000uLL
         || (unsigned __int64)v57 >= 48 * qword_140E2DBE0 - 0x21FFFFFFFFD0LL)
        && v57 )
      {
        if ( *v57 == 399680LL )
          PfnPidSafe = 0;
        else
          PfnPidSafe = MiGetPfnPidSafe(&v66, 3LL);
        v62 = *a2 & 0xFE000000000001FFuLL | ((unsigned __int64)PfnPidSafe << 9);
      }
      else
      {
        v62 = *a2 & 0xFFFFFFFFFFFFFF8FuLL | 0x10;
      }
      result = v58;
      *a2 = v62 & 0xFFFFFFFFFFFFFFF0uLL | 9;
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
      v44 = *a2 & 0xFFFFFFFFFFFFFFF5uLL;
      a2[2] = v30;
      *a2 = v44 | 5;
      return 1LL;
    }
    a2[2] = v30 & 0xFFFFFFFFFFFFF000uLL;
    if ( (*((_QWORD *)&v68 + 1) & 0xFFFFFFFFFFLL) == 0x3FFFFFFFFELL )
    {
      v43 = *a2;
      if ( SystemRegionType != 8 )
      {
        *a2 = v43 & 0xFFFFFFFFFFFFFFF0uLL | 0xA;
        return 1LL;
      }
LABEL_96:
      *a2 = v43 & 0xFFFFFFFFFFFFFFF0uLL | 6;
      return 1LL;
    }
    if ( v30 > 0x7FFFFFFEFFFFLL )
    {
      if ( ((*((_QWORD *)&v68 + 1) >> 60) & 7) == 2 )
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
        v42 = 174336;
        if ( _bittest(&v42, SystemRegionType) )
        {
          v43 = *a2;
          goto LABEL_96;
        }
      }
    }
    if ( (BYTE2(v68) & 7) == 6 && ((v66 & 1) == 0 || (BYTE3(v68) & 8) != 0) )
    {
      if ( v30 > 0x7FFFFFFEFFFFLL && (unsigned int)MiHyperPage(&v66, 0x7FFFFFFEFFFFLL, v32) )
      {
        TopLevelPfn = MiGetTopLevelPfn(48 * a1 - 0x220000000000LL);
        *a2 = *a2 & 0xFE000000000001FFuLL | ((unsigned __int64)(unsigned int)MiGetPfnPidSafe(TopLevelPfn, 2LL) << 9);
        if ( v64 != v4 )
          _InterlockedAnd64((volatile signed __int64 *)(v64 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        v45 = *a2 & 0xFFFFFFFFFFFFFFF0uLL | 0xC;
      }
      else if ( v30 < 0xFFFFF68000000000uLL || v30 > 0xFFFFF6FFFFFFFFFFuLL )
      {
        v45 = *a2 & 0xFFFFFFFFFFFFFFF0uLL | 5;
      }
      else
      {
        v45 = *a2 & 0xFFFFFFFFFFFFFFF0uLL | 3;
      }
      *a2 = v45;
      return 1LL;
    }
    v33 = MiGetTopLevelPfn(48 * a1 - 0x220000000000LL);
    *a2 = *a2 & 0xFE000000000001FFuLL | ((unsigned __int64)(unsigned int)MiGetPfnPidSafe(v33, 2LL) << 9);
    if ( v34 != v4 )
      _InterlockedAnd64((volatile signed __int64 *)(v34 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( v30 >= 0xFFFFF68000000000uLL && v30 <= 0xFFFFF6FFFFFFFFFFuLL )
    {
      *a2 = *a2 & 0xFFFFFFFFFFFFFFF0uLL | 3;
      return 1LL;
    }
    if ( v30 >= qword_140E2F280 && v30 <= qword_140E2F290 )
    {
      *a2 = *a2 & 0xFFFFFFFFFFFFFFF0uLL | 0xC;
      return 1LL;
    }
LABEL_67:
    *a2 &= 0xFFFFFFFFFFFFFFF0uLL;
    return 1LL;
  }
  v22 = v67;
  if ( (v67 & 0x400) != 0 )
  {
    if ( qword_140E2DB80 && (v67 & 0x10) == 0 )
      v22 = v67 & ~qword_140E2DB80;
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
          v27 = *((_QWORD *)&v66 + 1) | 0x8000000000000000uLL;
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
    a2[2] = *((_QWORD *)&v66 + 1) | 0x8000000000000000uLL;
    if ( (*((_QWORD *)&v68 + 1) & 0x10000000000LL) == 0 && *((__int64 *)&v66 + 1) > 0 )
    {
      v46 = *((_QWORD *)&v66 + 1);
      a2[2] |= 1uLL;
      v47 = *(_QWORD *)((v46 | 0x8000000000000000uLL) + 0x18);
      if ( v47 >= 0x1000000000000LL )
        v47 = 0xFFFFFFFFFFFFLL;
      *a2 = (v47 << 9) ^ (*a2 ^ (v47 << 9)) & 0xFE000000000001FFuLL;
    }
    *a2 = *a2 & 0xFFFFFFFFFFFFFFF0uLL | 2;
    return 1LL;
  }
}
