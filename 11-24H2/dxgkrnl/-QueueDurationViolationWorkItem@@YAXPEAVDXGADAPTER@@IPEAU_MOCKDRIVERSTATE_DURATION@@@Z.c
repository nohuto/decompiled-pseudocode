/*
 * XREFs of ?QueueDurationViolationWorkItem@@YAXPEAVDXGADAPTER@@IPEAU_MOCKDRIVERSTATE_DURATION@@@Z @ 0x140076654
 * Callers:
 *     ?SetMockDriverState@MOCKDRIVERSTATE@@QEAAXW4_MOCKDRIVERSTATE_VIOLATION@@PEBX@Z @ 0x1400767F0 (-SetMockDriverState@MOCKDRIVERSTATE@@QEAAXW4_MOCKDRIVERSTATE_VIOLATION@@PEBX@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 */

void __fastcall QueueDurationViolationWorkItem(
        struct DXGADAPTER *a1,
        unsigned int a2,
        struct _MOCKDRIVERSTATE_DURATION *a3)
{
  __int64 v5; // rbx

  v5 = a2;
  WdLogSingleEntry2(2LL, a2, a3);
  WdLogGlobalForLineNumber = 40;
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000LL,
    0xFFFFFFFFLL,
    L"Setting different durations on different planes of VidPnSourceId:0x%I64x. See ?? (dxgkrnl!MOCKDRIVERSTATE_DURATION*)"
     "(0x%I64x) for details",
    v5,
    (__int64)a3,
    0LL,
    0LL,
    0LL);
  *((_BYTE *)a3 + 8) = 1;
  _InterlockedIncrement64((volatile signed __int64 *)a1 + 3);
  *((_QWORD *)a3 + 2) = -1LL;
  ExQueueWorkItem((PWORK_QUEUE_ITEM)((char *)a3 + 24), DelayedWorkQueue);
}
