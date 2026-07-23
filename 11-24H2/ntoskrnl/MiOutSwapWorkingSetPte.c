/*
 * XREFs of MiOutSwapWorkingSetPte @ 0x140346260
 * Callers:
 *     MiWalkPageTablesRecursively @ 0x14023DD10 (MiWalkPageTablesRecursively.c)
 * Callees:
 *     MiPteInShadowRange @ 0x140202630 (MiPteInShadowRange.c)
 *     MiSanitizeShadowPxe @ 0x140203820 (MiSanitizeShadowPxe.c)
 *     MiWritePteShadow @ 0x1402038A0 (MiWritePteShadow.c)
 *     MiLockSpecialPurposeMemoryCachedPage @ 0x140204044 (MiLockSpecialPurposeMemoryCachedPage.c)
 *     MiCaptureDirtyBitToPfn @ 0x140206E50 (MiCaptureDirtyBitToPfn.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140246FA0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiReleasePageFileInfo @ 0x1402486F0 (MiReleasePageFileInfo.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiUpdatePageFileHighInPte @ 0x1402EACE0 (MiUpdatePageFileHighInPte.c)
 *     MiSetStoreVirtualPagefileValue @ 0x1402FAC20 (MiSetStoreVirtualPagefileValue.c)
 *     MiInsertPageInList @ 0x140300420 (MiInsertPageInList.c)
 *     MiClearPageFileReservation @ 0x14030714C (MiClearPageFileReservation.c)
 *     MiUnlinkPageFromListEx @ 0x14033B030 (MiUnlinkPageFromListEx.c)
 *     MiGetWsleContents @ 0x140344BE0 (MiGetWsleContents.c)
 *     MiInvalidPteConforms @ 0x1403461F0 (MiInvalidPteConforms.c)
 *     MiReservePageFileSpaceForPage @ 0x1403FDC68 (MiReservePageFileSpaceForPage.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 */

__int64 __fastcall MiOutSwapWorkingSetPte(__int64 a1, unsigned __int64 a2, int a3)
{
  __int64 v3; // r15
  unsigned int v5; // r12d
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // rbp
  char v8; // si
  __int64 v9; // r14
  unsigned __int64 v10; // rax
  __int64 v11; // r9
  char v12; // bl
  unsigned __int64 v13; // rax
  _QWORD *v14; // rbx
  __int64 v15; // rcx
  unsigned __int64 v16; // rdx
  __int64 *v17; // r8
  __int64 v18; // r13
  __int64 *v19; // rcx
  __int64 v20; // rbx
  __int64 v22; // rbx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // rax
  __int64 v26; // rbx
  unsigned __int64 v27; // rcx
  unsigned __int64 v28; // rcx
  unsigned int v29; // ebx
  ULONG_PTR v30; // rax
  unsigned __int64 v31; // rdx
  __int64 updated; // rax
  __int64 v33; // r8
  bool v34; // zf
  char v35; // si
  unsigned int v36; // eax
  unsigned __int64 v37; // [rsp+30h] [rbp-58h] BYREF
  __int64 v38; // [rsp+38h] [rbp-50h] BYREF
  ULONG_PTR BugCheckParameter3; // [rsp+40h] [rbp-48h]
  unsigned __int64 v40; // [rsp+90h] [rbp+8h]
  __int64 v41; // [rsp+A8h] [rbp+20h]

  v3 = *(_QWORD *)(a1 + 184);
  v38 = *(_QWORD *)(v3 + 16);
  if ( !a3 )
  {
    v5 = 0;
    v41 = *(_QWORD *)(v3 + 24);
    v6 = 0LL;
    v40 = 0LL;
    v7 = 0LL;
    v8 = 0;
    while ( 1 )
    {
LABEL_3:
      v9 = 0LL;
LABEL_4:
      v10 = MI_READ_PTE_LOCK_FREE(a2);
      v37 = v10;
      v12 = v10;
      if ( (v10 & 1) != 0 )
      {
        v13 = (v10 >> 12) & 0xFFFFFFFFFFLL;
        if ( v13 > qword_140E2DD20 || (*(_QWORD *)(48 * v13 - 0x21FFFFFFFFD8LL) & 0x40000000000000LL) == 0 )
          return 0LL;
        v9 = 48 * v13 - 0x220000000000LL;
        if ( *(__int64 *)(v9 + 40) >= 0 )
        {
          if ( (*(_QWORD *)(v9 + 8) | 0x8000000000000000uLL) != a2 )
            return 0LL;
          v35 = 1;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v9 + 24), 0x3FuLL) )
          {
            do
            {
              if ( (++v5 & HvlLongSpinCountMask) == 0
                && (HvlEnlightenments & 0x40) != 0
                && KiCheckVpBackingLongSpinWaitHypercall() )
              {
                HvlNotifyLongSpinWait(v5);
              }
              else
              {
                _mm_pause();
              }
            }
            while ( *(__int64 *)(v9 + 24) < 0 );
          }
          if ( (*(_BYTE *)(v9 + 34) & 8) != 0 )
            goto LABEL_23;
          if ( (*(_DWORD *)(v9 + 16) & 2) != 0 )
          {
            v6 = *(_QWORD *)(v9 + 16);
            v40 = v6;
            *(_QWORD *)(v9 + 16) = v6 & 0xFFFFFFFFFFFFFFFDuLL;
          }
          if ( !*(_DWORD *)(v3 + 144)
            && ((unsigned __int16)*(_DWORD *)(v9 + 32) != 1
             || (*(_DWORD *)(v38 + 184) & 0xF) == 0
             && (MiGetWsleContents(0xFFFFF68000000000uLL, (__int64)(a2 << 25) >> 16) & 0xF) == 8) )
          {
            goto LABEL_23;
          }
          if ( (v12 & 0x42) == 0 && (*(_BYTE *)(v9 + 34) & 0x10) == 0 )
          {
            if ( (*(_DWORD *)(v9 + 16) & 4) == 0 )
              goto LABEL_23;
            v35 = 3;
          }
          v7 = MiCaptureDirtyBitToPfn(v9);
          if ( (HIWORD(*(_DWORD *)(v9 + 32)) & 0xC0) != 0x40 )
          {
            if ( (HIWORD(*(_DWORD *)(v9 + 32)) & 0xC0) == 0x80 )
            {
              v35 |= 4u;
            }
            else if ( BYTE2(*(_DWORD *)(v9 + 32)) < 0x40u )
            {
              v35 |= 8u;
            }
          }
          if ( *(_DWORD *)(v3 + 32) == -1 )
          {
            v37 = MiSetStoreVirtualPagefileValue(v41, *(_QWORD *)(v9 + 16), 2u);
            *(_QWORD *)(v9 + 16) = v37;
          }
          _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          v15 = *(unsigned int *)(v3 + 32);
          v8 = v35 & 0xFE;
          v14 = *(_QWORD **)v3;
          if ( (_DWORD)v15 != -1 )
          {
            v30 = v3 + 16 * v15 + 40;
            BugCheckParameter3 = v30;
            if ( (unsigned int)v15 >= 5 || !*(_DWORD *)(v30 + 8) )
              goto LABEL_22;
            MiReservePageFileSpaceForPage(v41, a2, 128LL, v30);
            v31 = *(_QWORD *)BugCheckParameter3;
            if ( qword_140E2DCC0 && (v31 & 0x10) == 0 )
              v31 &= ~qword_140E2DCC0;
            updated = MiUpdatePageFileHighInPte(*(_QWORD *)BugCheckParameter3, HIDWORD(v31) + 1);
            v34 = (*(_DWORD *)(v33 + 8))-- == 1;
            *(_QWORD *)v33 = updated;
            if ( v34 )
              ++*(_DWORD *)(v3 + 32);
            v8 |= 0x10u;
          }
        }
        else
        {
          v14 = *(_QWORD **)(v3 + 8);
          if ( !v14 )
            return 0LL;
        }
        v16 = v14[2];
        if ( v16 < v14[1] )
        {
          v17 = (__int64 *)(*v14 + 16 * v16);
          v18 = (__int64)(a2 << 25) >> 16;
          v19 = v17 - 2;
          if ( !v16 || *v19 + v19[1] != v18 )
          {
            v19 = (__int64 *)(*v14 + 16 * v16);
            v14[2] = v16 + 1;
            *v17 = v18;
            v17[1] = 0LL;
          }
          v19[1] += 4096LL;
          ++v14[3];
          if ( (v8 & 2) != 0 )
            ++*(_QWORD *)(v3 + 136);
          if ( (v8 & 4) != 0 )
          {
            ++*(_QWORD *)(v3 + 120);
          }
          else if ( (v8 & 8) != 0 )
          {
            ++*(_QWORD *)(v3 + 128);
          }
        }
        goto LABEL_22;
      }
      if ( (v10 & 0x400) != 0 )
        return 0LL;
      if ( (v10 & 0x800) == 0 )
        break;
      while ( 1 )
      {
        v25 = MI_READ_PTE_LOCK_FREE(a2);
        BugCheckParameter3 = v25;
        v26 = v25;
        if ( (v25 & 0x800) == 0 )
          break;
        if ( MiInvalidPteConforms(v25) )
        {
          if ( qword_140E2DCC0 )
          {
            if ( (v26 & 0x10) != 0 )
              v27 &= ~0x10uLL;
            else
              v27 = v26 & ~qword_140E2DCC0;
          }
          v28 = (v27 >> 12) & 0xFFFFFFFFFFLL;
          v9 = 48 * v28 - 0x220000000000LL;
          if ( v28 <= qword_140E2DD20 && (*(_QWORD *)(48 * v28 - 0x21FFFFFFFFD8LL) & 0x40000000000000LL) != 0 )
          {
            v29 = 0;
            while ( _interlockedbittestandset64((volatile signed __int32 *)(v9 + 24), 0x3FuLL) )
            {
              do
              {
                if ( (++v29 & HvlLongSpinCountMask) == 0
                  && (HvlEnlightenments & 0x40) != 0
                  && KiCheckVpBackingLongSpinWaitHypercall() )
                {
                  HvlNotifyLongSpinWait(v29);
                }
                else
                {
                  _mm_pause();
                }
              }
              while ( *(__int64 *)(v9 + 24) < 0 );
            }
            if ( MI_READ_PTE_LOCK_FREE(a2) == BugCheckParameter3 )
            {
              if ( (*(_DWORD *)(*((_QWORD *)qword_140E300C8 + ((*(_QWORD *)(v9 + 40) >> 43) & 0x3FFLL)) + 4LL) & 0x80u) != 0 )
              {
                v9 = MiLockSpecialPurposeMemoryCachedPage(v9, 0);
                if ( !v9 )
                  goto LABEL_3;
              }
              if ( (*(_QWORD *)(v9 + 8) | 0x8000000000000000uLL) != a2 && (*(_QWORD *)(v9 + 40) & 0x10000000000LL) == 0 )
                KeBugCheckEx(0x1Au, 0x411uLL, a2, BugCheckParameter3, *(_QWORD *)(v9 + 8));
              if ( v9 )
              {
                if ( (*(_BYTE *)(v9 + 34) & 0x28) == 0 && (*(_QWORD *)(v9 + 16) & 2) != 0 )
                {
                  v6 = *(_QWORD *)(v9 + 16);
                  v40 = v6;
                  if ( (unsigned __int16)*(_DWORD *)(v9 + 32) || (*(_BYTE *)(v9 + 34) & 7) != 3 )
                  {
                    *(_QWORD *)(v9 + 16) &= ~2uLL;
                  }
                  else
                  {
                    MiUnlinkPageFromListEx(v9, 0);
                    *(_QWORD *)(v9 + 16) &= ~2uLL;
                    MiInsertPageInList(v9, 8u);
                  }
                }
                goto LABEL_23;
              }
              goto LABEL_4;
            }
            _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          }
        }
      }
    }
    if ( (v10 & 2) == 0 )
      return 0LL;
    v40 = v10;
    v6 = v10;
    MiClearPageFileReservation((__int64 *)&v37);
    v22 = v37;
    v38 = v37;
    if ( MiPteInShadowRange(a2) )
    {
      v36 = MiSanitizeShadowPxe(v23, (__int64)&v38, v24);
      v22 = v38;
      v5 = v36;
    }
    *(_QWORD *)a2 = v22;
    if ( v5 )
    {
      MiWritePteShadow(a2, v22, v24, v11);
LABEL_22:
      if ( (v8 & 1) == 0 )
        goto LABEL_24;
LABEL_23:
      _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    }
LABEL_24:
    if ( v6 )
    {
      if ( (v6 & 4) != 0 )
        v6 = v40 & 0xFFFFFFFFFFFFFFFBuLL;
      v20 = v41;
      MiReleasePageFileInfo(v41, v6, 1LL, v11);
    }
    else
    {
      v20 = v41;
    }
    if ( v7 )
      MiReleasePageFileInfo(v20, v7, 1LL, v11);
  }
  return 0LL;
}
