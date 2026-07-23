/*
 * XREFs of ObDereferenceObjectEx @ 0x1403B47B8
 * Callers:
 *     PspClearProcessThreadCidRefs @ 0x1408FF228 (PspClearProcessThreadCidRefs.c)
 * Callees:
 *     ObpPushStackInfo @ 0x14031FC8C (ObpPushStackInfo.c)
 *     ObpDeferObjectDeletion @ 0x1403B341C (ObpDeferObjectDeletion.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 */

__int64 __fastcall ObDereferenceObjectEx(ULONG_PTR BugCheckParameter2, signed int a2)
{
  signed __int64 v2; // rdi
  __int64 v3; // rsi
  signed __int64 BugCheckParameter4; // rbx

  v2 = BugCheckParameter2 - 48;
  v3 = a2;
  if ( ObpTraceFlags )
    ObpPushStackInfo(BugCheckParameter2 - 48, 0, a2, 0x746C6644u);
  BugCheckParameter4 = _InterlockedExchangeAdd64((volatile signed __int64 *)v2, -(int)v3) - v3;
  if ( BugCheckParameter4 <= 0 )
  {
    if ( *(_QWORD *)(v2 + 8) )
      KeBugCheckEx(
        0x18u,
        ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(v2 + 24) ^ (unsigned __int64)BYTE1(v2)],
        BugCheckParameter2,
        6uLL,
        *(_QWORD *)(v2 + 8));
    if ( BugCheckParameter4 < 0 )
      KeBugCheckEx(0x18u, 0LL, BugCheckParameter2, 5uLL, BugCheckParameter4);
    ObpDeferObjectDeletion(v2);
  }
  return BugCheckParameter4;
}
