/*
 * XREFs of ?QueuePlaneViolationWorkItem@@YAXIIPEBU_MOCKDRIVERSTATE_VALIDATE_PLANE@@PEAVDXGADAPTER@@PEAU_MOCKDRIVERSTATE_PLANE@@@Z @ 0x140075C54
 * Callers:
 *     ?ValidatePlaneHelper@MOCKDRIVERSTATE@@AEAAXPEBU_MOCKDRIVERSTATE_VALIDATE_PLANE@@@Z @ 0x14007608C (-ValidatePlaneHelper@MOCKDRIVERSTATE@@AEAAXPEBU_MOCKDRIVERSTATE_VALIDATE_PLANE@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 */

void __fastcall QueuePlaneViolationWorkItem(
        unsigned int a1,
        unsigned int a2,
        const struct _MOCKDRIVERSTATE_VALIDATE_PLANE *a3,
        struct DXGADAPTER *a4,
        struct _MOCKDRIVERSTATE_PLANE *a5)
{
  __int64 v6; // rsi
  __int64 v8; // rdi

  v6 = a2;
  v8 = a1;
  WdLogSingleEntry2(2LL, a1, a2);
  WdLogGlobalForLineNumber = 19;
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    0xFFFFFFFFLL,
    L"Destroying kernel plane state without explicitly asking driver to disable plane on source0x%I64x, plane:0x%I64x",
    v8,
    v6,
    0LL,
    0LL,
    0LL);
  *((_DWORD *)a5 + 654) = *((_DWORD *)a3 + 10);
  *((_DWORD *)a5 + 655) = v6;
  *((_BYTE *)a5 + 8) = 1;
  *((_QWORD *)a5 + 328) = *((_QWORD *)a3 + 6);
  _InterlockedIncrement64((volatile signed __int64 *)a4 + 3);
  *((_QWORD *)a5 + 2) = -1LL;
  RtlCaptureStackBackTrace(2u, 0xCu, (PVOID *)a5 + 329, 0LL);
  ExQueueWorkItem((PWORK_QUEUE_ITEM)((char *)a5 + 24), DelayedWorkQueue);
}
