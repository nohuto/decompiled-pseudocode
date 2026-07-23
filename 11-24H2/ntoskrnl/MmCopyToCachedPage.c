/*
 * XREFs of MmCopyToCachedPage @ 0x14034F0D4
 * Callers:
 *     CcWrapperMmCopyToCachedPage @ 0x14034F040 (CcWrapperMmCopyToCachedPage.c)
 * Callees:
 *     MiDirtyPte @ 0x1402092D4 (MiDirtyPte.c)
 *     MiUnlinkStandbyPfn @ 0x140210560 (MiUnlinkStandbyPfn.c)
 *     MiMakeSystemCachePteValid @ 0x14021C440 (MiMakeSystemCachePteValid.c)
 *     MmAccessFault @ 0x140243610 (MmAccessFault.c)
 *     MiMakePageAvoidRead @ 0x140253334 (MiMakePageAvoidRead.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x14029C130 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiUnlockProtoPoolPage @ 0x14029C7F0 (MiUnlockProtoPoolPage.c)
 *     MiReleasePtes @ 0x14029D9A0 (MiReleasePtes.c)
 *     MiReservePtes @ 0x14029FB10 (MiReservePtes.c)
 *     MiLockPageInline @ 0x1402A1150 (MiLockPageInline.c)
 *     MiUnlockPage @ 0x1402A11F0 (MiUnlockPage.c)
 *     MiLockProtoPoolPageForce @ 0x140333E20 (MiLockProtoPoolPageForce.c)
 *     MiAddLockedPageCharge @ 0x14033F050 (MiAddLockedPageCharge.c)
 *     MiLockLeafPage @ 0x140349740 (MiLockLeafPage.c)
 *     MiMapFrame @ 0x14034D110 (MiMapFrame.c)
 *     MiGetContainingPageTable @ 0x14034E470 (MiGetContainingPageTable.c)
 *     MiSystemCacheVaControlArea @ 0x14034F790 (MiSystemCacheVaControlArea.c)
 *     MiMakeTransitionHeatBatch @ 0x1403FD304 (MiMakeTransitionHeatBatch.c)
 *     MiIssuePageHeatList @ 0x140435CBC (MiIssuePageHeatList.c)
 *     MiHandleSpecialPurposeMemoryCachedFault @ 0x14043BAD0 (MiHandleSpecialPurposeMemoryCachedFault.c)
 *     MiMapSystemCachePage @ 0x1404C2D08 (MiMapSystemCachePage.c)
 *     MiReplenishTransitionPageHeatList @ 0x1404CFEDC (MiReplenishTransitionPageHeatList.c)
 *     MiFreeTransitionPageHeatList @ 0x1404D1988 (MiFreeTransitionPageHeatList.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     RtlCopyMemoryNonTemporal @ 0x1406B49E0 (RtlCopyMemoryNonTemporal.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     MiMapCacheExceptionFilter @ 0x140A23174 (MiMapCacheExceptionFilter.c)
 */

__int64 __fastcall MmCopyToCachedPage(signed __int64 a1, void *a2, unsigned int a3, size_t a4, unsigned int a5)
{
  ULONG_PTR v5; // r13
  __int64 v6; // r12
  ULONG_PTR v7; // r8
  ULONG_PTR BugCheckParameter4; // r9
  __int64 v9; // r10
  unsigned __int64 v10; // r14
  char v11; // di
  _QWORD *v12; // rsi
  unsigned __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rbx
  ULONG_PTR v17; // rbx
  signed __int64 v18; // r12
  __int64 v19; // r13
  unsigned __int64 v20; // rax
  int PageAvoidRead; // eax
  int v22; // eax
  int v23; // eax
  void *v24; // rcx
  __int64 v26; // rdi
  unsigned __int64 v27; // rax
  __int64 v28; // rax
  unsigned __int64 v29; // rdx
  int v30; // r12d
  unsigned __int64 v31; // rdx
  __int64 v32; // r8
  __int64 v33; // r9
  unsigned __int64 v34; // rbx
  __int64 v35; // rdx
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // rdi
  unsigned __int8 v39; // bl
  __int64 v40; // rdx
  __int64 v41; // r8
  __int64 v42; // r9
  unsigned __int64 v43; // rdx
  __int64 v44; // r8
  __int64 v45; // r9
  int v46; // eax
  int locked; // eax
  int v48; // ecx
  unsigned __int8 v49[4]; // [rsp+40h] [rbp-78h] BYREF
  int v50; // [rsp+44h] [rbp-74h] BYREF
  unsigned __int64 v51; // [rsp+48h] [rbp-70h] BYREF
  PSLIST_ENTRY ListEntry; // [rsp+50h] [rbp-68h]
  __int64 v53; // [rsp+58h] [rbp-60h]
  int v54; // [rsp+60h] [rbp-58h]
  _QWORD *v55; // [rsp+68h] [rbp-50h]
  __int64 v56; // [rsp+70h] [rbp-48h]
  __int64 v57; // [rsp+78h] [rbp-40h]

  v5 = a4;
  v51 = 0LL;
  v50 = 0;
  v6 = 0LL;
  v53 = 0LL;
  ListEntry = 0LL;
  v57 = MiSystemCacheVaControlArea(a1, a2, a1, a3);
  v9 = *((_QWORD *)qword_140E300C8 + (*(_WORD *)(v57 + 60) & 0x3FF)) + 18816LL;
  v56 = v9;
  if ( BugCheckParameter4 + v5 > 0x1000 || BugCheckParameter4 + v5 < v5 )
    KeBugCheckEx(0x1Au, 0x786uLL, v7, v5, BugCheckParameter4);
  v10 = ((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v11 = a5;
  v54 = a5 & 4;
  if ( (a5 & 4) != 0 && ((BugCheckParameter4 & 0x3F) != 0 || (v5 & 0x3F) != 0) )
    return 3221226612LL;
  if ( (a5 & 8) != 0 )
  {
    v12 = (_QWORD *)MiReservePtes((__int64)&qword_140E376A8, 1u);
    v55 = v12;
    if ( !v12 )
      return 3221225626LL;
    v9 = v56;
  }
  else
  {
    v12 = 0LL;
    v55 = 0LL;
  }
  if ( (*(_QWORD *)v10 & 1) != 0 )
  {
    if ( !v12 )
    {
      MiDirtyPte(v9, (__int64 *)v10, *(_QWORD *)v10);
      goto LABEL_23;
    }
    v6 = MiMapSystemCachePage((ULONG_PTR)v12);
    v53 = v6;
    if ( v6 )
      goto LABEL_23;
  }
  MiGetContainingPageTable(v10);
  v16 = *(_QWORD *)v10;
  if ( (*(_QWORD *)v10 & 1) != 0 )
  {
    if ( !v12 )
      goto LABEL_23;
    v6 = MiMapSystemCachePage((ULONG_PTR)v12);
    v53 = v6;
    if ( v6 )
      goto LABEL_23;
  }
  if ( qword_140E2DCC0 )
  {
    if ( (v16 & 0x10) != 0 )
      v16 &= ~0x10uLL;
    else
      v16 &= ~qword_140E2DCC0;
  }
  v17 = v16 >> 16;
LABEL_12:
  v18 = a1;
  while ( 1 )
  {
    while ( 1 )
    {
      v19 = 0LL;
      v49[0] = 17;
      v20 = *(_QWORD *)v17;
      v51 = v20;
      if ( (v20 & 1) == 0 && (v20 & 0x400) != 0 )
        goto LABEL_15;
      v19 = MiLockProtoPoolPageForce(v17, v49);
      v26 = MiLockLeafPage((unsigned __int64 *)v17, 2);
      v27 = *(_QWORD *)v17;
      v51 = *(_QWORD *)v17;
      if ( v26 )
        break;
      v11 = a5;
LABEL_15:
      if ( v19 )
      {
        LOBYTE(v13) = v49[0];
        MiUnlockProtoPoolPage(v19, v13, v14, v15);
      }
      if ( (*(_BYTE *)(v57 + 62) & 0xC) != 0 )
      {
        v50 = MmAccessFault(0LL, v18, 0, 0LL);
        if ( v50 < 0 )
          goto LABEL_28;
      }
      else
      {
        v5 = a4;
        PageAvoidRead = MiMakePageAvoidRead(v17, a2, a3, a4, v11, (__int64 *)&v51, &v50);
        if ( !PageAvoidRead )
          return (unsigned int)v50;
        v22 = PageAvoidRead - 1;
        if ( v22 )
        {
          if ( v22 != 1 )
            goto LABEL_52;
          v23 = 0;
          goto LABEL_53;
        }
      }
    }
    v50 = 0;
    if ( (v27 & 1) != 0 )
    {
      v29 = (*(_QWORD *)(v26 + 24) & 0x3FFFFFFFFFFFFFFFLL) + 1;
      *(_QWORD *)(v26 + 24) = v29 ^ (*(_QWORD *)(v26 + 24) ^ v29) & 0xC000000000000000uLL;
      v30 = 0;
    }
    else
    {
      if ( (*(_DWORD *)(*((_QWORD *)qword_140E300C8 + ((*(_QWORD *)(v26 + 40) >> 43) & 0x3FFLL)) + 4LL) & 0x80u) != 0 )
      {
        v26 = MiHandleSpecialPurposeMemoryCachedFault(0LL, (__int64)(v10 << 25) >> 16, v17, v26);
        if ( !v26 )
        {
          LOBYTE(v43) = v49[0];
          MiUnlockProtoPoolPage(v19, v43, v44, v45);
          goto LABEL_63;
        }
        v51 = *(_QWORD *)v17;
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
          LOBYTE(v31) = v49[0];
          MiUnlockProtoPoolPage(v19, v31, v32, v33);
          MiReplenishTransitionPageHeatList();
          ListEntry = 0LL;
          goto LABEL_63;
        }
      }
      v30 = MiUnlinkStandbyPfn((ULONG_PTR *)v17, a5);
      if ( v30 )
      {
        v46 = v50;
        if ( v30 == 3 )
          v46 = -1073740023;
        v50 = v46;
      }
      else
      {
        v51 = *(_QWORD *)v17;
      }
    }
    if ( v12 && !v30 )
    {
      locked = MiAddLockedPageCharge(v26, 0);
      v48 = v50;
      if ( !locked )
        v48 = -1073741670;
      v50 = v48;
    }
    _InterlockedAnd64((volatile signed __int64 *)(v26 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    LOBYTE(v29) = v49[0];
    MiUnlockProtoPoolPage(v19, v29, v14, v15);
    if ( ListEntry )
    {
      MiIssuePageHeatList(ListEntry);
      MiFreeTransitionPageHeatList(ListEntry);
      ListEntry = 0LL;
    }
    if ( v50 < 0 )
      goto LABEL_28;
    if ( v30 == 1 )
    {
      v11 = a5;
      goto LABEL_12;
    }
    if ( v30 != 2 )
      break;
    v18 = a1;
    v50 = MmAccessFault(0LL, a1, 0, 0LL);
    if ( v50 < 0 )
      goto LABEL_28;
LABEL_63:
    v11 = a5;
  }
  if ( !v12 )
  {
    v5 = a4;
LABEL_52:
    v23 = 1;
LABEL_53:
    v6 = v53;
    goto LABEL_54;
  }
  v6 = MiMapFrame((ULONG_PTR)v12, (v51 >> 12) & 0xFFFFFFFFFFLL, v14, v15);
  v5 = a4;
  v23 = 1;
LABEL_54:
  if ( v23 )
    MiMakeSystemCachePteValid(v56, (__int64 *)v10, v51, a5);
LABEL_23:
  v50 = 0;
  if ( !v6 )
    v6 = a1;
  v24 = (void *)(v6 + a3);
  if ( v54 )
    RtlCopyMemoryNonTemporal(v24, a2, v5);
  else
    memmove(v24, a2, v5);
LABEL_28:
  if ( v12 )
  {
    v34 = *v12;
    MiReleasePtes((__int64)&qword_140E376A8, v12, 1u);
    if ( (v34 & 1) != 0 )
    {
      v38 = 48 * ((v34 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
      v39 = MiLockPageInline(v38, v35, v36, v37);
      MiRemoveLockedPageChargeAndDecRef(v38, v40, v41, v42);
      MiUnlockPage(v38, v39);
    }
  }
  return (unsigned int)v50;
}
