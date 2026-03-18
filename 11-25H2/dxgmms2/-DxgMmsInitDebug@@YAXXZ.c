/*
 * XREFs of ?DxgMmsInitDebug@@YAXXZ @ 0x140091F50
 * Callers:
 *     DriverEntry @ 0x140119078 (DriverEntry.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 */

void DxgMmsInitDebug(void)
{
  __int64 Pool2; // rax
  struct _KBUGCHECK_REASON_CALLBACK_RECORD *v1; // rdi
  struct _KTRIAGE_DUMP_DATA_ARRAY *v2; // rbx
  NTSTATUS v3; // eax
  __int64 v4; // rcx
  __int64 v5; // rcx

  Pool2 = ExAllocatePool2(64LL, 704LL, 1265072196LL);
  v1 = (struct _KBUGCHECK_REASON_CALLBACK_RECORD *)Pool2;
  if ( Pool2 )
  {
    v2 = (struct _KTRIAGE_DUMP_DATA_ARRAY *)(Pool2 + 48);
    *(_BYTE *)(Pool2 + 44) = 0;
    v3 = KeInitializeTriageDumpDataArray((PKTRIAGE_DUMP_DATA_ARRAY)(Pool2 + 48), 0x290u);
    if ( v3 < 0 )
    {
      WdLogSingleEntry1(2LL, v3);
      WdLogGlobalForLineNumber = 108;
LABEL_4:
      DxgkLogInternalTriageEvent(v4, 0x40000LL);
      ExFreePoolWithTag(v1, 0x4B677844u);
      return;
    }
    if ( !KeRegisterBugCheckReasonCallback(
            v1,
            (PKBUGCHECK_REASON_CALLBACK_ROUTINE)DxgMmsDbgTriageDumpCallback,
            KbCallbackTriageDumpData,
            (PUCHAR)"DxgKrnlTriageDump") )
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 121;
      goto LABEL_4;
    }
    P = v1;
    qword_140081250 = v2;
  }
  else
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 132;
    DxgkLogInternalTriageEvent(v5, 0x40000LL);
  }
}
