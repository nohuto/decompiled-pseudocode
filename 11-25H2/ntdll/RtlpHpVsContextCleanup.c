/*
 * XREFs of RtlpHpVsContextCleanup @ 0x18000ACD8
 * Callers:
 *     RtlpHpHeapDestroy @ 0x1800B93D0 (RtlpHpHeapDestroy.c)
 * Callees:
 *     RtlpHpVsSubsegmentCleanup @ 0x18000AD84 (RtlpHpVsSubsegmentCleanup.c)
 *     RtlpHpVsSubsegmentFree @ 0x18000AF04 (RtlpHpVsSubsegmentFree.c)
 *     RtlpHpVsContextGetSlotInfo @ 0x18011DE58 (RtlpHpVsContextGetSlotInfo.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 */

void __fastcall RtlpHpVsContextCleanup(_WORD *a1)
{
  unsigned int SlotInfo; // eax
  unsigned __int16 *v3; // rdi
  __int64 v4; // rsi
  unsigned __int64 v5; // r14
  _BYTE v6[256]; // [rsp+20h] [rbp-128h] BYREF

  if ( *a1 )
  {
    SlotInfo = RtlpHpVsContextGetSlotInfo(a1, v6);
    if ( SlotInfo )
    {
      v3 = (unsigned __int16 *)v6;
      v4 = SlotInfo;
      do
      {
        v5 = (unsigned __int64)&a1[32 * (unsigned __int64)*v3 + 16];
        while ( *(_QWORD *)v5 )
        {
          RtlpHpVsSubsegmentCleanup(a1, v5 ^ *(_QWORD *)v5);
          RtlpHpVsSubsegmentFree(a1);
        }
        v3 += 2;
        --v4;
      }
      while ( v4 );
    }
  }
}
