/*
 * XREFs of MiFinishMdlForMappedFileFault @ 0x14034EE44
 * Callers:
 *     MiResolveMappedFileFault @ 0x1402276BC (MiResolveMappedFileFault.c)
 * Callees:
 *     MiUnlockProtoPoolPage @ 0x1402353A0 (MiUnlockProtoPoolPage.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1402B5440 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     PsGetIoPriorityThread @ 0x1403031B0 (PsGetIoPriorityThread.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x14031F360 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     MiStartingOffset @ 0x1403236B0 (MiStartingOffset.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiReferenceControlAreaPfn @ 0x14033BC94 (MiReferenceControlAreaPfn.c)
 *     MiObtainProtoReference @ 0x14033DEAC (MiObtainProtoReference.c)
 *     MiEndingOffset @ 0x14034EDF8 (MiEndingOffset.c)
 *     MiFlowThroughInsertNode @ 0x1404AA7FC (MiFlowThroughInsertNode.c)
 */

__int16 __fastcall MiFinishMdlForMappedFileFault(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5)
{
  __int64 *v5; // r15
  __int64 v7; // rsi
  ULONG_PTR v10; // rbp
  int v11; // ebx
  unsigned __int64 v12; // r12
  _QWORD *v13; // r13
  unsigned __int64 v14; // r14
  unsigned __int64 v15; // r15
  int v16; // r9d
  char v17; // bl
  __int64 v18; // r8
  unsigned __int64 v19; // r9
  __int64 v20; // rdx
  __int16 result; // ax
  __int16 v22; // cx
  __int64 v23; // [rsp+60h] [rbp+8h]

  v5 = *(__int64 **)(a1 + 208);
  v7 = *(unsigned int *)(a1 + 184);
  v23 = *v5;
  MiReferenceControlAreaPfn(*v5, (__int64)v5, a3);
  v10 = *(_QWORD *)(a1 + 160);
  MiObtainProtoReference(v10, 0);
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
  *(_QWORD *)(v10 + 24) = (*(_QWORD *)(v10 + 24) + a3) ^ (*(_QWORD *)(v10 + 24) ^ (*(_QWORD *)(v10 + 24) + a3)) & 0xC000000000000000uLL;
  _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v12 = *(_QWORD *)(48LL * *(_QWORD *)(a1 + 320) - 0x21FFFFFFFFF8LL) | 0x8000000000000000uLL;
  if ( a4 )
    MiFlowThroughInsertNode(a1, a4);
  v13 = *(_QWORD **)(a1 + 232);
  *(_QWORD *)(a1 + 168) = *v13;
  v14 = MiStartingOffset((__int64)v5, v12, a5);
  ExAcquireSpinLockSharedAtDpcLevel((PEX_SPIN_LOCK)(v23 + 72));
  v15 = MiEndingOffset(v5);
  ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(v23 + 72));
  v16 = *(_DWORD *)(a1 + 192);
  if ( (v16 & 0x40000) != 0 )
  {
    v17 = 1;
    *(_DWORD *)(a1 + 192) = v16 & 0xFFFBFFFF;
  }
  else
  {
    v17 = 0;
  }
  if ( (*(_DWORD *)(v23 + 56) & 0x20) != 0 && v14 + v7 > v15 )
    v7 = ((_DWORD)v15 - (_DWORD)v14 + 511) & 0xFFFFFE00;
  if ( (int)PsGetIoPriorityThread((__int64)KeGetCurrentThread()) < 2 )
    LODWORD(v19) = v19 | 0x200;
  *(_DWORD *)(a1 + 192) = v19;
  *(_QWORD *)(a1 + 272) = 0LL;
  *(_WORD *)(a1 + 280) = 8 * (((unsigned __int64)(v7 + 4095) >> 12) + 6);
  *(_WORD *)(a1 + 282) = 0;
  *(_QWORD *)(a1 + 304) = 0LL;
  *(_DWORD *)(a1 + 316) = 0;
  *(_DWORD *)(a1 + 312) = v7;
  MiUnlockProtoPoolPage(v10, 0x11u, v18, v19);
  v20 = 48LL * *(_QWORD *)(a1 + 8 * ((__int64)((__int64)v13 - v12) >> 3) + 320) - 0x220000000000LL;
  result = *(_WORD *)(a1 + 282) | 0x42;
  *(_WORD *)(a1 + 282) = result;
  v22 = result;
  if ( !v17 )
  {
    result = 0x4000;
    *(_WORD *)(a1 + 282) = v22 | 0x4000;
  }
  *(_QWORD *)(a1 + 96) = v14;
  *(_QWORD *)(a1 + 240) = v12;
  *(_QWORD *)(a1 + 248) = v20;
  *(_QWORD *)(a1 + 200) = 0LL;
  return result;
}
