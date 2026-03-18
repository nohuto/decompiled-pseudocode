/*
 * XREFs of MiMakePageAvoidRead @ 0x140222A90
 * Callers:
 *     MmCopyToCachedPage @ 0x140223414 (MmCopyToCachedPage.c)
 * Callees:
 *     MiMakeValidPte @ 0x14020EF10 (MiMakeValidPte.c)
 *     MiIdentifyPfn @ 0x140221170 (MiIdentifyPfn.c)
 *     MiAssignDefaultChannel @ 0x140222A5C (MiAssignDefaultChannel.c)
 *     MiMapFrame @ 0x140223140 (MiMapFrame.c)
 *     MiLockAndInsertPageInFreeList @ 0x140223D04 (MiLockAndInsertPageInFreeList.c)
 *     MiPfnZeroingNeeded @ 0x140224750 (MiPfnZeroingNeeded.c)
 *     MiGetPage @ 0x14022CE00 (MiGetPage.c)
 *     MiGetPfnPriority @ 0x140230FB0 (MiGetPfnPriority.c)
 *     MiUnlockProtoPoolPage @ 0x1402353A0 (MiUnlockProtoPoolPage.c)
 *     MiProtectionToCacheAttribute @ 0x14023B5F0 (MiProtectionToCacheAttribute.c)
 *     MiLockProtoPoolPage @ 0x140240A70 (MiLockProtoPoolPage.c)
 *     MiInitializePfn @ 0x14024CD40 (MiInitializePfn.c)
 *     MiZeroPhysicalPage @ 0x14024D560 (MiZeroPhysicalPage.c)
 *     MiFinalizePageAttribute @ 0x14024DDE0 (MiFinalizePageAttribute.c)
 *     EtwTraceKernelEvent @ 0x140254220 (EtwTraceKernelEvent.c)
 *     MiReleasePtes @ 0x1403289B0 (MiReleasePtes.c)
 *     MiReservePtes @ 0x14032A200 (MiReservePtes.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiReferenceControlAreaPfn @ 0x14033BC94 (MiReferenceControlAreaPfn.c)
 *     MiDecrementShareCountEx @ 0x1403427F0 (MiDecrementShareCountEx.c)
 *     MiReleaseFreshPage @ 0x1403432C0 (MiReleaseFreshPage.c)
 *     MiCheckLinearProtectedPteAccessedBit @ 0x14037CB60 (MiCheckLinearProtectedPteAccessedBit.c)
 *     MiWaitForFreePage @ 0x1403BFC64 (MiWaitForFreePage.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     MiMapCacheExceptionFilter @ 0x140A28CB8 (MiMapCacheExceptionFilter.c)
 */

__int64 __fastcall MiMakePageAvoidRead(
        ULONG_PTR a1,
        void *a2,
        unsigned int a3,
        size_t a4,
        char a5,
        __int64 *a6,
        _DWORD *a7)
{
  unsigned __int64 v7; // rbx
  __int64 v8; // r14
  __int64 v9; // r14
  __int64 v10; // r13
  struct _KPRCB *CurrentPrcb; // rdi
  unsigned int NodeColor; // r11d
  __int64 v13; // rbx
  int v14; // r11d
  volatile signed __int32 *v15; // r8
  __int64 Page; // rax
  __int64 v17; // rdi
  BOOL v18; // r12d
  __int64 v19; // rdx
  ULONG_PTR v20; // rax
  char *v21; // rcx
  unsigned int v22; // r8d
  char *v23; // rdx
  size_t v24; // rax
  unsigned __int64 *v25; // r12
  __int64 v26; // rdx
  __int64 v27; // rcx
  unsigned __int64 v28; // rax
  ULONG_PTR v29; // rbx
  _QWORD *v30; // r14
  int v31; // ebx
  __int64 v32; // rdx
  bool v33; // cf
  unsigned int v35; // r13d
  size_t v36; // r13
  char v37[4]; // [rsp+30h] [rbp-128h] BYREF
  unsigned int v38; // [rsp+34h] [rbp-124h]
  int v39; // [rsp+38h] [rbp-120h]
  void *v40; // [rsp+40h] [rbp-118h]
  int v41; // [rsp+48h] [rbp-110h]
  int v42; // [rsp+4Ch] [rbp-10Ch]
  size_t Size; // [rsp+50h] [rbp-108h]
  ULONG_PTR v44; // [rsp+58h] [rbp-100h]
  unsigned __int64 v45; // [rsp+60h] [rbp-F8h]
  _DWORD *v46; // [rsp+70h] [rbp-E8h]
  ULONG_PTR v47; // [rsp+78h] [rbp-E0h]
  ULONG_PTR BugCheckParameter2; // [rsp+80h] [rbp-D8h]
  __int64 v49; // [rsp+88h] [rbp-D0h]
  struct _KPRCB *v50; // [rsp+90h] [rbp-C8h]
  void *Src; // [rsp+98h] [rbp-C0h]
  __int64 v52; // [rsp+A0h] [rbp-B8h]
  __int64 v53; // [rsp+A8h] [rbp-B0h]
  __int64 v54; // [rsp+B0h] [rbp-A8h]
  ULONG_PTR v55; // [rsp+B8h] [rbp-A0h]
  __int128 v56; // [rsp+C0h] [rbp-98h]
  __int128 v57; // [rsp+D0h] [rbp-88h] BYREF
  __int128 v58; // [rsp+E0h] [rbp-78h]
  ULONG_PTR v59; // [rsp+F8h] [rbp-60h]
  ULONG_PTR v60; // [rsp+100h] [rbp-58h]
  _QWORD v61[2]; // [rsp+108h] [rbp-50h] BYREF

  Size = a4;
  v38 = a3;
  Src = a2;
  BugCheckParameter2 = a1;
  v55 = a1;
  v44 = (ULONG_PTR)a6;
  v46 = a7;
  v37[0] = 0;
  v56 = 0LL;
  v57 = 0LL;
  v58 = 0LL;
  *a7 = 0;
  v7 = *a6;
  v8 = *a6;
  if ( qword_140E2D940 )
  {
    if ( (v7 & 0x10) != 0 )
      v8 &= ~0x10uLL;
    else
      v8 = v7 & ~qword_140E2D940;
  }
  v9 = v8 >> 16;
  v54 = v9;
  v49 = *(_QWORD *)v9;
  v53 = v49;
  v10 = *((_QWORD *)qword_140E2FD48 + (*(_WORD *)(v49 + 60) & 0x3FF));
  if ( ((*(_DWORD *)(v49 + 56) >> 20) & 0x7F) != 0 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    NodeColor = ((*(_DWORD *)(v49 + 56) >> 20) & 0x7F) - 1;
  }
  else
  {
    CurrentPrcb = (struct _KPRCB *)KiProcessorBlock[KeGetCurrentThread()->IdealProcessor];
    NodeColor = CurrentPrcb->NodeColor;
  }
  v50 = CurrentPrcb;
  MiAssignDefaultChannel(NodeColor);
  *(_QWORD *)&v56 = &CurrentPrcb->PageColor;
  v13 = (v7 >> 5) & 0x1F;
  v41 = v13;
  LODWORD(v40) = MiProtectionToCacheAttribute((unsigned int)v13);
  DWORD2(v56) = v14 | (((unsigned __int8)v40 & 3) << 18);
  Page = MiGetPage(
           v10,
           DWORD2(v56) | (unsigned int)(unsigned __int8)(_InterlockedExchangeAdd(v15, 1u)
                                                       % (unsigned int)dword_140E2D980[HIWORD(DWORD2(v56)) & 3]),
           0LL);
  v45 = Page;
  if ( Page == -1 )
  {
    MiWaitForFreePage(v10, 0LL);
    return 1LL;
  }
  v17 = 48 * Page - 0x220000000000LL;
  v52 = v17;
  v18 = 0;
  v39 = 0;
  v19 = (unsigned int)v40;
  if ( Size != 4096 )
    v18 = MiPfnZeroingNeeded(v17, (unsigned int)v40) != 0;
  MiFinalizePageAttribute(v17, v19, 8LL);
  v20 = MiReservePtes(&qword_140E37328, 1LL);
  v47 = v20;
  if ( v20 )
  {
    v21 = (char *)MiMapFrame(v20);
    v22 = v38;
    v23 = &v21[v38];
    v40 = v23;
    if ( v18 )
    {
      if ( v38 )
      {
        memset_0(v21, 0, v38);
        v23 = (char *)v40;
        v22 = v38;
      }
      v24 = Size;
      v36 = 4096 - Size - v22;
      if ( !v36 )
        goto LABEL_12;
      memset_0(&v23[Size], 0, v36);
    }
    v24 = Size;
LABEL_12:
    v42 = 0;
    memmove(v40, Src, v24);
    MiReleasePtes(&qword_140E37328, v47, 1LL);
    goto LABEL_13;
  }
  if ( (a5 & 1) == 0 )
  {
    MiReleaseFreshPage(v17);
    return 2LL;
  }
  if ( v18 )
    MiZeroPhysicalPage(0LL, v45, 0LL, (unsigned int)v40);
  v39 = 1;
LABEL_13:
  v41 = BYTE4(PerfGlobalGroupMask) & 1;
  v25 = (unsigned __int64 *)BugCheckParameter2;
  v27 = MiLockProtoPoolPage(BugCheckParameter2, v37);
  v47 = v27;
  if ( !v27 )
  {
LABEL_30:
    MiLockAndInsertPageInFreeList(v17);
    return 1LL;
  }
  v28 = *v25;
  if ( (*v25 & 1) != 0 || (v28 & 0x800) != 0 && (v28 & 0x400) == 0 || (_DWORD)v13 != ((v28 >> 5) & 0x1F) )
  {
    LOBYTE(v26) = v37[0];
    MiUnlockProtoPoolPage(v27, v26);
    goto LABEL_30;
  }
  LODWORD(v40) = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v17 + 24), 0x3FuLL) )
  {
    do
    {
      v35 = (_DWORD)v40 + 1;
      LODWORD(v40) = v35;
      if ( (v35 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v27) )
      {
        HvlNotifyLongSpinWait(v35);
      }
      else
      {
        _mm_pause();
      }
    }
    while ( *(__int64 *)(v17 + 24) < 0 );
  }
  MiInitializePfn(v17, v25, (unsigned int)v13, 3LL);
  if ( (a5 & 2) != 0 && (unsigned int)MiGetPfnPriority(v17) > 2 )
  {
    v38 = *(_DWORD *)(v17 + 32);
    HIBYTE(v38) = HIBYTE(v38) & 0xF8 | 2;
    *(_DWORD *)(v17 + 32) = v38;
  }
  MiReferenceControlAreaPfn(v49, v9, 1LL);
  v29 = MiMakeValidPte(0LL, v45, (unsigned int)v13 | 0x80000000) & 0xFFFFFFFFFFFFFEFFuLL;
  v59 = v29;
  if ( _bittest64(&MiFlags, 0x24u) && (v29 & 0x20) == 0 && (unsigned __int64)v25 >= 0xFFFFF6C000000000uLL )
    MiCheckLinearProtectedPteAccessedBit((ULONG_PTR)v25, v29);
  *v25 = v29;
  v60 = v29;
  if ( !_bittest64(&MiFlags, 0x24u) || (v29 & 0x20) != 0 )
  {
    v30 = (_QWORD *)v44;
  }
  else
  {
    v30 = (_QWORD *)v44;
    if ( v44 >= 0xFFFFF6C000000000uLL )
      MiCheckLinearProtectedPteAccessedBit(v44, v29);
  }
  *v30 = v29;
  v31 = v41;
  if ( v41 )
    MiIdentifyPfn(v45, (__int64 *)&v57);
  MiDecrementShareCountEx(v17, 0LL);
  _InterlockedAnd64((volatile signed __int64 *)(v17 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  LOBYTE(v32) = v37[0];
  MiUnlockProtoPoolPage(v47, v32);
  *v46 = 0;
  if ( v31 )
  {
    *((_QWORD *)&v58 + 1) |= 4uLL;
    v61[0] = &v57;
    v61[1] = 32LL;
    EtwTraceKernelEvent((unsigned int)v61, 1, 536870913, 642, 290462468);
  }
  v33 = v39 != 0;
  v39 = -v39;
  return v33 ? 2 : 0;
}
