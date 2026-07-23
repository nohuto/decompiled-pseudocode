/*
 * XREFs of KiAttemptBugcheckRecovery @ 0x1405C2EB4
 * Callers:
 *     KeBugCheck2 @ 0x1405AE6F0 (KeBugCheck2.c)
 * Callees:
 *     DbgPrintEx @ 0x140275B40 (DbgPrintEx.c)
 *     IoRevertFromDemotedDumpType @ 0x14058EF04 (IoRevertFromDemotedDumpType.c)
 *     IoSaveBugCheckRecoveryStatus @ 0x14058F00C (IoSaveBugCheckRecoveryStatus.c)
 *     KiBugCheckDebugBreak @ 0x1405AFCE0 (KiBugCheckDebugBreak.c)
 *     KiBugCheckShouldEnterPostBugCheckDebugger @ 0x1405AFFC0 (KiBugCheckShouldEnterPostBugCheckDebugger.c)
 *     KiInvokeBugCheckEntryCallbacks @ 0x1405B1088 (KiInvokeBugCheckEntryCallbacks.c)
 *     KiYieldWaitForDebugger @ 0x1405B15C4 (KiYieldWaitForDebugger.c)
 *     KiCaptureDumpPreRecovery @ 0x1405C3660 (KiCaptureDumpPreRecovery.c)
 *     KiGetRecoveryInformation @ 0x1405C3924 (KiGetRecoveryInformation.c)
 *     KiIsRecoveryPossibleOnCurrentStack @ 0x1405C3B84 (KiIsRecoveryPossibleOnCurrentStack.c)
 *     KiRecordRecoveryFailure @ 0x1405C3C48 (KiRecordRecoveryFailure.c)
 *     KiSaveBugcheckRecoveryProgress @ 0x1405C3C80 (KiSaveBugcheckRecoveryProgress.c)
 *     KiScheduleBugcheckRecovery @ 0x1405C3CB0 (KiScheduleBugcheckRecovery.c)
 *     KiSetBugCheckRecoveryProgressFlag @ 0x1405C3DD8 (KiSetBugCheckRecoveryProgressFlag.c)
 *     KiUpdateBugcheckRecoveryProgress @ 0x1405C3FAC (KiUpdateBugcheckRecoveryProgress.c)
 */

__int64 KiAttemptBugcheckRecovery()
{
  __int64 v0; // rcx
  __int64 v1; // rdi
  int v2; // ebx
  char *v3; // rdx
  __int64 v4; // rcx
  __int64 result; // rax
  int v6[4]; // [rsp+40h] [rbp-40h] BYREF
  __int64 v7; // [rsp+50h] [rbp-30h] BYREF
  int v8; // [rsp+58h] [rbp-28h]
  _QWORD v9[2]; // [rsp+60h] [rbp-20h] BYREF
  int v10; // [rsp+70h] [rbp-10h]
  char v11; // [rsp+A0h] [rbp+20h] BYREF
  char v12; // [rsp+A8h] [rbp+28h] BYREF

  v12 = 0;
  v11 = 0;
  if ( (KiBugcheckRecoveryState & 2) != 0 || KiRecoveryCallbackCount <= 0 )
    goto LABEL_29;
  if ( KiBugcheckOwnerKeepsOthersFrozen )
    __fastfail(5u);
  if ( !(unsigned __int8)KiIsRecoveryPossibleOnCurrentStack() )
  {
    v0 = 1LL;
LABEL_28:
    KiRecordRecoveryFailure(v0);
    goto LABEL_29;
  }
  _m_prefetchw(&KiBugcheckRecoveryState);
  if ( (_InterlockedOr(&KiBugcheckRecoveryState, 0x10001u) & 0x10) != 0 )
    goto LABEL_29;
  KiInvokeBugCheckEntryCallbacks(8u);
  if ( (int)KiSetBugCheckRecoveryProgressFlag(0x8000LL) < 0 )
    goto LABEL_27;
  KiGetRecoveryInformation(&KiBugcheckRecoveryInformation);
  v1 = qword_140F0FDC8;
  v2 = dword_140F0FDC4;
  v7 = 0LL;
  v8 = 0;
  BYTE4(v7) = KeGetCurrentIrql();
  IoSaveBugCheckRecoveryStatus((int *)&v7);
  v9[0] = 0LL;
  v10 = v2;
  v9[1] = v1;
  if ( (int)KiUpdateBugcheckRecoveryProgress(v9) < 0
    || (int)KiSaveBugcheckRecoveryProgress(192LL) < 0
    || (KiInvokeBugCheckEntryCallbacks(0x3FFu),
        v6[1] = (unsigned __int8)byte_140F0FDA7,
        v6[2] = dword_140F0FDE8,
        v6[0] = 1,
        IoSaveBugCheckRecoveryStatus(v6),
        (int)KiSaveBugcheckRecoveryProgress(193LL) < 0) )
  {
LABEL_27:
    v0 = 5LL;
    goto LABEL_28;
  }
  if ( !byte_140F0FDA7 )
  {
    v0 = 2LL;
    goto LABEL_28;
  }
  word_140E01076 |= 2u;
  _InterlockedOr(&KiBugcheckRecoveryState, 0x20002u);
  v3 = &v12;
  if ( !byte_140F0FDB5 )
    v3 = 0LL;
  KiBugcheckRecoveryDumpPolicy = dword_140F0FDE8;
  if ( KiBugCheckShouldEnterPostBugCheckDebugger(dword_140F0FDC4, (__int64)v3) )
  {
    DbgPrintEx(
      0x65u,
      0,
      "\n"
      "*******************************************************************************\n"
      "                           Bugcheck Recovery\n"
      "*******************************************************************************\n");
    DbgPrintEx(
      0x65u,
      0,
      " You are seeing this message because the system has bugchecked and\n is attempting a bugcheck recovery.\n");
    DbgPrintEx(
      0x65u,
      0,
      "\n"
      " System Error Info:\n"
      "     Bugcheck Code: 0x%08lx\n"
      "     Parameter 1: 0x%p\n"
      "     Parameter 2: 0x%p\n"
      "     Parameter 3: 0x%p\n"
      "     Parameter 4: 0x%p\n",
      dword_140F0FDC4,
      (const void *)qword_140F0FDC8,
      (const void *)qword_140F0FDD0,
      (const void *)qword_140F0FDD8,
      (const void *)qword_140F0FDE0);
    DbgPrintEx(
      0x65u,
      0,
      "\n"
      " Bugcheck Recovery Info Location: 0x%p\n"
      "*******************************************************************************\n"
      "\n",
      &KiBugcheckRecoveryInformation);
    if ( (_BYTE)KdDebuggerEnabled )
    {
      if ( !(_BYTE)KdDebuggerNotPresent )
        KiBugCheckDebugBreak(3u);
    }
  }
  if ( (int)KiCaptureDumpPreRecovery(v4, &v11) < 0 )
    KiBugcheckRecoveryDumpPolicy |= 0x10u;
  if ( (int)KiSaveBugcheckRecoveryProgress(194LL) < 0
    || (_InterlockedOr(&KiBugcheckRecoveryState, 0x40004u),
        KiScheduleBugcheckRecovery(),
        _InterlockedAnd(&KiBugcheckRecoveryState, 0xFFFFFFFB),
        (int)KiSaveBugcheckRecoveryProgress(195LL) < 0) )
  {
    KiRecordRecoveryFailure(5LL);
  }
  if ( v11 )
    IoRevertFromDemotedDumpType();
LABEL_29:
  IoPreparedTriageDumpData = 0LL;
  qword_140F22328 = (__int64)&KeBugCheckTriageDumpDataArrayListHead;
  KeBugCheckTriageDumpDataArrayListHead = (__int64)&KeBugCheckTriageDumpDataArrayListHead;
  _m_prefetchw(&KiBugcheckRecoveryState);
  _InterlockedOr(
    &KiBugcheckRecoveryState,
    (_InterlockedAnd(&KiBugcheckRecoveryState, 0xFFFFFFFC) & 2) != 0 ? 0x100000 : 0x80000);
  _m_prefetchw(&KiBugcheckRecoveryState);
  result = (unsigned int)_InterlockedOr(&KiBugcheckRecoveryState, 8u);
  if ( (result & 8) != 0 )
    KiYieldWaitForDebugger();
  return result;
}
