/*
 * XREFs of RtlpHpVsContextCleanup @ 0x140604980
 * Callers:
 *     RtlpHpHeapDestroy @ 0x14060271C (RtlpHpHeapDestroy.c)
 * Callees:
 *     RtlpHpVsSubsegmentFree @ 0x14035CC40 (RtlpHpVsSubsegmentFree.c)
 *     RtlpHpVsSubsegmentCleanup @ 0x1403684A4 (RtlpHpVsSubsegmentCleanup.c)
 *     RtlpHpVsContextGetSlotInfo @ 0x140368938 (RtlpHpVsContextGetSlotInfo.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

void __fastcall RtlpHpVsContextCleanup(unsigned __int16 *a1)
{
  unsigned int SlotInfo; // eax
  unsigned __int16 *v3; // rdi
  __int64 v4; // rsi
  unsigned __int64 v5; // r14
  __int64 v6; // rdx
  _WORD v7[128]; // [rsp+20h] [rbp-128h] BYREF

  if ( *a1 )
  {
    SlotInfo = RtlpHpVsContextGetSlotInfo(a1, v7);
    if ( SlotInfo )
    {
      v3 = v7;
      v4 = SlotInfo;
      do
      {
        v5 = (unsigned __int64)&a1[32 * (unsigned __int64)*v3 + 16];
        while ( *(_QWORD *)v5 )
        {
          RtlpHpVsSubsegmentCleanup((__int64)a1, v5 ^ *(_QWORD *)v5);
          RtlpHpVsSubsegmentFree((__int64)a1, v6);
        }
        v3 += 2;
        --v4;
      }
      while ( v4 );
    }
  }
}
