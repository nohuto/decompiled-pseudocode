/*
 * XREFs of MiOutSwapWorkingSetPte @ 0x140225A10
 * Callers:
 *     MiWalkPageTablesRecursively @ 0x1402B2770 (MiWalkPageTablesRecursively.c)
 * Callees:
 *     MiUnlinkPageFromListEx @ 0x14021A1F0 (MiUnlinkPageFromListEx.c)
 *     MiInsertPageInList @ 0x14021AFB0 (MiInsertPageInList.c)
 *     MiSetStoreVirtualPagefileValue @ 0x140226180 (MiSetStoreVirtualPagefileValue.c)
 *     MiCaptureDirtyBitToPfn @ 0x14022F970 (MiCaptureDirtyBitToPfn.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140231F50 (MI_READ_PTE_LOCK_FREE.c)
 *     MiInvalidPteConforms @ 0x1402343E0 (MiInvalidPteConforms.c)
 *     MiReleasePageFileInfo @ 0x1402346B0 (MiReleasePageFileInfo.c)
 *     MiGetWsleContents @ 0x140239750 (MiGetWsleContents.c)
 *     MiPteInShadowRange @ 0x1402480C0 (MiPteInShadowRange.c)
 *     MiClearPageFileReservation @ 0x1402CC084 (MiClearPageFileReservation.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiLockSpecialPurposeMemoryCachedPage @ 0x14033F5DC (MiLockSpecialPurposeMemoryCachedPage.c)
 *     MiUpdatePageFileHighInPte @ 0x14037C850 (MiUpdatePageFileHighInPte.c)
 *     MiReservePageFileSpaceForPage @ 0x1403FAC48 (MiReservePageFileSpaceForPage.c)
 *     MiSanitizeShadowPxe @ 0x1403FDBDC (MiSanitizeShadowPxe.c)
 *     MiWritePteShadow @ 0x1403FDC5C (MiWritePteShadow.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 */

__int64 __fastcall MiOutSwapWorkingSetPte(__int64 a1, ULONG_PTR a2, int a3)
{
  __int64 v3; // r15
  unsigned int v5; // r12d
  unsigned __int64 v6; // rsi
  __int64 v7; // rbp
  char v8; // di
  ULONG_PTR v9; // r14
  unsigned __int64 v10; // rax
  __int64 v11; // r9
  char v12; // bl
  __int64 v13; // rbx
  int v14; // r15d
  __int64 v15; // rcx
  __int64 v16; // rcx
  _QWORD *v17; // rbx
  unsigned __int64 v18; // rdx
  __int64 *v19; // r8
  __int64 v20; // r13
  __int64 *v21; // rcx
  __int64 v22; // r12
  unsigned __int64 v24; // rax
  __int64 v25; // rax
  ULONG_PTR v26; // rbx
  unsigned __int64 v27; // rcx
  unsigned __int64 v28; // rcx
  char v29; // di
  __int64 v30; // r12
  unsigned __int64 v31; // rdx
  __int64 updated; // rax
  bool v33; // zf
  int v34; // eax
  __int64 v35; // [rsp+30h] [rbp-58h] BYREF
  __int64 v36; // [rsp+38h] [rbp-50h] BYREF
  __int64 v37; // [rsp+40h] [rbp-48h]
  unsigned __int64 v38; // [rsp+90h] [rbp+8h]
  __int64 v39; // [rsp+A8h] [rbp+20h]

  v3 = *(_QWORD *)(a1 + 184);
  v37 = *(_QWORD *)(v3 + 16);
  if ( !a3 )
  {
    v39 = *(_QWORD *)(v3 + 24);
    v5 = 0;
    v6 = 0LL;
    v38 = 0LL;
    v7 = 0LL;
    v8 = 0;
    while ( 1 )
    {
LABEL_3:
      v9 = 0LL;
LABEL_4:
      v10 = MI_READ_PTE_LOCK_FREE(a2);
      v11 = 1LL;
      v35 = v10;
      v12 = v10;
      if ( (v10 & 1) != 0 )
      {
        v24 = (v10 >> 12) & 0xFFFFFFFFFFLL;
        if ( v24 > qword_140E2D9A0 || ((*(_QWORD *)(48 * v24 - 0x21FFFFFFFFD8LL) >> 54) & 1) == 0 )
          return 0LL;
        v9 = 48 * v24 - 0x220000000000LL;
        if ( *(__int64 *)(v9 + 40) >= 0 )
        {
          if ( (*(_QWORD *)(v9 + 8) | 0x8000000000000000uLL) != a2 )
            return 0LL;
          v29 = 1;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v9 + 24), 0x3FuLL) )
          {
            do
            {
              if ( (++v5 & HvlLongSpinCountMask) == 0
                && (HvlEnlightenments & 0x40) != 0
                && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(0LL) )
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
          v7 = 0LL;
          if ( (*(_BYTE *)(v9 + 34) & 8) != 0 )
            goto LABEL_26;
          if ( (*(_DWORD *)(v9 + 16) & 2) != 0 )
          {
            v6 = *(_QWORD *)(v9 + 16);
            v38 = v6;
            *(_QWORD *)(v9 + 16) = v6 & 0xFFFFFFFFFFFFFFFDuLL;
          }
          if ( !*(_DWORD *)(v3 + 144)
            && ((unsigned __int16)*(_DWORD *)(v9 + 32) != 1
             || (*(_DWORD *)(v37 + 184) & 0xF) == 0 && (MiGetWsleContents(1LL, (__int64)(a2 << 25) >> 16) & 0xF) == 8) )
          {
            goto LABEL_26;
          }
          if ( (v12 & 0x42) == 0 && (*(_BYTE *)(v9 + 34) & 0x10) == 0 )
          {
            if ( (*(_DWORD *)(v9 + 16) & 4) == 0 )
              goto LABEL_26;
            v29 = 3;
          }
          v7 = MiCaptureDirtyBitToPfn(v9);
          if ( (HIWORD(*(_DWORD *)(v9 + 32)) & 0xC0) != 0x40 )
          {
            if ( (HIWORD(*(_DWORD *)(v9 + 32)) & 0xC0) == 0x80 )
            {
              v29 |= 4u;
            }
            else if ( BYTE2(*(_DWORD *)(v9 + 32)) < 0x40u )
            {
              v29 |= 8u;
            }
          }
          if ( *(_DWORD *)(v3 + 32) == -1 )
          {
            v35 = MiSetStoreVirtualPagefileValue(v39, *(_QWORD *)(v9 + 16), 2LL);
            *(_QWORD *)(v9 + 16) = v35;
          }
          _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          v16 = *(unsigned int *)(v3 + 32);
          v8 = v29 & 0xFE;
          v17 = *(_QWORD **)v3;
          if ( (_DWORD)v16 == -1 )
          {
            v11 = 1LL;
          }
          else
          {
            v30 = v3 + 16 * v16;
            if ( (unsigned int)v16 >= 5 || !*(_DWORD *)(v30 + 48) )
              goto LABEL_25;
            MiReservePageFileSpaceForPage(v39, a2, 128LL, v30 + 40);
            v31 = *(_QWORD *)(v30 + 40);
            if ( qword_140E2D940 && (v31 & 0x10) == 0 )
              v31 &= ~qword_140E2D940;
            updated = MiUpdatePageFileHighInPte(*(_QWORD *)(v30 + 40), HIDWORD(v31) + 1);
            v33 = (*(_DWORD *)(v30 + 48))-- == 1;
            *(_QWORD *)(v30 + 40) = updated;
            if ( v33 )
              *(_DWORD *)(v3 + 32) += v11;
            v8 |= 0x10u;
          }
        }
        else
        {
          v17 = *(_QWORD **)(v3 + 8);
          if ( !v17 )
            return 0LL;
        }
        v18 = v17[2];
        if ( v18 < v17[1] )
        {
          v19 = (__int64 *)(*v17 + 16 * v18);
          v20 = (__int64)(a2 << 25) >> 16;
          v21 = v19 - 2;
          if ( !v18 || *v21 + v21[1] != v20 )
          {
            v21 = (__int64 *)(*v17 + 16 * v18);
            v17[2] = v18 + 1;
            *v19 = v20;
            v19[1] = 0LL;
          }
          v21[1] += 4096LL;
          v17[3] += v11;
          if ( (v8 & 2) != 0 )
            *(_QWORD *)(v3 + 136) += v11;
          if ( (v8 & 4) != 0 )
          {
            *(_QWORD *)(v3 + 120) += v11;
          }
          else if ( (v8 & 8) != 0 )
          {
            *(_QWORD *)(v3 + 128) += v11;
          }
        }
        goto LABEL_25;
      }
      if ( (v10 & 0x400) != 0 )
        return 0LL;
      if ( (v10 & 0x800) == 0 )
        break;
      while ( 1 )
      {
        v25 = MI_READ_PTE_LOCK_FREE(a2);
        v26 = v25;
        if ( (v25 & 0x800) == 0 )
          break;
        if ( (unsigned int)MiInvalidPteConforms(v25) )
        {
          if ( qword_140E2D940 )
          {
            if ( (v26 & 0x10) != 0 )
              v27 &= ~0x10uLL;
            else
              v27 = v26 & ~qword_140E2D940;
          }
          v28 = (v27 >> 12) & 0xFFFFFFFFFFLL;
          v9 = 48 * v28 - 0x220000000000LL;
          if ( v28 <= qword_140E2D9A0 && ((*(_QWORD *)(48 * v28 - 0x21FFFFFFFFD8LL) >> 54) & 1) != 0 )
          {
            while ( _interlockedbittestandset64((volatile signed __int32 *)(v9 + 24), 0x3FuLL) )
            {
              do
              {
                if ( (++v5 & HvlLongSpinCountMask) == 0
                  && (HvlEnlightenments & 0x40) != 0
                  && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v28) )
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
            v7 = 0LL;
            if ( MI_READ_PTE_LOCK_FREE(a2) == v26 )
            {
              if ( (*(_DWORD *)(*((_QWORD *)qword_140E2FD48 + ((*(_QWORD *)(v9 + 40) >> 43) & 0x3FFLL)) + 4LL) & 0x80u) != 0 )
              {
                v5 = 0;
                v9 = MiLockSpecialPurposeMemoryCachedPage(v9, 0LL);
                if ( !v9 )
                  goto LABEL_3;
              }
              else
              {
                v5 = 0;
              }
              if ( (*(_QWORD *)(v9 + 8) | 0x8000000000000000uLL) != a2 && (*(_QWORD *)(v9 + 40) & 0x10000000000LL) == 0 )
                KeBugCheckEx(0x1Au, 0x411uLL, a2, v26, *(_QWORD *)(v9 + 8));
              if ( v9 )
              {
                if ( (*(_BYTE *)(v9 + 34) & 0x28) == 0 && (*(_QWORD *)(v9 + 16) & 2) != 0 )
                {
                  v6 = *(_QWORD *)(v9 + 16);
                  v38 = v6;
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
                goto LABEL_26;
              }
              goto LABEL_4;
            }
            _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            v5 = 0;
          }
        }
      }
    }
    if ( (v10 & 2) == 0 )
      return 0LL;
    v38 = v10;
    v6 = v10;
    MiClearPageFileReservation(&v35);
    v13 = v35;
    v36 = v35;
    v14 = 0;
    if ( (unsigned int)MiPteInShadowRange(a2) )
    {
      v34 = MiSanitizeShadowPxe(v15, &v36);
      v13 = v36;
      v14 = v34;
    }
    *(_QWORD *)a2 = v13;
    if ( v14 )
    {
      MiWritePteShadow(a2, v13);
LABEL_25:
      if ( (v8 & 1) == 0 )
        goto LABEL_27;
LABEL_26:
      _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    }
LABEL_27:
    if ( v6 )
    {
      if ( (v6 & 4) != 0 )
        v6 = v38 & 0xFFFFFFFFFFFFFFFBuLL;
      v22 = v39;
      MiReleasePageFileInfo(v39, v6, 1LL);
    }
    else
    {
      v22 = v39;
    }
    if ( v7 )
      MiReleasePageFileInfo(v22, v7, 1LL);
  }
  return 0LL;
}
