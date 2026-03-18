/*
 * XREFs of MmCopyToCachedPage @ 0x140223414
 * Callers:
 *     CcWrapperMmCopyToCachedPage @ 0x140223380 (CcWrapperMmCopyToCachedPage.c)
 * Callees:
 *     MiUnlinkStandbyPfn @ 0x14020EBB4 (MiUnlinkStandbyPfn.c)
 *     MiMakePageAvoidRead @ 0x140222A90 (MiMakePageAvoidRead.c)
 *     MiMapFrame @ 0x140223140 (MiMapFrame.c)
 *     MiMakeSystemCachePteValid @ 0x140225760 (MiMakeSystemCachePteValid.c)
 *     MiAddLockedPageCharge @ 0x14022C890 (MiAddLockedPageCharge.c)
 *     MiLockProtoPoolPageForce @ 0x140231620 (MiLockProtoPoolPageForce.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x140234CD0 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiUnlockProtoPoolPage @ 0x1402353A0 (MiUnlockProtoPoolPage.c)
 *     MiSystemCacheVaControlArea @ 0x14025D2D0 (MiSystemCacheVaControlArea.c)
 *     MmAccessFault @ 0x1402B5880 (MmAccessFault.c)
 *     MiGetContainingPageTable @ 0x1402C3750 (MiGetContainingPageTable.c)
 *     MiReleasePtes @ 0x1403289B0 (MiReleasePtes.c)
 *     MiReservePtes @ 0x14032A200 (MiReservePtes.c)
 *     MiUnlockPage @ 0x14032B850 (MiUnlockPage.c)
 *     MiLockPageInline @ 0x14032B8A0 (MiLockPageInline.c)
 *     MiLockLeafPage @ 0x14033B770 (MiLockLeafPage.c)
 *     MiIssuePageHeatList @ 0x14044059C (MiIssuePageHeatList.c)
 *     MiDirtyPte @ 0x1404516E0 (MiDirtyPte.c)
 *     MiHandleSpecialPurposeMemoryCachedFault @ 0x1404C22F8 (MiHandleSpecialPurposeMemoryCachedFault.c)
 *     MiMapSystemCachePage @ 0x1404C945C (MiMapSystemCachePage.c)
 *     MiReplenishTransitionPageHeatList @ 0x1404D7C5C (MiReplenishTransitionPageHeatList.c)
 *     MiFreeTransitionPageHeatList @ 0x1404D94B8 (MiFreeTransitionPageHeatList.c)
 *     MiMakeTransitionHeatBatch @ 0x1404F4FB0 (MiMakeTransitionHeatBatch.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     RtlCopyMemoryNonTemporal @ 0x1406A8770 (RtlCopyMemoryNonTemporal.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     MiMapCacheExceptionFilter @ 0x140A28CB8 (MiMapCacheExceptionFilter.c)
 */

__int64 __fastcall MmCopyToCachedPage(ULONG_PTR a1, void *a2, unsigned int a3, size_t a4, unsigned int a5)
{
  ULONG_PTR v5; // r13
  __int64 v6; // r12
  ULONG_PTR v7; // r8
  ULONG_PTR BugCheckParameter4; // r9
  __int64 v9; // r10
  __int64 v10; // r14
  char v11; // di
  _QWORD *v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // rbx
  ULONG_PTR v15; // rbx
  ULONG_PTR v16; // r12
  __int64 v17; // r13
  ULONG_PTR v18; // rax
  int PageAvoidRead; // eax
  void *v21; // rcx
  unsigned __int64 v22; // rbx
  __int64 v23; // rdi
  char v24; // bl
  __int64 v25; // rdx
  __int64 v26; // rdi
  ULONG_PTR v27; // rax
  __int64 v28; // rax
  __int64 v29; // rdx
  int v30; // r12d
  int v31; // eax
  int v32; // eax
  __int64 v33; // rdx
  __int64 v34; // rdx
  int v35; // eax
  int locked; // eax
  int v37; // ecx
  int v38; // [rsp+44h] [rbp-74h] BYREF
  unsigned __int64 v39; // [rsp+48h] [rbp-70h] BYREF
  PSLIST_ENTRY ListEntry; // [rsp+50h] [rbp-68h]
  __int64 v41; // [rsp+58h] [rbp-60h]
  int v42; // [rsp+60h] [rbp-58h]
  _QWORD *v43; // [rsp+68h] [rbp-50h]
  __int64 v44; // [rsp+70h] [rbp-48h]
  __int64 v45; // [rsp+78h] [rbp-40h]

  v5 = a4;
  v39 = 0LL;
  v38 = 0;
  v6 = 0LL;
  v41 = 0LL;
  ListEntry = 0LL;
  v45 = MiSystemCacheVaControlArea(a1, a2, a1, a3);
  v9 = *((_QWORD *)qword_140E2FD48 + (*(_WORD *)(v45 + 60) & 0x3FF)) + 18816LL;
  v44 = v9;
  if ( BugCheckParameter4 + v5 > 0x1000 || BugCheckParameter4 + v5 < v5 )
    KeBugCheckEx(0x1Au, 0x786uLL, v7, v5, BugCheckParameter4);
  v10 = ((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v11 = a5;
  v42 = a5 & 4;
  if ( (a5 & 4) != 0 && ((BugCheckParameter4 & 0x3F) != 0 || (v5 & 0x3F) != 0) )
    return 3221226612LL;
  if ( (a5 & 8) != 0 )
  {
    v12 = (_QWORD *)MiReservePtes(&qword_140E37328, 1LL);
    v43 = v12;
    if ( !v12 )
      return 3221225626LL;
    v9 = v44;
  }
  else
  {
    v12 = 0LL;
    v43 = 0LL;
  }
  if ( (*(_QWORD *)v10 & 1) != 0 )
  {
    if ( !v12 )
    {
      MiDirtyPte(v9, v10);
      goto LABEL_21;
    }
    v6 = MiMapSystemCachePage(v12, v10, a5);
    v41 = v6;
    if ( v6 )
      goto LABEL_21;
  }
  MiGetContainingPageTable(v10);
  v14 = *(_QWORD *)v10;
  if ( (*(_QWORD *)v10 & 1) != 0 )
  {
    if ( !v12 )
      goto LABEL_21;
    v6 = MiMapSystemCachePage(v12, v10, a5);
    v41 = v6;
    if ( v6 )
      goto LABEL_21;
  }
  if ( qword_140E2D940 )
  {
    if ( (v14 & 0x10) != 0 )
      v14 &= ~0x10uLL;
    else
      v14 &= ~qword_140E2D940;
  }
  v15 = v14 >> 16;
LABEL_12:
  v16 = a1;
  while ( 1 )
  {
    while ( 1 )
    {
      v17 = 0LL;
      v18 = *(_QWORD *)v15;
      v39 = v18;
      if ( (v18 & 1) == 0 && (v18 & 0x400) != 0 )
        goto LABEL_15;
      v17 = MiLockProtoPoolPageForce(v15);
      v26 = MiLockLeafPage(v15, 2LL);
      v27 = *(_QWORD *)v15;
      v39 = *(_QWORD *)v15;
      if ( v26 )
        break;
      v11 = a5;
LABEL_15:
      if ( v17 )
      {
        LOBYTE(v13) = 17;
        MiUnlockProtoPoolPage(v17, v13);
      }
      if ( (*(_BYTE *)(v45 + 62) & 0xC) != 0 )
      {
        v38 = MmAccessFault(0LL, v16);
        if ( v38 < 0 )
          goto LABEL_26;
      }
      else
      {
        v5 = a4;
        PageAvoidRead = MiMakePageAvoidRead(v15, a2, a3, a4, v11, (__int64 *)&v39, &v38);
        if ( !PageAvoidRead )
          return (unsigned int)v38;
        v32 = PageAvoidRead - 1;
        if ( v32 )
        {
          if ( v32 == 1 )
            v31 = 0;
          else
LABEL_46:
            v31 = 1;
          v6 = v41;
          goto LABEL_48;
        }
      }
    }
    v38 = 0;
    if ( (v27 & 1) != 0 )
    {
      v29 = (*(_QWORD *)(v26 + 24) & 0x3FFFFFFFFFFFFFFFLL) + 1;
      *(_QWORD *)(v26 + 24) = v29 ^ (*(_QWORD *)(v26 + 24) ^ v29) & 0xC000000000000000uLL;
      v30 = 0;
    }
    else
    {
      if ( (*(_DWORD *)(*((_QWORD *)qword_140E2FD48 + ((*(_QWORD *)(v26 + 40) >> 43) & 0x3FFLL)) + 4LL) & 0x80u) != 0 )
      {
        v26 = MiHandleSpecialPurposeMemoryCachedFault(0LL, v10 << 25 >> 16, v15, v26);
        if ( !v26 )
        {
          LOBYTE(v34) = 17;
          MiUnlockProtoPoolPage(v17, v34);
          goto LABEL_63;
        }
        v39 = *(_QWORD *)v15;
      }
      v28 = *(_QWORD *)(v26 + 16) >> 3;
      if ( (*(_QWORD *)(v26 + 16) & 0x400LL) != 0 )
        LOBYTE(v28) = *(_QWORD *)(v26 + 16) >> 11;
      if ( (v28 & 1) != 0 )
      {
        ListEntry = (PSLIST_ENTRY)MiMakeTransitionHeatBatch(v26, 0LL, 0LL);
        if ( ListEntry == (PSLIST_ENTRY)-1LL )
        {
          _InterlockedAnd64((volatile signed __int64 *)(v26 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          LOBYTE(v33) = 17;
          MiUnlockProtoPoolPage(v17, v33);
          MiReplenishTransitionPageHeatList();
          ListEntry = 0LL;
          goto LABEL_63;
        }
      }
      v30 = MiUnlinkStandbyPfn((ULONG_PTR *)v15, a5);
      if ( v30 )
      {
        v35 = v38;
        if ( v30 == 3 )
          v35 = -1073740023;
        v38 = v35;
      }
      else
      {
        v39 = *(_QWORD *)v15;
      }
    }
    if ( v12 && !v30 )
    {
      locked = MiAddLockedPageCharge(v26, 0LL);
      v37 = v38;
      if ( !locked )
        v37 = -1073741670;
      v38 = v37;
    }
    _InterlockedAnd64((volatile signed __int64 *)(v26 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    LOBYTE(v29) = 17;
    MiUnlockProtoPoolPage(v17, v29);
    if ( ListEntry )
    {
      MiIssuePageHeatList(ListEntry);
      MiFreeTransitionPageHeatList(ListEntry);
      ListEntry = 0LL;
    }
    if ( v38 < 0 )
      goto LABEL_26;
    if ( v30 == 1 )
    {
      v11 = a5;
      goto LABEL_12;
    }
    if ( v30 != 2 )
      break;
    v16 = a1;
    v38 = MmAccessFault(0LL, a1);
    if ( v38 < 0 )
      goto LABEL_26;
LABEL_63:
    v11 = a5;
  }
  if ( !v12 )
  {
    v5 = a4;
    goto LABEL_46;
  }
  v6 = MiMapFrame((ULONG_PTR)v12, (v39 >> 12) & 0xFFFFFFFFFFLL);
  v5 = a4;
  v31 = 1;
LABEL_48:
  if ( v31 )
    MiMakeSystemCachePteValid(v44, v10, v39, a5);
LABEL_21:
  v38 = 0;
  if ( !v6 )
    v6 = a1;
  v21 = (void *)(v6 + a3);
  if ( v42 )
    RtlCopyMemoryNonTemporal(v21, a2, v5);
  else
    memmove(v21, a2, v5);
LABEL_26:
  if ( v12 )
  {
    v22 = *v12;
    MiReleasePtes(&qword_140E37328, v12, 1LL);
    if ( (v22 & 1) != 0 )
    {
      v23 = 48 * ((v22 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
      v24 = MiLockPageInline(v23);
      MiRemoveLockedPageChargeAndDecRef(v23);
      LOBYTE(v25) = v24;
      MiUnlockPage(v23, v25);
    }
  }
  return (unsigned int)v38;
}
