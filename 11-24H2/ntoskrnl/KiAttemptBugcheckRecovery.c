/*
 * XREFs of KiAttemptBugcheckRecovery @ 0x1405C5784
 * Callers:
 *     KeBugCheck2 @ 0x1405B1780 (KeBugCheck2.c)
 * Callees:
 *     DbgPrintEx @ 0x1402CB2F0 (DbgPrintEx.c)
 *     IoRevertFromDemotedDumpType @ 0x140591EE0 (IoRevertFromDemotedDumpType.c)
 *     IoSaveBugCheckRecoveryStatus @ 0x140591FEC (IoSaveBugCheckRecoveryStatus.c)
 *     KiBugCheckDebugBreak @ 0x1405B2D70 (KiBugCheckDebugBreak.c)
 *     KiBugCheckShouldEnterPostBugCheckDebugger @ 0x1405B3050 (KiBugCheckShouldEnterPostBugCheckDebugger.c)
 *     KiInvokeBugCheckEntryCallbacks @ 0x1405B4110 (KiInvokeBugCheckEntryCallbacks.c)
 *     KiYieldWaitForDebugger @ 0x1405B4640 (KiYieldWaitForDebugger.c)
 *     KiCaptureDumpPreRecovery @ 0x1405C5F30 (KiCaptureDumpPreRecovery.c)
 *     KiGetRecoveryInformation @ 0x1405C61F4 (KiGetRecoveryInformation.c)
 *     KiIsRecoveryPossibleOnCurrentStack @ 0x1405C6454 (KiIsRecoveryPossibleOnCurrentStack.c)
 *     KiRecordRecoveryFailure @ 0x1405C6518 (KiRecordRecoveryFailure.c)
 *     KiSaveBugcheckRecoveryProgress @ 0x1405C6550 (KiSaveBugcheckRecoveryProgress.c)
 *     KiScheduleBugcheckRecovery @ 0x1405C6580 (KiScheduleBugcheckRecovery.c)
 *     KiSetBugCheckRecoveryProgressFlag @ 0x1405C66A8 (KiSetBugCheckRecoveryProgressFlag.c)
 *     KiUpdateBugcheckRecoveryProgress @ 0x1405C687C (KiUpdateBugcheckRecoveryProgress.c)
 */

__int64 KiAttemptBugcheckRecovery()
{
  __int64 v0; // rcx
  __int64 v1; // rdi
  int v2; // ebx
  char *v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 result; // rax
  int v10[4]; // [rsp+40h] [rbp-40h] BYREF
  __int64 v11; // [rsp+50h] [rbp-30h] BYREF
  int v12; // [rsp+58h] [rbp-28h]
  _QWORD v13[2]; // [rsp+60h] [rbp-20h] BYREF
  int v14; // [rsp+70h] [rbp-10h]
  char v15; // [rsp+A0h] [rbp+20h] BYREF
  char v16; // [rsp+A8h] [rbp+28h] BYREF

  v16 = 0;
  v15 = 0;
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
  KiInvokeBugCheckEntryCallbacks(8u, 0LL, 0);
  if ( (int)KiSetBugCheckRecoveryProgressFlag(0x8000LL) < 0 )
    goto LABEL_27;
  KiGetRecoveryInformation(&KiBugcheckRecoveryInformation);
  v1 = qword_140F0FB28;
  v2 = dword_140F0FB24;
  v11 = 0LL;
  v12 = 0;
  BYTE4(v11) = KeGetCurrentIrql();
  IoSaveBugCheckRecoveryStatus((int *)&v11);
  v13[0] = 0LL;
  v14 = v2;
  v13[1] = v1;
  if ( (int)KiUpdateBugcheckRecoveryProgress(v13) < 0
    || (int)KiSaveBugcheckRecoveryProgress(192LL) < 0
    || (KiInvokeBugCheckEntryCallbacks(0x3FFu, (__int64)&KiBugcheckRecoveryInformation, 0x4Cu),
        v10[1] = (unsigned __int8)byte_140F0FB07,
        v10[2] = dword_140F0FB48,
        v10[0] = 1,
        IoSaveBugCheckRecoveryStatus(v10),
        (int)KiSaveBugcheckRecoveryProgress(193LL) < 0) )
  {
LABEL_27:
    v0 = 5LL;
    goto LABEL_28;
  }
  if ( !byte_140F0FB07 )
  {
    v0 = 2LL;
    goto LABEL_28;
  }
  word_140E01076 |= 2u;
  _InterlockedOr(&KiBugcheckRecoveryState, 0x20002u);
  v3 = &v16;
  if ( !byte_140F0FB15 )
    v3 = 0LL;
  KiBugcheckRecoveryDumpPolicy = dword_140F0FB48;
  if ( KiBugCheckShouldEnterPostBugCheckDebugger(dword_140F0FB24, (__int64)v3) )
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
      dword_140F0FB24,
      (const void *)qword_140F0FB28,
      (const void *)qword_140F0FB30,
      (const void *)qword_140F0FB38,
      (const void *)qword_140F0FB40);
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
  if ( (int)KiCaptureDumpPreRecovery(v4, &v15) < 0 )
    KiBugcheckRecoveryDumpPolicy |= 0x10u;
  if ( (int)KiSaveBugcheckRecoveryProgress(194LL) < 0
    || (_InterlockedOr(&KiBugcheckRecoveryState, 0x40004u),
        KiScheduleBugcheckRecovery(),
        _InterlockedAnd(&KiBugcheckRecoveryState, 0xFFFFFFFB),
        (int)KiSaveBugcheckRecoveryProgress(195LL) < 0) )
  {
    KiRecordRecoveryFailure(5LL);
  }
  if ( v15 )
    IoRevertFromDemotedDumpType(v6, v5, v7, v8);
LABEL_29:
  IoPreparedTriageDumpData = 0LL;
  qword_140F21D88 = (__int64)&KeBugCheckTriageDumpDataArrayListHead;
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
