/*
 * XREFs of MmCopyToCachedPage @ 0x1402EDA94
 * Callers:
 *     CcWrapperMmCopyToCachedPage @ 0x1402EDA00 (CcWrapperMmCopyToCachedPage.c)
 * Callees:
 *     MiLockProtoPoolPageForce @ 0x140215A80 (MiLockProtoPoolPageForce.c)
 *     MmAccessFault @ 0x140216750 (MmAccessFault.c)
 *     MiUnlinkStandbyPfn @ 0x1402363D0 (MiUnlinkStandbyPfn.c)
 *     MiDirtyPte @ 0x140241184 (MiDirtyPte.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x14028C530 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiUnlockProtoPoolPage @ 0x14028CBF0 (MiUnlockProtoPoolPage.c)
 *     MiReleasePtes @ 0x14028DDA0 (MiReleasePtes.c)
 *     MiReservePtes @ 0x14028FF10 (MiReservePtes.c)
 *     MiLockPageInline @ 0x140291550 (MiLockPageInline.c)
 *     MiUnlockPage @ 0x1402915F0 (MiUnlockPage.c)
 *     MiLockLeafPage @ 0x1402E8100 (MiLockLeafPage.c)
 *     MiMapFrame @ 0x1402EBAD0 (MiMapFrame.c)
 *     MiGetContainingPageTable @ 0x1402ECE30 (MiGetContainingPageTable.c)
 *     MiSystemCacheVaControlArea @ 0x1402EE150 (MiSystemCacheVaControlArea.c)
 *     MiMakePageAvoidRead @ 0x1402EF168 (MiMakePageAvoidRead.c)
 *     MiAddLockedPageCharge @ 0x1402F6F40 (MiAddLockedPageCharge.c)
 *     MiMakeTransitionHeatBatch @ 0x140402D04 (MiMakeTransitionHeatBatch.c)
 *     MiIssuePageHeatList @ 0x14043F9FC (MiIssuePageHeatList.c)
 *     MiHandleSpecialPurposeMemoryCachedFault @ 0x140442B00 (MiHandleSpecialPurposeMemoryCachedFault.c)
 *     MiMakeSystemCachePteValid @ 0x14046F7A8 (MiMakeSystemCachePteValid.c)
 *     MiMapSystemCachePage @ 0x1404C9858 (MiMapSystemCachePage.c)
 *     MiReplenishTransitionPageHeatList @ 0x1404D6A8C (MiReplenishTransitionPageHeatList.c)
 *     MiFreeTransitionPageHeatList @ 0x1404D8538 (MiFreeTransitionPageHeatList.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     RtlCopyMemoryNonTemporal @ 0x1406B3A40 (RtlCopyMemoryNonTemporal.c)
 *     memmove @ 0x1406BFC40 (memmove.c)
 *     MiMapCacheExceptionFilter @ 0x140A2E734 (MiMapCacheExceptionFilter.c)
 */

__int64 __fastcall MmCopyToCachedPage(
        signed __int64 a1,
        const void *a2,
        unsigned int a3,
        ULONG_PTR a4,
        unsigned int a5)
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
  __int64 v15; // rbx
  ULONG_PTR v16; // rbx
  signed __int64 v17; // r12
  ULONG_PTR v18; // r13
  unsigned __int64 v19; // rax
  int v20; // eax
  int v21; // eax
  int v22; // eax
  void *v23; // rcx
  ULONG_PTR v25; // rdi
  unsigned __int64 v26; // rax
  __int64 v27; // rax
  unsigned __int64 v28; // rdx
  int v29; // r12d
  __int64 v30; // r9
  unsigned __int64 v31; // rdx
  __int64 v32; // r8
  unsigned __int64 v33; // rbx
  __int64 v34; // rdi
  unsigned __int8 v35; // bl
  __int64 v36; // rdx
  __int64 v37; // r8
  unsigned __int64 v38; // rdx
  __int64 v39; // r8
  int v40; // eax
  int locked; // eax
  int v42; // ecx
  unsigned __int8 v43[4]; // [rsp+40h] [rbp-78h] BYREF
  int v44; // [rsp+44h] [rbp-74h] BYREF
  unsigned __int64 v45; // [rsp+48h] [rbp-70h] BYREF
  PSLIST_ENTRY ListEntry; // [rsp+50h] [rbp-68h]
  __int64 v47; // [rsp+58h] [rbp-60h]
  int v48; // [rsp+60h] [rbp-58h]
  _QWORD *v49; // [rsp+68h] [rbp-50h]
  __int64 v50; // [rsp+70h] [rbp-48h]
  __int64 v51; // [rsp+78h] [rbp-40h]

  v5 = a4;
  v45 = 0LL;
  v44 = 0;
  v6 = 0LL;
  v47 = 0LL;
  ListEntry = 0LL;
  v51 = MiSystemCacheVaControlArea(a1, a2, a1, a3);
  v9 = *((_QWORD *)qword_140E2FF88 + (*(_WORD *)(v51 + 60) & 0x3FF)) + 18816LL;
  v50 = v9;
  if ( BugCheckParameter4 + v5 > 0x1000 || BugCheckParameter4 + v5 < v5 )
    KeBugCheckEx(0x1Au, 0x786uLL, v7, v5, BugCheckParameter4);
  v10 = ((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v11 = a5;
  v48 = a5 & 4;
  if ( (a5 & 4) != 0 && ((BugCheckParameter4 & 0x3F) != 0 || (v5 & 0x3F) != 0) )
    return 3221226612LL;
  if ( (a5 & 8) != 0 )
  {
    v12 = (_QWORD *)MiReservePtes((__int64)&qword_140E37568, 1u);
    v49 = v12;
    if ( !v12 )
      return 3221225626LL;
    v9 = v50;
  }
  else
  {
    v12 = 0LL;
    v49 = 0LL;
  }
  if ( (*(_QWORD *)v10 & 1) != 0 )
  {
    if ( !v12 )
    {
      MiDirtyPte(v9, (__int64 *)v10, *(_QWORD *)v10);
      goto LABEL_23;
    }
    v6 = MiMapSystemCachePage((ULONG_PTR)v12);
    v47 = v6;
    if ( v6 )
      goto LABEL_23;
  }
  MiGetContainingPageTable(v10);
  v15 = *(_QWORD *)v10;
  if ( (*(_QWORD *)v10 & 1) != 0 )
  {
    if ( !v12 )
      goto LABEL_23;
    v6 = MiMapSystemCachePage((ULONG_PTR)v12);
    v47 = v6;
    if ( v6 )
      goto LABEL_23;
  }
  if ( qword_140E2DB80 )
  {
    if ( (v15 & 0x10) != 0 )
      v15 &= ~0x10uLL;
    else
      v15 &= ~qword_140E2DB80;
  }
  v16 = v15 >> 16;
LABEL_12:
  v17 = a1;
  while ( 1 )
  {
    while ( 1 )
    {
      v18 = 0LL;
      v43[0] = 17;
      v19 = *(_QWORD *)v16;
      v45 = v19;
      if ( (v19 & 1) == 0 && (v19 & 0x400) != 0 )
        goto LABEL_15;
      v18 = MiLockProtoPoolPageForce(v16, v43);
      v25 = MiLockLeafPage((unsigned __int64 *)v16, 2);
      v26 = *(_QWORD *)v16;
      v45 = *(_QWORD *)v16;
      if ( v25 )
        break;
      v11 = a5;
LABEL_15:
      if ( v18 )
      {
        LOBYTE(v13) = v43[0];
        MiUnlockProtoPoolPage(v18, v13, v14);
      }
      if ( (*(_BYTE *)(v51 + 62) & 0xC) != 0 )
      {
        v44 = MmAccessFault(0LL, v17, 0, 0LL);
        if ( v44 < 0 )
          goto LABEL_28;
      }
      else
      {
        v5 = a4;
        v20 = MiMakePageAvoidRead(v16, (_DWORD)a2, a3, a4, v11, (__int64)&v45, (__int64)&v44);
        if ( !v20 )
          return (unsigned int)v44;
        v21 = v20 - 1;
        if ( v21 )
        {
          if ( v21 != 1 )
            goto LABEL_52;
          v22 = 0;
          goto LABEL_53;
        }
      }
    }
    v44 = 0;
    if ( (v26 & 1) != 0 )
    {
      v28 = (*(_QWORD *)(v25 + 24) & 0x3FFFFFFFFFFFFFFFLL) + 1;
      *(_QWORD *)(v25 + 24) = v28 ^ (*(_QWORD *)(v25 + 24) ^ v28) & 0xC000000000000000uLL;
      v29 = 0;
    }
    else
    {
      if ( (*(_DWORD *)(*((_QWORD *)qword_140E2FF88 + ((*(_QWORD *)(v25 + 40) >> 43) & 0x3FFLL)) + 4LL) & 0x80u) != 0 )
      {
        v25 = MiHandleSpecialPurposeMemoryCachedFault(0LL, (__int64)(v10 << 25) >> 16, v16, v25);
        if ( !v25 )
        {
          LOBYTE(v38) = v43[0];
          MiUnlockProtoPoolPage(v18, v38, v39);
          goto LABEL_63;
        }
        v45 = *(_QWORD *)v16;
      }
      v27 = *(_QWORD *)(v25 + 16) >> 3;
      if ( (*(_QWORD *)(v25 + 16) & 0x400LL) != 0 )
        LOBYTE(v27) = *(_QWORD *)(v25 + 16) >> 11;
      if ( (v27 & 1) != 0 )
      {
        ListEntry = (PSLIST_ENTRY)MiMakeTransitionHeatBatch(v25, 0LL, 0LL);
        if ( ListEntry == (PSLIST_ENTRY)-1LL )
        {
          _InterlockedAnd64((volatile signed __int64 *)(v25 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          LOBYTE(v31) = v43[0];
          MiUnlockProtoPoolPage(v18, v31, v32);
          MiReplenishTransitionPageHeatList();
          ListEntry = 0LL;
          goto LABEL_63;
        }
      }
      v29 = MiUnlinkStandbyPfn((ULONG_PTR *)v16, a5);
      if ( v29 )
      {
        v40 = v44;
        if ( v29 == 3 )
          v40 = -1073740023;
        v44 = v40;
      }
      else
      {
        v45 = *(_QWORD *)v16;
      }
    }
    if ( v12 && !v29 )
    {
      locked = MiAddLockedPageCharge(v25, 0LL);
      v42 = v44;
      if ( !locked )
        v42 = -1073741670;
      v44 = v42;
    }
    _InterlockedAnd64((volatile signed __int64 *)(v25 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    LOBYTE(v28) = v43[0];
    MiUnlockProtoPoolPage(v18, v28, v14);
    if ( ListEntry )
    {
      MiIssuePageHeatList(ListEntry);
      MiFreeTransitionPageHeatList(ListEntry);
      ListEntry = 0LL;
    }
    if ( v44 < 0 )
      goto LABEL_28;
    if ( v29 == 1 )
    {
      v11 = a5;
      goto LABEL_12;
    }
    if ( v29 != 2 )
      break;
    v17 = a1;
    v44 = MmAccessFault(0LL, a1, 0, 0LL);
    if ( v44 < 0 )
      goto LABEL_28;
LABEL_63:
    v11 = a5;
  }
  if ( !v12 )
  {
    v5 = a4;
LABEL_52:
    v22 = 1;
LABEL_53:
    v6 = v47;
    goto LABEL_54;
  }
  v6 = MiMapFrame((ULONG_PTR)v12, (v45 >> 12) & 0xFFFFFFFFFFLL, v14, v30);
  v5 = a4;
  v22 = 1;
LABEL_54:
  if ( v22 )
    MiMakeSystemCachePteValid(v50, v10, v45, a5);
LABEL_23:
  v44 = 0;
  if ( !v6 )
    v6 = a1;
  v23 = (void *)(v6 + a3);
  if ( v48 )
    RtlCopyMemoryNonTemporal(v23, a2, v5);
  else
    memmove(v23, a2, v5);
LABEL_28:
  if ( v12 )
  {
    v33 = *v12;
    MiReleasePtes((__int64)&qword_140E37568, v12, 1u);
    if ( (v33 & 1) != 0 )
    {
      v34 = 48 * ((v33 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
      v35 = MiLockPageInline(v34);
      MiRemoveLockedPageChargeAndDecRef(v34, v36, v37);
      MiUnlockPage(v34, v35);
    }
  }
  return (unsigned int)v44;
}
