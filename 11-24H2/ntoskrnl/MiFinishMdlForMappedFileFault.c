/*
 * XREFs of MiFinishMdlForMappedFileFault @ 0x14023A108
 * Callers:
 *     MiResolveMappedFileFault @ 0x140239490 (MiResolveMappedFileFault.c)
 * Callees:
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x140210120 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140210C80 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     MiObtainProtoReference @ 0x14023BBE8 (MiObtainProtoReference.c)
 *     MiStartingOffset @ 0x140244020 (MiStartingOffset.c)
 *     PsGetIoPriorityThread @ 0x140276920 (PsGetIoPriorityThread.c)
 *     MiUnlockProtoPoolPage @ 0x14028CBF0 (MiUnlockProtoPoolPage.c)
 *     HvlNotifyLongSpinWait @ 0x140293260 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140293290 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiReferenceControlAreaPfn @ 0x1402E68C4 (MiReferenceControlAreaPfn.c)
 *     MiEndingOffset @ 0x140314E58 (MiEndingOffset.c)
 *     MiFlowThroughInsertNode @ 0x1404ABC8C (MiFlowThroughInsertNode.c)
 */

__int16 __fastcall MiFinishMdlForMappedFileFault(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5)
{
  _QWORD *v5; // r15
  __int64 v7; // rsi
  __int64 v10; // rbp
  __int64 v11; // rcx
  unsigned int v12; // ebx
  unsigned __int64 v13; // r12
  _QWORD *v14; // r13
  __int64 v15; // r14
  unsigned __int64 v16; // r15
  int v17; // r9d
  char v18; // bl
  __int64 v19; // rdx
  int v20; // r9d
  __int64 v21; // rdx
  __int16 result; // ax
  __int16 v23; // cx
  __int64 v24; // [rsp+60h] [rbp+8h]

  v5 = *(_QWORD **)(a1 + 208);
  v7 = *(unsigned int *)(a1 + 184);
  v24 = *v5;
  MiReferenceControlAreaPfn(*v5, v5);
  v10 = *(_QWORD *)(a1 + 160);
  MiObtainProtoReference(v10, 0LL);
  v12 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v10 + 24), 0x3FuLL) )
  {
    do
    {
      if ( (++v12 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v11) )
      {
        HvlNotifyLongSpinWait(v12);
      }
      else
      {
        _mm_pause();
      }
    }
    while ( *(__int64 *)(v10 + 24) < 0 );
  }
  *(_QWORD *)(v10 + 24) = (*(_QWORD *)(v10 + 24) + a3) ^ (*(_QWORD *)(v10 + 24) ^ (*(_QWORD *)(v10 + 24) + a3)) & 0xC000000000000000uLL;
  _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v13 = *(_QWORD *)(48LL * *(_QWORD *)(a1 + 320) - 0x21FFFFFFFFF8LL) | 0x8000000000000000uLL;
  if ( a4 )
    MiFlowThroughInsertNode(a1, a4);
  v14 = *(_QWORD **)(a1 + 232);
  *(_QWORD *)(a1 + 168) = *v14;
  v15 = MiStartingOffset(v5, v13, a5);
  ExAcquireSpinLockSharedAtDpcLevel((PEX_SPIN_LOCK)(v24 + 72));
  v16 = MiEndingOffset(v5);
  ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(v24 + 72));
  v17 = *(_DWORD *)(a1 + 192);
  if ( (v17 & 0x40000) != 0 )
  {
    v18 = 1;
    *(_DWORD *)(a1 + 192) = v17 & 0xFFFBFFFF;
  }
  else
  {
    v18 = 0;
  }
  if ( (*(_DWORD *)(v24 + 56) & 0x20) != 0 && v15 + v7 > v16 )
    v7 = ((_DWORD)v16 - (_DWORD)v15 + 511) & 0xFFFFFE00;
  if ( (int)PsGetIoPriorityThread(KeGetCurrentThread()) < 2 )
    v20 |= 0x200u;
  *(_DWORD *)(a1 + 192) = v20;
  LOBYTE(v19) = 17;
  *(_QWORD *)(a1 + 272) = 0LL;
  *(_WORD *)(a1 + 280) = 8 * (((unsigned __int64)(v7 + 4095) >> 12) + 6);
  *(_WORD *)(a1 + 282) = 0;
  *(_QWORD *)(a1 + 304) = 0LL;
  *(_DWORD *)(a1 + 316) = 0;
  *(_DWORD *)(a1 + 312) = v7;
  MiUnlockProtoPoolPage(v10, v19);
  v21 = 48LL * *(_QWORD *)(a1 + 8 * ((__int64)((__int64)v14 - v13) >> 3) + 320) - 0x220000000000LL;
  result = *(_WORD *)(a1 + 282) | 0x42;
  *(_WORD *)(a1 + 282) = result;
  v23 = result;
  if ( !v18 )
  {
    result = 0x4000;
    *(_WORD *)(a1 + 282) = v23 | 0x4000;
  }
  *(_QWORD *)(a1 + 96) = v15;
  *(_QWORD *)(a1 + 240) = v13;
  *(_QWORD *)(a1 + 248) = v21;
  *(_QWORD *)(a1 + 200) = 0LL;
  return result;
}
