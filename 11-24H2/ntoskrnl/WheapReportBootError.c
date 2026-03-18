/*
 * XREFs of WheapReportBootError @ 0x14065BA34
 * Callers:
 *     WheapCheckForAndReportErrorsFromPreviousSession @ 0x14065B774 (WheapCheckForAndReportErrorsFromPreviousSession.c)
 * Callees:
 *     WheapAllocErrorRecord @ 0x14042E704 (WheapAllocErrorRecord.c)
 *     WheapGetErrorSource @ 0x14042E7A8 (WheapGetErrorSource.c)
 *     WheapCallErrorSourceCreateRecord @ 0x14042E7F8 (WheapCallErrorSourceCreateRecord.c)
 *     WheapWorkQueueAddItem @ 0x14042EB2C (WheapWorkQueueAddItem.c)
 */

char __fastcall WheapReportBootError(__int64 a1)
{
  _QWORD *WheaInfo; // rdi
  __int64 *ErrorSource; // rax
  int *v4; // rbx
  __int64 v5; // rax
  struct _LIST_ENTRY *v6; // rbp
  int v8; // [rsp+38h] [rbp+10h] BYREF

  WheaInfo = KeGetPcr()->Prcb.WheaInfo;
  if ( !WheaInfo )
    return 0;
  ErrorSource = WheapGetErrorSource(WheaInfo[1], *(_DWORD *)(a1 + 24));
  v4 = (int *)ErrorSource;
  if ( !ErrorSource )
    return 0;
  _InterlockedIncrement((volatile signed __int32 *)ErrorSource + 6);
  v8 = 0;
  v5 = WheapAllocErrorRecord((__int64)ErrorSource, &v8);
  v6 = (struct _LIST_ENTRY *)v5;
  if ( !v5 )
    return 0;
  WheapCallErrorSourceCreateRecord(v4, a1, v8 - 40, v5 + 40);
  WheapWorkQueueAddItem(WheaInfo[2], v6);
  return 1;
}
