/*
 * XREFs of MiMakePageAvoidRead @ 0x1402EF168
 * Callers:
 *     MmCopyToCachedPage @ 0x1402EDA94 (MmCopyToCachedPage.c)
 * Callees:
 *     MiGetPfnPriority @ 0x1402141E0 (MiGetPfnPriority.c)
 *     MiInitializePfn @ 0x14021E510 (MiInitializePfn.c)
 *     MiZeroPhysicalPage @ 0x14021EC40 (MiZeroPhysicalPage.c)
 *     MiChangePageAttribute @ 0x14021F58C (MiChangePageAttribute.c)
 *     MiDecrementShareCountEx @ 0x140220590 (MiDecrementShareCountEx.c)
 *     MiReleaseFreshPage @ 0x140221FC0 (MiReleaseFreshPage.c)
 *     MiLockProtoPoolPage @ 0x14022E920 (MiLockProtoPoolPage.c)
 *     MiCheckLinearProtectedPteAccessedBit @ 0x140232A20 (MiCheckLinearProtectedPteAccessedBit.c)
 *     MiMakeValidPte @ 0x1402383C0 (MiMakeValidPte.c)
 *     EtwTraceKernelEvent @ 0x140255180 (EtwTraceKernelEvent.c)
 *     MiPfnZeroingNeeded @ 0x140268E10 (MiPfnZeroingNeeded.c)
 *     MiUnlockProtoPoolPage @ 0x14028CBF0 (MiUnlockProtoPoolPage.c)
 *     MiReleasePtes @ 0x14028DDA0 (MiReleasePtes.c)
 *     MiReservePtes @ 0x14028FF10 (MiReservePtes.c)
 *     HvlNotifyLongSpinWait @ 0x140293260 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140293290 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiWaitForFreePage @ 0x1402CF708 (MiWaitForFreePage.c)
 *     MiReferenceControlAreaPfn @ 0x1402E68C4 (MiReferenceControlAreaPfn.c)
 *     MiMapFrame @ 0x1402EBAD0 (MiMapFrame.c)
 *     MiProtectionToCacheAttribute @ 0x1402EF870 (MiProtectionToCacheAttribute.c)
 *     MiAssignDefaultChannel @ 0x1402F3560 (MiAssignDefaultChannel.c)
 *     MiGetPage @ 0x1402F41B0 (MiGetPage.c)
 *     MiSetPfnTbFlushStamp @ 0x1402FBDB0 (MiSetPfnTbFlushStamp.c)
 *     MiIdentifyPfn @ 0x140307510 (MiIdentifyPfn.c)
 *     MiLockAndInsertPageInFreeList @ 0x1404653B4 (MiLockAndInsertPageInFreeList.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memmove @ 0x1406BFC40 (memmove.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     MiMapCacheExceptionFilter @ 0x140A2E734 (MiMapCacheExceptionFilter.c)
 */

__int64 __fastcall MiMakePageAvoidRead(ULONG_PTR a1, void *a2, int a3, size_t a4, char a5, __int64 *a6, _DWORD *a7)
{
  unsigned __int64 v7; // rbx
  __int64 v8; // r14
  __int64 v9; // r14
  __int64 v10; // rdi
  struct _KPRCB *CurrentPrcb; // r10
  unsigned int NodeColor; // r9d
  __int64 v13; // r10
  __int64 v14; // rbx
  int v15; // r9d
  volatile signed __int32 *v16; // r8
  __int64 v17; // r11
  __int64 Page; // rax
  __int64 v19; // rdi
  BOOL v20; // r12d
  _QWORD *v21; // rax
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  void *v25; // rcx
  size_t v26; // r8
  __int64 v27; // rax
  size_t v28; // rdx
  size_t v29; // rax
  __int64 *v30; // r12
  unsigned __int64 v31; // rdx
  _QWORD *v32; // rcx
  __int64 v33; // r8
  unsigned __int64 v34; // rax
  ULONG_PTR v35; // rbx
  _QWORD *v36; // r14
  int v37; // ebx
  unsigned __int64 v38; // rdx
  __int64 v39; // r8
  bool v40; // cf
  unsigned int v42; // r13d
  __int64 v43; // r13
  size_t v44; // r13
  unsigned __int8 v45[4]; // [rsp+30h] [rbp-138h] BYREF
  int v46; // [rsp+34h] [rbp-134h]
  __int64 v47; // [rsp+38h] [rbp-130h]
  size_t v48; // [rsp+40h] [rbp-128h]
  int v49; // [rsp+48h] [rbp-120h]
  int v50; // [rsp+4Ch] [rbp-11Ch]
  size_t Size; // [rsp+50h] [rbp-118h]
  ULONG_PTR v52; // [rsp+58h] [rbp-110h]
  unsigned __int64 v53; // [rsp+60h] [rbp-108h]
  int v54; // [rsp+68h] [rbp-100h]
  _DWORD *v55; // [rsp+70h] [rbp-F8h]
  _QWORD *v56; // [rsp+78h] [rbp-F0h]
  ULONG_PTR BugCheckParameter2; // [rsp+80h] [rbp-E8h]
  __int64 v58; // [rsp+88h] [rbp-E0h]
  struct _KPRCB *v59; // [rsp+90h] [rbp-D8h]
  void *Src; // [rsp+98h] [rbp-D0h]
  __int64 v61; // [rsp+A0h] [rbp-C8h]
  __int64 v62; // [rsp+A8h] [rbp-C0h]
  __int64 v63; // [rsp+B0h] [rbp-B8h]
  ULONG_PTR v64; // [rsp+B8h] [rbp-B0h]
  _DWORD *v65; // [rsp+C0h] [rbp-A8h]
  __int128 v66; // [rsp+C8h] [rbp-A0h]
  __int128 v67; // [rsp+D8h] [rbp-90h] BYREF
  __int128 v68; // [rsp+E8h] [rbp-80h]
  ULONG_PTR v69; // [rsp+100h] [rbp-68h]
  ULONG_PTR v70; // [rsp+108h] [rbp-60h]
  __int128 *v71; // [rsp+110h] [rbp-58h] BYREF
  int v72; // [rsp+118h] [rbp-50h]
  int v73; // [rsp+11Ch] [rbp-4Ch]

  Size = a4;
  LODWORD(v48) = a3;
  Src = a2;
  BugCheckParameter2 = a1;
  v64 = a1;
  v52 = (ULONG_PTR)a6;
  v55 = a7;
  v45[0] = 0;
  v66 = 0LL;
  v67 = 0LL;
  v68 = 0LL;
  *a7 = 0;
  v7 = *a6;
  v8 = *a6;
  if ( qword_140E2DB80 )
  {
    if ( (v7 & 0x10) != 0 )
      v8 &= ~0x10uLL;
    else
      v8 = v7 & ~qword_140E2DB80;
  }
  v9 = v8 >> 16;
  v63 = v9;
  v58 = *(_QWORD *)v9;
  v62 = v58;
  v10 = *((_QWORD *)qword_140E2FF88 + (*(_WORD *)(v58 + 60) & 0x3FF));
  if ( ((*(_DWORD *)(v58 + 56) >> 20) & 0x7F) != 0 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    NodeColor = ((*(_DWORD *)(v58 + 56) >> 20) & 0x7F) - 1;
  }
  else
  {
    CurrentPrcb = (struct _KPRCB *)KiProcessorBlock[KeGetCurrentThread()->IdealProcessor];
    NodeColor = CurrentPrcb->NodeColor;
  }
  v59 = CurrentPrcb;
  MiAssignDefaultChannel(NodeColor);
  *(_QWORD *)&v66 = v13 + 34640;
  v14 = (v7 >> 5) & 0x1F;
  v49 = v14;
  LODWORD(v47) = MiProtectionToCacheAttribute((unsigned int)v14);
  DWORD2(v66) = v15 | ((v47 & 3) << 18);
  Page = MiGetPage(
           v10,
           DWORD2(v66) | (unsigned int)(unsigned __int8)((unsigned int)_InterlockedExchangeAdd(v16, 1u)
                                                       % *(_DWORD *)(v17 + 4LL * (HIWORD(DWORD2(v66)) & 3) + 14867392)),
           0LL);
  v53 = Page;
  if ( Page == -1 )
  {
    MiWaitForFreePage(v10, 0);
    return 1LL;
  }
  v19 = 48 * Page - 0x220000000000LL;
  v61 = v19;
  v20 = 0;
  v46 = 0;
  v54 = 0;
  if ( Size != 4096 )
    v20 = MiPfnZeroingNeeded(v19, v47);
  v65 = (_DWORD *)(v19 + 32);
  if ( (unsigned __int8)BYTE2(*(_DWORD *)(v19 + 32)) >> 6 != (_DWORD)v47 )
    MiChangePageAttribute(v19, v47);
  MiSetPfnTbFlushStamp(v19, 0LL, 0LL);
  v21 = (_QWORD *)MiReservePtes((__int64)&qword_140E37568, 1u);
  v56 = v21;
  if ( v21 )
  {
    v25 = (void *)MiMapFrame((ULONG_PTR)v21, v53, v23, v24);
    v26 = (unsigned int)v48;
    v27 = (unsigned int)v48;
    v47 = (unsigned int)v48;
    v28 = (size_t)v25 + (unsigned int)v48;
    v48 = v28;
    if ( v20 )
    {
      if ( (_DWORD)v26 )
      {
        memset_0(v25, 0, v26);
        v27 = v47;
        v28 = v48;
      }
      v43 = 4096 - v27;
      v29 = Size;
      v44 = v43 - Size;
      if ( !v44 )
        goto LABEL_14;
      memset_0((void *)(Size + v28), 0, v44);
    }
    v29 = Size;
LABEL_14:
    v50 = 0;
    memmove((void *)v48, Src, v29);
    MiReleasePtes((__int64)&qword_140E37568, v56, 1u);
    goto LABEL_15;
  }
  if ( (a5 & 1) == 0 )
  {
    MiReleaseFreshPage(v19, v22, v23);
    return 2LL;
  }
  if ( v20 )
    MiZeroPhysicalPage(0LL, v53, 0, (unsigned int)v47);
  v46 = 1;
LABEL_15:
  v49 = BYTE4(PerfGlobalGroupMask) & 1;
  v30 = (__int64 *)BugCheckParameter2;
  v32 = (_QWORD *)MiLockProtoPoolPage(BugCheckParameter2, v45);
  v56 = v32;
  if ( !v32 )
  {
LABEL_30:
    MiLockAndInsertPageInFreeList(v19);
    return 1LL;
  }
  v34 = *v30;
  if ( (*v30 & 1) != 0 || (v34 & 0x800) != 0 && (v34 & 0x400) == 0 || (_DWORD)v14 != ((v34 >> 5) & 0x1F) )
  {
    LOBYTE(v31) = v45[0];
    MiUnlockProtoPoolPage((ULONG_PTR)v32, v31, v33);
    goto LABEL_30;
  }
  LODWORD(v47) = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v19 + 24), 0x3FuLL) )
  {
    do
    {
      v42 = v47 + 1;
      LODWORD(v47) = v42;
      if ( (v42 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && KiCheckVpBackingLongSpinWaitHypercall() )
      {
        HvlNotifyLongSpinWait(v42);
      }
      else
      {
        _mm_pause();
      }
    }
    while ( *(__int64 *)(v19 + 24) < 0 );
  }
  MiInitializePfn(v19, v30, v14, 3);
  if ( (a5 & 2) != 0 && (unsigned int)MiGetPfnPriority(v19) > 2 )
  {
    LODWORD(v48) = *v65;
    BYTE3(v48) = BYTE3(v48) & 0xF8 | 2;
    *(_DWORD *)(v19 + 32) = v48;
  }
  MiReferenceControlAreaPfn(v58, v9, 1u);
  v35 = MiMakeValidPte(0LL, v53, (unsigned int)v14 | 0x80000000) & 0xFFFFFFFFFFFFFEFFuLL;
  v69 = v35;
  if ( _bittest64(&MiFlags, 0x24u) && (v35 & 0x20) == 0 && (unsigned __int64)v30 >= 0xFFFFF6C000000000uLL )
    MiCheckLinearProtectedPteAccessedBit((ULONG_PTR)v30, v35, 128);
  *v30 = v35;
  v70 = v35;
  if ( !_bittest64(&MiFlags, 0x24u) || (v35 & 0x20) != 0 )
  {
    v36 = (_QWORD *)v52;
  }
  else
  {
    v36 = (_QWORD *)v52;
    if ( v52 >= 0xFFFFF6C000000000uLL )
      MiCheckLinearProtectedPteAccessedBit(v52, v35, 128);
  }
  *v36 = v35;
  v37 = v49;
  if ( v49 )
    MiIdentifyPfn(v53, &v67);
  MiDecrementShareCountEx(v19, 0LL);
  _InterlockedAnd64((volatile signed __int64 *)(v19 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  LOBYTE(v38) = v45[0];
  MiUnlockProtoPoolPage((ULONG_PTR)v56, v38, v39);
  *v55 = 0;
  if ( v37 )
  {
    *((_QWORD *)&v68 + 1) |= 4uLL;
    v71 = &v67;
    v72 = 32;
    v73 = 0;
    EtwTraceKernelEvent((int)&v71, 1, 0x20000001u, 642, 290462468);
  }
  v40 = v46 != 0;
  v46 = -v46;
  return v40 ? 2 : 0;
}
