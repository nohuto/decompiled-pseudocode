/*
 * XREFs of RtlpHpVsContextCleanup @ 0x18004F098
 * Callers:
 *     RtlpHpHeapDestroy @ 0x180090050 (RtlpHpHeapDestroy.c)
 * Callees:
 *     RtlpHpVsSubsegmentCleanup @ 0x18004F144 (RtlpHpVsSubsegmentCleanup.c)
 *     RtlpHpVsSubsegmentFree @ 0x18004F2C4 (RtlpHpVsSubsegmentFree.c)
 *     RtlpHpVsContextGetSlotInfo @ 0x18011C5C0 (RtlpHpVsContextGetSlotInfo.c)
 *     __security_check_cookie @ 0x1801659C0 (__security_check_cookie.c)
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
