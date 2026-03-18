/*
 * XREFs of MiTranslatePageForCopy @ 0x1403961F0
 * Callers:
 *     MmCopyMemory @ 0x140395E40 (MmCopyMemory.c)
 * Callees:
 *     MiLockLowestValidPageTableEx @ 0x140218760 (MiLockLowestValidPageTableEx.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021A250 (MI_READ_PTE_LOCK_FREE.c)
 *     MiSystemVaTypeToVm @ 0x14022ABF0 (MiSystemVaTypeToVm.c)
 *     MiGetSystemRegionType @ 0x14022AD20 (MiGetSystemRegionType.c)
 *     MiSynchronizeSystemVa @ 0x14022AD58 (MiSynchronizeSystemVa.c)
 *     MiLockProtoPoolPage @ 0x14022E920 (MiLockProtoPoolPage.c)
 *     MiWaitForCollidedFaultComplete @ 0x14023B89C (MiWaitForCollidedFaultComplete.c)
 *     MiObtainProtoReference @ 0x14023BBE8 (MiObtainProtoReference.c)
 *     MiUnlockVadTree @ 0x140261370 (MiUnlockVadTree.c)
 *     MiUnlockProtoPoolPage @ 0x14028CBF0 (MiUnlockProtoPoolPage.c)
 *     MiUnlockPage @ 0x1402915F0 (MiUnlockPage.c)
 *     HvlNotifyLongSpinWait @ 0x140293260 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140293290 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiLockWorkingSetShared @ 0x1402DF970 (MiLockWorkingSetShared.c)
 *     MiUnlockSystemVa @ 0x1402E1BA0 (MiUnlockSystemVa.c)
 *     MiGetPagingFileOffset @ 0x1402E5A60 (MiGetPagingFileOffset.c)
 *     MiLockLeafPage @ 0x1402E8100 (MiLockLeafPage.c)
 *     MiCheckVirtualAddress @ 0x1402FF5B0 (MiCheckVirtualAddress.c)
 *     MiIsPrototypePteVadLookup @ 0x140303270 (MiIsPrototypePteVadLookup.c)
 *     MiStandbyPageContentsIntact @ 0x140314AD4 (MiStandbyPageContentsIntact.c)
 *     MiLockTransitionLeafPageEx @ 0x14036A520 (MiLockTransitionLeafPageEx.c)
 *     MiVaIsUltra @ 0x140395710 (MiVaIsUltra.c)
 *     MiInitializePageFaultPacket @ 0x1403975B0 (MiInitializePageFaultPacket.c)
 *     MiGetAnyMultiplexedVm @ 0x140442630 (MiGetAnyMultiplexedVm.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

__int64 __fastcall MiTranslatePageForCopy(
        unsigned __int64 a1,
        __int64 a2,
        unsigned __int64 *a3,
        __int64 *a4,
        unsigned __int64 *a5)
{
  unsigned __int64 *v6; // r15
  unsigned __int64 v9; // rdi
  int SystemRegionType; // eax
  struct _LIST_ENTRY **AnyMultiplexedVm; // rax
  int v12; // r10d
  __int128 v13; // xmm0
  __int64 v14; // rax
  __int64 v15; // rdx
  int v16; // r8d
  unsigned __int64 i; // rcx
  __int16 v18; // ax
  __int64 v19; // rax
  __int64 v20; // rsi
  int v21; // ebx
  unsigned int v22; // r14d
  unsigned __int64 v23; // xmm1_8
  struct _LIST_ENTRY **p_Blink; // rbx
  char v26; // al
  unsigned __int64 v27; // r15
  unsigned __int64 v28; // rax
  __int64 v29; // rsi
  unsigned int v30; // r14d
  __int64 v31; // rsi
  unsigned __int64 v32; // rsi
  __int64 v33; // r14
  __int64 v34; // rcx
  ULONG_PTR v35; // r15
  __int64 v36; // rax
  unsigned __int64 v37; // rdx
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // rdi
  __int64 v41; // rax
  __int64 v42; // rdx
  __int64 v43; // r8
  __int64 v44; // r9
  __int64 v45; // rsi
  char v46; // al
  __int64 v47; // r8
  __int64 *v48; // rdx
  unsigned __int64 v49; // rdx
  ULONG_PTR v50; // rcx
  int PagingFileOffset; // eax
  unsigned __int8 v52[4]; // [rsp+30h] [rbp-D0h] BYREF
  int v53; // [rsp+34h] [rbp-CCh] BYREF
  __int64 *v54; // [rsp+38h] [rbp-C8h]
  int v55; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int64 *v56; // [rsp+48h] [rbp-B8h]
  _QWORD *v57; // [rsp+50h] [rbp-B0h] BYREF
  struct _LIST_ENTRY *v58; // [rsp+58h] [rbp-A8h] BYREF
  _QWORD v59[3]; // [rsp+60h] [rbp-A0h] BYREF
  ULONG_PTR BugCheckParameter2[4]; // [rsp+78h] [rbp-88h]
  __int128 v61; // [rsp+98h] [rbp-68h]
  unsigned __int64 valid; // [rsp+A8h] [rbp-58h]

  v57 = 0LL;
  v6 = a3;
  v56 = a3;
  v54 = a4;
  memset_0(v59, 0, 0x98uLL);
  memset_0((void *)a2, 0, 0x80uLL);
  v9 = -1LL;
  *v6 = -1LL;
  *a4 = 0LL;
  *a5 = 0LL;
  MiInitializePageFaultPacket(0, a1, 0, 0, 0LL, (__int64)v59);
  if ( (unsigned __int64)(((__int64)a1 >> 47) + 1) > 1
    || a1 >= 0xFFFFF68000000000uLL && a1 <= 0xFFFFF6FFFFFFFFFFuLL
    || a1 >= 0xFFFFDE0000000000uLL && a1 < 48 * qword_140E2DBE0 - 0x21FFFFFFFFD0LL
    || a1 >= 0xFFFF800000000000uLL && MiVaIsUltra(a1) )
  {
    return 3221225711LL;
  }
  if ( a1 < qword_140E2F280 || a1 > qword_140E2F290 )
  {
    SystemRegionType = MiGetSystemRegionType(a1);
    if ( SystemRegionType == 16 )
      return 3221225632LL;
    AnyMultiplexedVm = MiSystemVaTypeToVm(SystemRegionType);
    if ( !AnyMultiplexedVm )
      AnyMultiplexedVm = (struct _LIST_ENTRY **)MiGetAnyMultiplexedVm(6LL);
    *(_DWORD *)(a2 + 4) |= 4u;
    if ( !(unsigned int)MiSynchronizeSystemVa((__int64)AnyMultiplexedVm, a1, v12, 0, a2) )
      return 3221225632LL;
    v13 = *(_OWORD *)(a2 + 24);
    v14 = *(int *)(a2 + 16);
    valid = *(_QWORD *)(a2 + 40);
    v61 = v13;
    if ( (_DWORD)v14 )
    {
      v15 = 1LL;
      v16 = *(_DWORD *)(a2 + 16);
      v9 = (*(_QWORD *)BugCheckParameter2[v14] >> 12) & 0xFFFFFFFFFFLL;
      for ( i = v59[0] >> 12; v16; --v16 )
      {
        v18 = i;
        i >>= 9;
        v19 = v15 * (v18 & 0x1FF);
        v15 <<= 9;
        v9 += v19;
      }
      if ( v9 <= qword_140E2DBE0 )
      {
        v20 = 48 * v9;
        if ( ((*(_QWORD *)(48 * v9 - 0x21FFFFFFFFD8LL) >> 54) & 1) != 0 )
        {
          v21 = 0;
          v22 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v20 - 0x21FFFFFFFFE8LL), 0x3FuLL) )
          {
            do
            {
              if ( (++v22 & HvlLongSpinCountMask) == 0
                && (HvlEnlightenments & 0x40) != 0
                && KiCheckVpBackingLongSpinWaitHypercall() )
              {
                HvlNotifyLongSpinWait(v22);
              }
              else
              {
                _mm_pause();
              }
            }
            while ( *(__int64 *)(v20 - 0x21FFFFFFFFE8LL) < 0 );
          }
          goto LABEL_19;
        }
      }
      v21 = -1073741503;
      goto LABEL_20;
    }
    v27 = BugCheckParameter2[0];
  }
  else
  {
    p_Blink = &KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink;
    *(_QWORD *)&v61 = p_Blink;
    v26 = MiLockWorkingSetShared((__int64)p_Blink);
    v27 = BugCheckParameter2[0];
    BYTE12(v61) = v26;
    valid = MiLockLowestValidPageTableEx((__int64)p_Blink, BugCheckParameter2[0], (ULONG_PTR *)&v57, 0);
    if ( valid != ((a1 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL )
    {
      v21 = *v57 != 0LL ? -1073741608 : -1073741819;
      goto LABEL_19;
    }
  }
  v52[0] = 17;
  v21 = 0;
  do
  {
    v28 = MI_READ_PTE_LOCK_FREE(v27);
    if ( (v28 & 1) != 0 )
    {
      v9 = (v28 >> 12) & 0xFFFFFFFFFFLL;
      if ( v9 <= qword_140E2DBE0 && (v29 = 48 * v9, ((*(_QWORD *)(48 * v9 - 0x21FFFFFFFFD8LL) >> 54) & 1) != 0) )
      {
        v30 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v29 - 0x21FFFFFFFFE8LL), 0x3FuLL) )
        {
          do
          {
            if ( (++v30 & HvlLongSpinCountMask) == 0
              && (HvlEnlightenments & 0x40) != 0
              && KiCheckVpBackingLongSpinWaitHypercall() )
            {
              HvlNotifyLongSpinWait(v30);
            }
            else
            {
              _mm_pause();
            }
          }
          while ( *(__int64 *)(v29 - 0x21FFFFFFFFE8LL) < 0 );
        }
      }
      else
      {
        v21 = -1073741503;
      }
      goto LABEL_19;
    }
    if ( (v28 & 0x400) != 0 )
    {
      if ( (v28 & 2) != 0 )
      {
        v34 = v28;
        if ( qword_140E2DB80 && (v28 & 0x10) == 0 )
          v34 = v28 & ~qword_140E2DB80;
        v49 = v28 & 0xFFFFFFFFFFFFFBFFuLL;
        if ( (v34 & 0xFFFFFFFFFFFF0000uLL) != 0 )
          v49 = v28;
        *a5 = v49 & 0xFFFFFFFFFFFFFFFDuLL;
LABEL_85:
        v21 = 273;
        goto LABEL_19;
      }
      v31 = v28;
      if ( qword_140E2DB80 && (v28 & 0x10) == 0 )
        v31 = v28 & ~qword_140E2DB80;
      v32 = v31 >> 16;
      if ( MiIsPrototypePteVadLookup(v28) )
      {
        v58 = 0LL;
        v55 = 0;
        v32 = MiCheckVirtualAddress(a1, &v55, &v58);
        if ( v58 )
          MiUnlockVadTree(1, 0x11u);
        if ( !v32 )
        {
LABEL_89:
          v21 = -1073741819;
          goto LABEL_19;
        }
      }
      v33 = MiLockProtoPoolPage(v32, v52);
      if ( !v33 )
        goto LABEL_59;
      v35 = MiLockLeafPage((unsigned __int64 *)v32, 0);
      v36 = MI_READ_PTE_LOCK_FREE(v32);
      if ( (v36 & 1) != 0 )
      {
        v40 = v35 + 0x220000000000LL;
LABEL_91:
        v9 = 0xAAAAAAAAAAAAAAABuLL * (v40 >> 4);
        *v54 = v33;
        goto LABEL_19;
      }
      if ( !v36 )
      {
        LOBYTE(v37) = v52[0];
        MiUnlockProtoPoolPage(v33, v37, v38);
        goto LABEL_89;
      }
      if ( (v36 & 0x400) == 0 )
      {
        if ( (v36 & 0x800) == 0 )
        {
          PagingFileOffset = MiGetPagingFileOffset(v36);
          LOBYTE(v37) = v52[0];
          v50 = v33;
          if ( !PagingFileOffset )
          {
            MiUnlockProtoPoolPage(v33, v37, v38);
            goto LABEL_85;
          }
          goto LABEL_98;
        }
        if ( (*(_BYTE *)(v35 + 34) & 0x20) != 0 )
        {
          MiObtainProtoReference(v33, 1);
          v47 = v33;
          v48 = (__int64 *)v35;
          goto LABEL_79;
        }
        if ( (unsigned int)MiStandbyPageContentsIntact(v35, v37, v38, v39) )
        {
          v40 = v35 + 0x220000000000LL;
          goto LABEL_91;
        }
        _InterlockedAnd64((volatile signed __int64 *)(v35 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      }
      LOBYTE(v37) = v52[0];
      v50 = v33;
LABEL_98:
      MiUnlockProtoPoolPage(v50, v37, v38);
      goto LABEL_59;
    }
    if ( (v28 & 0x3E0) == 0 || (((v28 & 0x3E0) - 512) & 0xFFFFFFFFFFFFFEFFuLL) == 0 )
      goto LABEL_89;
    if ( (v28 & 0x800) == 0 )
    {
      if ( !(unsigned int)MiGetPagingFileOffset(v28) )
        goto LABEL_85;
LABEL_59:
      v21 = -1073741608;
      goto LABEL_19;
    }
    v41 = MiLockTransitionLeafPageEx(v27, v52, 0);
    v45 = v41;
  }
  while ( !v41 );
  v46 = *(_BYTE *)(v41 + 34);
  if ( (v46 & 0x20) != 0 )
  {
    if ( (v46 & 8) != 0 )
      goto LABEL_59;
    v47 = 0LL;
    v48 = (__int64 *)v45;
LABEL_79:
    v53 = 1;
    MiWaitForCollidedFaultComplete(v59, v48, v47, v52[0], &v53);
    goto LABEL_59;
  }
  if ( !(unsigned int)MiStandbyPageContentsIntact(v45, v42, v43, v44) )
  {
    MiUnlockPage(v45, v52[0]);
    goto LABEL_59;
  }
  v9 = 0xAAAAAAAAAAAAAAABuLL * ((v45 + 0x220000000000LL) >> 4);
LABEL_19:
  v6 = v56;
LABEL_20:
  v23 = valid;
  *(_OWORD *)(a2 + 24) = v61;
  *(_QWORD *)(a2 + 40) = v23;
  if ( v21 < 0 )
    MiUnlockSystemVa(a2);
  else
    *v6 = v9;
  return (unsigned int)v21;
}
