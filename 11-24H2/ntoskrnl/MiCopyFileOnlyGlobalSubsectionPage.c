/*
 * XREFs of MiCopyFileOnlyGlobalSubsectionPage @ 0x14047FE9C
 * Callers:
 *     MiResolveMappedFileFault @ 0x140239490 (MiResolveMappedFileFault.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14020FA40 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140210170 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiCopyPage @ 0x1402254C0 (MiCopyPage.c)
 *     MiObtainProtoReference @ 0x14023BBE8 (MiObtainProtoReference.c)
 *     MiStartingOffset @ 0x140244020 (MiStartingOffset.c)
 *     KeSetEvent @ 0x1402725A0 (KeSetEvent.c)
 *     PsGetIoPriorityThread @ 0x140276920 (PsGetIoPriorityThread.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x14028C530 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiUnlockProtoPoolPage @ 0x14028CBF0 (MiUnlockProtoPoolPage.c)
 *     HvlNotifyLongSpinWait @ 0x140293260 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140293290 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiAdvanceFaultList @ 0x1402E5FE0 (MiAdvanceFaultList.c)
 *     MiTryLockProtoPoolPageAtDpc @ 0x1402F6DBC (MiTryLockProtoPoolPageAtDpc.c)
 *     MiTryLockLeafPage @ 0x14030245C (MiTryLockLeafPage.c)
 *     MiInitializeTransitionPfn @ 0x14031359C (MiInitializeTransitionPfn.c)
 *     MiHandleInPageError @ 0x1404802C4 (MiHandleInPageError.c)
 *     MiFlowThroughInsertNode @ 0x1404ABC8C (MiFlowThroughInsertNode.c)
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
  ULONG_PTR v10; // r15
  unsigned int v11; // ebx
  unsigned __int64 v12; // r14
  __int64 v13; // r14
  __int64 v14; // rbx
  unsigned __int64 v15; // rcx
  int v16; // eax
  unsigned __int64 v17; // rdx
  __int64 v18; // r8
  unsigned int v19; // edi
  ULONG_PTR v20; // rbx
  _QWORD *v21; // r13
  __int64 v22; // rax
  ULONG_PTR v23; // r13
  unsigned __int64 v24; // rax
  __int64 v25; // rdi
  unsigned __int64 v26; // rdx
  __int64 v27; // r8
  unsigned int v29; // ebx
  __int64 v30; // rdx
  __int64 v31; // r8
  ULONG_PTR v32[2]; // [rsp+20h] [rbp-10h] BYREF
  int v33; // [rsp+70h] [rbp+40h]
  int v34; // [rsp+70h] [rbp+40h]
  int v35; // [rsp+70h] [rbp+40h]
  ULONG_PTR v37; // [rsp+80h] [rbp+50h] BYREF

  v37 = 0LL;
  v32[0] = 0LL;
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
    if ( qword_140E2DB80 )
    {
      if ( (v12 & 0x10) != 0 )
        v12 &= ~0x10uLL;
      else
        v12 &= ~qword_140E2DB80;
    }
    v13 = (v12 >> 12) & 0xFFFFFFFFFFLL;
  }
  MiInitializeTransitionPfn(a5, (__int64 *)a3, v13);
  v33 = *(_DWORD *)(v10 + 32);
  BYTE2(v33) = BYTE2(v33) & 0xF8 | 2;
  *(_DWORD *)(v10 + 32) = v33;
  HIWORD(v33) = HIWORD(*(_DWORD *)(v10 + 32));
  LOWORD(v33) = 1;
  *(_DWORD *)(v10 + 32) = v33;
  v34 = *(_DWORD *)(v10 + 32);
  BYTE2(v34) |= 0x20u;
  *(_DWORD *)(v10 + 32) = v34;
  *(_QWORD *)v10 = (a1 + 32) & -(__int64)(a1 != 0);
  v35 = *(_DWORD *)(v10 + 32);
  HIBYTE(v35) ^= (HIBYTE(v35) ^ (*(_DWORD *)(a1 + 192) >> 11)) & 7;
  *(_DWORD *)(v10 + 32) = v35;
  _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v14 = *a2;
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(*a2 + 72));
  ++*(_QWORD *)(v14 + 32);
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v14 + 72));
  v15 = a2[1] + 8LL * (unsigned int)(((__int64)a3 - *(_QWORD *)(a7 + 72)) >> 3);
  if ( (((unsigned __int64)a3 ^ v15) & 0xFFFFFFFFF000LL) != 0 )
    v16 = MiTryLockProtoPoolPageAtDpc(v15, 0xFFFFFFFFF000LL, (__int64 *)v32, (__int64)&v37);
  else
    v16 = MiTryLockLeafPage((unsigned __int64 *)v15, 0, &v37);
  v19 = v16;
  if ( v16 < 0 )
    goto LABEL_35;
  if ( (*(_DWORD *)(v37 + 32) & 0x40000000) != 0 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v37 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( v32[0] )
    {
      LOBYTE(v17) = 17;
      MiUnlockProtoPoolPage(v32[0], v17, v18);
    }
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
          HvlNotifyLongSpinWait(v29);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *(__int64 *)(v10 + 24) < 0 );
    }
    MiHandleInPageError(v10);
    MiRemoveLockedPageChargeAndDecRef(v10, v30, v31);
    _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    return v19;
  }
  v20 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(v37 + 0x220000000000LL) >> 4);
  if ( (a4 & 1) != 0 )
  {
    v21 = (_QWORD *)(a4 & 0xFFFFFFFFFFFFFFFEuLL);
    if ( *(_BYTE *)v21 == 1 )
    {
      MiAdvanceFaultList(v21);
      *(_DWORD *)(a1 + 192) |= 0x20u;
    }
  }
  *(_QWORD *)(a1 + 168) = *a3;
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
  v24 = MiStartingOffset(a2, (unsigned __int64)a3, *(_DWORD *)(v22 + 64));
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
  _InterlockedAnd64((volatile signed __int64 *)(v37 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( v32[0] )
  {
    LOBYTE(v26) = 17;
    MiUnlockProtoPoolPage(v32[0], v26, v27);
  }
  LOBYTE(v26) = 17;
  MiUnlockProtoPoolPage(v25, v26, v27);
  __incgsdword(0x2E98u);
  *(_DWORD *)(a1 + 80) = 0;
  *(_QWORD *)(a1 + 88) = 4096LL;
  KeSetEvent((PRKEVENT)(a1 + 32), 0, 0);
  return 0LL;
}
