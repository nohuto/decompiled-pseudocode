/*
 * XREFs of KiUnparkCurrentProcessor @ 0x1403D7B98
 * Callers:
 *     KeTransitionProcessorParkState @ 0x1403D720C (KeTransitionProcessorParkState.c)
 * Callees:
 *     KiSendHeteroRescheduleIntRequest @ 0x1402A5E60 (KiSendHeteroRescheduleIntRequest.c)
 *     KiUpdateThreadPriority @ 0x1402E0E50 (KiUpdateThreadPriority.c)
 *     KiReleasePrcbLocksForIsolationUnit @ 0x140318810 (KiReleasePrcbLocksForIsolationUnit.c)
 *     KiAdjustReadyQueueScanOwnerOnParkingChange @ 0x14032B704 (KiAdjustReadyQueueScanOwnerOnParkingChange.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140338DA0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     EtwTraceParkTransition @ 0x14064C254 (EtwTraceParkTransition.c)
 */

__int64 __fastcall KiUnparkCurrentProcessor(__int64 a1, __int64 a2, __int64 *a3, unsigned int a4, unsigned int a5)
{
  bool v9; // bp
  unsigned __int64 v10; // r14
  __int64 v11; // rdx
  __int64 v12; // rdx
  char v13; // bl
  char v14; // bl
  char v15; // bl
  __int64 result; // rax

  v9 = a4 == 3 && a5;
  v10 = *(_QWORD *)(a1 + 200);
  if ( !v9 )
    _InterlockedXor64((volatile signed __int64 *)(a2 + 80), v10);
  KiAdjustReadyQueueScanOwnerOnParkingChange(a1, a2, 0LL);
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v11 + 120));
  v13 = *(_BYTE *)(a1 + 35) & 0xDF;
  if ( !v9 )
  {
    v13 = *(_BYTE *)(a1 + 35) & 0xCF;
    if ( (*(_BYTE *)(a1 + 35) & 1) == 0 )
      _InterlockedOr64((volatile signed __int64 *)(a2 + 8), v10);
  }
  *(_BYTE *)(a1 + 35) = v13;
  v14 = v13 & 1;
  if ( !v14 )
    *(_BYTE *)(a1 + 14523) = 1;
  v15 = v14 ^ 1;
  if ( !v9 )
  {
    KiUpdateThreadPriority(a1, v12, *(_QWORD *)(a1 + 24), 0, v15);
    _InterlockedIncrement16((volatile signed __int16 *)(MmWriteableSharedUserData + 874));
  }
  result = KiReleasePrcbLocksForIsolationUnit(a3);
  if ( v15 && KeHeteroSystem && !KeHeteroSystemVirtual )
    result = KiSendHeteroRescheduleIntRequest((_QWORD *)a1);
  if ( (WORD2(xmmword_140FC6B50) & 0x2000) != 0 )
    return EtwTraceParkTransition(a1, a5, a4);
  return result;
}
