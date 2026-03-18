/*
 * XREFs of MiCopyFileOnlyGlobalSubsectionPage @ 0x14045316C
 * Callers:
 *     MiResolveMappedFileFault @ 0x1402276BC (MiResolveMappedFileFault.c)
 * Callees:
 *     MiTryLockLeafPage @ 0x14022A6FC (MiTryLockLeafPage.c)
 *     MiTryLockProtoPoolPageAtDpc @ 0x14022B5E4 (MiTryLockProtoPoolPageAtDpc.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x140234CD0 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiUnlockProtoPoolPage @ 0x1402353A0 (MiUnlockProtoPoolPage.c)
 *     KeSetEvent @ 0x140250100 (KeSetEvent.c)
 *     MiCopyPage @ 0x1402C6FA0 (MiCopyPage.c)
 *     PsGetIoPriorityThread @ 0x1403031B0 (PsGetIoPriorityThread.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14031F3B0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14031F890 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiStartingOffset @ 0x1403236B0 (MiStartingOffset.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiObtainProtoReference @ 0x14033DEAC (MiObtainProtoReference.c)
 *     MiAdvanceFaultList @ 0x14037A740 (MiAdvanceFaultList.c)
 *     MiInitializeTransitionPfn @ 0x140453E64 (MiInitializeTransitionPfn.c)
 *     MiHandleInPageError @ 0x1404541D4 (MiHandleInPageError.c)
 *     MiFlowThroughInsertNode @ 0x1404AA7FC (MiFlowThroughInsertNode.c)
 */

__int64 __fastcall MiCopyFileOnlyGlobalSubsectionPage(
        __int64 a1,
        _QWORD *a2,
        unsigned __int64 a3,
        __int64 a4,
        ULONG_PTR a5,
        __int64 a6,
        __int64 a7)
{
  ULONG_PTR v10; // r15
  int v11; // ebx
  unsigned __int64 v12; // r14
  __int64 v13; // r14
  __int64 v14; // rbx
  __int64 v15; // rcx
  int v16; // eax
  __int64 v17; // r8
  unsigned __int64 v18; // r9
  unsigned int v19; // edi
  ULONG_PTR v20; // rbx
  _QWORD *v21; // r13
  __int64 v22; // rax
  ULONG_PTR v23; // r13
  unsigned __int64 v24; // rax
  __int64 v25; // rdi
  __int64 v26; // r8
  unsigned __int64 v27; // r9
  int v29; // ebx
  __int64 v30; // rdx
  __int64 v31; // r8
  unsigned __int64 v32; // r9
  ULONG_PTR v33[2]; // [rsp+20h] [rbp-10h] BYREF
  int v34; // [rsp+70h] [rbp+40h]
  int v35; // [rsp+70h] [rbp+40h]
  int v36; // [rsp+70h] [rbp+40h]
  __int64 v38; // [rsp+80h] [rbp+50h] BYREF

  v38 = 0LL;
  v33[0] = 0LL;
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
        HvlNotifyLongSpinWait();
      }
      else
      {
        _mm_pause();
      }
    }
    while ( *(__int64 *)(v10 + 24) < 0 );
  }
  v12 = *(_QWORD *)a3;
  if ( (*(_QWORD *)a3 & 0x400LL) != 0 )
  {
    v13 = -1LL;
  }
  else
  {
    if ( qword_140E2D940 )
    {
      if ( (v12 & 0x10) != 0 )
        v12 &= ~0x10uLL;
      else
        v12 &= ~qword_140E2D940;
    }
    v13 = (v12 >> 12) & 0xFFFFFFFFFFLL;
  }
  MiInitializeTransitionPfn(a5, a3, v13);
  v34 = *(_DWORD *)(v10 + 32);
  BYTE2(v34) = BYTE2(v34) & 0xF8 | 2;
  *(_DWORD *)(v10 + 32) = v34;
  HIWORD(v34) = HIWORD(*(_DWORD *)(v10 + 32));
  LOWORD(v34) = 1;
  *(_DWORD *)(v10 + 32) = v34;
  v35 = *(_DWORD *)(v10 + 32);
  BYTE2(v35) |= 0x20u;
  *(_DWORD *)(v10 + 32) = v35;
  *(_QWORD *)v10 = (a1 + 32) & -(__int64)(a1 != 0);
  v36 = *(_DWORD *)(v10 + 32);
  HIBYTE(v36) ^= (HIBYTE(v36) ^ (*(_DWORD *)(a1 + 192) >> 11)) & 7;
  *(_DWORD *)(v10 + 32) = v36;
  _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v14 = *a2;
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(*a2 + 72LL));
  ++*(_QWORD *)(v14 + 32);
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v14 + 72));
  v15 = a2[1] + 8LL * (unsigned int)((__int64)(a3 - *(_QWORD *)(a7 + 72)) >> 3);
  if ( ((a3 ^ v15) & 0xFFFFFFFFF000LL) != 0 )
    v16 = MiTryLockProtoPoolPageAtDpc((unsigned __int64 *)v15, 0xFFFFFFFFF000LL, (__int64 *)v33, &v38);
  else
    v16 = MiTryLockLeafPage((unsigned __int64 *)v15, 0, &v38);
  v19 = v16;
  if ( v16 < 0 )
    goto LABEL_35;
  if ( (*(_DWORD *)(v38 + 32) & 0x40000000) != 0 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v38 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( v33[0] )
      MiUnlockProtoPoolPage(v33[0], 0x11u, v17, v18);
    v19 = -1073740023;
LABEL_35:
    v29 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v10 + 24), 0x3FuLL) )
    {
      do
      {
        if ( (++v29 & HvlLongSpinCountMask) == 0
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
      while ( *(__int64 *)(v10 + 24) < 0 );
    }
    MiHandleInPageError(v10);
    MiRemoveLockedPageChargeAndDecRef(v10, v30, v31, v32);
    _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    return v19;
  }
  v20 = 0xAAAAAAAAAAAAAAABuLL * ((v38 + 0x220000000000LL) >> 4);
  if ( (a4 & 1) != 0 )
  {
    v21 = (_QWORD *)(a4 & 0xFFFFFFFFFFFFFFFEuLL);
    if ( *(_BYTE *)v21 == 1 )
    {
      MiAdvanceFaultList(v21);
      *(_DWORD *)(a1 + 192) |= 0x20u;
    }
  }
  *(_QWORD *)(a1 + 168) = *(_QWORD *)a3;
  *(_QWORD *)(a1 + 232) = a3;
  if ( (int)PsGetIoPriorityThread((__int64)KeGetCurrentThread()) < 2 )
    *(_DWORD *)(a1 + 192) |= 0x200u;
  v22 = a7;
  *(_QWORD *)(a1 + 272) = 0LL;
  *(_QWORD *)(a1 + 304) = 0LL;
  *(_DWORD *)(a1 + 316) = 0;
  v23 = a5;
  *(_DWORD *)(a1 + 280) = 4325432;
  *(_DWORD *)(a1 + 312) = 4096;
  *(_QWORD *)(a1 + 320) = v23;
  v24 = MiStartingOffset((__int64)a2, a3, *(_DWORD *)(v22 + 64));
  *(_QWORD *)(a1 + 200) = 0LL;
  *(_QWORD *)(a1 + 208) = a2;
  v25 = a6;
  *(_QWORD *)(a1 + 248) = v10;
  *(_QWORD *)(a1 + 96) = v24;
  *(_QWORD *)(a1 + 240) = a3;
  *(_DWORD *)(a1 + 184) = 4096;
  MiObtainProtoReference(v25, 1);
  *(_QWORD *)(a1 + 160) = v25;
  MiCopyPage(v23, v20, 68);
  if ( v13 != -1 )
    MiFlowThroughInsertNode(a1, 48 * v13 - 0x220000000000LL);
  _InterlockedAnd64((volatile signed __int64 *)(v38 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( v33[0] )
    MiUnlockProtoPoolPage(v33[0], 0x11u, v26, v27);
  MiUnlockProtoPoolPage(v25, 0x11u, v26, v27);
  __incgsdword(0x2E98u);
  *(_DWORD *)(a1 + 80) = 0;
  *(_QWORD *)(a1 + 88) = 4096LL;
  KeSetEvent((PRKEVENT)(a1 + 32), 0, 0);
  return 0LL;
}
