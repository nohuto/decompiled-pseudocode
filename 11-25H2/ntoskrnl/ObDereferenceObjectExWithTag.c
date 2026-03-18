/*
 * XREFs of ObDereferenceObjectExWithTag @ 0x1404381A0
 * Callers:
 *     IopfCompleteRequest @ 0x140251740 (IopfCompleteRequest.c)
 *     IopDropIrp @ 0x140283AE0 (IopDropIrp.c)
 *     IopInsertIrpInCompletionQueue @ 0x140283BF0 (IopInsertIrpInCompletionQueue.c)
 *     ExTimerRundown @ 0x1404380AC (ExTimerRundown.c)
 *     ObpCreateHandle @ 0x1408518D0 (ObpCreateHandle.c)
 *     MiCreateImageOrDataSection @ 0x14093D200 (MiCreateImageOrDataSection.c)
 * Callees:
 *     ObpPushStackInfo @ 0x14029C310 (ObpPushStackInfo.c)
 *     ObpDeferObjectDeletion @ 0x14036FDD8 (ObpDeferObjectDeletion.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 */

__int64 __fastcall ObDereferenceObjectExWithTag(ULONG_PTR BugCheckParameter2, signed int a2, unsigned int a3)
{
  __int64 v4; // rsi
  signed __int64 BugCheckParameter4; // rbx

  v4 = a2;
  if ( ObpTraceFlags )
    ObpPushStackInfo(BugCheckParameter2 - 48, 0, a2, a3);
  BugCheckParameter4 = _InterlockedExchangeAdd64((volatile signed __int64 *)(BugCheckParameter2 - 48), -(int)v4) - v4;
  if ( BugCheckParameter4 <= 0 )
  {
    if ( *(_QWORD *)(BugCheckParameter2 - 40) )
      KeBugCheckEx(
        0x18u,
        ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(BugCheckParameter2 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(BugCheckParameter2 - 48) >> 8)],
        BugCheckParameter2,
        6uLL,
        *(_QWORD *)(BugCheckParameter2 - 40));
    if ( BugCheckParameter4 < 0 )
      KeBugCheckEx(0x18u, 0LL, BugCheckParameter2, 5uLL, BugCheckParameter4);
    ObpDeferObjectDeletion(BugCheckParameter2 - 48);
  }
  return BugCheckParameter4;
}
