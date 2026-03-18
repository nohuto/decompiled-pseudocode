/*
 * XREFs of RtlpHpExtrasSetPresent @ 0x140604A24
 * Callers:
 *     RtlpHpExtrasAppend @ 0x1404D19E8 (RtlpHpExtrasAppend.c)
 * Callees:
 *     RtlCSparseBitmapBitmaskRead @ 0x1402B381C (RtlCSparseBitmapBitmaskRead.c)
 *     RtlpHpLargeAllocGetMetadata @ 0x140420DAC (RtlpHpLargeAllocGetMetadata.c)
 *     RtlpHpLargeLockReleaseShared @ 0x1404FA96C (RtlpHpLargeLockReleaseShared.c)
 *     RtlpHpLargeLockAcquireShared @ 0x1404FAB0C (RtlpHpLargeLockAcquireShared.c)
 *     RtlpHpSegSetExtraPresent @ 0x140606158 (RtlpHpSegSetExtraPresent.c)
 */

void __fastcall RtlpHpExtrasSetPresent(__int64 a1, unsigned __int64 a2)
{
  int v2; // ebx
  __int64 v5; // rax
  unsigned __int64 Metadata; // rbx
  KIRQL v7; // r9

  v2 = 0;
  if ( (_WORD)a2
    || (v5 = RtlCSparseBitmapBitmaskRead((__int64)&dword_140E68310, 2 * ((a2 - qword_140E68308) >> 20))) != 0
    && (v2 = v5 - 1, (_DWORD)v5 != 3) )
  {
    RtlpHpSegSetExtraPresent(a1 + 192LL * v2 + 320, a2);
  }
  else
  {
    RtlpHpLargeLockAcquireShared(a1);
    Metadata = RtlpHpLargeAllocGetMetadata(a1, a2);
    RtlpHpLargeLockReleaseShared(a1, v7);
    *(_QWORD *)(Metadata + 32) |= 1uLL;
  }
}
