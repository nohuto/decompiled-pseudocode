/*
 * XREFs of MiOutSwapWorkingSetPte @ 0x140302690
 * Callers:
 *     MiWalkPageTablesRecursively @ 0x1402DC430 (MiWalkPageTablesRecursively.c)
 * Callees:
 *     MiUnlinkPageFromListEx @ 0x140211CD0 (MiUnlinkPageFromListEx.c)
 *     MiClearPageFileReservation @ 0x140213DEC (MiClearPageFileReservation.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021A250 (MI_READ_PTE_LOCK_FREE.c)
 *     MiReleasePageFileInfo @ 0x14021B9A0 (MiReleasePageFileInfo.c)
 *     MiInsertPageInList @ 0x14022CB10 (MiInsertPageInList.c)
 *     MiSanitizeShadowPxe @ 0x140233C54 (MiSanitizeShadowPxe.c)
 *     MiWritePteShadow @ 0x140233CD4 (MiWritePteShadow.c)
 *     MiLockSpecialPurposeMemoryCachedPage @ 0x14023C31C (MiLockSpecialPurposeMemoryCachedPage.c)
 *     MiCaptureDirtyBitToPfn @ 0x14023ED00 (MiCaptureDirtyBitToPfn.c)
 *     MiPteInShadowRange @ 0x1402863E0 (MiPteInShadowRange.c)
 *     HvlNotifyLongSpinWait @ 0x140293260 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140293290 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiGetWsleContents @ 0x1402E5390 (MiGetWsleContents.c)
 *     MiInvalidPteConforms @ 0x140302590 (MiInvalidPteConforms.c)
 *     MiReservePageFileSpaceForPage @ 0x1403687E0 (MiReservePageFileSpaceForPage.c)
 *     MiUpdatePageFileHighInPte @ 0x140368F40 (MiUpdatePageFileHighInPte.c)
 *     MiSetStoreVirtualPagefileValue @ 0x14039D920 (MiSetStoreVirtualPagefileValue.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
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
  char v11; // bl
  unsigned __int64 v12; // rax
  _QWORD *v13; // rbx
  __int64 v14; // rcx
  unsigned __int64 v15; // rdx
  __int64 *v16; // r8
  __int64 v17; // r13
  __int64 *v18; // rcx
  __int64 v19; // rbx
  __int64 v21; // rbx
  __int64 v22; // rax
  __int64 v23; // rbx
  unsigned __int64 v24; // rcx
  unsigned __int64 v25; // rcx
  unsigned int v26; // ebx
  ULONG_PTR v27; // rax
  unsigned __int64 v28; // rdx
  __int64 updated; // rax
  __int64 v30; // r8
  bool v31; // zf
  char v32; // si
  unsigned int v33; // eax
  unsigned __int64 v34; // [rsp+30h] [rbp-58h] BYREF
  __int64 v35; // [rsp+38h] [rbp-50h]
  ULONG_PTR BugCheckParameter3; // [rsp+40h] [rbp-48h]
  unsigned __int64 v37; // [rsp+90h] [rbp+8h]
  __int64 v38; // [rsp+A8h] [rbp+20h]

  v3 = *(_QWORD *)(a1 + 184);
  v35 = *(_QWORD *)(v3 + 16);
  if ( !a3 )
  {
    v5 = 0;
    v38 = *(_QWORD *)(v3 + 24);
    v6 = 0LL;
    v37 = 0LL;
    v7 = 0LL;
    v8 = 0;
    while ( 1 )
    {
LABEL_3:
      v9 = 0LL;
LABEL_4:
      v10 = MI_READ_PTE_LOCK_FREE(a2);
      v34 = v10;
      v11 = v10;
      if ( (v10 & 1) != 0 )
      {
        v12 = (v10 >> 12) & 0xFFFFFFFFFFLL;
        if ( v12 > qword_140E2DBE0 || (*(_QWORD *)(48 * v12 - 0x21FFFFFFFFD8LL) & 0x40000000000000LL) == 0 )
          return 0LL;
        v9 = 48 * v12 - 0x220000000000LL;
        if ( *(__int64 *)(v9 + 40) >= 0 )
        {
          if ( (*(_QWORD *)(v9 + 8) | 0x8000000000000000uLL) != a2 )
            return 0LL;
          v32 = 1;
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
            v37 = v6;
            *(_QWORD *)(v9 + 16) = v6 & 0xFFFFFFFFFFFFFFFDuLL;
          }
          if ( !*(_DWORD *)(v3 + 144)
            && ((unsigned __int16)*(_DWORD *)(v9 + 32) != 1
             || (*(_DWORD *)(v35 + 184) & 0xF) == 0
             && (MiGetWsleContents(0xFFFFF68000000000uLL, (__int64)(a2 << 25) >> 16) & 0xF) == 8) )
          {
            goto LABEL_23;
          }
          if ( (v11 & 0x42) == 0 && (*(_BYTE *)(v9 + 34) & 0x10) == 0 )
          {
            if ( (*(_DWORD *)(v9 + 16) & 4) == 0 )
              goto LABEL_23;
            v32 = 3;
          }
          v7 = MiCaptureDirtyBitToPfn(v9);
          if ( (HIWORD(*(_DWORD *)(v9 + 32)) & 0xC0) != 0x40 )
          {
            if ( (HIWORD(*(_DWORD *)(v9 + 32)) & 0xC0) == 0x80 )
            {
              v32 |= 4u;
            }
            else if ( BYTE2(*(_DWORD *)(v9 + 32)) < 0x40u )
            {
              v32 |= 8u;
            }
          }
          if ( *(_DWORD *)(v3 + 32) == -1 )
          {
            v34 = MiSetStoreVirtualPagefileValue(v38, *(_QWORD *)(v9 + 16), 2LL);
            *(_QWORD *)(v9 + 16) = v34;
          }
          _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          v14 = *(unsigned int *)(v3 + 32);
          v8 = v32 & 0xFE;
          v13 = *(_QWORD **)v3;
          if ( (_DWORD)v14 != -1 )
          {
            v27 = v3 + 16 * v14 + 40;
            BugCheckParameter3 = v27;
            if ( (unsigned int)v14 >= 5 || !*(_DWORD *)(v27 + 8) )
              goto LABEL_22;
            MiReservePageFileSpaceForPage(v38, a2, 128LL, v27);
            v28 = *(_QWORD *)BugCheckParameter3;
            if ( qword_140E2DB80 && (v28 & 0x10) == 0 )
              v28 &= ~qword_140E2DB80;
            updated = MiUpdatePageFileHighInPte(*(_QWORD *)BugCheckParameter3, HIDWORD(v28) + 1, BugCheckParameter3);
            v31 = (*(_DWORD *)(v30 + 8))-- == 1;
            *(_QWORD *)v30 = updated;
            if ( v31 )
              ++*(_DWORD *)(v3 + 32);
            v8 |= 0x10u;
          }
        }
        else
        {
          v13 = *(_QWORD **)(v3 + 8);
          if ( !v13 )
            return 0LL;
        }
        v15 = v13[2];
        if ( v15 < v13[1] )
        {
          v16 = (__int64 *)(*v13 + 16 * v15);
          v17 = (__int64)(a2 << 25) >> 16;
          v18 = v16 - 2;
          if ( !v15 || *v18 + v18[1] != v17 )
          {
            v18 = (__int64 *)(*v13 + 16 * v15);
            v13[2] = v15 + 1;
            *v16 = v17;
            v16[1] = 0LL;
          }
          v18[1] += 4096LL;
          ++v13[3];
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
        v22 = MI_READ_PTE_LOCK_FREE(a2);
        BugCheckParameter3 = v22;
        v23 = v22;
        if ( (v22 & 0x800) == 0 )
          break;
        if ( MiInvalidPteConforms(v22) )
        {
          if ( qword_140E2DB80 )
          {
            if ( (v23 & 0x10) != 0 )
              v24 &= ~0x10uLL;
            else
              v24 = v23 & ~qword_140E2DB80;
          }
          v25 = (v24 >> 12) & 0xFFFFFFFFFFLL;
          v9 = 48 * v25 - 0x220000000000LL;
          if ( v25 <= qword_140E2DBE0 && (*(_QWORD *)(48 * v25 - 0x21FFFFFFFFD8LL) & 0x40000000000000LL) != 0 )
          {
            v26 = 0;
            while ( _interlockedbittestandset64((volatile signed __int32 *)(v9 + 24), 0x3FuLL) )
            {
              do
              {
                if ( (++v26 & HvlLongSpinCountMask) == 0
                  && (HvlEnlightenments & 0x40) != 0
                  && KiCheckVpBackingLongSpinWaitHypercall() )
                {
                  HvlNotifyLongSpinWait(v26);
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
              if ( (*(_DWORD *)(*((_QWORD *)qword_140E2FF88 + ((*(_QWORD *)(v9 + 40) >> 43) & 0x3FFLL)) + 4LL) & 0x80u) != 0 )
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
                  v37 = v6;
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
    v37 = v10;
    v6 = v10;
    MiClearPageFileReservation((__int64 *)&v34);
    v21 = v34;
    v35 = v34;
    if ( MiPteInShadowRange(a2) )
    {
      v33 = MiSanitizeShadowPxe();
      v21 = v35;
      v5 = v33;
    }
    *(_QWORD *)a2 = v21;
    if ( v5 )
    {
      MiWritePteShadow();
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
        v6 = v37 & 0xFFFFFFFFFFFFFFFBuLL;
      v19 = v38;
      MiReleasePageFileInfo(v38, v6, 1LL);
    }
    else
    {
      v19 = v38;
    }
    if ( v7 )
      MiReleasePageFileInfo(v19, v7, 1LL);
  }
  return 0LL;
}
