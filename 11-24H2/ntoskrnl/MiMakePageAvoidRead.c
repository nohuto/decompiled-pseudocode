/*
 * XREFs of MiMakePageAvoidRead @ 0x140253334
 * Callers:
 *     MmCopyToCachedPage @ 0x14034F0D4 (MmCopyToCachedPage.c)
 * Callees:
 *     MiCheckLinearProtectedPteAccessedBit @ 0x140203550 (MiCheckLinearProtectedPteAccessedBit.c)
 *     MiMakeValidPte @ 0x140212550 (MiMakeValidPte.c)
 *     MiInitializePfn @ 0x14024B260 (MiInitializePfn.c)
 *     MiZeroPhysicalPage @ 0x14024B990 (MiZeroPhysicalPage.c)
 *     MiChangePageAttribute @ 0x14024C2DC (MiChangePageAttribute.c)
 *     MiDecrementShareCountEx @ 0x14024D2E0 (MiDecrementShareCountEx.c)
 *     MiReleaseFreshPage @ 0x14024ED10 (MiReleaseFreshPage.c)
 *     MiAssignDefaultChannel @ 0x140251B50 (MiAssignDefaultChannel.c)
 *     MiProtectionToCacheAttribute @ 0x140253A30 (MiProtectionToCacheAttribute.c)
 *     MiSetPfnTbFlushStamp @ 0x140253C90 (MiSetPfnTbFlushStamp.c)
 *     MiWaitForFreePage @ 0x140260F64 (MiWaitForFreePage.c)
 *     EtwTraceKernelEvent @ 0x140285790 (EtwTraceKernelEvent.c)
 *     MiUnlockProtoPoolPage @ 0x14029C7F0 (MiUnlockProtoPoolPage.c)
 *     MiReleasePtes @ 0x14029D9A0 (MiReleasePtes.c)
 *     MiReservePtes @ 0x14029FB10 (MiReservePtes.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiLockProtoPoolPage @ 0x140302230 (MiLockProtoPoolPage.c)
 *     MiIdentifyPfn @ 0x1403113F0 (MiIdentifyPfn.c)
 *     MiGetPfnPriority @ 0x140335630 (MiGetPfnPriority.c)
 *     MiGetPage @ 0x14033BF40 (MiGetPage.c)
 *     MiReferenceControlAreaPfn @ 0x140347F04 (MiReferenceControlAreaPfn.c)
 *     MiMapFrame @ 0x14034D110 (MiMapFrame.c)
 *     MiPfnZeroingNeeded @ 0x1403934B0 (MiPfnZeroingNeeded.c)
 *     MiLockAndInsertPageInFreeList @ 0x14045BA98 (MiLockAndInsertPageInFreeList.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     MiMapCacheExceptionFilter @ 0x140A23174 (MiMapCacheExceptionFilter.c)
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
  __int64 v15; // r9
  volatile signed __int32 *v16; // r8
  __int64 v17; // r11
  __int64 Page; // rax
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rdi
  BOOL v22; // r12d
  ULONG_PTR v23; // rax
  void *v24; // rcx
  size_t v25; // r8
  __int64 v26; // rax
  size_t v27; // rdx
  size_t v28; // rax
  _KPROCESS *v29; // r12
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  unsigned __int64 v34; // rax
  ULONG_PTR v35; // rbx
  __int64 v36; // r8
  __int64 v37; // r9
  _QWORD *v38; // r14
  int v39; // ebx
  __int64 v40; // rdx
  bool v41; // cf
  unsigned int v43; // r13d
  __int64 v44; // r13
  size_t v45; // r13
  _BYTE v46[4]; // [rsp+30h] [rbp-138h] BYREF
  int v47; // [rsp+34h] [rbp-134h]
  __int64 v48; // [rsp+38h] [rbp-130h]
  size_t v49; // [rsp+40h] [rbp-128h]
  int v50; // [rsp+48h] [rbp-120h]
  int v51; // [rsp+4Ch] [rbp-11Ch]
  size_t Size; // [rsp+50h] [rbp-118h]
  ULONG_PTR v53; // [rsp+58h] [rbp-110h]
  __int64 v54; // [rsp+60h] [rbp-108h]
  int v55; // [rsp+68h] [rbp-100h]
  _DWORD *v56; // [rsp+70h] [rbp-F8h]
  ULONG_PTR v57; // [rsp+78h] [rbp-F0h]
  ULONG_PTR BugCheckParameter2; // [rsp+80h] [rbp-E8h]
  __int64 v59; // [rsp+88h] [rbp-E0h]
  struct _KPRCB *v60; // [rsp+90h] [rbp-D8h]
  void *Src; // [rsp+98h] [rbp-D0h]
  __int64 v62; // [rsp+A0h] [rbp-C8h]
  __int64 v63; // [rsp+A8h] [rbp-C0h]
  __int64 v64; // [rsp+B0h] [rbp-B8h]
  ULONG_PTR v65; // [rsp+B8h] [rbp-B0h]
  _DWORD *v66; // [rsp+C0h] [rbp-A8h]
  __int128 v67; // [rsp+C8h] [rbp-A0h]
  __int128 v68; // [rsp+D8h] [rbp-90h] BYREF
  __int128 v69; // [rsp+E8h] [rbp-80h]
  ULONG_PTR v70; // [rsp+100h] [rbp-68h]
  ULONG_PTR v71; // [rsp+108h] [rbp-60h]
  __int128 *v72; // [rsp+110h] [rbp-58h] BYREF
  int v73; // [rsp+118h] [rbp-50h]
  int v74; // [rsp+11Ch] [rbp-4Ch]

  Size = a4;
  LODWORD(v49) = a3;
  Src = a2;
  BugCheckParameter2 = a1;
  v65 = a1;
  v53 = (ULONG_PTR)a6;
  v56 = a7;
  v46[0] = 0;
  v67 = 0LL;
  v68 = 0LL;
  v69 = 0LL;
  *a7 = 0;
  v7 = *a6;
  v8 = *a6;
  if ( qword_140E2DCC0 )
  {
    if ( (v7 & 0x10) != 0 )
      v8 &= ~0x10uLL;
    else
      v8 = v7 & ~qword_140E2DCC0;
  }
  v9 = v8 >> 16;
  v64 = v9;
  v59 = *(_QWORD *)v9;
  v63 = v59;
  v10 = *((_QWORD *)qword_140E300C8 + (*(_WORD *)(v59 + 60) & 0x3FF));
  if ( ((*(_DWORD *)(v59 + 56) >> 20) & 0x7F) != 0 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    NodeColor = ((*(_DWORD *)(v59 + 56) >> 20) & 0x7F) - 1;
  }
  else
  {
    CurrentPrcb = (struct _KPRCB *)KiProcessorBlock[KeGetCurrentThread()->IdealProcessor];
    NodeColor = CurrentPrcb->NodeColor;
  }
  v60 = CurrentPrcb;
  MiAssignDefaultChannel(NodeColor);
  *(_QWORD *)&v67 = v13 + 34640;
  v14 = (v7 >> 5) & 0x1F;
  v50 = v14;
  LODWORD(v48) = MiProtectionToCacheAttribute((unsigned int)v14);
  DWORD2(v67) = v15 | ((v48 & 3) << 18);
  Page = MiGetPage(
           v10,
           DWORD2(v67) | (unsigned int)(unsigned __int8)((unsigned int)_InterlockedExchangeAdd(v16, 1u)
                                                       % *(_DWORD *)(v17 + 4LL * (HIWORD(DWORD2(v67)) & 3) + 14867712)),
           0LL,
           v15);
  v54 = Page;
  if ( Page == -1 )
  {
    MiWaitForFreePage(v10, 0LL, v19, v20);
    return 1LL;
  }
  v21 = 48 * Page - 0x220000000000LL;
  v62 = v21;
  v22 = 0;
  v47 = 0;
  v55 = 0;
  if ( Size != 4096 )
    v22 = MiPfnZeroingNeeded(v21, (unsigned int)v48) != 0;
  v66 = (_DWORD *)(v21 + 32);
  if ( (unsigned __int8)BYTE2(*(_DWORD *)(v21 + 32)) >> 6 != (_DWORD)v48 )
    MiChangePageAttribute(v21, v48);
  MiSetPfnTbFlushStamp(v21, 0LL, 0LL);
  v23 = MiReservePtes(&qword_140E376A8, 1LL);
  v57 = v23;
  if ( v23 )
  {
    v24 = (void *)MiMapFrame(v23);
    v25 = (unsigned int)v49;
    v26 = (unsigned int)v49;
    v48 = (unsigned int)v49;
    v27 = (size_t)v24 + (unsigned int)v49;
    v49 = v27;
    if ( v22 )
    {
      if ( (_DWORD)v25 )
      {
        memset_0(v24, 0, v25);
        v26 = v48;
        v27 = v49;
      }
      v44 = 4096 - v26;
      v28 = Size;
      v45 = v44 - Size;
      if ( !v45 )
        goto LABEL_14;
      memset_0((void *)(Size + v27), 0, v45);
    }
    v28 = Size;
LABEL_14:
    v51 = 0;
    memmove((void *)v49, Src, v28);
    MiReleasePtes(&qword_140E376A8, v57, 1LL);
    goto LABEL_15;
  }
  if ( (a5 & 1) == 0 )
  {
    MiReleaseFreshPage(v21);
    return 2LL;
  }
  if ( v22 )
    MiZeroPhysicalPage(0LL, v54, 0, v48);
  v47 = 1;
LABEL_15:
  v50 = BYTE4(PerfGlobalGroupMask) & 1;
  v29 = (_KPROCESS *)BugCheckParameter2;
  v31 = MiLockProtoPoolPage(BugCheckParameter2, v46);
  v57 = v31;
  if ( !v31 )
  {
LABEL_30:
    MiLockAndInsertPageInFreeList(v21);
    return 1LL;
  }
  v34 = *(_QWORD *)&v29->Header.Lock;
  if ( (*(_QWORD *)&v29->Header.Lock & 1) != 0
    || (v34 & 0x800) != 0 && (v34 & 0x400) == 0
    || (_DWORD)v14 != ((v34 >> 5) & 0x1F) )
  {
    LOBYTE(v30) = v46[0];
    MiUnlockProtoPoolPage(v31, v30);
    goto LABEL_30;
  }
  LODWORD(v48) = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v21 + 24), 0x3FuLL) )
  {
    do
    {
      v43 = v48 + 1;
      LODWORD(v48) = v43;
      if ( (v43 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v31, v30, v32, v33) )
      {
        HvlNotifyLongSpinWait(v43);
      }
      else
      {
        _mm_pause();
      }
    }
    while ( *(__int64 *)(v21 + 24) < 0 );
  }
  MiInitializePfn(v21, v29, (unsigned int)v14, 3);
  if ( (a5 & 2) != 0 && (unsigned int)MiGetPfnPriority(v21) > 2 )
  {
    LODWORD(v49) = *v66;
    BYTE3(v49) = BYTE3(v49) & 0xF8 | 2;
    *(_DWORD *)(v21 + 32) = v49;
  }
  MiReferenceControlAreaPfn(v59, v9, 1LL);
  v35 = MiMakeValidPte(0LL, v54, (unsigned int)v14 | 0x80000000) & 0xFFFFFFFFFFFFFEFFuLL;
  v70 = v35;
  if ( _bittest64(&MiFlags, 0x24u) && (v35 & 0x20) == 0 && (unsigned __int64)v29 >= 0xFFFFF6C000000000uLL )
    MiCheckLinearProtectedPteAccessedBit((ULONG_PTR)v29, v35, 128LL);
  *(_QWORD *)&v29->Header.Lock = v35;
  v71 = v35;
  if ( !_bittest64(&MiFlags, 0x24u) || (v35 & 0x20) != 0 )
  {
    v38 = (_QWORD *)v53;
  }
  else
  {
    v38 = (_QWORD *)v53;
    if ( v53 >= 0xFFFFF6C000000000uLL )
      MiCheckLinearProtectedPteAccessedBit(v53, v35, 128LL);
  }
  *v38 = v35;
  v39 = v50;
  if ( v50 )
    MiIdentifyPfn(v54, &v68);
  MiDecrementShareCountEx(v21, 0LL, v36, v37);
  _InterlockedAnd64((volatile signed __int64 *)(v21 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  LOBYTE(v40) = v46[0];
  MiUnlockProtoPoolPage(v57, v40);
  *v56 = 0;
  if ( v39 )
  {
    *((_QWORD *)&v69 + 1) |= 4uLL;
    v72 = &v68;
    v73 = 32;
    v74 = 0;
    EtwTraceKernelEvent((unsigned int)&v72, 1, 536870913, 642, 290462468);
  }
  v41 = v47 != 0;
  v47 = -v47;
  return v41 ? 2 : 0;
}
