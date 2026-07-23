/*
 * XREFs of MiTranslatePageForCopy @ 0x1403F3CE0
 * Callers:
 *     MmCopyMemory @ 0x1403F3930 (MmCopyMemory.c)
 * Callees:
 *     MiLockWorkingSetShared @ 0x140241250 (MiLockWorkingSetShared.c)
 *     MiLockLowestValidPageTableEx @ 0x1402454B0 (MiLockLowestValidPageTableEx.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140246FA0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiUnlockVadTree @ 0x140291980 (MiUnlockVadTree.c)
 *     MiUnlockProtoPoolPage @ 0x14029C7F0 (MiUnlockProtoPoolPage.c)
 *     MiUnlockPage @ 0x1402A11F0 (MiUnlockPage.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiLockTransitionLeafPageEx @ 0x1402EC2C0 (MiLockTransitionLeafPageEx.c)
 *     MiUnlockSystemVa @ 0x1402FC650 (MiUnlockSystemVa.c)
 *     MiSystemVaTypeToVm @ 0x1402FDE60 (MiSystemVaTypeToVm.c)
 *     MiGetSystemRegionType @ 0x1402FDF90 (MiGetSystemRegionType.c)
 *     MiSynchronizeSystemVa @ 0x1402FDFC8 (MiSynchronizeSystemVa.c)
 *     MiLockProtoPoolPage @ 0x140302230 (MiLockProtoPoolPage.c)
 *     MiCheckVirtualAddress @ 0x140309D30 (MiCheckVirtualAddress.c)
 *     MiIsPrototypePteVadLookup @ 0x14030D150 (MiIsPrototypePteVadLookup.c)
 *     MiGetPagingFileOffset @ 0x140341C00 (MiGetPagingFileOffset.c)
 *     MiObtainProtoReference @ 0x14034594C (MiObtainProtoReference.c)
 *     MiLockLeafPage @ 0x140349740 (MiLockLeafPage.c)
 *     MiInitializePageFaultPacket @ 0x140351870 (MiInitializePageFaultPacket.c)
 *     MiStandbyPageContentsIntact @ 0x1403F1E24 (MiStandbyPageContentsIntact.c)
 *     MiVaIsUltra @ 0x1403F4490 (MiVaIsUltra.c)
 *     MiWaitForCollidedFaultComplete @ 0x1404270E4 (MiWaitForCollidedFaultComplete.c)
 *     MiGetAnyMultiplexedVm @ 0x140439200 (MiGetAnyMultiplexedVm.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
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
  __int64 v10; // rdx
  __int64 v11; // r9
  unsigned __int64 v12; // r8
  int SystemRegionType; // eax
  struct _LIST_ENTRY **AnyMultiplexedVm; // rax
  unsigned int v15; // r10d
  __int128 v16; // xmm0
  __int64 v17; // rax
  __int64 v18; // rdx
  int v19; // r8d
  unsigned __int64 i; // rcx
  __int16 v21; // ax
  __int64 v22; // rax
  __int64 v23; // rsi
  int v24; // ebx
  unsigned int v25; // r14d
  unsigned __int64 v26; // xmm1_8
  struct _LIST_ENTRY **p_Blink; // rbx
  char v29; // al
  unsigned __int64 v30; // r15
  unsigned __int64 v31; // rax
  __int64 v32; // rsi
  unsigned int v33; // r14d
  __int64 v34; // rsi
  unsigned __int64 v35; // rsi
  __int64 v36; // r14
  __int64 v37; // rcx
  __int64 v38; // r15
  __int64 v39; // rax
  unsigned __int64 v40; // rdx
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 v43; // rdi
  __int64 v44; // rax
  __int64 v45; // rdx
  __int64 v46; // r8
  __int64 v47; // r9
  __int64 v48; // rsi
  char v49; // al
  int v50; // r8d
  int v51; // edx
  unsigned __int64 v52; // rdx
  __int64 v53; // rcx
  int PagingFileOffset; // eax
  unsigned __int8 v55[4]; // [rsp+30h] [rbp-D0h] BYREF
  int v56; // [rsp+34h] [rbp-CCh] BYREF
  __int64 *v57; // [rsp+38h] [rbp-C8h]
  int v58; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int64 *v59; // [rsp+48h] [rbp-B8h]
  _QWORD *v60; // [rsp+50h] [rbp-B0h] BYREF
  struct _LIST_ENTRY *v61; // [rsp+58h] [rbp-A8h] BYREF
  _QWORD v62[3]; // [rsp+60h] [rbp-A0h] BYREF
  ULONG_PTR BugCheckParameter2[4]; // [rsp+78h] [rbp-88h]
  __int128 v64; // [rsp+98h] [rbp-68h]
  unsigned __int64 valid; // [rsp+A8h] [rbp-58h]

  v60 = 0LL;
  v6 = a3;
  v59 = a3;
  v57 = a4;
  memset_0(v62, 0, 0x98uLL);
  memset_0((void *)a2, 0, 0x80uLL);
  v9 = -1LL;
  *v6 = -1LL;
  *a4 = 0LL;
  *a5 = 0LL;
  MiInitializePageFaultPacket(0LL, a1, 0, 0LL, 0LL, (__int64)v62);
  v12 = ((__int64)a1 >> 47) + 1;
  if ( v12 > 1
    || a1 >= 0xFFFFF68000000000uLL && a1 <= 0xFFFFF6FFFFFFFFFFuLL
    || a1 >= 0xFFFFDE0000000000uLL && a1 < 48 * qword_140E2DD20 - 0x21FFFFFFFFD0LL
    || a1 >= 0xFFFF800000000000uLL && (unsigned int)MiVaIsUltra(a1) )
  {
    return 3221225711LL;
  }
  if ( a1 < qword_140E2F3C0 || a1 > qword_140E2F3D0 )
  {
    SystemRegionType = MiGetSystemRegionType(a1);
    if ( SystemRegionType == 16 )
      return 3221225632LL;
    AnyMultiplexedVm = MiSystemVaTypeToVm(SystemRegionType);
    if ( !AnyMultiplexedVm )
      AnyMultiplexedVm = (struct _LIST_ENTRY **)MiGetAnyMultiplexedVm(6LL);
    *(_DWORD *)(a2 + 4) |= 4u;
    if ( !(unsigned int)MiSynchronizeSystemVa((__int64)AnyMultiplexedVm, a1, v15, 0LL, a2) )
      return 3221225632LL;
    v16 = *(_OWORD *)(a2 + 24);
    v17 = *(int *)(a2 + 16);
    valid = *(_QWORD *)(a2 + 40);
    v64 = v16;
    if ( (_DWORD)v17 )
    {
      v18 = 1LL;
      v19 = *(_DWORD *)(a2 + 16);
      v9 = (*(_QWORD *)BugCheckParameter2[v17] >> 12) & 0xFFFFFFFFFFLL;
      for ( i = v62[0] >> 12; v19; --v19 )
      {
        v21 = i;
        i >>= 9;
        v22 = v18 * (v21 & 0x1FF);
        v18 <<= 9;
        v9 += v22;
      }
      if ( v9 <= qword_140E2DD20 )
      {
        v23 = 48 * v9;
        if ( ((*(_QWORD *)(48 * v9 - 0x21FFFFFFFFD8LL) >> 54) & 1) != 0 )
        {
          v24 = 0;
          v25 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v23 - 0x21FFFFFFFFE8LL), 0x3FuLL) )
          {
            do
            {
              if ( (++v25 & HvlLongSpinCountMask) == 0
                && (HvlEnlightenments & 0x40) != 0
                && KiCheckVpBackingLongSpinWaitHypercall() )
              {
                HvlNotifyLongSpinWait(v25);
              }
              else
              {
                _mm_pause();
              }
            }
            while ( *(__int64 *)(v23 - 0x21FFFFFFFFE8LL) < 0 );
          }
          goto LABEL_19;
        }
      }
      v24 = -1073741503;
      goto LABEL_20;
    }
    v30 = BugCheckParameter2[0];
  }
  else
  {
    p_Blink = &KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink;
    *(_QWORD *)&v64 = p_Blink;
    v29 = MiLockWorkingSetShared((__int64)p_Blink, v10, v12, v11);
    v30 = BugCheckParameter2[0];
    BYTE12(v64) = v29;
    valid = MiLockLowestValidPageTableEx((__int64)p_Blink, BugCheckParameter2[0], (ULONG_PTR *)&v60, 0);
    if ( valid != ((a1 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL )
    {
      v24 = *v60 != 0LL ? -1073741608 : -1073741819;
      goto LABEL_19;
    }
  }
  v55[0] = 17;
  v24 = 0;
  do
  {
    v31 = MI_READ_PTE_LOCK_FREE(v30);
    if ( (v31 & 1) != 0 )
    {
      v9 = (v31 >> 12) & 0xFFFFFFFFFFLL;
      if ( v9 <= qword_140E2DD20 && (v32 = 48 * v9, ((*(_QWORD *)(48 * v9 - 0x21FFFFFFFFD8LL) >> 54) & 1) != 0) )
      {
        v33 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v32 - 0x21FFFFFFFFE8LL), 0x3FuLL) )
        {
          do
          {
            if ( (++v33 & HvlLongSpinCountMask) == 0
              && (HvlEnlightenments & 0x40) != 0
              && KiCheckVpBackingLongSpinWaitHypercall() )
            {
              HvlNotifyLongSpinWait(v33);
            }
            else
            {
              _mm_pause();
            }
          }
          while ( *(__int64 *)(v32 - 0x21FFFFFFFFE8LL) < 0 );
        }
      }
      else
      {
        v24 = -1073741503;
      }
      goto LABEL_19;
    }
    if ( (v31 & 0x400) != 0 )
    {
      if ( (v31 & 2) != 0 )
      {
        v37 = v31;
        if ( qword_140E2DCC0 && (v31 & 0x10) == 0 )
          v37 = v31 & ~qword_140E2DCC0;
        v52 = v31 & 0xFFFFFFFFFFFFFBFFuLL;
        if ( (v37 & 0xFFFFFFFFFFFF0000uLL) != 0 )
          v52 = v31;
        *a5 = v52 & 0xFFFFFFFFFFFFFFFDuLL;
LABEL_85:
        v24 = 273;
        goto LABEL_19;
      }
      v34 = v31;
      if ( qword_140E2DCC0 && (v31 & 0x10) == 0 )
        v34 = v31 & ~qword_140E2DCC0;
      v35 = v34 >> 16;
      if ( MiIsPrototypePteVadLookup(v31) )
      {
        v61 = 0LL;
        v58 = 0;
        v35 = MiCheckVirtualAddress(a1, &v58, &v61);
        if ( v61 )
          MiUnlockVadTree(1, 0x11u);
        if ( !v35 )
        {
LABEL_89:
          v24 = -1073741819;
          goto LABEL_19;
        }
      }
      v36 = MiLockProtoPoolPage(v35, v55);
      if ( !v36 )
        goto LABEL_59;
      v38 = MiLockLeafPage((unsigned __int64 *)v35, 0);
      v39 = MI_READ_PTE_LOCK_FREE(v35);
      if ( (v39 & 1) != 0 )
      {
        v43 = v38 + 0x220000000000LL;
LABEL_91:
        v9 = 0xAAAAAAAAAAAAAAABuLL * (v43 >> 4);
        *v57 = v36;
        goto LABEL_19;
      }
      if ( !v39 )
      {
        LOBYTE(v40) = v55[0];
        MiUnlockProtoPoolPage(v36, v40, v41, v42);
        goto LABEL_89;
      }
      if ( (v39 & 0x400) == 0 )
      {
        if ( (v39 & 0x800) == 0 )
        {
          PagingFileOffset = MiGetPagingFileOffset(v39);
          LOBYTE(v40) = v55[0];
          v53 = v36;
          if ( !PagingFileOffset )
          {
            MiUnlockProtoPoolPage(v36, v40, v41, v42);
            goto LABEL_85;
          }
          goto LABEL_98;
        }
        if ( (*(_BYTE *)(v38 + 34) & 0x20) != 0 )
        {
          MiObtainProtoReference(v36, 1);
          v50 = v36;
          v51 = v38;
          goto LABEL_79;
        }
        if ( (unsigned int)MiStandbyPageContentsIntact(v38, v40, v41, v42) )
        {
          v43 = v38 + 0x220000000000LL;
          goto LABEL_91;
        }
        _InterlockedAnd64((volatile signed __int64 *)(v38 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      }
      LOBYTE(v40) = v55[0];
      v53 = v36;
LABEL_98:
      MiUnlockProtoPoolPage(v53, v40, v41, v42);
      goto LABEL_59;
    }
    if ( (v31 & 0x3E0) == 0 || (((v31 & 0x3E0) - 512) & 0xFFFFFFFFFFFFFEFFuLL) == 0 )
      goto LABEL_89;
    if ( (v31 & 0x800) == 0 )
    {
      if ( !(unsigned int)MiGetPagingFileOffset(v31) )
        goto LABEL_85;
LABEL_59:
      v24 = -1073741608;
      goto LABEL_19;
    }
    v44 = MiLockTransitionLeafPageEx(v30, v55, 0);
    v48 = v44;
  }
  while ( !v44 );
  v49 = *(_BYTE *)(v44 + 34);
  if ( (v49 & 0x20) != 0 )
  {
    if ( (v49 & 8) != 0 )
      goto LABEL_59;
    v50 = 0;
    v51 = v48;
LABEL_79:
    LOBYTE(v47) = v55[0];
    v56 = 1;
    MiWaitForCollidedFaultComplete((unsigned int)v62, v51, v50, v47, (__int64)&v56);
    goto LABEL_59;
  }
  if ( !(unsigned int)MiStandbyPageContentsIntact(v48, v45, v46, v47) )
  {
    MiUnlockPage(v48, v55[0]);
    goto LABEL_59;
  }
  v9 = 0xAAAAAAAAAAAAAAABuLL * ((v48 + 0x220000000000LL) >> 4);
LABEL_19:
  v6 = v59;
LABEL_20:
  v26 = valid;
  *(_OWORD *)(a2 + 24) = v64;
  *(_QWORD *)(a2 + 40) = v26;
  if ( v24 < 0 )
    MiUnlockSystemVa(a2);
  else
    *v6 = v9;
  return (unsigned int)v24;
}
