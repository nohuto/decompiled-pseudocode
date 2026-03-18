/*
 * XREFs of ?DxgDbgInit@@YAXXZ @ 0x1403F3A04
 * Callers:
 *     DriverEntry @ 0x140435078 (DriverEntry.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 */

void DxgDbgInit(void)
{
  __int64 Pool2; // rax
  void *v1; // rdi
  NTSTATUS v2; // eax
  __int64 v3; // rbx

  if ( byte_140160BD1 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 395;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"_DxgBugcheckCallbackRegisterSuccess == FALSE",
      395LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( byte_140160BD0 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 396;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"_DxgTriageCallbackRegisterSuccess == FALSE",
      396LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  CallbackRecord.State = 0;
  xmmword_140160BD8 = WdDxgkSecondaryDataGUID;
  strcpy((char *)&Component, "\\Device\\DxgKrnl");
  byte_140160BD1 = KeRegisterBugCheckReasonCallback(
                     &CallbackRecord,
                     (PKBUGCHECK_REASON_CALLBACK_ROUTINE)DxgDbgBugcheckCallback,
                     KbCallbackSecondaryDumpData,
                     &Component);
  if ( !byte_140160BD1 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 413;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"_DxgBugcheckCallbackRegisterSuccess",
      413LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  Pool2 = ExAllocatePool2(64LL, 768LL, 1265072196LL);
  v1 = (void *)Pool2;
  if ( Pool2 )
  {
    P = (PKBUGCHECK_REASON_CALLBACK_RECORD)Pool2;
    KtriageDumpDataArray = (PKTRIAGE_DUMP_DATA_ARRAY)(Pool2 + 48);
    *(_BYTE *)(Pool2 + 44) = 0;
    v2 = KeInitializeTriageDumpDataArray((PKTRIAGE_DUMP_DATA_ARRAY)(Pool2 + 48), 0x2D0u);
    if ( v2 >= 0 )
    {
      byte_140160BD0 = KeRegisterBugCheckReasonCallback(
                         P,
                         (PKBUGCHECK_REASON_CALLBACK_ROUTINE)DxgDbgTriageDumpCallback,
                         KbCallbackTriageDumpData,
                         (PUCHAR)"DxgKrnlTriageDump");
      if ( byte_140160BD0 )
        return;
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 453;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
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
      v3 = v2;
      WdLogSingleEntry1(2LL, v2);
      WdLogGlobalForLineNumber = 437;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"Failed to initialize Triage Dump Data Array with status = 0x%I64x",
        v3,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    ExFreePoolWithTag(v1, 0x4B677844u);
    KtriageDumpDataArray = 0LL;
    P = 0LL;
  }
  else
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 462;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Failed to allocate buffer for Triage Dump Callback",
      462LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
}
