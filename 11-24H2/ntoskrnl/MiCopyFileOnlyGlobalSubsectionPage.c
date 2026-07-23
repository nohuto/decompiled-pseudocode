/*
 * XREFs of MiCopyFileOnlyGlobalSubsectionPage @ 0x14047AADC
 * Callers:
 *     MiResolveMappedFileFault @ 0x140214824 (MiResolveMappedFileFault.c)
 * Callees:
 *     MiStartingOffset @ 0x14020C7B0 (MiStartingOffset.c)
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 *     PsGetIoPriorityThread @ 0x14022BEB0 (PsGetIoPriorityThread.c)
 *     MiCopyPage @ 0x140252870 (MiCopyPage.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x14029C130 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiUnlockProtoPoolPage @ 0x14029C7F0 (MiUnlockProtoPoolPage.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140338DA0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403394D0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiTryLockProtoPoolPageAtDpc @ 0x14033EECC (MiTryLockProtoPoolPageAtDpc.c)
 *     MiAdvanceFaultList @ 0x140342110 (MiAdvanceFaultList.c)
 *     MiObtainProtoReference @ 0x14034594C (MiObtainProtoReference.c)
 *     MiTryLockLeafPage @ 0x1403460BC (MiTryLockLeafPage.c)
 *     MiFlowThroughInsertNode @ 0x1403F01B0 (MiFlowThroughInsertNode.c)
 *     MiInitializeTransitionPfn @ 0x1403F2C1C (MiInitializeTransitionPfn.c)
 *     MiHandleInPageError @ 0x14047AF04 (MiHandleInPageError.c)
 */

__int64 __fastcall MiCopyFileOnlyGlobalSubsectionPage(
        __int64 a1,
        __int64 *a2,
        unsigned __int64 *a3,
        __int64 a4,
        ULONG_PTR a5,
        __int64 a6,
        __int64 a7)
{
  __int64 v10; // r15
  unsigned int v11; // ebx
  unsigned __int64 v12; // r14
  __int64 v13; // r14
  __int64 v14; // rbx
  unsigned __int64 v15; // rcx
  int v16; // eax
  unsigned __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  unsigned int v20; // edi
  ULONG_PTR v21; // rbx
  _QWORD *v22; // r13
  __int64 v23; // rax
  ULONG_PTR v24; // r13
  unsigned __int64 v25; // rax
  __int64 v26; // rdi
  unsigned __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // r9
  unsigned int v31; // ebx
  __int64 v32; // rdx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // [rsp+20h] [rbp-10h] BYREF
  int v36; // [rsp+70h] [rbp+40h]
  int v37; // [rsp+70h] [rbp+40h]
  int v38; // [rsp+70h] [rbp+40h]
  __int64 v40; // [rsp+80h] [rbp+50h] BYREF

  v40 = 0LL;
  v35 = 0LL;
  v10 = 48 * a5 - 0x220000000000LL;
  v11 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v10 + 24), 0x3FuLL) )
  {
    do
    {
      if ( (++v11 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && KiCheckVpBackingLongSpinWaitHypercall() )
      {
        HvlNotifyLongSpinWait(v11);
      }
      else
      {
        _mm_pause();
      }
    }
    while ( *(__int64 *)(v10 + 24) < 0 );
  }
  v12 = *a3;
  if ( (*a3 & 0x400) != 0 )
  {
    v13 = -1LL;
  }
  else
  {
    if ( qword_140E2DCC0 )
    {
      if ( (v12 & 0x10) != 0 )
        v12 &= ~0x10uLL;
      else
        v12 &= ~qword_140E2DCC0;
    }
    v13 = (v12 >> 12) & 0xFFFFFFFFFFLL;
  }
  MiInitializeTransitionPfn(a5, (__int64 *)a3, v13);
  v36 = *(_DWORD *)(v10 + 32);
  BYTE2(v36) = BYTE2(v36) & 0xF8 | 2;
  *(_DWORD *)(v10 + 32) = v36;
  HIWORD(v36) = HIWORD(*(_DWORD *)(v10 + 32));
  LOWORD(v36) = 1;
  *(_DWORD *)(v10 + 32) = v36;
  v37 = *(_DWORD *)(v10 + 32);
  BYTE2(v37) |= 0x20u;
  *(_DWORD *)(v10 + 32) = v37;
  *(_QWORD *)v10 = (a1 + 32) & -(__int64)(a1 != 0);
  v38 = *(_DWORD *)(v10 + 32);
  HIBYTE(v38) ^= (HIBYTE(v38) ^ (*(_DWORD *)(a1 + 192) >> 11)) & 7;
  *(_DWORD *)(v10 + 32) = v38;
  _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v14 = *a2;
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(*a2 + 72));
  ++*(_QWORD *)(v14 + 32);
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v14 + 72));
  v15 = a2[1] + 8LL * (unsigned int)(((__int64)a3 - *(_QWORD *)(a7 + 72)) >> 3);
  if ( (((unsigned __int64)a3 ^ v15) & 0xFFFFFFFFF000LL) != 0 )
    v16 = MiTryLockProtoPoolPageAtDpc(v15, 0xFFFFFFFFF000LL, &v35, (__int64)&v40);
  else
    v16 = MiTryLockLeafPage((unsigned __int64 *)v15, 0, &v40);
  v20 = v16;
  if ( v16 < 0 )
    goto LABEL_35;
  if ( (*(_DWORD *)(v40 + 32) & 0x40000000) != 0 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v40 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( v35 )
    {
      LOBYTE(v17) = 17;
      MiUnlockProtoPoolPage(v35, v17, v18, v19);
    }
    v20 = -1073740023;
LABEL_35:
    v31 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v10 + 24), 0x3FuLL) )
    {
      do
      {
        if ( (++v31 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && KiCheckVpBackingLongSpinWaitHypercall() )
        {
          HvlNotifyLongSpinWait(v31);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *(__int64 *)(v10 + 24) < 0 );
    }
    MiHandleInPageError(v10);
    MiRemoveLockedPageChargeAndDecRef(v10, v32, v33, v34);
    _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    return v20;
  }
  v21 = 0xAAAAAAAAAAAAAAABuLL * ((v40 + 0x220000000000LL) >> 4);
  if ( (a4 & 1) != 0 )
  {
    v22 = (_QWORD *)(a4 & 0xFFFFFFFFFFFFFFFEuLL);
    if ( *(_BYTE *)v22 == 1 )
    {
      MiAdvanceFaultList(v22);
      *(_DWORD *)(a1 + 192) |= 0x20u;
    }
  }
  *(_QWORD *)(a1 + 168) = *a3;
  *(_QWORD *)(a1 + 232) = a3;
  if ( (int)PsGetIoPriorityThread((__int64)KeGetCurrentThread()) < 2 )
    *(_DWORD *)(a1 + 192) |= 0x200u;
  v23 = a7;
  *(_QWORD *)(a1 + 272) = 0LL;
  *(_QWORD *)(a1 + 304) = 0LL;
  *(_DWORD *)(a1 + 316) = 0;
  v24 = a5;
  *(_DWORD *)(a1 + 280) = 4325432;
  *(_DWORD *)(a1 + 312) = 4096;
  *(_QWORD *)(a1 + 320) = v24;
  v25 = MiStartingOffset(a2, (unsigned __int64)a3, *(_DWORD *)(v23 + 64));
  *(_QWORD *)(a1 + 200) = 0LL;
  *(_QWORD *)(a1 + 208) = a2;
  v26 = a6;
  *(_QWORD *)(a1 + 248) = v10;
  *(_QWORD *)(a1 + 96) = v25;
  *(_QWORD *)(a1 + 240) = a3;
  *(_DWORD *)(a1 + 184) = 4096;
  MiObtainProtoReference(v26, 1);
  *(_QWORD *)(a1 + 160) = v26;
  MiCopyPage(v24, v21, 68);
  if ( v13 != -1 )
    MiFlowThroughInsertNode(a1, (_QWORD *)(48 * v13 - 0x220000000000LL));
  _InterlockedAnd64((volatile signed __int64 *)(v40 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( v35 )
  {
    LOBYTE(v27) = 17;
    MiUnlockProtoPoolPage(v35, v27, v28, v29);
  }
  LOBYTE(v27) = 17;
  MiUnlockProtoPoolPage(v26, v27, v28, v29);
  __incgsdword(0x2E98u);
  *(_DWORD *)(a1 + 80) = 0;
  *(_QWORD *)(a1 + 88) = 4096LL;
  KeSetEvent((PRKEVENT)(a1 + 32), 0, 0);
  return 0LL;
}
