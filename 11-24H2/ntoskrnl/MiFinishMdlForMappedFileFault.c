/*
 * XREFs of MiFinishMdlForMappedFileFault @ 0x1403F1ED8
 * Callers:
 *     MiResolveMappedFileFault @ 0x140214824 (MiResolveMappedFileFault.c)
 * Callees:
 *     MiStartingOffset @ 0x14020C7B0 (MiStartingOffset.c)
 *     PsGetIoPriorityThread @ 0x14022BEB0 (PsGetIoPriorityThread.c)
 *     MiUnlockProtoPoolPage @ 0x14029C7F0 (MiUnlockProtoPoolPage.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x140339480 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140339FE0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     MiObtainProtoReference @ 0x14034594C (MiObtainProtoReference.c)
 *     MiReferenceControlAreaPfn @ 0x140347F04 (MiReferenceControlAreaPfn.c)
 *     MiFlowThroughInsertNode @ 0x1403F01B0 (MiFlowThroughInsertNode.c)
 *     MiEndingOffset @ 0x1403F2438 (MiEndingOffset.c)
 */

__int16 __fastcall MiFinishMdlForMappedFileFault(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4, unsigned int a5)
{
  __int64 *v5; // r15
  __int64 v7; // rsi
  __int64 v10; // rbp
  unsigned int v11; // ebx
  unsigned __int64 v12; // r12
  _QWORD *v13; // r13
  unsigned __int64 v14; // r14
  unsigned __int64 v15; // r15
  int v16; // r9d
  char v17; // bl
  unsigned __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rdx
  __int16 result; // ax
  __int16 v23; // cx
  __int64 v24; // [rsp+60h] [rbp+8h]

  v5 = *(__int64 **)(a1 + 208);
  v7 = *(unsigned int *)(a1 + 184);
  v24 = *v5;
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
        HvlNotifyLongSpinWait(v11);
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
  v14 = MiStartingOffset(v5, v12, a5);
  ExAcquireSpinLockSharedAtDpcLevel((PEX_SPIN_LOCK)(v24 + 72));
  v15 = MiEndingOffset(v5);
  ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(v24 + 72));
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
  if ( (*(_DWORD *)(v24 + 56) & 0x20) != 0 && v14 + v7 > v15 )
    v7 = ((_DWORD)v15 - (_DWORD)v14 + 511) & 0xFFFFFE00;
  if ( (int)PsGetIoPriorityThread((__int64)KeGetCurrentThread()) < 2 )
    LODWORD(v20) = v20 | 0x200;
  *(_DWORD *)(a1 + 192) = v20;
  LOBYTE(v18) = 17;
  *(_QWORD *)(a1 + 272) = 0LL;
  *(_WORD *)(a1 + 280) = 8 * (((unsigned __int64)(v7 + 4095) >> 12) + 6);
  *(_WORD *)(a1 + 282) = 0;
  *(_QWORD *)(a1 + 304) = 0LL;
  *(_DWORD *)(a1 + 316) = 0;
  *(_DWORD *)(a1 + 312) = v7;
  MiUnlockProtoPoolPage(v10, v18, v19, v20);
  v21 = 48LL * *(_QWORD *)(a1 + 8 * ((__int64)((__int64)v13 - v12) >> 3) + 320) - 0x220000000000LL;
  result = *(_WORD *)(a1 + 282) | 0x42;
  *(_WORD *)(a1 + 282) = result;
  v23 = result;
  if ( !v17 )
  {
    result = 0x4000;
    *(_WORD *)(a1 + 282) = v23 | 0x4000;
  }
  *(_QWORD *)(a1 + 96) = v14;
  *(_QWORD *)(a1 + 240) = v12;
  *(_QWORD *)(a1 + 248) = v21;
  *(_QWORD *)(a1 + 200) = 0LL;
  return result;
}
