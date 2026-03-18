/*
 * XREFs of ?DxgDbgInit@@YAXXZ @ 0x1403F9C24
 * Callers:
 *     DriverEntry @ 0x140433078 (DriverEntry.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 */

void DxgDbgInit(void)
{
  __int64 v0; // r9
  __int64 Pool2; // rax
  void *v2; // rdi
  NTSTATUS v3; // eax
  __int64 v4; // rbx

  if ( byte_14015DBED )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 395;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"_DxgBugcheckCallbackRegisterSuccess == FALSE",
      395LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( byte_14015DBEC )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 396;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"_DxgTriageCallbackRegisterSuccess == FALSE",
      396LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  CallbackRecord.State = 0;
  xmmword_14015DBF0 = WdDxgkSecondaryDataGUID;
  strcpy((char *)&Component, "\\Device\\DxgKrnl");
  byte_14015DBED = KeRegisterBugCheckReasonCallback(
                     &CallbackRecord,
                     (PKBUGCHECK_REASON_CALLBACK_ROUTINE)DxgDbgBugcheckCallback,
                     KbCallbackSecondaryDumpData,
                     &Component);
  if ( !byte_14015DBED )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 413;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"_DxgBugcheckCallbackRegisterSuccess",
      413LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  Pool2 = ExAllocatePool2(64LL, 768LL, 1265072196LL, v0);
  v2 = (void *)Pool2;
  if ( Pool2 )
  {
    P = (PKBUGCHECK_REASON_CALLBACK_RECORD)Pool2;
    KtriageDumpDataArray = (PKTRIAGE_DUMP_DATA_ARRAY)(Pool2 + 48);
    *(_BYTE *)(Pool2 + 44) = 0;
    v3 = KeInitializeTriageDumpDataArray((PKTRIAGE_DUMP_DATA_ARRAY)(Pool2 + 48), 0x2D0u);
    if ( v3 >= 0 )
    {
      byte_14015DBEC = KeRegisterBugCheckReasonCallback(
                         P,
                         (PKBUGCHECK_REASON_CALLBACK_ROUTINE)DxgDbgTriageDumpCallback,
                         KbCallbackTriageDumpData,
                         (PUCHAR)"DxgKrnlTriageDump");
      if ( byte_14015DBEC )
        return;
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 453;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"Failed to register Triage Dump Callback",
        453LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    else
    {
      v4 = v3;
      WdLogSingleEntry1(2LL, v3);
      WdLogGlobalForLineNumber = 437;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"Failed to initialize Triage Dump Data Array with status = 0x%I64x",
        v4,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    ExFreePoolWithTag(v2, 0x4B677844u);
    KtriageDumpDataArray = 0LL;
    P = 0LL;
  }
  else
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 462;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Failed to allocate buffer for Triage Dump Callback",
      462LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
}
