/*
 * XREFs of MiTranslatePageForCopy @ 0x1403783E0
 * Callers:
 *     MmCopyMemory @ 0x140378030 (MmCopyMemory.c)
 * Callees:
 *     MiLockWorkingSetShared @ 0x140212A90 (MiLockWorkingSetShared.c)
 *     MiSystemVaTypeToVm @ 0x140219640 (MiSystemVaTypeToVm.c)
 *     MiGetSystemRegionType @ 0x140219770 (MiGetSystemRegionType.c)
 *     MiSynchronizeSystemVa @ 0x1402197A8 (MiSynchronizeSystemVa.c)
 *     MiStandbyPageContentsIntact @ 0x140225484 (MiStandbyPageContentsIntact.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140231F50 (MI_READ_PTE_LOCK_FREE.c)
 *     MiUnlockProtoPoolPage @ 0x1402353A0 (MiUnlockProtoPoolPage.c)
 *     MiLockProtoPoolPage @ 0x140240A70 (MiLockProtoPoolPage.c)
 *     MiCheckVirtualAddress @ 0x140243540 (MiCheckVirtualAddress.c)
 *     MiIsPrototypePteVadLookup @ 0x140246860 (MiIsPrototypePteVadLookup.c)
 *     MiUnlockVadTree @ 0x1402A8690 (MiUnlockVadTree.c)
 *     MiLockLowestValidPageTableEx @ 0x1402B7890 (MiLockLowestValidPageTableEx.c)
 *     MiUnlockSystemVa @ 0x1402BB200 (MiUnlockSystemVa.c)
 *     MiUnlockPage @ 0x14032B850 (MiUnlockPage.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiLockLeafPage @ 0x14033B770 (MiLockLeafPage.c)
 *     MiWaitForCollidedFaultComplete @ 0x14033DB60 (MiWaitForCollidedFaultComplete.c)
 *     MiObtainProtoReference @ 0x14033DEAC (MiObtainProtoReference.c)
 *     MiInitializePageFaultPacket @ 0x140379270 (MiInitializePageFaultPacket.c)
 *     MiGetPagingFileOffset @ 0x14037C4CC (MiGetPagingFileOffset.c)
 *     MiLockTransitionLeafPageEx @ 0x14040D774 (MiLockTransitionLeafPageEx.c)
 *     MiVaIsUltra @ 0x14041B6C0 (MiVaIsUltra.c)
 *     MiGetAnyMultiplexedVm @ 0x1404423A0 (MiGetAnyMultiplexedVm.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

__int64 __fastcall MiTranslatePageForCopy(
        unsigned __int64 a1,
        __int64 a2,
        unsigned __int64 *a3,
        unsigned __int64 *a4,
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
  int v22; // r14d
  unsigned __int64 v23; // xmm1_8
  struct _LIST_ENTRY **p_Blink; // rbx
  char v26; // al
  unsigned __int64 v27; // r15
  unsigned __int64 v28; // rax
  __int64 v29; // rsi
  int v30; // r14d
  __int64 v31; // rsi
  unsigned __int64 v32; // rsi
  unsigned __int64 v33; // r14
  __int64 v34; // rcx
  __int64 v35; // r15
  __int64 v36; // rax
  __int64 v37; // rdx
  __int64 v38; // r8
  unsigned __int64 v39; // r9
  __int64 v40; // rdi
  __int64 v41; // rax
  __int64 v42; // rdx
  __int64 v43; // rsi
  char v44; // al
  ULONG_PTR v45; // r8
  ULONG_PTR v46; // rdx
  unsigned __int64 v47; // rdx
  unsigned __int8 v48; // dl
  ULONG_PTR v49; // rcx
  int PagingFileOffset; // eax
  unsigned __int8 v51[4]; // [rsp+30h] [rbp-D0h] BYREF
  int v52; // [rsp+34h] [rbp-CCh] BYREF
  unsigned __int64 *v53; // [rsp+38h] [rbp-C8h]
  int v54; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int64 *v55; // [rsp+48h] [rbp-B8h]
  _QWORD *v56; // [rsp+50h] [rbp-B0h] BYREF
  struct _LIST_ENTRY *v57; // [rsp+58h] [rbp-A8h] BYREF
  unsigned __int64 v58[3]; // [rsp+60h] [rbp-A0h] BYREF
  ULONG_PTR BugCheckParameter2[4]; // [rsp+78h] [rbp-88h]
  __int128 v60; // [rsp+98h] [rbp-68h]
  unsigned __int64 valid; // [rsp+A8h] [rbp-58h]

  v56 = 0LL;
  v6 = a3;
  v55 = a3;
  v53 = a4;
  memset_0(v58, 0, 0x98uLL);
  memset_0((void *)a2, 0, 0x80uLL);
  v9 = -1LL;
  *v6 = -1LL;
  *a4 = 0LL;
  *a5 = 0LL;
  MiInitializePageFaultPacket(0, a1, 0, 0, 0LL, (__int64)v58);
  if ( (unsigned __int64)(((__int64)a1 >> 47) + 1) > 1
    || a1 >= 0xFFFFF68000000000uLL && a1 <= 0xFFFFF6FFFFFFFFFFuLL
    || a1 >= 0xFFFFDE0000000000uLL && a1 < 48 * qword_140E2D9A0 - 0x21FFFFFFFFD0LL
    || a1 >= 0xFFFF800000000000uLL && (unsigned int)MiVaIsUltra(a1) )
  {
    return 3221225711LL;
  }
  if ( a1 < qword_140E2F040 || a1 > qword_140E2F050 )
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
    v60 = v13;
    if ( (_DWORD)v14 )
    {
      v15 = 1LL;
      v16 = *(_DWORD *)(a2 + 16);
      v9 = (*(_QWORD *)BugCheckParameter2[v14] >> 12) & 0xFFFFFFFFFFLL;
      for ( i = v58[0] >> 12; v16; --v16 )
      {
        v18 = i;
        i >>= 9;
        v19 = v15 * (v18 & 0x1FF);
        v15 <<= 9;
        v9 += v19;
      }
      if ( v9 <= qword_140E2D9A0 )
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
                HvlNotifyLongSpinWait();
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
    *(_QWORD *)&v60 = p_Blink;
    v26 = MiLockWorkingSetShared((__int64)p_Blink);
    v27 = BugCheckParameter2[0];
    BYTE12(v60) = v26;
    valid = MiLockLowestValidPageTableEx((__int64)p_Blink, BugCheckParameter2[0], (ULONG_PTR *)&v56, 0);
    if ( valid != ((a1 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL )
    {
      v21 = *v56 != 0LL ? -1073741608 : -1073741819;
      goto LABEL_19;
    }
  }
  v51[0] = 17;
  v21 = 0;
  do
  {
    v28 = MI_READ_PTE_LOCK_FREE(v27);
    if ( (v28 & 1) != 0 )
    {
      v9 = (v28 >> 12) & 0xFFFFFFFFFFLL;
      if ( v9 <= qword_140E2D9A0 && (v29 = 48 * v9, ((*(_QWORD *)(48 * v9 - 0x21FFFFFFFFD8LL) >> 54) & 1) != 0) )
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
              HvlNotifyLongSpinWait();
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
        if ( qword_140E2D940 && (v28 & 0x10) == 0 )
          v34 = v28 & ~qword_140E2D940;
        v47 = v28 & 0xFFFFFFFFFFFFFBFFuLL;
        if ( (v34 & 0xFFFFFFFFFFFF0000uLL) != 0 )
          v47 = v28;
        *a5 = v47 & 0xFFFFFFFFFFFFFFFDuLL;
LABEL_85:
        v21 = 273;
        goto LABEL_19;
      }
      v31 = v28;
      if ( qword_140E2D940 && (v28 & 0x10) == 0 )
        v31 = v28 & ~qword_140E2D940;
      v32 = v31 >> 16;
      if ( MiIsPrototypePteVadLookup(v28) )
      {
        v57 = 0LL;
        v54 = 0;
        v32 = MiCheckVirtualAddress(a1, &v54, &v57);
        if ( v57 )
          MiUnlockVadTree(1, 0x11u);
        if ( !v32 )
        {
LABEL_89:
          v21 = -1073741819;
          goto LABEL_19;
        }
      }
      v33 = MiLockProtoPoolPage(v32, v51);
      if ( !v33 )
        goto LABEL_59;
      v35 = MiLockLeafPage((unsigned __int64 *)v32, 0);
      v36 = MI_READ_PTE_LOCK_FREE(v32);
      if ( (v36 & 1) != 0 )
      {
        v40 = v35 + 0x220000000000LL;
LABEL_91:
        v9 = 0xAAAAAAAAAAAAAAABuLL * (v40 >> 4);
        *v53 = v33;
        goto LABEL_19;
      }
      if ( !v36 )
      {
        MiUnlockProtoPoolPage(v33, v51[0], v38, v39);
        goto LABEL_89;
      }
      if ( (v36 & 0x400) == 0 )
      {
        if ( (v36 & 0x800) == 0 )
        {
          PagingFileOffset = MiGetPagingFileOffset(v36);
          v48 = v51[0];
          v49 = v33;
          if ( !PagingFileOffset )
          {
            MiUnlockProtoPoolPage(v33, v51[0], v38, v39);
            goto LABEL_85;
          }
          goto LABEL_98;
        }
        if ( (*(_BYTE *)(v35 + 34) & 0x20) != 0 )
        {
          MiObtainProtoReference(v33, 1);
          v45 = v33;
          v46 = v35;
          goto LABEL_79;
        }
        if ( (unsigned int)MiStandbyPageContentsIntact(v35, v37) )
        {
          v40 = v35 + 0x220000000000LL;
          goto LABEL_91;
        }
        _InterlockedAnd64((volatile signed __int64 *)(v35 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      }
      v48 = v51[0];
      v49 = v33;
LABEL_98:
      MiUnlockProtoPoolPage(v49, v48, v38, v39);
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
    v41 = MiLockTransitionLeafPageEx(v27);
    v43 = v41;
  }
  while ( !v41 );
  v44 = *(_BYTE *)(v41 + 34);
  if ( (v44 & 0x20) != 0 )
  {
    if ( (v44 & 8) != 0 )
      goto LABEL_59;
    v45 = 0LL;
    v46 = v43;
LABEL_79:
    v52 = 1;
    MiWaitForCollidedFaultComplete(v58, v46, v45, v51[0], &v52);
    goto LABEL_59;
  }
  if ( !(unsigned int)MiStandbyPageContentsIntact(v43, v42) )
  {
    MiUnlockPage(v43, v51[0]);
    goto LABEL_59;
  }
  v9 = 0xAAAAAAAAAAAAAAABuLL * ((v43 + 0x220000000000LL) >> 4);
LABEL_19:
  v6 = v55;
LABEL_20:
  v23 = valid;
  *(_OWORD *)(a2 + 24) = v60;
  *(_QWORD *)(a2 + 40) = v23;
  if ( v21 < 0 )
    MiUnlockSystemVa(a2);
  else
    *v6 = v9;
  return (unsigned int)v21;
}
