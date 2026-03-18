/*
 * XREFs of KiUnparkCurrentProcessor @ 0x1403E0888
 * Callers:
 *     KeTransitionProcessorParkState @ 0x1403DFF18 (KeTransitionProcessorParkState.c)
 * Callees:
 *     KiReleasePrcbLocksForIsolationUnit @ 0x1402780C0 (KiReleasePrcbLocksForIsolationUnit.c)
 *     KiAdjustReadyQueueScanOwnerOnParkingChange @ 0x140313D98 (KiAdjustReadyQueueScanOwnerOnParkingChange.c)
 *     KiUpdateThreadPriority @ 0x1403170A0 (KiUpdateThreadPriority.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14031F890 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiSendHeteroRescheduleIntRequest @ 0x140330C10 (KiSendHeteroRescheduleIntRequest.c)
 *     KeYieldProcessorEx @ 0x1403F49C0 (KeYieldProcessorEx.c)
 *     Feature_LockFreeIdleMasks__private_IsEnabledNoReportingNoInline @ 0x1404F0A14 (Feature_LockFreeIdleMasks__private_IsEnabledNoReportingNoInline.c)
 *     EtwTraceParkTransition @ 0x140641C78 (EtwTraceParkTransition.c)
 */

__int64 __fastcall KiUnparkCurrentProcessor(__int64 a1, __int64 a2, __int64 *a3, unsigned int a4, unsigned int a5)
{
  bool v9; // r14
  unsigned __int64 v10; // rbp
  __int64 v11; // rdx
  __int64 v12; // rdx
  char v13; // bl
  char v14; // bl
  char v15; // bl
  __int64 result; // rax
  int v17; // [rsp+78h] [rbp+20h] BYREF

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
    {
      if ( (unsigned int)Feature_LockFreeIdleMasks__private_IsEnabledNoReportingNoInline() )
      {
        _InterlockedOr64((volatile signed __int64 *)(a2 + 8), v10);
      }
      else
      {
        v17 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)a2, 0LL) )
        {
          do
            KeYieldProcessorEx(&v17);
          while ( *(_QWORD *)a2 );
        }
        *(_QWORD *)(a2 + 8) ^= v10;
        _InterlockedAnd64((volatile signed __int64 *)a2, 0LL);
      }
    }
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
  if ( v15 && !KeHeteroSystemVirtual && KeHeteroSystem )
    result = KiSendHeteroRescheduleIntRequest((_QWORD *)a1);
  if ( (WORD2(xmmword_140FC5B10) & 0x2000) != 0 )
    return EtwTraceParkTransition(a1, a5, a4);
  return result;
}
