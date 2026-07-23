/*
 * XREFs of RtlpHpExtrasSetPresent @ 0x140602064
 * Callers:
 *     RtlpHpExtrasAppend @ 0x1404CAA28 (RtlpHpExtrasAppend.c)
 * Callees:
 *     RtlCSparseBitmapBitmaskRead @ 0x14035C3DC (RtlCSparseBitmapBitmaskRead.c)
 *     RtlpHpLargeAllocGetMetadata @ 0x140459080 (RtlpHpLargeAllocGetMetadata.c)
 *     RtlpHpLargeLockReleaseShared @ 0x1404F824C (RtlpHpLargeLockReleaseShared.c)
 *     RtlpHpLargeLockAcquireShared @ 0x1404F83EC (RtlpHpLargeLockAcquireShared.c)
 *     RtlpHpSegSetExtraPresent @ 0x140603798 (RtlpHpSegSetExtraPresent.c)
 */

void __fastcall RtlpHpExtrasSetPresent(__int64 a1, unsigned __int64 a2)
{
  int v2; // ebx
  __int64 v5; // rax
  unsigned __int64 Metadata; // rbx
  KIRQL v7; // r9

  v2 = 0;
  if ( (_WORD)a2
    || (v5 = RtlCSparseBitmapBitmaskRead((__int64)&dword_140E68510, 2 * ((a2 - qword_140E68508) >> 20))) != 0
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
